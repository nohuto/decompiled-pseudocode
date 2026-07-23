/*
 * XREFs of SymCryptMontgomeryFillScratchSpaces @ 0x140576CC0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14055D270 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptDigitsFromBits @ 0x14055E5B8 (SymCryptDigitsFromBits.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModElementFromModulus @ 0x14055EEA8 (SymCryptSizeofModElementFromModulus.c)
 *     SymCryptSizeofEcpointEx @ 0x140567060 (SymCryptSizeofEcpointEx.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x14056707C (SymCryptSizeofEcpointFromCurve.c)
 */

__int64 __fastcall SymCryptMontgomeryFillScratchSpaces(__int64 a1)
{
  int v2; // r15d
  int v3; // edi
  __int64 v4; // r9
  unsigned __int64 v5; // rbx
  int v6; // r12d
  int v7; // ebp
  int v8; // eax
  unsigned __int64 v9; // rsi
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  __int64 result; // rax
  unsigned int v15; // edx

  v2 = SymCryptDigitsFromBits();
  v3 = SymCryptSizeofModElementFromModulus(*(_QWORD *)(a1 + 616));
  v4 = (unsigned int)(v2 << 8);
  v5 = v4 + (unsigned int)(v4 + 64) + (unsigned int)(v2 << 6) + 64LL + 2 * ((unsigned int)(v2 << 6) + 64LL);
  if ( (unsigned int)(v4 + 64) > v5 )
    v5 = (unsigned int)(v4 + 64);
  if ( (unsigned int)SymCryptSizeofIntFromDigits() > v5 )
    LODWORD(v5) = SymCryptSizeofIntFromDigits();
  v6 = *(_DWORD *)(a1 + 36);
  v7 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 44) = v5;
  v8 = SymCryptSizeofIntFromDigits();
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 48) = v5 + v8 + 6 * v3;
  v9 = (unsigned int)((v7 << 8) + 64);
  v10 = SymCryptSizeofEcpointEx(v6, 4);
  v11 = 704 * v7 + 256;
  if ( v9 > v9 + (unsigned int)(v7 << 6) + 64LL + 2 * ((unsigned int)(v7 << 6) + 64LL) + (unsigned int)(v7 << 8) )
    v11 = v9;
  v12 = v11 + v10 + 2 * v6;
  *(_DWORD *)(a1 + 56) = v12;
  if ( v12 <= (unsigned int)SymCryptSizeofIntFromDigits() )
    v12 = SymCryptSizeofIntFromDigits();
  *(_DWORD *)(a1 + 56) = v12;
  SymCryptEcurveDigitsofScalarMultiplier(a1);
  v13 = SymCryptSizeofIntFromDigits() + v6;
  if ( v13 <= (unsigned int)SymCryptSizeofEcpointFromCurve(a1) )
  {
    result = SymCryptSizeofEcpointFromCurve(a1);
  }
  else
  {
    SymCryptEcurveDigitsofScalarMultiplier(a1);
    result = v6 + (unsigned int)SymCryptSizeofIntFromDigits();
  }
  v15 = *(_DWORD *)(a1 + 48);
  if ( v15 <= *(_DWORD *)(a1 + 56) )
    v15 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 60) = result + v15;
  return result;
}
