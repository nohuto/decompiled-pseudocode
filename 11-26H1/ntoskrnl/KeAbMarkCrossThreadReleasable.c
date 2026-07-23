/*
 * XREFs of KeAbMarkCrossThreadReleasable @ 0x14052C0B0
 * Callers:
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14025FA20 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x140274BD0 (ExAcquireFastResourceExclusive.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x140274F40 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1402763B0 (ExpAcquireFastResourceSharedSlow.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x14041E56C (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     ExDisownFastResource @ 0x1404F1ED0 (ExDisownFastResource.c)
 *     ?KeAbCrossThreadDeleteDpcRoutine@LegacyAutoBoost@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1406000D0 (-KeAbCrossThreadDeleteDpcRoutine@LegacyAutoBoost@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ExAcquireFastResourceWithFlags @ 0x1406D1B40 (ExAcquireFastResourceWithFlags.c)
 * Callees:
 *     ?KiAbpMarkCrossThreadReleasable@AutoBoost@@YAXPEAX0@Z @ 0x1404FE3F0 (-KiAbpMarkCrossThreadReleasable@AutoBoost@@YAXPEAX0@Z.c)
 *     ?KiAbMarkCrossThreadReleasable@LegacyAutoBoost@@YAXPEAX0@Z @ 0x14052C0D8 (-KiAbMarkCrossThreadReleasable@LegacyAutoBoost@@YAXPEAX0@Z.c)
 */

void __fastcall KeAbMarkCrossThreadReleasable(
        LegacyAutoBoost *a1,
        struct _KTHREAD *a2,
        void *a3,
        struct AutoBoost::_AB_BOOST_CONTEXT *a4)
{
  if ( (KiAbpGlobalState & 1) != 0 )
    AutoBoost::KiAbpMarkCrossThreadReleasable((unsigned __int64)a1, a2, a3, a4);
  else
    LegacyAutoBoost::KiAbMarkCrossThreadReleasable(a1, a2, a3);
}
