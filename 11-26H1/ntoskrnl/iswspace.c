/*
 * XREFs of iswspace @ 0x1405391A0
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x14081ECCC (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x140A70494 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140B56E2C (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x14053B358 (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
