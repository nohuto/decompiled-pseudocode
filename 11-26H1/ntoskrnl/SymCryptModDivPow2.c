/*
 * XREFs of SymCryptModDivPow2 @ 0x14055C528
 * Callers:
 *     SymCryptEcurveInitialize @ 0x14055ADA4 (SymCryptEcurveInitialize.c)
 *     SymCryptEckeySetValue @ 0x14055B8D0 (SymCryptEckeySetValue.c)
 * Callees:
 *     SymCryptFdefModDivPow2 @ 0x14056F268 (SymCryptFdefModDivPow2.c)
 */

__int64 __fastcall SymCryptModDivPow2(__int64 a1, __int64 a2)
{
  return SymCryptFdefModDivPow2(a1, a2);
}
