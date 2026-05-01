/*
 * XREFs of ?SHRegValueExists@@YAHPEAUHKEY__@@PEBGPEAK@Z @ 0x1802075C4
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800C1B0C (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SHRegValueExists(HKEY a1, const unsigned __int16 *a2, unsigned int *a3)
{
  return RegQueryValueExW(a1, L"KeyboardTheme_Updating", 0LL, 0LL, 0LL, 0LL) == 0;
}
