/*
 * XREFs of strtoul @ 0x1404FAF68
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     EmpParseCallbacks @ 0x140C0536C (EmpParseCallbacks.c)
 *     EmpParseRuleTermArgMapping @ 0x140C05F30 (EmpParseRuleTermArgMapping.c)
 *     EmpParseRules @ 0x140C0624C (EmpParseRules.c)
 *     CmpGetBiosDate @ 0x140C37E94 (CmpGetBiosDate.c)
 *     EmpCacheBiosDate @ 0x140C4E024 (EmpCacheBiosDate.c)
 * Callees:
 *     strtoxlX @ 0x1404FACE0 (strtoxlX.c)
 */

unsigned int __cdecl strtoul(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 1, 0);
}
