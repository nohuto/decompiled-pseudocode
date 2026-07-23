/*
 * XREFs of BCryptSetProperty @ 0x1408160D0
 * Callers:
 *     SecureDump_SymmetricEncryptionSetup @ 0x1405D9AB4 (SecureDump_SymmetricEncryptionSetup.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptSetProperty(
        BCRYPT_HANDLE hObject,
        LPCWSTR pszProperty,
        PUCHAR pbInput,
        ULONG cbInput,
        ULONG dwFlags)
{
  NTSTATUS v6; // ebx

  v6 = -1073741822;
  if ( ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.ForegroundLossTime) )
  {
    v6 = guard_dispatch_icall_no_overrides((__int64)hObject, (__int64)L"MessageBlockLength");
    ExReleaseExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.ForegroundLossTime);
  }
  return v6;
}
