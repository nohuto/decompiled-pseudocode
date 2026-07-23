/*
 * XREFs of BCryptCloseAlgorithmProvider @ 0x14063DE48
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1405D8AA8 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Init @ 0x1405D8FD8 (SecureDump_Init.c)
 *     SecureDump_ReInitialize @ 0x1405D97C4 (SecureDump_ReInitialize.c)
 *     RtlGenerateClass5Guid @ 0x140B2CBE0 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptCloseAlgorithmProvider(BCRYPT_ALG_HANDLE hAlgorithm, ULONG dwFlags)
{
  NTSTATUS v3; // ebx

  v3 = -1073741822;
  if ( ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.ForegroundLossTime) )
  {
    v3 = guard_dispatch_icall_no_overrides(hAlgorithm, 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)&SepRmCapTableLock.ForegroundLossTime + 88LL));
  }
  return v3;
}
