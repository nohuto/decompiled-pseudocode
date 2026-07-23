/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x140B162C8
 * Callers:
 *     PpmRegisterPerfCap @ 0x140445E10 (PpmRegisterPerfCap.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AD8DD8 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x1404B5550 (PpmCheckCustomRun.c)
 */

void __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  PpmCheckCustomRun((unsigned int)(a1 != 0) + 1);
}
