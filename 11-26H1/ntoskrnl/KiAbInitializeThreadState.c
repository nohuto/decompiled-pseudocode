/*
 * XREFs of KiAbInitializeThreadState @ 0x140497B24
 * Callers:
 *     KeInitThread @ 0x140C07424 (KeInitThread.c)
 * Callees:
 *     ?KiAbpInitializeThreadState@AutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x140497B4C (-KiAbpInitializeThreadState@AutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 *     ?KiAbpInitializeThreadState@LegacyAutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x140497C10 (-KiAbpInitializeThreadState@LegacyAutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 */

void __fastcall KiAbInitializeThreadState(AutoBoost *a1, struct _KTHREAD *a2)
{
  if ( (KiAbpGlobalState & 1) != 0 )
    AutoBoost::KiAbpInitializeThreadState(a1, a2);
  else
    LegacyAutoBoost::KiAbpInitializeThreadState(a1, a2);
}
