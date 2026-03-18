/*
 * XREFs of ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x14023ECD4
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140167254 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1403163E8 (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 */

void __fastcall vSpDeletePerPixelAlphaFromColorKey(struct _SURFOBJ *a1, int a2, struct _RECTL *a3, unsigned __int8 *a4)
{
  int v7; // r14d
  int v8; // edx
  int v9; // eax
  LONG cx; // r15d
  LONG cy; // r8d
  LONG lDelta; // r13d
  int v13; // r15d
  int v14; // r11d
  int v15; // r8d
  char *i; // r9
  int v17; // r10d
  char *v18; // rdx
  int v19; // eax
  char *v20; // [rsp+28h] [rbp-60h] BYREF
  LONG v21; // [rsp+30h] [rbp-58h]
  LONG v22; // [rsp+34h] [rbp-54h]
  int v23; // [rsp+38h] [rbp-50h]
  LONG v24; // [rsp+3Ch] [rbp-4Ch]
  int v25; // [rsp+40h] [rbp-48h]
  char *v26; // [rsp+48h] [rbp-40h]
  unsigned __int8 *v27; // [rsp+50h] [rbp-38h]

  v27 = a4;
  if ( a1->iBitmapFormat == 6 && !a1->iType )
  {
    v7 = a2 & 0xFF00 | ((unsigned __int8)a2 << 16) | BYTE2(a2);
    v23 = v7;
    v8 = 0;
    v20 = 0LL;
    v9 = 0;
    cx = a1->sizlBitmap.cx;
    v21 = cx;
    cy = a1->sizlBitmap.cy;
    v22 = cy;
    if ( a3 )
    {
      ERECTL::operator*=((int *)&v20, &a3->left);
      cy = v22;
      cx = v21;
      v9 = HIDWORD(v20);
      v8 = (int)v20;
    }
    lDelta = a1->lDelta;
    v24 = lDelta;
    v13 = cx - v8;
    v25 = v13;
    v14 = 0;
    v15 = cy - v9;
    for ( i = (char *)a1->pvScan0 + 4 * v8 + lDelta * v9; ; i += lDelta )
    {
      v20 = i;
      if ( !v15 )
        break;
      v17 = v13;
      v18 = i;
      while ( 1 )
      {
        v26 = v18;
        if ( !v17 )
          break;
        if ( !*(_DWORD *)v18 )
          *(_DWORD *)v18 = v7;
        if ( a4 )
          v18[3] = a4[v14];
        --v17;
        v18 += 4;
        v19 = v14 + 1;
        if ( !a4 )
          v19 = v14;
        v14 = v19;
      }
      --v15;
    }
    if ( a4 )
      Win32FreePool(a4);
  }
}
