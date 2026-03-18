/*
 * XREFs of ?GrepSetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x14016D260
 * Callers:
 *     NtGdiSetBoundsRect @ 0x14016D140 (NtGdiSetBoundsRect.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z @ 0x1400A02A8 (-bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x14016D52C (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepSetBoundsRect(struct XDCOBJ *a1, struct tagRECT *a2, __int16 a3)
{
  __int64 v3; // rax
  int v4; // r12d
  char v6; // r14
  struct tagRECT *v8; // rsi
  int v9; // edi
  BOOL v10; // eax
  int v11; // r8d
  int v12; // edx
  int v13; // ebx
  unsigned int v14; // ebx
  __int64 v16; // r9
  struct tagRECT v17; // xmm0
  LONG x; // ecx
  LONG v19; // eax
  LONG v20; // edx
  LONG v21; // r8d
  LONG v22; // eax
  LONG v23; // r9d
  LONG v24; // eax
  LONG v25; // eax
  LONG v26; // eax
  LONG v27; // eax
  LONG v28; // eax
  LONG y; // edx
  LONG v30; // r8d
  LONG v31; // ecx
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // r9d
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  LONG v38; // eax
  LONG v39; // eax
  __int64 v40; // [rsp+28h] [rbp-38h] BYREF
  struct _POINTL v41[2]; // [rsp+30h] [rbp-30h] BYREF
  LONG left; // [rsp+40h] [rbp-20h]
  LONG bottom; // [rsp+44h] [rbp-1Ch]
  LONG right; // [rsp+48h] [rbp-18h]
  LONG top; // [rsp+4Ch] [rbp-14h]

  v3 = *(_QWORD *)a1;
  v4 = 0;
  v6 = a3;
  if ( a3 < 0 )
  {
    v8 = (struct tagRECT *)(v3 + 1064);
    v9 = 32;
  }
  else if ( (a3 & 0x4000) != 0 )
  {
    v8 = (struct tagRECT *)(v3 + 1080);
    v9 = 64;
  }
  else
  {
    v8 = (struct tagRECT *)(v3 + 1096);
    v9 = 128;
  }
  v10 = IsRectEmptyInl(v8);
  if ( v12 )
    v13 = v10 ? 5 : 7;
  else
    v13 = v10 ? 9 : 11;
  v14 = v11 | v13;
  if ( (v6 & 1) != 0 )
  {
    v8->top = 0x7FFFFFFF;
    v8->left = 0x7FFFFFFF;
    v8->bottom = 0x80000000;
    v8->right = 0x80000000;
  }
  if ( (v6 & 2) == 0 )
    goto LABEL_9;
  if ( !v11 )
  {
    DC::QuickInitXform(*(_QWORD *)a1, &v40, 516LL);
    if ( (*(_BYTE *)(v40 + 32) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v40 + 32) & 0x43) != 0x43 && !(unsigned int)bCvtPts1(v40, (__int64)a2, 2LL) )
        goto LABEL_22;
    }
    else
    {
      v17 = *a2;
      left = a2->left;
      bottom = a2->bottom;
      right = a2->right;
      top = a2->top;
      *(struct tagRECT *)&v41[0].x = v17;
      if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v40, v41, 4LL, v16) )
      {
LABEL_22:
        v4 = 1;
        goto LABEL_19;
      }
      x = v41[1].x;
      v19 = v41[1].x;
      v20 = v41[0].x;
      v21 = left;
      if ( v41[0].x < v41[1].x )
        v19 = v41[0].x;
      if ( v19 >= left )
      {
        v22 = left;
      }
      else
      {
        v22 = v41[1].x;
        if ( v41[0].x < v41[1].x )
          v22 = v41[0].x;
      }
      v23 = right;
      if ( v22 >= right )
      {
        v25 = right;
      }
      else
      {
        v24 = v41[1].x;
        if ( v41[0].x < v41[1].x )
          v24 = v41[0].x;
        if ( v24 >= left )
        {
          v25 = left;
        }
        else
        {
          v25 = v41[1].x;
          if ( v41[0].x < v41[1].x )
            v25 = v41[0].x;
        }
      }
      a2->left = v25;
      v26 = x;
      if ( v20 > x )
        v26 = v20;
      if ( v26 <= v21 )
      {
        v27 = v21;
      }
      else
      {
        v27 = x;
        if ( v20 > x )
          v27 = v20;
      }
      if ( v27 <= v23 )
      {
        x = v23;
      }
      else
      {
        v28 = x;
        if ( v20 > x )
          v28 = v20;
        if ( v28 <= v21 )
        {
          x = v21;
        }
        else if ( v20 > x )
        {
          x = v20;
        }
      }
      y = v41[0].y;
      v30 = bottom;
      a2->right = x;
      v31 = v41[1].y;
      v32 = v41[1].y;
      if ( y < v41[1].y )
        v32 = y;
      if ( v32 >= v30 )
      {
        v33 = v30;
      }
      else
      {
        v33 = v41[1].y;
        if ( y < v41[1].y )
          v33 = y;
      }
      v34 = top;
      if ( v33 >= top )
      {
        v36 = top;
      }
      else
      {
        v35 = v41[1].y;
        if ( y < v41[1].y )
          v35 = y;
        if ( v35 >= v30 )
        {
          v36 = v30;
        }
        else
        {
          v36 = v41[1].y;
          if ( y < v41[1].y )
            v36 = y;
        }
      }
      a2->top = v36;
      v37 = v31;
      if ( y > v31 )
        v37 = y;
      if ( v37 <= v30 )
      {
        v38 = v30;
      }
      else
      {
        v38 = v31;
        if ( y > v31 )
          v38 = y;
      }
      if ( v38 <= v34 )
      {
        v31 = v34;
      }
      else
      {
        v39 = v31;
        if ( y > v31 )
          v39 = y;
        if ( v39 <= v30 )
        {
          v31 = v30;
        }
        else if ( y > v31 )
        {
          v31 = y;
        }
      }
      a2->bottom = v31;
    }
  }
LABEL_19:
  ERECTL::operator|=(v8, a2);
  if ( v4 )
    return 0;
LABEL_9:
  if ( (v6 & 4) != 0 )
    *(_DWORD *)(*(_QWORD *)a1 + 36LL) |= v9;
  if ( (v6 & 8) != 0 )
    *(_DWORD *)(*(_QWORD *)a1 + 36LL) &= ~v9;
  return v14;
}
