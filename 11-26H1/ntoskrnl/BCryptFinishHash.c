/*
 * XREFs of BCryptFinishHash @ 0x1409EAB14
 * Callers:
 *     sub_1409EB84C @ 0x1409EB84C (sub_1409EB84C.c)
 *     RtlGenerateClass5Guid @ 0x140B2AB60 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptFinishHash(BCRYPT_HASH_HANDLE hHash, PUCHAR pbOutput, ULONG cbOutput, ULONG dwFlags)
{
  NTSTATUS v6; // ebx

  v6 = -1073741822;
  if ( ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.PriorityFloorCounts[16]) )
  {
    v6 = guard_dispatch_icall_no_overrides((__int64)hHash, (__int64)pbOutput);
    ExReleaseExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.PriorityFloorCounts[16]);
  }
  return v6;
}
