/*
 * XREFs of BCryptEncrypt @ 0x14052C9C4
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1405D62B8 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Encrypt_DmpData @ 0x1405D6530 (SecureDump_Encrypt_DmpData.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
  if ( ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.PriorityFloorCounts[16]) )
  {
    v12 = guard_dispatch_icall_no_overrides(hKey, pbInput);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)&SepRmCapTableLock.PriorityFloorCounts[16] + 88LL));
  }
  return v12;
}
