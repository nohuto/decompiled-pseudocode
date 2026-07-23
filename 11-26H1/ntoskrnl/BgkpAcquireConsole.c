/*
 * XREFs of BgkpAcquireConsole @ 0x1405C8188
 * Callers:
 *     BgkDisplayStringEx @ 0x1405C7D74 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x1405C7EB0 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x1405C8110 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x140C555B0 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140C556E0 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140C55730 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140C557C0 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection_0(&stru_140E0AA10) != 0;
}
