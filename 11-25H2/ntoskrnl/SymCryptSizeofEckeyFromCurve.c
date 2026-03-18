/*
 * XREFs of SymCryptSizeofEckeyFromCurve @ 0x140520C7C
 * Callers:
 *     SymCryptEckeyAllocate @ 0x140520568 (SymCryptEckeyAllocate.c)
 *     SymCryptEckeyWipe @ 0x140520C50 (SymCryptEckeyWipe.c)
 * Callees:
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14051FC88 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521878 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x140528B20 (SymCryptSizeofEcpointFromCurve.c)
 */

__int64 __fastcall SymCryptSizeofEckeyFromCurve(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // ebx

  v2 = SymCryptEcurveDigitsofScalarMultiplier(a1);
  v3 = SymCryptSizeofIntFromDigits(v2);
  return v3 + (unsigned int)SymCryptSizeofEcpointFromCurve(a1) + 64;
}
