/*
 * XREFs of KeAbThreadAreAllEntriesFree @ 0x140271A54
 * Callers:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x140204BFC (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x14027125C (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1405FD95C (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     ?KiAbThreadAreAllEntriesFree@LegacyAutoBoost@@YAKPEAU_KTHREAD@@@Z @ 0x140271A7C (-KiAbThreadAreAllEntriesFree@LegacyAutoBoost@@YAKPEAU_KTHREAD@@@Z.c)
 *     ?KiAbpThreadAreAllEntriesFree@AutoBoost@@YAKPEAU_KTHREAD@@@Z @ 0x14044DBB0 (-KiAbpThreadAreAllEntriesFree@AutoBoost@@YAKPEAU_KTHREAD@@@Z.c)
 */

unsigned int __fastcall KeAbThreadAreAllEntriesFree(AutoBoost *a1, struct _KTHREAD *a2)
{
  if ( (KiAbpGlobalState & 1) != 0 )
    return AutoBoost::KiAbpThreadAreAllEntriesFree(a1, a2);
  else
    return LegacyAutoBoost::KiAbThreadAreAllEntriesFree(a1, a2);
}
