/*
 * XREFs of HalpHandlePreviousMcaErrors @ 0x140BE9B88
 * Callers:
 *     HalpInitializeMce @ 0x140BE9EA4 (HalpInitializeMce.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140BE9CC8 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 *     HalpMceInitializeErrorPacketContents @ 0x140C0AFC4 (HalpMceInitializeErrorPacketContents.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall HalpHandlePreviousMcaErrors(char a1)
{
  __int64 Pool2; // rax
  void *v3; // rsi
  ULONG v4; // edi
  ULONG ActiveProcessorCount; // ebp
  __int64 v6; // r14
  unsigned int v7; // ecx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v9; // rcx
  __int64 i; // rbx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  v3 = (void *)Pool2;
  if ( Pool2 )
  {
    HalpMceInitializeErrorPacketContents(Pool2);
    v4 = 0;
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( ActiveProcessorCount )
    {
      v6 = 0LL;
      do
      {
        *(_DWORD *)Affinity.Reserved = 0;
        Affinity.Reserved[2] = 0;
        v7 = *(_DWORD *)(v6 + *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]);
        *(_DWORD *)&Affinity.Group = (unsigned __int16)(v7 >> 6);
        Affinity.Mask = 1LL << v7;
        if ( v4 )
          p_PreviousAffinity = 0LL;
        else
          p_PreviousAffinity = &PreviousAffinity;
        KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
        for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
        {
          LOBYTE(v9) = a1;
          HalpHandlePreviousMcaErrorsOnProcessor(v9, v3, *(_QWORD *)(i + 172));
        }
        ++v4;
        v6 += 4LL;
      }
      while ( v4 < ActiveProcessorCount );
    }
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    ExFreePoolWithTag(v3, 0x576C6148u);
  }
}
