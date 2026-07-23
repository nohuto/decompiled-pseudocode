/*
 * XREFs of SymCryptTwistedEdwardsFillScratchSpaces @ 0x1405762C0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14055D270 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptDigitsFromBits @ 0x14055E5B8 (SymCryptDigitsFromBits.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofEcpointEx @ 0x140567060 (SymCryptSizeofEcpointEx.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x14056707C (SymCryptSizeofEcpointFromCurve.c)
 */

__int64 __fastcall SymCryptTwistedEdwardsFillScratchSpaces(_DWORD *a1)
{
  int v2; // eax
  int v3; // r15d
  int v4; // r14d
  int v5; // edi
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  unsigned __int64 v10; // rsi
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // ebx
  int v14; // ebx
  unsigned int v15; // ebx
  int v16; // ebx
  __int64 result; // rax
  unsigned int v18; // r9d

  v2 = SymCryptDigitsFromBits();
  v3 = a1[9];
  v4 = a1[4];
  v5 = a1[7] << 8;
  v6 = 8 * (v3 + 32 * v2);
  a1[11] = v6 + 64;
  v7 = SymCryptSizeofIntFromDigits();
  v8 = v7 + SymCryptSizeofEcpointFromCurve((__int64)a1);
  v9 = a1[23];
  if ( v6 + 64 <= (unsigned int)(v5 + 64) )
    v6 = v5;
  a1[12] = v6 + v3 + 64 + 2 * v8;
  a1[13] = v9 * SymCryptSizeofEcpointFromCurve((__int64)a1) + ((8 * a1[24] + 31) & 0xFFFFFFE0);
  v10 = (unsigned int)((v4 << 8) + 64);
  v11 = SymCryptSizeofEcpointEx(v3, 4);
  v12 = 704 * v4 + 256;
  if ( v10 > v10 + (unsigned int)(v4 << 6) + 64LL + 2 * ((unsigned int)(v4 << 6) + 64LL) + (unsigned int)(v4 << 8) )
    v12 = v10;
  v13 = v12 + v11 + 2 * v3;
  a1[14] = v13;
  if ( v13 <= (unsigned int)SymCryptSizeofIntFromDigits() )
    v13 = SymCryptSizeofIntFromDigits();
  a1[14] = v13;
  v14 = a1[9];
  SymCryptEcurveDigitsofScalarMultiplier((__int64)a1);
  v15 = SymCryptSizeofIntFromDigits() + v14;
  if ( v15 <= (unsigned int)SymCryptSizeofEcpointFromCurve((__int64)a1) )
  {
    result = SymCryptSizeofEcpointFromCurve((__int64)a1);
  }
  else
  {
    v16 = a1[9];
    SymCryptEcurveDigitsofScalarMultiplier((__int64)a1);
    result = v16 + (unsigned int)SymCryptSizeofIntFromDigits();
  }
  v18 = a1[12] + a1[13];
  if ( v18 <= a1[14] )
    v18 = a1[14];
  a1[15] = result + v18;
  return result;
}
