/*
 * XREFs of ?GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x14016CDE0
 * Callers:
 *     NtGdiGetBoundsRect @ 0x14016CD20 (NtGdiGetBoundsRect.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z @ 0x1400A02A8 (-bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepGetBoundsRect(struct XDCOBJ *this, struct tagRECT *a2, __int16 a3)
{
  char v3; // bl
  __int64 v5; // rcx
  char v6; // r12
  unsigned int v8; // edi
  struct tagRECT *v9; // r14
  struct tagRECT *v10; // rdx
  __m128i v12; // xmm1
  __int64 v13; // rcx
  int v14; // eax
  LONG v15; // edx
  LONG v16; // r9d
  int v17; // eax
  LONG v18; // ecx
  LONG v19; // r10d
  LONG left; // eax
  LONG right; // eax
  LONG top; // eax
  LONG bottom; // eax
  __int64 v24; // r9
  __int128 v25; // xmm0
  LONG x; // ecx
  LONG v27; // eax
  LONG v28; // edx
  LONG v29; // r8d
  LONG v30; // eax
  LONG v31; // r9d
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  LONG y; // edx
  LONG v38; // r8d
  LONG v39; // ecx
  LONG v40; // eax
  LONG v41; // eax
  LONG v42; // r9d
  LONG v43; // eax
  LONG v44; // eax
  LONG v45; // eax
  LONG v46; // eax
  LONG v47; // eax
  __int64 v48; // [rsp+28h] [rbp-91h] BYREF
  _BYTE v49[144]; // [rsp+30h] [rbp-89h] BYREF
  struct _POINTL v50[2]; // [rsp+C0h] [rbp+7h] BYREF
  LONG v51; // [rsp+D0h] [rbp+17h]
  LONG v52; // [rsp+D4h] [rbp+1Bh]
  LONG v53; // [rsp+D8h] [rbp+1Fh]
  LONG v54; // [rsp+DCh] [rbp+23h]

  v3 = 0;
  v5 = *(_QWORD *)this;
  v6 = a3;
  v8 = 3;
  v9 = 0LL;
  if ( a3 < 0 )
  {
    v9 = (struct tagRECT *)(v5 + 1064);
    goto LABEL_3;
  }
  if ( (a3 & 0x4000) == 0 )
  {
    if ( IsRectEmptyInl((const struct tagRECT *)(v5 + 1096)) )
      return 1;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v49);
    if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v49, this, 0) )
    {
      v8 = XDCOBJ::bFullScreen(this) != 0;
      goto LABEL_25;
    }
    v12 = *(__m128i *)((char *)XDCOBJ::prgnEffRao((DC **)this) + 52);
    v9 = (struct tagRECT *)(*(_QWORD *)this + 1096LL);
    v13 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 1;
    v14 = *(_DWORD *)(*(_QWORD *)this + 8 * v13 + 1016);
    v15 = _mm_cvtsi128_si32(v12) - v14;
    v16 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 8)) - v14;
    v17 = *(_DWORD *)(*(_QWORD *)this + 8 * v13 + 1020);
    v18 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4)) - v17;
    v19 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 12)) - v17;
    left = v9->left;
    if ( v9->left <= v15 )
      left = v15;
    a2->left = left;
    right = v9->right;
    if ( right >= v16 )
      right = v16;
    a2->right = right;
    top = v9->top;
    if ( top <= v18 )
      top = v18;
    a2->top = top;
    bottom = v9->bottom;
    if ( bottom >= v19 )
      bottom = v19;
    a2->bottom = bottom;
    DC::QuickInitXform(*(_QWORD *)this, &v48, 1026LL);
    if ( v48 )
    {
      if ( (*(_BYTE *)(v48 + 32) & 1) != 0 )
      {
        if ( (*(_BYTE *)(v48 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v48, (__int64)a2, 2LL) )
          v3 = 1;
        v8 = v3 != 0 ? 3 : 0;
        goto LABEL_25;
      }
      v25 = (__int128)*a2;
      v51 = a2->left;
      v52 = a2->bottom;
      v53 = a2->right;
      v54 = a2->top;
      *(_OWORD *)&v50[0].x = v25;
      if ( EXFORMOBJ::bXform((EXFORMOBJ *)&v48, v50, 4LL, v24) )
      {
        x = v50[1].x;
        v27 = v50[1].x;
        v28 = v50[0].x;
        v29 = v51;
        if ( v50[0].x < v50[1].x )
          v27 = v50[0].x;
        if ( v27 >= v51 )
        {
          v30 = v51;
        }
        else
        {
          v30 = v50[1].x;
          if ( v50[0].x < v50[1].x )
            v30 = v50[0].x;
        }
        v31 = v53;
        if ( v30 >= v53 )
        {
          v33 = v53;
        }
        else
        {
          v32 = v50[1].x;
          if ( v50[0].x < v50[1].x )
            v32 = v50[0].x;
          if ( v32 >= v51 )
          {
            v33 = v51;
          }
          else
          {
            v33 = v50[1].x;
            if ( v50[0].x < v50[1].x )
              v33 = v50[0].x;
          }
        }
        a2->left = v33;
        v34 = x;
        if ( v28 > x )
          v34 = v28;
        if ( v34 <= v29 )
        {
          v35 = v29;
        }
        else
        {
          v35 = x;
          if ( v28 > x )
            v35 = v28;
        }
        if ( v35 <= v31 )
        {
          x = v31;
        }
        else
        {
          v36 = x;
          if ( v28 > x )
            v36 = v28;
          if ( v36 <= v29 )
          {
            x = v29;
          }
          else if ( v28 > x )
          {
            x = v28;
          }
        }
        y = v50[0].y;
        v38 = v52;
        a2->right = x;
        v39 = v50[1].y;
        v40 = v50[1].y;
        if ( y < v50[1].y )
          v40 = y;
        if ( v40 >= v38 )
        {
          v41 = v38;
        }
        else
        {
          v41 = v50[1].y;
          if ( y < v50[1].y )
            v41 = y;
        }
        v42 = v54;
        if ( v41 >= v54 )
        {
          v44 = v54;
        }
        else
        {
          v43 = v50[1].y;
          if ( y < v50[1].y )
            v43 = y;
          if ( v43 >= v38 )
          {
            v44 = v38;
          }
          else
          {
            v44 = v50[1].y;
            if ( y < v50[1].y )
              v44 = y;
          }
        }
        a2->top = v44;
        v45 = v39;
        if ( y > v39 )
          v45 = y;
        if ( v45 <= v38 )
        {
          v46 = v38;
        }
        else
        {
          v46 = v39;
          if ( y > v39 )
            v46 = y;
        }
        if ( v46 <= v42 )
        {
          v39 = v42;
        }
        else
        {
          v47 = v39;
          if ( y > v39 )
            v47 = y;
          if ( v47 <= v38 )
          {
            v39 = v38;
          }
          else if ( y > v39 )
          {
            v39 = y;
          }
        }
        a2->bottom = v39;
LABEL_25:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v49);
        if ( v8 != 3 )
          return v8;
        goto LABEL_5;
      }
    }
    v8 = 0;
    goto LABEL_25;
  }
  v9 = (struct tagRECT *)(v5 + 1080);
LABEL_3:
  if ( IsRectEmptyInl(v9) )
    return 1;
  *v10 = *v9;
LABEL_5:
  if ( (v6 & 1) != 0 )
  {
    v9->top = 0x7FFFFFFF;
    v9->left = 0x7FFFFFFF;
    v9->bottom = 0x80000000;
    v9->right = 0x80000000;
  }
  return v8;
}
