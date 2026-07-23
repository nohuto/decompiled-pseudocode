/*
 * XREFs of SymCryptModMul @ 0x14055ED14
 * Callers:
 *     SymCryptEcDsaSignEx @ 0x14055EED8 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x14055F56C (SymCryptEcDsaVerify.c)
 *     SymCryptCrtSolve @ 0x140564B44 (SymCryptCrtSolve.c)
 *     SymCryptEcpointTransform @ 0x140566B94 (SymCryptEcpointTransform.c)
 *     SymCryptFdefModInvGeneric @ 0x14056EA70 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140570220 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x14057034C (SymCryptModExpWindowed.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x1405742E0 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1405746CC (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x140574E80 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassDoubleSpecializedAm3 @ 0x140575170 (SymCryptShortWeierstrassDoubleSpecializedAm3.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x1405755B0 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x1405758E0 (SymCryptShortWeierstrassOnCurve.c)
 *     SymCryptTwistedEdwardsAdd @ 0x140575B80 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x140575F90 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x140576440 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x140576770 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x1405769FC (SymCryptMontgomeryDoubleAndAdd.c)
 *     SymCryptMontgomeryIsEqual @ 0x140576E40 (SymCryptMontgomeryIsEqual.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModMul(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)&off_140005E48 + (*a1 & 0x380)))(a1, a2);
}
