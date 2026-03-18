/*
 * XREFs of SymCryptModSquare @ 0x1405217D8
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E8E8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptTwistedEdwardsDouble @ 0x140528F70 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x140529790 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x140529A4C (SymCryptMontgomeryDoubleAndAdd.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x14052A5C0 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x14052A9C8 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x14052B1A0 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassDoubleSpecializedAm3 @ 0x14052B4B0 (SymCryptShortWeierstrassDoubleSpecializedAm3.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x14052B900 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x14052BC50 (SymCryptShortWeierstrassOnCurve.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140534FFC (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140535128 (SymCryptModExpWindowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModSquare(_DWORD *a1)
{
  return (*(__int64 (__fastcall **)(_DWORD *))((char *)&off_1400067E0 + (*a1 & 0x380)))(a1);
}
