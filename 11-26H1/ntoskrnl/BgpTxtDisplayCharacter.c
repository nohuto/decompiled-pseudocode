/*
 * XREFs of BgpTxtDisplayCharacter @ 0x1404A6714
 * Callers:
 *     BgpDisplayCharacterEx @ 0x14071A980 (BgpDisplayCharacterEx.c)
 *     AnFwDisplayProgressIndicator @ 0x140C57380 (AnFwDisplayProgressIndicator.c)
 *     AnFwpProgressAnimationManual @ 0x140C57650 (AnFwpProgressAnimationManual.c)
 *     AnFwpProgressIndicatorTimer @ 0x140C5A340 (AnFwpProgressIndicatorTimer.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     BgpGxConvertRectangleEx @ 0x14048B3C0 (BgpGxConvertRectangleEx.c)
 *     BgpRasPrintGlyph @ 0x1404A69C8 (BgpRasPrintGlyph.c)
 *     BgpGxFillRectangle @ 0x1404A6E34 (BgpGxFillRectangle.c)
 *     BgpGxDrawRectangle @ 0x1404B947C (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x1404B98EC (BgpGetBitsPerPixel.c)
 *     TxtpGetCacheEntry @ 0x1404D59A4 (TxtpGetCacheEntry.c)
 *     BgpRasGetGlyphTextCellDimensions @ 0x14071D6A8 (BgpRasGetGlyphTextCellDimensions.c)
 *     BgpGxBlendRectangle @ 0x140C577E0 (BgpGxBlendRectangle.c)
 *     TxtpJustifyRectangle @ 0x140C581D0 (TxtpJustifyRectangle.c)
 *     TxtpAddCacheEntry @ 0x140C587F0 (TxtpAddCacheEntry.c)
 *     BgpGxRectangleDestroy @ 0x140C59414 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpTxtDisplayCharacter(__int64 a1, __int64 a2, char a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // r8d
  __int64 v7; // rbx
  __int64 v8; // rcx
  int *v9; // r14
  unsigned int *v10; // r13
  __int64 v11; // r12
  char v12; // r15
  int v13; // eax
  int v14; // esi
  char v15; // di
  __int64 CacheEntry; // rax
  int v17; // ecx
  int v18; // eax
  __int64 v19; // r11
  int v20; // eax
  unsigned int BitsPerPixel; // eax
  int v23; // [rsp+58h] [rbp-41h] BYREF
  int v24; // [rsp+5Ch] [rbp-3Dh]
  __int64 v25; // [rsp+60h] [rbp-39h] BYREF
  __int64 v26; // [rsp+68h] [rbp-31h]
  int v27; // [rsp+70h] [rbp-29h]
  int v28; // [rsp+74h] [rbp-25h]
  __int64 v29; // [rsp+78h] [rbp-21h] BYREF
  __int64 v30; // [rsp+80h] [rbp-19h] BYREF
  __int64 v31; // [rsp+88h] [rbp-11h] BYREF
  __int64 v32; // [rsp+90h] [rbp-9h]
  unsigned __int16 v34; // [rsp+F0h] [rbp+57h]
  char v38; // [rsp+110h] [rbp+77h]

  v34 = a2;
  v29 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v32 = *(_QWORD *)(a1 + 24);
  v8 = 0LL;
  v24 = 0;
  v9 = *(int **)(a1 + 32);
  v10 = (unsigned int *)(a1 + 40);
  v11 = 0LL;
  v12 = *(_BYTE *)(a1 + 60) & 1;
  v26 = 0LL;
  v13 = 0;
  v25 = 0LL;
  v14 = 0;
  v27 = 0;
  v28 = 0;
  v15 = v12;
  v30 = 0LL;
  v31 = 0LL;
  v38 = 0;
  v23 = 0;
  if ( (unsigned __int16)a2 < 0x20u )
    goto LABEL_30;
  if ( v12 )
  {
    CacheEntry = TxtpGetCacheEntry(&TxtpTextCache, a2, v10);
    v26 = CacheEntry;
    if ( CacheEntry )
    {
      v7 = *(_QWORD *)(CacheEntry + 48);
      v15 = 0;
      goto LABEL_23;
    }
  }
  BgpGxFillRectangle(v9, *v10);
  v28 = v9[1];
  v27 = *v9;
  v18 = BgpRasPrintGlyph(v17, (_DWORD)v10, v34, v25, HIDWORD(v25), 1, (__int64)&v23);
  v14 = v18;
  if ( v18 >= 0 )
  {
    if ( !v12 )
    {
      if ( !v10 )
        return 3221225485LL;
      BgpRasGetGlyphTextCellDimensions(v10, (char *)&v29 + 4, &v29);
      v14 = 0;
      v24 = HIDWORD(v29);
      *v9 = HIDWORD(v29);
      v9[1] = v23;
      v38 = 1;
    }
    if ( v32 )
    {
      TxtpJustifyRectangle(a1, a1 + 8, &v25);
      v20 = BgpGxBlendRectangle(v19, v9, &v25, &v30);
      v7 = v30;
      v14 = v20;
      v15 = v12;
      if ( v20 < 0 )
        goto LABEL_28;
    }
    else
    {
      v7 = (__int64)v9;
    }
    v15 = v12;
    if ( !v12 )
      goto LABEL_23;
    BitsPerPixel = BgpGetBitsPerPixel();
    if ( (int *)v7 != v9 && BitsPerPixel == *(_DWORD *)(v7 + 8) )
    {
      v11 = v7;
LABEL_23:
      HIDWORD(v25) = *(_DWORD *)(a1 + 4);
      LODWORD(v25) = *(_DWORD *)a1 + v25;
      if ( (a3 & 1) != 0
        || (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x1000000) != 0
        || (v14 = BgpGxDrawRectangle(v7, &v25), v14 >= 0) )
      {
        if ( v15 )
          v14 = TxtpAddCacheEntry(&TxtpTextCache, v34, v10, v11);
      }
      goto LABEL_28;
    }
    v14 = BgpGxConvertRectangleEx(v7, BitsPerPixel, &v31, 0);
    if ( v14 >= 0 )
    {
      if ( (int *)v7 != v9 )
        BgpGxRectangleDestroy(v7);
      v11 = v31;
      v7 = v31;
      goto LABEL_23;
    }
LABEL_28:
    v6 = v24;
    goto LABEL_29;
  }
  DbgPrintEx(0x65u, 0, "BGFX internal font error %x char %x!\n", v18, v34);
  v6 = 0;
  v15 = v12;
LABEL_29:
  v8 = v26;
  v13 = v23;
LABEL_30:
  if ( a4 )
    *a4 = v13;
  if ( a5 )
    *a5 = v6;
  if ( (int *)v7 != v9 && !v8 && (!v15 || v14 < 0) && v7 )
    BgpGxRectangleDestroy(v7);
  if ( v38 )
  {
    *v9 = v27;
    v9[1] = v28;
  }
  return (unsigned int)v14;
}
