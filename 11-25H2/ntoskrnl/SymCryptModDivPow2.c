/*
 * XREFs of SymCryptModDivPow2 @ 0x1405213F8
 * Callers:
 *     SymCryptEcurveInitialize @ 0x14051FCD0 (SymCryptEcurveInitialize.c)
 *     SymCryptEckeySetValue @ 0x140520790 (SymCryptEckeySetValue.c)
 * Callees:
 *     SymCryptFdefModDivPow2 @ 0x140533248 (SymCryptFdefModDivPow2.c)
 */

__int64 __fastcall SymCryptModDivPow2(__int64 a1, __int64 a2)
{
  return SymCryptFdefModDivPow2(a1, a2);
}
