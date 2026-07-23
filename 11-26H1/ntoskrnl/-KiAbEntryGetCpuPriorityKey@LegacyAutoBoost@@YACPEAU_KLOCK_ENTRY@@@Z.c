/*
 * XREFs of ?KiAbEntryGetCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z @ 0x14026DE68
 * Callers:
 *     ?KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SINGLE_LIST_ENTRY@@22PEAK@Z @ 0x14026DBD4 (-KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SING.c)
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x1402707CC (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     ?KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1406001C4 (-KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 * Callees:
 *     ?KiAbOwnerComputeCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z @ 0x14026ECC4 (-KiAbOwnerComputeCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z.c)
 */

char __fastcall LegacyAutoBoost::KiAbEntryGetCpuPriorityKey(struct _KLOCK_ENTRY *this, struct _KLOCK_ENTRY *a2)
{
  volatile char result; // al

  if ( (this->CrossThreadFlags & 1) == 0 )
    return this->CpuPriorityKey;
  if ( !this->WaitingByte )
    return LegacyAutoBoost::KiAbOwnerComputeCpuPriorityKey((LegacyAutoBoost *)this, this);
  result = *(_BYTE *)(this[-(this->StaticByte & 0x3F) - 1].EntryLock + 195);
  if ( result > 30 )
    return 30;
  return result;
}
