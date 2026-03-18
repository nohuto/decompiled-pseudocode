/*
 * XREFs of MakeGdtReadOnly @ 0x1405764CC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     KeWriteProtectProcessorState @ 0x140BF4178 (KeWriteProtectProcessorState.c)
 */

void MakeGdtReadOnly()
{
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdi
  __int64 v1; // rbx
  unsigned int v2; // ecx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  p_PreviousAffinity = &PreviousAffinity;
  v1 = 0LL;
  PreviousAffinity = 0LL;
  for ( Affinity = 0LL; (unsigned int)v1 < (unsigned int)KeNumberProcessors_0; v1 = (unsigned int)(v1 + 1) )
  {
    v2 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4 * v1);
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v2 >> 6);
    Affinity.Mask = 1LL << v2;
    KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    p_PreviousAffinity = 0LL;
    KeWriteProtectProcessorState(&KeGetCurrentPrcb()[-1].PrcbPad141[472]);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
