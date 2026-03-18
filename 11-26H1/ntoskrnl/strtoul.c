/*
 * XREFs of strtoul @ 0x140535858
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     EmpParseCallbacks @ 0x140CB600C (EmpParseCallbacks.c)
 *     EmpParseRuleTermArgMapping @ 0x140CB6C68 (EmpParseRuleTermArgMapping.c)
 *     EmpParseRules @ 0x140CB6F84 (EmpParseRules.c)
 *     CmpGetBiosDate @ 0x140CECAD4 (CmpGetBiosDate.c)
 *     EmpCacheBiosDate @ 0x140D080CC (EmpCacheBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x1405355BC (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
