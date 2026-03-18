/*
 * XREFs of iswspace @ 0x1404FC3B0
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x140787D1C (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x1409E97F8 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140AAA33C (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x1404FE4B0 (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
