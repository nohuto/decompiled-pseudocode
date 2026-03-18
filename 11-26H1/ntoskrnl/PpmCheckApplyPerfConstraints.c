/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x140B141C8
 * Callers:
 *     PpmRegisterPerfCap @ 0x14044DCE0 (PpmRegisterPerfCap.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140A9D254 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x1404BBD70 (PpmCheckCustomRun.c)
 */

void __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  PpmCheckCustomRun((unsigned int)(a1 != 0) + 1);
}
