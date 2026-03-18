/*
 * XREFs of MiSetSubsectionModified @ 0x14045CF48
 * Callers:
 *     MiStoreModifiedWriteComplete @ 0x14020B9CC (MiStoreModifiedWriteComplete.c)
 *     MiProbeUnlockPage @ 0x14028B900 (MiProbeUnlockPage.c)
 *     MiActOnValidPte @ 0x140297138 (MiActOnValidPte.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14029F0DC (MiReleaseWsSwapReservationPfn.c)
 *     MiInitializePfn @ 0x1402D7680 (MiInitializePfn.c)
 *     MiProtoFaultGetProtection @ 0x1402D93F0 (MiProtoFaultGetProtection.c)
 *     MiDecommitPrivatePageTail @ 0x1402DB300 (MiDecommitPrivatePageTail.c)
 *     MiBuildForkPageTable @ 0x14030DC5C (MiBuildForkPageTable.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031AE30 (MiCaptureDirtyBitToPfn.c)
 *     MiAddPageToInsertList @ 0x14031EF60 (MiAddPageToInsertList.c)
 *     MiInitializePfnForOtherProcess @ 0x14033B798 (MiInitializePfnForOtherProcess.c)
 *     MiActOnTransitionPte @ 0x14033C8B0 (MiActOnTransitionPte.c)
 *     MiInitializeEnclavePfn @ 0x140341AA8 (MiInitializeEnclavePfn.c)
 *     MiReservePageFileSpaceForPage @ 0x1403676AC (MiReservePageFileSpaceForPage.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036B648 (MiCopyOnWriteInitializeTargetPage.c)
 *     MiMarkMdlComplete @ 0x1403BB314 (MiMarkMdlComplete.c)
 *     MiWriteCompletePfn @ 0x1404077B0 (MiWriteCompletePfn.c)
 *     MiStoreWriteProcessFailedPages @ 0x140409734 (MiStoreWriteProcessFailedPages.c)
 *     MiWriteComplete @ 0x14040A870 (MiWriteComplete.c)
 *     MmMapDriverTablePage @ 0x14040E640 (MmMapDriverTablePage.c)
 *     MiSetPagesModified @ 0x14045BE6C (MiSetPagesModified.c)
 *     MiFlushDirtyBitsToPfn @ 0x14045C544 (MiFlushDirtyBitsToPfn.c)
 *     MiUnlinkStandbyPfn @ 0x14045C8B0 (MiUnlinkStandbyPfn.c)
 *     MiStoreMarkLockedPagesModified @ 0x14045CC24 (MiStoreMarkLockedPagesModified.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140D04294 (MiInsertRegistryPageInModifiedList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiSetSubsectionModified(__int64 *a1, int a2)
{
  __int64 v2; // rsi
  int v5; // eax

  v2 = *a1;
  if ( !a2 )
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
  v5 = *((_DWORD *)a1 + 38);
  if ( (v5 & 1) == 0 )
    *((_DWORD *)a1 + 38) = v5 | 1;
  if ( !a2 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
}
