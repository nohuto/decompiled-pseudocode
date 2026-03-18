/*
 * XREFs of ?GrepSetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x1401A8A60
 * Callers:
 *     NtGdiSetBoundsRect @ 0x1401A8950 (NtGdiSetBoundsRect.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z @ 0x1400781A0 (-bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1401A8D4C (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepSetBoundsRect(struct XDCOBJ *a1, struct tagRECT *a2, __int16 a3)
{
  __int64 v4; // r8
  unsigned int v5; // edi
  int v7; // ebx
  __int64 v8; // rax
  _DWORD *v9; // r12
  BOOL v10; // eax
  int v11; // r8d
  _QWORD *v12; // r9
  unsigned __int8 v13; // si
  int v14; // edx
  unsigned int v15; // r13d
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
  int v40; // [rsp+20h] [rbp-40h]
  __int64 v41; // [rsp+30h] [rbp-30h] BYREF
  struct _POINTL v42[2]; // [rsp+38h] [rbp-28h] BYREF
  LONG left; // [rsp+48h] [rbp-18h]
  LONG bottom; // [rsp+4Ch] [rbp-14h]
  LONG right; // [rsp+50h] [rbp-10h]
  LONG top; // [rsp+54h] [rbp-Ch]

  v4 = *(_QWORD *)a1;
  v5 = 0;
  v40 = 0;
  if ( a3 < 0 )
  {
    v7 = 32;
    v8 = 1064LL;
  }
  else if ( (a3 & 0x4000) != 0 )
  {
    v7 = 64;
    v8 = 1080LL;
  }
  else
  {
    v7 = 128;
    v8 = 1096LL;
  }
  v9 = (_DWORD *)(v8 + v4);
  v10 = IsRectEmptyInl((const struct tagRECT *)(v8 + v4));
  v13 = 1;
  v15 = v11 | (v14 != 0 ? 4 : 8) | (v10 ? 1 : 3);
  if ( (a3 & 1) != 0 )
  {
    v9[1] = 0x7FFFFFFF;
    *v9 = 0x7FFFFFFF;
    v9[3] = 0x80000000;
    v9[2] = 0x80000000;
  }
  if ( (a3 & 2) == 0 )
    goto LABEL_7;
  if ( !v11 )
  {
    DC::QuickInitXform(*v12, &v41, 516LL);
    if ( (*(_BYTE *)(v41 + 32) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v41 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v41, (__int64)a2, 2LL) )
        v13 = 0;
      v40 = v13;
    }
    else
    {
      v17 = *a2;
      left = a2->left;
      bottom = a2->bottom;
      right = a2->right;
      top = a2->top;
      *(struct tagRECT *)&v42[0].x = v17;
      if ( EXFORMOBJ::bXform((EXFORMOBJ *)&v41, v42) )
      {
        x = v42[1].x;
        v19 = v42[1].x;
        v20 = v42[0].x;
        v21 = left;
        if ( v42[0].x < v42[1].x )
          v19 = v42[0].x;
        if ( v19 >= left )
        {
          v22 = left;
        }
        else
        {
          v22 = v42[1].x;
          if ( v42[0].x < v42[1].x )
            v22 = v42[0].x;
        }
        v23 = right;
        if ( v22 >= right )
        {
          v25 = right;
        }
        else
        {
          v24 = v42[1].x;
          if ( v42[0].x < v42[1].x )
            v24 = v42[0].x;
          if ( v24 >= left )
          {
            v25 = left;
          }
          else
          {
            v25 = v42[1].x;
            if ( v42[0].x < v42[1].x )
              v25 = v42[0].x;
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
        y = v42[0].y;
        v30 = bottom;
        a2->right = x;
        v31 = v42[1].y;
        v32 = v42[1].y;
        if ( y < v42[1].y )
          v32 = y;
        if ( v32 >= v30 )
        {
          v33 = v30;
        }
        else
        {
          v33 = v42[1].y;
          if ( y < v42[1].y )
            v33 = y;
        }
        v34 = top;
        if ( v33 >= top )
        {
          v36 = top;
        }
        else
        {
          v35 = v42[1].y;
          if ( y < v42[1].y )
            v35 = y;
          if ( v35 >= v30 )
          {
            v36 = v30;
          }
          else
          {
            v36 = v42[1].y;
            if ( y < v42[1].y )
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
      else
      {
        v40 = 1;
      }
    }
  }
  ERECTL::operator|=(v9, a2);
  if ( !v40 )
  {
LABEL_7:
    if ( (a3 & 4) != 0 )
      *(_DWORD *)(*v12 + 36LL) |= v7;
    if ( (a3 & 8) != 0 )
      *(_DWORD *)(*v12 + 36LL) &= ~v7;
    return v15;
  }
  return v5;
}
