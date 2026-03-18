/*
 * XREFs of ViIsBTSSupported @ 0x140C31F0C
 * Callers:
 *     VfBranchTracingPluginEntry @ 0x140C31C8C (VfBranchTracingPluginEntry.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     DbgPrint @ 0x140396F60 (DbgPrint.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 ViIsBTSSupported()
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v1; // rbx
  unsigned int v2; // ecx
  unsigned __int64 FeatureBits; // rcx
  char CpuType; // al
  __int64 result; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0LL;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  while ( (unsigned int)v1 < (unsigned int)KeNumberProcessors_0 )
  {
    v2 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4 * v1);
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v2 >> 6);
    Affinity.Mask = 1LL << v2;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    FeatureBits = KeGetCurrentPrcb()->FeatureBits;
    if ( KeGetCurrentPrcb()->CpuVendor != 2 || (CpuType = CurrentPrcb->CpuType, CpuType != 15) && CpuType != 6 )
    {
      DbgPrint("This is a non-BTS processor - no branch tracing will occur.\n");
LABEL_10:
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      return 0LL;
    }
    if ( (FeatureBits & 0x200) == 0 || (__readmsr(0x1A0u) & 0x800) != 0 )
      goto LABEL_10;
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    v1 = (unsigned int)(v1 + 1);
  }
  result = 1LL;
  VfBTSProcessorFamily = CurrentPrcb->CpuType;
  VfBTSSupported = 1;
  return result;
}
