/*
 * XREFs of BCryptDestroyKey @ 0x14063ADD8
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1405D62B8 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Init @ 0x1405D67E8 (SecureDump_Init.c)
 *     SecureDump_ReInitialize @ 0x1405D6FD4 (SecureDump_ReInitialize.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptDestroyKey(BCRYPT_KEY_HANDLE hKey)
{
  NTSTATUS v2; // ebx
  __int64 v3; // rdx

  v2 = -1073741822;
  if ( ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.PriorityFloorCounts[16]) )
  {
    v2 = guard_dispatch_icall_no_overrides(hKey, v3);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)&SepRmCapTableLock.PriorityFloorCounts[16] + 88LL));
  }
  return v2;
}
