/*
 * XREFs of SymCryptModElementSetValueNegUint32 @ 0x14055C6A4
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEcurveInitialize @ 0x14055ADA4 (SymCryptEcurveInitialize.c)
 * Callees:
 *     SymCryptFdefModElementSetValueNegUint32 @ 0x14056F6C4 (SymCryptFdefModElementSetValueNegUint32.c)
 */

__int64 __fastcall SymCryptModElementSetValueNegUint32(int a1, int a2, int a3, int a4, __int64 a5)
{
  return SymCryptFdefModElementSetValueNegUint32(a1, a2, a3, a4, a5);
}
