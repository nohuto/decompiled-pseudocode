/*
 * XREFs of BCryptDestroyHash @ 0x1409EB124
 * Callers:
 *     sub_1409EB84C @ 0x1409EB84C (sub_1409EB84C.c)
 *     RtlGenerateClass5Guid @ 0x140B2AB60 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptDestroyHash(BCRYPT_HASH_HANDLE hHash)
{
  NTSTATUS v2; // ebx
  __int64 v3; // rdx

  v2 = -1073741822;
  if ( ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.PriorityFloorCounts[16]) )
  {
    v2 = guard_dispatch_icall_no_overrides((__int64)hHash, v3);
    ExReleaseExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.PriorityFloorCounts[16]);
  }
  return v2;
}
