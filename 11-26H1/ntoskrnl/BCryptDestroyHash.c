/*
 * XREFs of BCryptDestroyHash @ 0x1409E78F4
 * Callers:
 *     sub_1409E801C @ 0x1409E801C (sub_1409E801C.c)
 *     RtlGenerateClass5Guid @ 0x140B2CBE0 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptDestroyHash(BCRYPT_HASH_HANDLE hHash)
{
  NTSTATUS v2; // ebx
  __int64 v3; // rdx

  v2 = -1073741822;
  if ( ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.ForegroundLossTime) )
  {
    v2 = guard_dispatch_icall_no_overrides((__int64)hHash, v3);
    ExReleaseExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.ForegroundLossTime);
  }
  return v2;
}
