/*
 * XREFs of KeAbPreWakeupHandle @ 0x140272C14
 * Callers:
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270060 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExpWakePushLock @ 0x140428464 (ExpWakePushLock.c)
 * Callees:
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272560 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x1402741CC (-KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z.c)
 */

void __fastcall KeAbPreWakeupHandle(__int64 a1, __int64 a2, struct AutoBoost::_AB_THREAD_ENTRY *a3)
{
  if ( (KiAbpGlobalState & 1) != 0 )
    AutoBoost::KiAbpConvertWaiterToOwner(
      *(AutoBoost **)(a1 - 48LL * (*(_BYTE *)(a1 + 36) & 0x7F) - 16),
      (struct _KTHREAD *)a1,
      a3,
      a1);
  else
    LegacyAutoBoost::KiAbConvertWaiterToOwnerEntry(
      *(LegacyAutoBoost **)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16),
      a1,
      (struct _KLOCK_ENTRY *)a3);
}
