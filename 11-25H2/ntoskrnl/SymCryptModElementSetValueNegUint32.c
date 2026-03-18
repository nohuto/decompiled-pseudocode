/*
 * XREFs of SymCryptModElementSetValueNegUint32 @ 0x140521574
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E8E8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEcurveInitialize @ 0x14051FCD0 (SymCryptEcurveInitialize.c)
 * Callees:
 *     SymCryptFdefModElementSetValueNegUint32 @ 0x140533694 (SymCryptFdefModElementSetValueNegUint32.c)
 */

__int64 __fastcall SymCryptModElementSetValueNegUint32(int a1, int a2, int a3, int a4, __int64 a5)
{
  return SymCryptFdefModElementSetValueNegUint32(a1, a2, a3, a4, a5);
}
