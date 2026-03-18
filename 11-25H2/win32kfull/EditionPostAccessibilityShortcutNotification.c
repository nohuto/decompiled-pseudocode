/*
 * XREFs of EditionPostAccessibilityShortcutNotification @ 0x1402AF6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionPostAccessibilityShortcutNotification(unsigned int a1)
{
  return PostWinlogonMessage(1026LL, a1);
}
