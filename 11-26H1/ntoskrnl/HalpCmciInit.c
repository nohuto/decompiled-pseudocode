/*
 * XREFs of HalpCmciInit @ 0x140C08ECC
 * Callers:
 *     HalpCmcWorkerRoutine @ 0x140AD4340 (HalpCmcWorkerRoutine.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     HalpCmciInitProcessor @ 0x140453268 (HalpCmciInitProcessor.c)
 *     HalpCmciInitializeErrorPacket @ 0x140454B28 (HalpCmciInitializeErrorPacket.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x140514394 (HalpCmciLoadThresholdConfiguration.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void HalpCmciInit()
{
  PVOID v0; // r12
  LARGE_INTEGER PerformanceCounter; // rdi
  ULONG v2; // ebp
  ULONG ActiveProcessorCount; // r15d
  __int64 v4; // r14
  unsigned int v5; // ecx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 i; // rsi
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  v0 = HalpCmcErrorSource;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  HalpCmciLoadThresholdConfiguration();
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v4 = 0LL;
    do
    {
      *(_DWORD *)Affinity.Reserved = 0;
      Affinity.Reserved[2] = 0;
      v5 = *(_DWORD *)(v4 + *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]);
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v5 >> 6);
      Affinity.Mask = 1LL << v5;
      if ( v2 )
        p_PreviousAffinity = 0LL;
      else
        p_PreviousAffinity = &PreviousAffinity;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
      {
        v8 = *(_QWORD *)(i + 172);
        *(LARGE_INTEGER *)(i + 112) = PerformanceCounter;
        HalpCmciInitializeErrorPacket((__int64)v0, v8);
        HalpCmciInitProcessor((__int64)v0, v8, v9, v10);
      }
      ++v2;
      v4 += 4LL;
    }
    while ( v2 < ActiveProcessorCount );
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
