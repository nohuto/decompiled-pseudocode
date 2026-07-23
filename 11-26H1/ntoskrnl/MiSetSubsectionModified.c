/*
 * XREFs of MiSetSubsectionModified @ 0x140456AF0
 * Callers:
 *     MiStoreModifiedWriteComplete @ 0x14020BAAC (MiStoreModifiedWriteComplete.c)
 *     MiProbeUnlockPage @ 0x14028AE60 (MiProbeUnlockPage.c)
 *     MiActOnValidPte @ 0x140296698 (MiActOnValidPte.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14029E62C (MiReleaseWsSwapReservationPfn.c)
 *     MiInitializePfn @ 0x1402B9440 (MiInitializePfn.c)
 *     MiProtoFaultGetProtection @ 0x1402BB1B0 (MiProtoFaultGetProtection.c)
 *     MiDecommitPrivatePageTail @ 0x1402BD0C0 (MiDecommitPrivatePageTail.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiAddPageToInsertList @ 0x140320F90 (MiAddPageToInsertList.c)
 *     MiInitializePfnForOtherProcess @ 0x14033D818 (MiInitializePfnForOtherProcess.c)
 *     MiActOnTransitionPte @ 0x14033E930 (MiActOnTransitionPte.c)
 *     MiInitializeEnclavePfn @ 0x140343B28 (MiInitializeEnclavePfn.c)
 *     MiReservePageFileSpaceForPage @ 0x14036944C (MiReservePageFileSpaceForPage.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036D3E8 (MiCopyOnWriteInitializeTargetPage.c)
 *     MiMarkMdlComplete @ 0x1403C5184 (MiMarkMdlComplete.c)
 *     MiWriteCompletePfn @ 0x1404008A0 (MiWriteCompletePfn.c)
 *     MiStoreWriteProcessFailedPages @ 0x140402824 (MiStoreWriteProcessFailedPages.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 *     MmMapDriverTablePage @ 0x14045569C (MmMapDriverTablePage.c)
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 *     MiFlushDirtyBitsToPfn @ 0x1404560EC (MiFlushDirtyBitsToPfn.c)
 *     MiUnlinkStandbyPfn @ 0x140456458 (MiUnlinkStandbyPfn.c)
 *     MiStoreMarkLockedPagesModified @ 0x1404567CC (MiStoreMarkLockedPagesModified.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140D0A564 (MiInsertRegistryPageInModifiedList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
