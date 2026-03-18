/*
 * XREFs of KeAbIsValidUserModeLockAddress @ 0x140457F30
 * Callers:
 *     ?KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z @ 0x140382B84 (-KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z.c)
 *     ?KiAbPreWakeupThread@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXJK@Z @ 0x140457E30 (-KiAbPreWakeupThread@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXJK@Z.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A33250 (NtAlertThreadByThreadIdEx.c)
 *     NtSetEventEx @ 0x140A52C20 (NtSetEventEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeAbIsValidUserModeLockAddress(__int64 a1)
{
  return a1 && (a1 & 0x7FFFFFFFFFFFFFFCLL) == a1;
}
