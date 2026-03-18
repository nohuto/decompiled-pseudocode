/*
 * XREFs of HalpMceInit @ 0x140C0A118
 * Callers:
 *     HalpInitializeMce @ 0x140BE9EA4 (HalpInitializeMce.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     HalpHvInitMcaPcrContext @ 0x14050944C (HalpHvInitMcaPcrContext.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x140584FB0 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x140585DB8 (HalpHvSetMachineCheckHandlerState.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     HalpMceInitProcessor @ 0x140C0A268 (HalpMceInitProcessor.c)
 */

void __fastcall HalpMceInit(_BYTE *Src)
{
  ULONG v2; // edi
  ULONG ActiveProcessorCount; // ebp
  __int64 v4; // rsi
  unsigned int v5; // ecx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 i; // rbx
  __int64 v8; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (HalpFeatureBits & 4) == 0 || !Src[42] )
    HalpMcaEnabled = 0;
  if ( !HalpMcaEnabled && (HalpFeatureBits & 8) == 0 )
    HalpMceEnabled = 0;
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
      HalpHvInitMcaPcrContext();
      for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
        HalpMceInitProcessor(Src);
      ++v2;
      v4 += 4LL;
    }
    while ( v2 < ActiveProcessorCount );
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    if ( HalpMceEnabled )
    {
      HalpHvInitMcaStatusMsrCache(v8);
      HalpHvSetMachineCheckHandlerState();
    }
  }
}
