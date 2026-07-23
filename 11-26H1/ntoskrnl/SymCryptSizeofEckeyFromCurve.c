/*
 * XREFs of SymCryptSizeofEckeyFromCurve @ 0x14055E290
 * Callers:
 *     SymCryptEckeyAllocate @ 0x14055DB88 (SymCryptEckeyAllocate.c)
 *     SymCryptEckeyWipe @ 0x14055E264 (SymCryptEckeyWipe.c)
 * Callees:
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14055D270 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x14056707C (SymCryptSizeofEcpointFromCurve.c)
 */

__int64 __fastcall SymCryptSizeofEckeyFromCurve(__int64 a1)
{
  int v2; // edi
  unsigned int v3; // eax

  v2 = SymCryptSizeofEcpointFromCurve(a1);
  v3 = SymCryptEcurveDigitsofScalarMultiplier(a1);
  return v2 + 64 + (unsigned int)SymCryptSizeofIntFromDigits(v3);
}
