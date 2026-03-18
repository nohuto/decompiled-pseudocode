/*
 * XREFs of ?KiAbThreadGetIoQoSPriority@LegacyAutoBoost@@YA?AW4KI_AB_IO_QOS_PRIORITY@1@PEAU_KTHREAD@@@Z @ 0x14026E8D4
 * Callers:
 *     ?KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SINGLE_LIST_ENTRY@@22PEAK@Z @ 0x14026E664 (-KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SING.c)
 *     ?KiAbTryIncrementIoWaiterCounts@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@0@Z @ 0x14026F458 (-KiAbTryIncrementIoWaiterCounts@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@0@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall LegacyAutoBoost::KiAbThreadGetIoQoSPriority(__int64 a1)
{
  return !*(_DWORD *)(a1 + 1512) || *(_DWORD *)(a1 + 1508);
}
