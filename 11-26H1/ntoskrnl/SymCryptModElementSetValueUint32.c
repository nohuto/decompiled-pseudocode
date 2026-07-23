/*
 * XREFs of SymCryptModElementSetValueUint32 @ 0x14055EBAC
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14055BD68 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEcurveInitialize @ 0x14055D2B8 (SymCryptEcurveInitialize.c)
 *     SymCryptEcpointTransform @ 0x140566B94 (SymCryptEcpointTransform.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140570220 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x14057034C (SymCryptModExpWindowed.c)
 *     SymCryptShortWeierstrassSetZero @ 0x140575AD0 (SymCryptShortWeierstrassSetZero.c)
 *     SymCryptTwistedEdwardsSetZero @ 0x140576940 (SymCryptTwistedEdwardsSetZero.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140576F70 (SymCryptMontgomeryPointScalarMul.c)
 * Callees:
 *     SymCryptFdefModElementSetValueUint32Generic @ 0x14056E970 (SymCryptFdefModElementSetValueUint32Generic.c)
 */

__int64 __fastcall SymCryptModElementSetValueUint32(int a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  SymCryptFdefModElementSetValueUint32Generic(a1, (_DWORD)a2, a3, a4, a5);
  return (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, __int64))((char *)off_140005E60 + (*a2 & 0x380)))(
           a2,
           a3,
           a4,
           a5);
}
