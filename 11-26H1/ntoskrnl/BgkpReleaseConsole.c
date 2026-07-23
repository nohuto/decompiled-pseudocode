/*
 * XREFs of BgkpReleaseConsole @ 0x1405C81AC
 * Callers:
 *     BgkDisplayCharacter @ 0x140C555B0 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140C556E0 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140C55730 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140C557C0 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection_0(&stru_140E0AA10);
}
