/*
 * XREFs of BCryptOpenAlgorithmProvider @ 0x140B39EA0
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1405D8AA8 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1405D9AB4 (SecureDump_SymmetricEncryptionSetup.c)
 *     sub_140886700 @ 0x140886700 (sub_140886700.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptOpenAlgorithmProvider(
        BCRYPT_ALG_HANDLE *phAlgorithm,
        LPCWSTR pszAlgId,
        LPCWSTR pszImplementation,
        ULONG dwFlags)
{
  NTSTATUS v6; // ebx

  v6 = -1073741822;
  if ( ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.ForegroundLossTime) )
  {
    v6 = guard_dispatch_icall_no_overrides((__int64)phAlgorithm, (__int64)pszAlgId);
    ExReleaseExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.ForegroundLossTime);
  }
  return v6;
}
