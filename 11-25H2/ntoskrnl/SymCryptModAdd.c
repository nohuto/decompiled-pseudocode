/*
 * XREFs of SymCryptModAdd @ 0x1405213BC
 * Callers:
 *     SymCryptEcurveInitialize @ 0x14051FCD0 (SymCryptEcurveInitialize.c)
 *     SymCryptEcDsaSignEx @ 0x1405218C0 (SymCryptEcDsaSignEx.c)
 *     SymCryptTwistedEdwardsAdd @ 0x140528B50 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x140528F70 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x140529790 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x140529A4C (SymCryptMontgomeryDoubleAndAdd.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x14052A5C0 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x14052A9C8 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x14052B1A0 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassDoubleSpecializedAm3 @ 0x14052B4B0 (SymCryptShortWeierstrassDoubleSpecializedAm3.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x14052BC50 (SymCryptShortWeierstrassOnCurve.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModAdd(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)g_SymCryptModFns + (*a1 & 0x380)))(a1, a2);
}
