/*
 * XREFs of iswspace @ 0x140536D20
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x140818ABC (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x140A634C4 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140B5458C (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x140538ED8 (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
