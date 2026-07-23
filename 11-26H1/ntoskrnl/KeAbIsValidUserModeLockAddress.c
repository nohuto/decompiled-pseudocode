/*
 * XREFs of KeAbIsValidUserModeLockAddress @ 0x14044F7A0
 * Callers:
 *     ?KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z @ 0x140384934 (-KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z.c)
 *     ?KiAbPreWakeupThread@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXJK@Z @ 0x14044F6A0 (-KiAbPreWakeupThread@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXJK@Z.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A4E1B0 (NtAlertThreadByThreadIdEx.c)
 *     NtSetEventEx @ 0x140A5BF10 (NtSetEventEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeAbIsValidUserModeLockAddress(__int64 a1)
{
  return a1 && (a1 & 0x7FFFFFFFFFFFFFFCLL) == a1;
}
