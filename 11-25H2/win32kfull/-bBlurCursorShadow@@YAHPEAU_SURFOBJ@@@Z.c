/*
 * XREFs of ?bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z @ 0x140195ED0
 * Callers:
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x140195AC8 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall bBlurCursorShadow(struct _SURFOBJ *a1)
{
  LONG cx; // eax
  _BYTE *v3; // r8
  char *pvScan0; // rsi
  _WORD **v5; // r10
  __int64 v6; // rdi
  _WORD *v7; // r9
  unsigned __int64 v8; // r14
  char *v9; // r11
  __int16 v10; // ax
  __int16 v11; // cx
  __int64 lDelta; // rcx
  unsigned int v13; // r9d
  unsigned int *v14; // r10
  int v15; // edi
  unsigned int *v16; // r11
  char *v17; // r12
  _WORD *v18; // rdx
  __int64 v19; // r14
  __int64 v20; // r15
  unsigned __int16 v21; // cx
  _WORD *v22; // r11
  _WORD *v23; // r14
  char *v24; // rax
  __int16 v25; // cx
  __int64 v27; // r8
  __int64 i; // rdx
  _BYTE *v29; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v30; // [rsp+28h] [rbp-D8h]
  _BYTE v31[128]; // [rsp+40h] [rbp-C0h] BYREF
  char v32; // [rsp+C0h] [rbp-40h] BYREF
  char v33; // [rsp+140h] [rbp+40h] BYREF

  cx = a1->sizlBitmap.cx;
  v30 = 0LL;
  if ( cx < 3 || a1->sizlBitmap.cy < 3 )
    return 0LL;
  if ( cx > 64 )
  {
    v29 = (_BYTE *)PALLOCMEM(6 * cx, 1886221383LL);
    v3 = v29;
    if ( v29 )
    {
      v27 = a1->sizlBitmap.cx;
      for ( i = 0LL; i < 2; ++i )
        *(_QWORD *)&v31[8 * i - 8] = &(&v29)[i][2 * v27];
      v3 = v29;
    }
  }
  else
  {
    *(_QWORD *)&v30 = &v32;
    v3 = v31;
    v29 = v31;
    *((_QWORD *)&v30 + 1) = &v33;
  }
  if ( !v3 )
    return 0LL;
  pvScan0 = (char *)a1->pvScan0;
  v5 = (_WORD **)&v29;
  v6 = 3LL;
  do
  {
    v7 = *v5;
    v8 = (unsigned __int64)&(*v5)[a1->sizlBitmap.cx - 2];
    if ( (unsigned __int64)*v5 < v8 )
    {
      v9 = pvScan0 + 4;
      do
      {
        v10 = (unsigned __int8)v9[7];
        v11 = (unsigned __int8)*(v9 - 1);
        v9 += 4;
        *v7++ = (unsigned __int8)*(v9 - 1) + v10 + v11;
      }
      while ( (unsigned __int64)v7 < v8 );
    }
    lDelta = a1->lDelta;
    ++v5;
    pvScan0 += lDelta;
    --v6;
  }
  while ( v6 );
  v13 = 0;
  v14 = (unsigned int *)((char *)a1->pvScan0 + lDelta + 4);
  v15 = a1->sizlBitmap.cy - 2;
  if ( a1->sizlBitmap.cy != 2 )
  {
    while ( 1 )
    {
      --v15;
      v16 = v14;
      v17 = (char *)&v14[a1->sizlBitmap.cx - 2];
      if ( v14 < (unsigned int *)v17 )
      {
        v18 = v3;
        v19 = *((_QWORD *)&v30 + 1) - (_QWORD)v3;
        v20 = v30 - (_QWORD)v3;
        do
        {
          v21 = *v18 + *(_WORD *)((char *)v18 + v19) + *(_WORD *)((char *)v18 + v20);
          ++v18;
          *v16++ = (v21 << 21) & 0xFF000000;
        }
        while ( v16 < (unsigned int *)v17 );
      }
      v14 = (unsigned int *)((char *)v14 + a1->lDelta);
      if ( !v15 )
        break;
      v22 = (&v29)[v13];
      v23 = &v22[a1->sizlBitmap.cx - 2];
      if ( v22 < v23 )
      {
        v24 = pvScan0 + 4;
        do
        {
          v25 = (unsigned __int8)v24[7] + (unsigned __int8)v24[3] + (unsigned __int8)*(v24 - 1);
          v24 += 4;
          *v22++ = v25;
        }
        while ( v22 < v23 );
      }
      pvScan0 += a1->lDelta;
      v13 = v13 + 1 < 3 ? v13 + 1 : 0;
    }
  }
  if ( v3 != v31 )
    Win32FreePool(v3);
  return 1LL;
}
