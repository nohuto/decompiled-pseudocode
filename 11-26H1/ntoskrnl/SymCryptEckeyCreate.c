/*
 * XREFs of SymCryptEckeyCreate @ 0x14055B6F8
 * Callers:
 *     SymCryptEckeyAllocate @ 0x14055B6A4 (SymCryptEckeyAllocate.c)
 * Callees:
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14055AD5C (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptIntCreate @ 0x14055C1F0 (SymCryptIntCreate.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055C9A8 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptEcpointCreate @ 0x14056434C (SymCryptEcpointCreate.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x140564C8C (SymCryptSizeofEcpointFromCurve.c)
 */

__int64 __fastcall SymCryptEckeyCreate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebp
  __int64 v6; // rdi
  unsigned int v7; // ebx

  v5 = SymCryptEcurveDigitsofScalarMultiplier(a3);
  v6 = (unsigned int)SymCryptSizeofEcpointFromCurve(a3);
  v7 = SymCryptSizeofIntFromDigits(v5);
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = SymCryptEcpointCreate(a1 + 64, (unsigned int)v6, a3);
  *(_QWORD *)(a1 + 24) = SymCryptIntCreate(v6 + a1 + 64, v7, v5);
  return a1;
}
