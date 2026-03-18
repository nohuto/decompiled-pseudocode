/*
 * XREFs of SymCryptModMul @ 0x14055C82C
 * Callers:
 *     SymCryptEcDsaSignEx @ 0x14055C9F0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x14055D084 (SymCryptEcDsaVerify.c)
 *     SymCryptCrtSolve @ 0x140562634 (SymCryptCrtSolve.c)
 *     SymCryptEcpointTransform @ 0x1405647A4 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsAdd @ 0x140564CB0 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1405650C0 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x140565570 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x1405658A0 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x140565B4C (SymCryptMontgomeryDoubleAndAdd.c)
 *     SymCryptMontgomeryIsEqual @ 0x140565F90 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x140566680 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x140566A6C (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x140567220 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassDoubleSpecializedAm3 @ 0x140567510 (SymCryptShortWeierstrassDoubleSpecializedAm3.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x140567940 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x140567C70 (SymCryptShortWeierstrassOnCurve.c)
 *     SymCryptFdefModInvGeneric @ 0x14056F890 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140571040 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x14057116C (SymCryptModExpWindowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModMul(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)&off_140005E48 + (*a1 & 0x380)))(a1, a2);
}
