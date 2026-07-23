/*
 * XREFs of KeSetPagePrivilege @ 0x1404AA600
 * Callers:
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 *     MmStoreProbeAndLockPages @ 0x1402D26F0 (MmStoreProbeAndLockPages.c)
 *     MiReferencePageForModifiedWrite @ 0x1402D6BD0 (MiReferencePageForModifiedWrite.c)
 *     MiAddPageToFlushMdl @ 0x1402D77E0 (MiAddPageToFlushMdl.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiMarkPfnVerified @ 0x14038E794 (MiMarkPfnVerified.c)
 *     MiClearPfnImageVerified @ 0x1404691E4 (MiClearPfnImageVerified.c)
 *     MiUpdateSecurePte @ 0x1404AA50C (MiUpdateSecurePte.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404D7408 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiLockDriverPageRange @ 0x1406EA498 (MiLockDriverPageRange.c)
 *     MiProtectDriverSectionPte @ 0x1406EAA00 (MiProtectDriverSectionPte.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140CB0540 (ExpRevokeBootLoaderPagePrivileges.c)
 * Callees:
 *     VslRemoveProtectedPage @ 0x1404AA660 (VslRemoveProtectedPage.c)
 *     VslRegisterProtectedPage @ 0x1404AA6E0 (VslRegisterProtectedPage.c)
 *     VslSetPrivilegedPte @ 0x1404AA75C (VslSetPrivilegedPte.c)
 *     VslMakeProtectedPageExecutable @ 0x1404AA7E4 (VslMakeProtectedPageExecutable.c)
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
