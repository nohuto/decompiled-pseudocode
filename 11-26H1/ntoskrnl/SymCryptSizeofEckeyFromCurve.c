/*
 * XREFs of SymCryptSizeofEckeyFromCurve @ 0x14055BDA8
 * Callers:
 *     SymCryptEckeyAllocate @ 0x14055B6A4 (SymCryptEckeyAllocate.c)
 *     SymCryptEckeyWipe @ 0x14055BD7C (SymCryptEckeyWipe.c)
 * Callees:
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14055AD5C (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055C9A8 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x140564C8C (SymCryptSizeofEcpointFromCurve.c)
 */

__int64 __fastcall SymCryptSizeofEckeyFromCurve(__int64 a1)
{
  int v2; // edi
  unsigned int v3; // eax

  v2 = SymCryptSizeofEcpointFromCurve(a1);
  v3 = SymCryptEcurveDigitsofScalarMultiplier(a1);
  return v2 + 64 + (unsigned int)SymCryptSizeofIntFromDigits(v3);
}
