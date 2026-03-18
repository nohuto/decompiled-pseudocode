/*
 * XREFs of SymCryptModElementSetValueUint32 @ 0x14055C6C4
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEcurveInitialize @ 0x14055ADA4 (SymCryptEcurveInitialize.c)
 *     SymCryptEcpointTransform @ 0x1405647A4 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsSetZero @ 0x140565A90 (SymCryptTwistedEdwardsSetZero.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x1405660C0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassSetZero @ 0x140567E40 (SymCryptShortWeierstrassSetZero.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140571040 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x14057116C (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefModElementSetValueUint32Generic @ 0x14056F790 (SymCryptFdefModElementSetValueUint32Generic.c)
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
