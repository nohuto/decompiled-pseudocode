/*
 * XREFs of KeAbThreadAreAllEntriesFree @ 0x140270FC4
 * Callers:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x140204CDC (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x1402707CC (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406003AC (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     ?KiAbThreadAreAllEntriesFree@LegacyAutoBoost@@YAKPEAU_KTHREAD@@@Z @ 0x140270FEC (-KiAbThreadAreAllEntriesFree@LegacyAutoBoost@@YAKPEAU_KTHREAD@@@Z.c)
 *     ?KiAbpThreadAreAllEntriesFree@AutoBoost@@YAKPEAU_KTHREAD@@@Z @ 0x140445CE0 (-KiAbpThreadAreAllEntriesFree@AutoBoost@@YAKPEAU_KTHREAD@@@Z.c)
 */

unsigned int __fastcall KeAbThreadAreAllEntriesFree(AutoBoost *a1, struct _KTHREAD *a2)
{
  if ( (KiAbpGlobalState & 1) != 0 )
    return AutoBoost::KiAbpThreadAreAllEntriesFree(a1, a2);
  else
    return LegacyAutoBoost::KiAbThreadAreAllEntriesFree(a1, a2);
}
