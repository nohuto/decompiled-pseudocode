/*
 * XREFs of BgkpAcquireConsole @ 0x1405C5918
 * Callers:
 *     BgkDisplayStringEx @ 0x1405C5504 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x1405C5640 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x1405C58A0 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x140C4F5B0 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140C4F6E0 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140C4F730 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140C4F7C0 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection_0(&stru_140E0AA10) != 0;
}
