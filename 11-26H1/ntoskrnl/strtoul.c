/*
 * XREFs of strtoul @ 0x140537CD8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     EmpParseCallbacks @ 0x140CBC04C (EmpParseCallbacks.c)
 *     EmpParseRuleTermArgMapping @ 0x140CBCCAC (EmpParseRuleTermArgMapping.c)
 *     EmpParseRules @ 0x140CBCFC8 (EmpParseRules.c)
 *     CmpGetBiosDate @ 0x140CF2DD8 (CmpGetBiosDate.c)
 *     EmpCacheBiosDate @ 0x140D0E39C (EmpCacheBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x140537A3C (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
