/*
 * XREFs of ?bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z @ 0x14009D5A8
 * Callers:
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x14009EFCC (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bBlurCursorShadow(struct _SURFOBJ *a1)
{
  LONG cx; // eax
  _BYTE *v3; // r8
  __int64 v4; // r8
  __int64 i; // rdx
  char *pvScan0; // r9
  _WORD **v7; // rdi
  __int64 v8; // rsi
  char *v9; // r11
  _WORD *v10; // r10
  unsigned __int64 v11; // r14
  char *v12; // rax
  __int16 v13; // cx
  __int64 lDelta; // rcx
  unsigned int v15; // edi
  unsigned int *v16; // r10
  int v17; // r11d
  char *v18; // rcx
  char *v19; // r12
  unsigned int *v20; // r14
  char *v21; // r15
  _WORD *v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rsi
  unsigned __int16 v25; // cx
  _WORD *v26; // r9
  _WORD *v27; // rsi
  char *v28; // rax
  __int16 v29; // cx
  _BYTE *v31; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v32; // [rsp+28h] [rbp-D8h]
  _BYTE v33[128]; // [rsp+40h] [rbp-C0h] BYREF
  char v34; // [rsp+C0h] [rbp-40h] BYREF
  char v35; // [rsp+140h] [rbp+40h] BYREF

  cx = a1->sizlBitmap.cx;
  v32 = 0LL;
  if ( cx < 3 || a1->sizlBitmap.cy < 3 )
    return 0LL;
  if ( cx <= 64 )
  {
    *(_QWORD *)&v32 = &v34;
    v3 = v33;
    v31 = v33;
    *((_QWORD *)&v32 + 1) = &v35;
  }
  else
  {
    v31 = (_BYTE *)PALLOCMEM((unsigned int)(6 * cx), 1886221383LL);
    v3 = v31;
    if ( v31 )
    {
      v4 = a1->sizlBitmap.cx;
      for ( i = 0LL; i < 2; ++i )
        *(_QWORD *)&v33[8 * i - 8] = &(&v31)[i][2 * v4];
      v3 = v31;
    }
  }
  if ( !v3 )
    return 0LL;
  pvScan0 = (char *)a1->pvScan0;
  v7 = (_WORD **)&v31;
  v8 = 3LL;
  v9 = pvScan0 + 4;
  do
  {
    v10 = *v7;
    v11 = (unsigned __int64)&(*v7)[a1->sizlBitmap.cx - 2];
    if ( (unsigned __int64)*v7 < v11 )
    {
      v12 = v9;
      do
      {
        v13 = (unsigned __int8)v12[7] + (unsigned __int8)v12[3] + (unsigned __int8)*(v12 - 1);
        v12 += 4;
        *v10++ = v13;
      }
      while ( (unsigned __int64)v10 < v11 );
    }
    lDelta = a1->lDelta;
    ++v7;
    pvScan0 += lDelta;
    v9 += lDelta;
    --v8;
  }
  while ( v8 );
  v15 = 0;
  v16 = (unsigned int *)((char *)a1->pvScan0 + lDelta + 4);
  v17 = a1->sizlBitmap.cy - 2;
  if ( a1->sizlBitmap.cy != 2 )
  {
    v18 = pvScan0 + 4;
    while ( 1 )
    {
      --v17;
      v19 = v18;
      v20 = v16;
      v21 = (char *)&v16[a1->sizlBitmap.cx - 2];
      if ( v16 < (unsigned int *)v21 )
      {
        v22 = v3;
        v23 = *((_QWORD *)&v32 + 1) - (_QWORD)v3;
        v24 = v32 - (_QWORD)v3;
        do
        {
          v25 = *v22 + *(_WORD *)((char *)v22 + v23) + *(_WORD *)((char *)v22 + v24);
          ++v22;
          *v20++ = (v25 << 21) & 0xFF000000;
        }
        while ( v20 < (unsigned int *)v21 );
      }
      v16 = (unsigned int *)((char *)v16 + a1->lDelta);
      if ( !v17 )
        break;
      v26 = (&v31)[v15];
      v27 = &v26[a1->sizlBitmap.cx - 2];
      if ( v26 < v27 )
      {
        v28 = v19;
        do
        {
          v29 = (unsigned __int8)v28[7] + (unsigned __int8)v28[3] + (unsigned __int8)*(v28 - 1);
          v28 += 4;
          *v26++ = v29;
        }
        while ( v26 < v27 );
      }
      v18 = &v19[a1->lDelta];
      v15 = v15 + 1 < 3 ? v15 + 1 : 0;
    }
  }
  if ( v3 != v33 )
    Win32FreePool(v3);
  return 1LL;
}
