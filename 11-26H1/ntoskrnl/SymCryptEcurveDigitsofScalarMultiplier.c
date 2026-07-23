/*
 * XREFs of SymCryptEcurveDigitsofScalarMultiplier @ 0x14055D270
 * Callers:
 *     SymCryptEckeyCreate @ 0x14055DBDC (SymCryptEckeyCreate.c)
 *     SymCryptEckeySetValue @ 0x14055DDB4 (SymCryptEckeySetValue.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x14055E290 (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptEcDsaSignEx @ 0x14055EED8 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x14055F56C (SymCryptEcDsaVerify.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x140575440 (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1405762C0 (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140576CC0 (SymCryptMontgomeryFillScratchSpaces.c)
 * Callees:
 *     SymCryptDigitsFromBits @ 0x14055E5B8 (SymCryptDigitsFromBits.c)
 */

__int64 __fastcall SymCryptEcurveDigitsofScalarMultiplier(__int64 a1)
{
  return SymCryptDigitsFromBits((unsigned int)(*(_DWORD *)(a1 + 24) + *(_DWORD *)(a1 + 64)));
}
