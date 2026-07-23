/*
 * XREFs of ViIsBTSSupported @ 0x140B83A74
 * Callers:
 *     VfBranchTracingPluginEntry @ 0x140B83800 (VfBranchTracingPluginEntry.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     DbgPrint @ 0x1403A9600 (DbgPrint.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 ViIsBTSSupported()
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v1; // rbx
  char v2; // cl
  unsigned __int64 FeatureBits; // rcx
  char CpuType; // al
  __int64 result; // rax
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-30h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0LL;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  while ( (unsigned int)v1 < (unsigned int)KeNumberProcessors_0 )
  {
    *(_DWORD *)Affinity.Reserved = 0;
    Affinity.Reserved[2] = 0;
    v2 = *((_DWORD *)KiGlobalState + v1) & 0x3F;
    Affinity.Group = *((_DWORD *)KiGlobalState + v1) >> 6;
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
