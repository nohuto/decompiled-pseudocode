/*
 * XREFs of SymCryptModSquare @ 0x14055EDF0
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14055BD68 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140570220 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x14057034C (SymCryptModExpWindowed.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x1405742E0 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1405746CC (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x140574E80 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassDoubleSpecializedAm3 @ 0x140575170 (SymCryptShortWeierstrassDoubleSpecializedAm3.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x1405755B0 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x1405758E0 (SymCryptShortWeierstrassOnCurve.c)
 *     SymCryptTwistedEdwardsDouble @ 0x140575F90 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x140576770 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x1405769FC (SymCryptMontgomeryDoubleAndAdd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModSquare(_DWORD *a1)
{
  return (*(__int64 (__fastcall **)(_DWORD *))((char *)&off_140005E50 + (*a1 & 0x380)))(a1);
}
