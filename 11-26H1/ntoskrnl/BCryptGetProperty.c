/*
 * XREFs of BCryptGetProperty @ 0x140AD5C78
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1405D62B8 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1405D72C4 (SecureDump_SymmetricEncryptionSetup.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptGetProperty(
        BCRYPT_HANDLE hObject,
        LPCWSTR pszProperty,
        PUCHAR pbOutput,
        ULONG cbOutput,
        ULONG *pcbResult,
        ULONG dwFlags)
{
  NTSTATUS v8; // ebx

  v8 = -1073741822;
  if ( ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.PriorityFloorCounts[16]) )
  {
    v8 = guard_dispatch_icall_no_overrides((__int64)hObject, (__int64)pszProperty);
    ExReleaseExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.PriorityFloorCounts[16]);
  }
  return v8;
}
