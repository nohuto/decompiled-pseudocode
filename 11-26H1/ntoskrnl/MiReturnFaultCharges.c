/*
 * XREFs of MiReturnFaultCharges @ 0x14033AD8C
 * Callers:
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 *     MiObtainFaultCharges @ 0x1402D83D0 (MiObtainFaultCharges.c)
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiGetPageForHeader @ 0x14033A9FC (MiGetPageForHeader.c)
 *     MiAllocatePageFileReadResources @ 0x1403737A8 (MiAllocatePageFileReadResources.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFaultByCopying @ 0x140482F1C (MiResolveMappedFileFaultByCopying.c)
 *     MiPrefetchPagesViable @ 0x1404BD9E4 (MiPrefetchPagesViable.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 *     MiFreeReadListPages @ 0x140A5B8D0 (MiFreeReadListPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 */

__int64 __fastcall MiReturnFaultCharges(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v5; // r11

  result = MiReturnResident(a1, a2);
  if ( (v5 & 1) != 0 )
    return MiReturnCommit(a1, a2, 0LL);
  return result;
}
