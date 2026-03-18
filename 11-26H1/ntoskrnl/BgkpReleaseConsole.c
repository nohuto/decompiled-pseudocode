/*
 * XREFs of BgkpReleaseConsole @ 0x1405C593C
 * Callers:
 *     BgkDisplayCharacter @ 0x140C4F5B0 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140C4F6E0 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140C4F730 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140C4F7C0 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection_0(&stru_140E0AA10);
}
