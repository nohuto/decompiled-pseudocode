/*
 * XREFs of SymCryptShortWeierstrassFillScratchSpaces @ 0x140575440
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14055D270 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptDigitsFromBits @ 0x14055E5B8 (SymCryptDigitsFromBits.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofEcpointEx @ 0x140567060 (SymCryptSizeofEcpointEx.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x14056707C (SymCryptSizeofEcpointFromCurve.c)
 */

__int64 __fastcall SymCryptShortWeierstrassFillScratchSpaces(_DWORD *a1)
{
  int v2; // r14d
  int v3; // edi
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // ebx
  unsigned int v17; // ebx
  int v18; // ebx
  __int64 result; // rax
  unsigned int v20; // r9d

  SymCryptDigitsFromBits();
  v2 = 2 * (SymCryptSizeofEcpointFromCurve((__int64)a1) + 4 * (a1[9] + 32 * a1[4]));
  v3 = a1[7];
  a1[11] = v2 + 64;
  v4 = v3 << 8;
  v5 = SymCryptSizeofIntFromDigits();
  v6 = v5 + SymCryptSizeofEcpointFromCurve((__int64)a1);
  v7 = a1[23];
  if ( v2 + 64 <= (unsigned int)(v4 + 64) )
    v2 = v4;
  a1[12] = a1[9] + 64 + v2 + 2 * v6;
  v8 = SymCryptSizeofEcpointFromCurve((__int64)a1);
  v9 = a1[9];
  a1[13] = v7 * v8 + ((8 * a1[24] + 31) & 0xFFFFFFE0);
  v10 = (unsigned int)(a1[4] << 8);
  v11 = (unsigned int)(a1[4] << 6) + 64LL;
  v12 = (unsigned int)(v10 + 64);
  v13 = v10 + v11 + v12 + 2 * v11;
  v14 = SymCryptSizeofEcpointEx(v9, 4);
  if ( v12 <= v13 )
    LODWORD(v12) = v13;
  v15 = v12 + v14 + 2 * v9;
  a1[14] = v15;
  if ( v15 <= (unsigned int)SymCryptSizeofIntFromDigits() )
    v15 = SymCryptSizeofIntFromDigits();
  a1[14] = v15;
  v16 = a1[9];
  SymCryptEcurveDigitsofScalarMultiplier((__int64)a1);
  v17 = SymCryptSizeofIntFromDigits() + v16;
  if ( v17 <= (unsigned int)SymCryptSizeofEcpointFromCurve((__int64)a1) )
  {
    result = SymCryptSizeofEcpointFromCurve((__int64)a1);
  }
  else
  {
    v18 = a1[9];
    SymCryptEcurveDigitsofScalarMultiplier((__int64)a1);
    result = v18 + (unsigned int)SymCryptSizeofIntFromDigits();
  }
  v20 = a1[12] + a1[13];
  if ( v20 <= a1[14] )
    v20 = a1[14];
  a1[15] = result + v20;
  return result;
}
