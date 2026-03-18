/*
 * XREFs of ?GreFillFontDir@@YAKQEAU_IFIMETRICS@@KPEAE@Z @ 0x14023AD48
 * Callers:
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x140226FB4 (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreFillFontDir(struct _IFIMETRICS *const a1, int a2, unsigned __int8 *a3)
{
  unsigned int CurrentThreadId; // eax
  char v7; // al
  unsigned __int8 v8; // cl
  unsigned __int8 v9; // ah
  __int16 fwdAveCharWidth; // ax
  __int16 v11; // ax
  CHAR *v12; // rsi
  const WCHAR *v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbp
  CHAR *v17; // r14
  __int64 v18; // rax
  const WCHAR *v19; // r9
  __int64 v20; // rsi
  CHAR *v21; // r14
  const WCHAR *v22; // r9
  __int64 v23; // rax

  *(_QWORD *)a3 = 0x95020000000001LL;
  *((_WORD *)a3 + 4) = 0;
  strcpy((char *)a3 + 10, "Windows! Windows! Windows!");
  if ( a2 )
  {
    if ( a2 == 2 )
      CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    else
      CurrentThreadId = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    *(_DWORD *)(a3 + 10) = CurrentThreadId;
  }
  *(_OWORD *)(a3 + 37) = 0LL;
  *(_OWORD *)(a3 + 53) = 0LL;
  a3[69] = 0;
  *(_DWORD *)(a3 + 37) = 16843536;
  v7 = 67;
  if ( a2 != 2 )
    v7 = 3;
  a3[70] = v7 | (a2 != 0 ? 0x80 : 0);
  a3[71] = a1->fsSelection;
  a3[72] = a1->fwdUnitsPerEm;
  a3[73] = HIBYTE(a1->fwdUnitsPerEm);
  *((_WORD *)a3 + 38) = 72;
  *((_WORD *)a3 + 37) = 72;
  a3[78] = a1->fwdWinAscender;
  a3[79] = HIBYTE(a1->fwdWinAscender);
  *((_WORD *)a3 + 40) = a1->fwdWinAscender + a1->fwdWinDescender - a1->fwdUnitsPerEm;
  v8 = LOBYTE(a1->fwdMacAscender)
     + LOBYTE(a1->fwdMacLineGap)
     - LOBYTE(a1->fwdMacDescender)
     - LOBYTE(a1->fwdWinDescender)
     - LOBYTE(a1->fwdWinAscender);
  if ( (__int16)(a1->fwdMacAscender + a1->fwdMacLineGap - a1->fwdMacDescender - a1->fwdWinDescender - a1->fwdWinAscender) <= 0 )
    v8 = 0;
  a3[82] = v8;
  v9 = (unsigned __int16)(a1->fwdMacAscender
                        + a1->fwdMacLineGap
                        - a1->fwdMacDescender
                        - a1->fwdWinDescender
                        - a1->fwdWinAscender) >> 8;
  if ( (__int16)(a1->fwdMacAscender + a1->fwdMacLineGap - a1->fwdMacDescender - a1->fwdWinDescender - a1->fwdWinAscender) <= 0 )
    v9 = 0;
  a3[83] = v9;
  a3[84] = -((a1->fsSelection & 1) != 0);
  a3[85] = -((a1->fsSelection & 2) != 0);
  a3[86] = -((a1->fsSelection & 0x10) != 0);
  a3[87] = a1->usWinWeight;
  a3[88] = HIBYTE(a1->usWinWeight);
  a3[89] = a1->jWinCharSet;
  *((_WORD *)a3 + 45) = 0;
  *((_WORD *)a3 + 46) = a1->fwdWinAscender + a1->fwdWinDescender;
  a3[94] = a1->jWinPitchAndFamily & 0xF0 | (a1->flInfo >> 1) & 2 | ((a1->flInfo & 1) != 0 ? 6 : 0) | ((a1->flInfo & 0x401000) == 0);
  fwdAveCharWidth = a1->fwdAveCharWidth;
  if ( !fwdAveCharWidth )
    fwdAveCharWidth = a1->fwdMaxCharInc / 2;
  a3[95] = fwdAveCharWidth;
  v11 = a1->fwdAveCharWidth;
  if ( !v11 )
    v11 = a1->fwdMaxCharInc / 2;
  v12 = (CHAR *)(a3 + 118);
  a3[96] = HIBYTE(v11);
  a3[97] = a1->fwdMaxCharInc;
  a3[98] = HIBYTE(a1->fwdMaxCharInc);
  a3[99] = a1->chFirstChar;
  a3[100] = a1->chLastChar;
  *(_QWORD *)(a3 + 101) = 513LL;
  *(_DWORD *)(a3 + 109) = 118;
  a3[113] = a1->fwdLowestPPEm;
  a3[114] = HIBYTE(a1->fwdLowestPPEm);
  a3[115] = a1->lCharBias;
  a3[116] = BYTE1(a1->lCharBias);
  v13 = (const WCHAR *)((char *)a1 + a1->dpwszFamilyName);
  v14 = -1LL;
  v15 = -1LL;
  do
    ++v15;
  while ( v13[v15] );
  RtlUnicodeToMultiByteN(v12, 0x20u, 0LL, v13, 2 * v15 + 2);
  v12[31] = 0;
  v16 = -1LL;
  do
    ++v16;
  while ( v12[v16] );
  v17 = &v12[v16 + 1];
  v18 = -1LL;
  v19 = (const WCHAR *)((char *)a1 + a1->dpwszFaceName);
  do
    ++v18;
  while ( v19[v18] );
  RtlUnicodeToMultiByteN(&v12[v16 + 1], 0x40u, 0LL, v19, 2 * v18 + 2);
  v17[63] = 0;
  v20 = -1LL;
  do
    ++v20;
  while ( v17[v20] );
  v21 = &v17[v20];
  v22 = (const WCHAR *)((char *)a1 + a1->dpwszStyleName);
  v23 = -1LL;
  do
    ++v23;
  while ( v22[v23] );
  RtlUnicodeToMultiByteN(v21 + 1, 0x20u, 0LL, v22, 2 * v23 + 2);
  v21[32] = 0;
  do
    ++v14;
  while ( v21[v14 + 1] );
  return (unsigned int)(v14 + 119 + v20 + v16 + 2);
}
