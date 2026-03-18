/*
 * XREFs of KeAbMarkCrossThreadReleasable @ 0x140529B94
 * Callers:
 *     ExAcquireFastResourceExclusive @ 0x140275660 (ExAcquireFastResourceExclusive.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402759D0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExAcquireFastResourceShared @ 0x140276AE0 (ExAcquireFastResourceShared.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140276E40 (ExpAcquireFastResourceSharedSlow.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x14043153C (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140456410 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExDisownFastResource @ 0x1404F88C0 (ExDisownFastResource.c)
 *     ?KeAbCrossThreadDeleteDpcRoutine@LegacyAutoBoost@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1405FD680 (-KeAbCrossThreadDeleteDpcRoutine@LegacyAutoBoost@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ExAcquireFastResourceWithFlags @ 0x1406CDB10 (ExAcquireFastResourceWithFlags.c)
 * Callees:
 *     ?KiAbpMarkCrossThreadReleasable@AutoBoost@@YAXPEAX0@Z @ 0x140504AAC (-KiAbpMarkCrossThreadReleasable@AutoBoost@@YAXPEAX0@Z.c)
 *     ?KiAbMarkCrossThreadReleasable@LegacyAutoBoost@@YAXPEAX0@Z @ 0x140529BBC (-KiAbMarkCrossThreadReleasable@LegacyAutoBoost@@YAXPEAX0@Z.c)
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
