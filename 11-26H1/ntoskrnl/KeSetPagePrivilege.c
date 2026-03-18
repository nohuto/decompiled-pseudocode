/*
 * XREFs of KeSetPagePrivilege @ 0x1404B0F70
 * Callers:
 *     MiCopyPage @ 0x140293FA4 (MiCopyPage.c)
 *     MiInsertFreeZeroPage @ 0x1402DCE70 (MiInsertFreeZeroPage.c)
 *     MmStoreProbeAndLockPages @ 0x1402F0670 (MmStoreProbeAndLockPages.c)
 *     MiReferencePageForModifiedWrite @ 0x1402F4B50 (MiReferencePageForModifiedWrite.c)
 *     MiAddPageToFlushMdl @ 0x1402F5760 (MiAddPageToFlushMdl.c)
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     MiMarkPfnVerified @ 0x14038C9E8 (MiMarkPfnVerified.c)
 *     MiClearPfnImageVerified @ 0x14046FA64 (MiClearPfnImageVerified.c)
 *     MiUpdateSecurePte @ 0x1404B0E7C (MiUpdateSecurePte.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404DDD28 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiLockDriverPageRange @ 0x1406E57E8 (MiLockDriverPageRange.c)
 *     MiProtectDriverSectionPte @ 0x1406E5D50 (MiProtectDriverSectionPte.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140CAA540 (ExpRevokeBootLoaderPagePrivileges.c)
 * Callees:
 *     VslRemoveProtectedPage @ 0x1404B0FD0 (VslRemoveProtectedPage.c)
 *     VslRegisterProtectedPage @ 0x1404B1050 (VslRegisterProtectedPage.c)
 *     VslSetPrivilegedPte @ 0x1404B10CC (VslSetPrivilegedPte.c)
 *     VslMakeProtectedPageExecutable @ 0x1404B1154 (VslMakeProtectedPageExecutable.c)
 */

__int64 __fastcall KeSetPagePrivilege(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( (a4 & 0x80u) != 0 )
    return VslRegisterProtectedPage();
  if ( (a4 & 0x200) != 0 )
    return VslSetPrivilegedPte(a1, a2, a3, (a4 >> 11) & 1);
  if ( (a4 & 0x30) != 0 )
    return VslRemoveProtectedPage(a1, a3, (a4 >> 2) & 1);
  return VslMakeProtectedPageExecutable(a1, a2, a4 & 0x400);
}
