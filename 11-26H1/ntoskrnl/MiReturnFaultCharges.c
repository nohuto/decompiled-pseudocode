/*
 * XREFs of MiReturnFaultCharges @ 0x140338D0C
 * Callers:
 *     MiSwitchToTransition @ 0x1402A2130 (MiSwitchToTransition.c)
 *     MiObtainFaultCharges @ 0x1402F6350 (MiObtainFaultCharges.c)
 *     MiMigratePfn @ 0x1402F6990 (MiMigratePfn.c)
 *     MiGetPageForHeader @ 0x14033897C (MiGetPageForHeader.c)
 *     MiAllocatePageFileReadResources @ 0x1403719F8 (MiAllocatePageFileReadResources.c)
 *     MiPfPutPagesInTransition @ 0x140372C60 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFaultByCopying @ 0x1404893DC (MiResolveMappedFileFaultByCopying.c)
 *     MiPrefetchPagesViable @ 0x1404C4104 (MiPrefetchPagesViable.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A51E30 (MiPfPrepareReadList.c)
 *     MiFreeReadListPages @ 0x140A525E0 (MiFreeReadListPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
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
