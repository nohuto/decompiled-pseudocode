/*
 * XREFs of BCryptEncrypt @ 0x14052EEE4
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1405D8AA8 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Encrypt_DmpData @ 0x1405D8D20 (SecureDump_Encrypt_DmpData.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptEncrypt(
        BCRYPT_KEY_HANDLE hKey,
        PUCHAR pbInput,
        ULONG cbInput,
        void *pPaddingInfo,
        PUCHAR pbIV,
        ULONG cbIV,
        PUCHAR pbOutput,
        ULONG cbOutput,
        ULONG *pcbResult,
        ULONG dwFlags)
{
  NTSTATUS v12; // ebx

  v12 = -1073741822;
  if ( ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.ForegroundLossTime) )
  {
    v12 = guard_dispatch_icall_no_overrides(hKey, pbInput);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)&SepRmCapTableLock.ForegroundLossTime + 88LL));
  }
  return v12;
}
