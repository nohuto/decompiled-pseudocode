/*
 * XREFs of ??0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x140113AD4
 * Callers:
 *     NtGdiArcInternal @ 0x140110940 (NtGdiArcInternal.c)
 *     NtGdiRoundRect @ 0x140112B50 (NtGdiRoundRect.c)
 *     GreEllipse @ 0x140113870 (GreEllipse.c)
 *     ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14011683C (-GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 * Callees:
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x140111ED4 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x140114094 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

EBOX *__fastcall EBOX::EBOX(EBOX *this, struct XDCOBJ *a2, struct _RECTL *a3, struct _LINEATTRS *a4, int a5)
{
  __int128 v5; // xmm0
  int *v6; // r13
  int *v7; // r12
  struct XDCOBJ *v8; // r9
  int v9; // edx
  __int64 v11; // rax
  int v12; // ecx
  int *v13; // r14
  int v14; // edx
  int *v15; // rsi
  int v16; // r8d
  __int64 v17; // rcx
  _DWORD *v18; // r15
  int v19; // ebx
  FIX y; // r10d
  FIX x; // r11d
  FIX v22; // edx
  int v23; // r9d
  __int64 v24; // rax
  int v25; // r10d
  FIX v26; // r8d
  FIX v27; // r9d
  FIX v28; // ecx
  FIX v29; // edx
  int v30; // r11d
  int v31; // eax
  int v32; // eax
  int v34; // edx
  int v35; // r8d
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // edx
  int v41; // r10d
  int v42; // eax
  int v43; // r9d
  int v44; // r8d
  int v45; // r11d
  int v46; // eax
  int v47; // edx
  int v48; // ecx
  unsigned int v49; // ecx
  float v50; // xmm2_4
  int v51; // r10d
  float v52; // xmm3_4
  float v53; // xmm4_4
  int v54; // ecx
  struct XDCOBJ *v55; // [rsp+30h] [rbp-50h] BYREF
  int v56; // [rsp+38h] [rbp-48h]
  int v57; // [rsp+3Ch] [rbp-44h]
  struct _LINEATTRS *v58; // [rsp+40h] [rbp-40h]
  __int64 v59; // [rsp+48h] [rbp-38h] BYREF
  __int64 v60; // [rsp+50h] [rbp-30h] BYREF
  bool v61; // [rsp+58h] [rbp-28h]
  struct _POINTFIX v62; // [rsp+60h] [rbp-20h] BYREF
  FIX v63; // [rsp+68h] [rbp-18h]
  FIX v64; // [rsp+6Ch] [rbp-14h]

  v5 = (__int128)*a3;
  v6 = (int *)((char *)this + 64);
  *(_QWORD *)this = 0LL;
  v58 = a4;
  v7 = (int *)((char *)this + 72);
  *((_OWORD *)this + 4) = v5;
  v8 = a2;
  v55 = a2;
  v9 = *((_DWORD *)this + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 976LL) + 108LL) & 1) != 0 )
  {
    --v9;
    --*v7;
    *v6 = v9;
  }
  v11 = *(_QWORD *)(*(_QWORD *)v8 + 976LL);
  if ( *(_DWORD *)(v11 + 208) == 2 )
  {
    ERECTL::vOrder((EBOX *)((char *)this + 64));
    v15 = (int *)((char *)this + 68);
    v13 = (int *)((char *)this + 76);
    goto LABEL_8;
  }
  v12 = *v7;
  if ( (*(_DWORD *)(v11 + 340) & 0x100) == 0 )
  {
    if ( v9 <= v12 )
      goto LABEL_6;
    goto LABEL_55;
  }
  if ( v9 < v12 )
  {
LABEL_55:
    *v6 = *v7;
    *v7 = v9;
  }
LABEL_6:
  v13 = (int *)((char *)this + 76);
  v14 = *((_DWORD *)this + 19);
  v15 = (int *)((char *)this + 68);
  v16 = *((_DWORD *)this + 17);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 976LL) + 340LL) & 0x200) == 0 )
  {
    if ( v16 <= v14 )
      goto LABEL_8;
    goto LABEL_56;
  }
  if ( v16 < v14 )
  {
LABEL_56:
    *v13 = *((_DWORD *)this + 17);
    *v15 = v14;
  }
LABEL_8:
  if ( (*(_DWORD *)(*(_QWORD *)v8 + 248LL) & 4) != 0 )
  {
    v54 = *v15;
    *v15 = *v13;
    *v13 = v54;
  }
  v17 = *(_QWORD *)v8;
  v62 = *(struct _POINTFIX *)v6;
  v63 = v6[2];
  v64 = v6[3];
  v18 = *(_DWORD **)(v17 + 144);
  v19 = *(_DWORD *)(*(_QWORD *)(v17 + 976) + 208LL);
  DC::QuickInitXform(v17, &v59, 516LL);
  y = v62.y;
  x = v62.x;
  v61 = v19 != 2;
  v60 = v59;
  if ( (v18[10] & 0x10000) == 0 || (v58->fl & 1) == 0 )
  {
    v22 = v64;
LABEL_12:
    v23 = 0;
    LODWORD(v58) = 0;
    goto LABEL_13;
  }
  v49 = v18[42];
  LODWORD(v58) = 1;
  v50 = (float)(v49 >> 1);
  if ( (v49 & 1) != 0 )
    v50 = FP_0_5 + v50;
  efHalfDiff(v62.x, v63);
  LODWORD(v52) = efHalfDiff(v51, v64);
  if ( v53 < 0.0 )
    LODWORD(v53) ^= _xmm;
  if ( v52 < 0.0 )
    LODWORD(v52) ^= _xmm;
  if ( v50 > v53 || v50 > v52 )
  {
    *((_DWORD *)this + 1) = 1;
    goto LABEL_12;
  }
LABEL_13:
  v24 = *(_QWORD *)(*(_QWORD *)v55 + 976LL);
  if ( *(_DWORD *)(v24 + 208) == 2 || v23 || *((_DWORD *)this + 1) || (*(_DWORD *)(v24 + 340) & 0x20) != 0 )
  {
    *((_DWORD *)this + 2) = v63;
    *((_DWORD *)this + 7) = v22;
    *((_DWORD *)this + 3) = y;
    *((_DWORD *)this + 4) = x;
    *((_DWORD *)this + 5) = y;
    *((_DWORD *)this + 6) = x;
    EXFORMOBJR::bXformRound((EXFORMOBJR *)&v60, (const struct _POINTL *)this + 1, (struct _POINTFIX *)this + 1, 3uLL);
    if ( a5 )
    {
      if ( v18[44] == 5 )
      {
        v43 = *((_DWORD *)this + 3);
        v44 = *((_DWORD *)this + 6);
        v45 = *((_DWORD *)this + 7);
        LODWORD(v59) = *((_DWORD *)this + 2);
        if ( (((unsigned __int8)v45 | (unsigned __int8)(v44 | v43 | v59)) & 0xF) == 0 )
        {
          v46 = v59;
          v47 = 4;
          v48 = 4;
          if ( (int)v59 <= v44 )
            v48 = -4;
          *((_DWORD *)this + 4) -= v48;
          *((_DWORD *)this + 2) = v48 + v46;
          *((_DWORD *)this + 6) = v44 - v48;
          if ( v45 <= v43 )
            v47 = -4;
          *((_DWORD *)this + 5) -= v47;
          *((_DWORD *)this + 3) = v43 - v47;
          *((_DWORD *)this + 7) = v47 + v45;
        }
      }
    }
    if ( (_DWORD)v58 )
    {
      v34 = v18[42];
      v35 = v34;
      v36 = *v6;
      v37 = -v34;
      v57 = v34;
      v56 = v34;
      if ( *v7 < v36 )
      {
        v35 = -v34;
        v56 = -v34;
      }
      if ( *v13 < *v15 )
      {
        v34 = -v34;
        v57 = v37;
      }
      HIDWORD(v55) = v34;
      LODWORD(v55) = -v35;
      EXFORMOBJ::bXform((EXFORMOBJ *)&v60, (const struct _VECTORL *)&v55, (struct _VECTORFX *)&v55, 2uLL, 0);
      v38 = v56;
      v39 = HIDWORD(v55) + 1;
      v40 = ((int)v55 + 1) >> 1;
      *((_DWORD *)this + 2) += v40;
      v39 >>= 1;
      *((_DWORD *)this + 3) += v39;
      *((_DWORD *)this + 4) += (v38 + 1) >> 1;
      *((_DWORD *)this + 5) += (v57 + 1) >> 1;
      *((_DWORD *)this + 6) -= v40;
      *((_DWORD *)this + 7) -= v39;
    }
  }
  else
  {
    EXFORMOBJR::bXformRound((EXFORMOBJR *)&v60, (const struct _POINTL *)&v62, &v62, 2uLL);
    v25 = 16;
    if ( a5 && v18[44] == 5 )
    {
      v28 = v62.y;
      v26 = v64;
      v29 = v62.x;
      v27 = v63;
      if ( (((unsigned __int8)v63 | (unsigned __int8)(LOBYTE(v62.x) | v64 | LOBYTE(v62.y))) & 0xF) == 0 )
      {
        v41 = -4;
        v42 = -4;
        if ( v63 > v62.x )
          v42 = 4;
        v27 = v42 + v63;
        v29 = v62.x - v42;
        if ( v64 > v62.y )
          v41 = 4;
        v28 = v62.y - v41;
        v26 = v41 + v64;
        v25 = 32;
      }
    }
    else
    {
      v26 = v64;
      v27 = v63;
      v28 = v62.y;
      v29 = v62.x;
    }
    v30 = v26 - v28;
    v31 = v29 - v27;
    if ( v29 - v27 < 0 )
      v31 = v27 - v29;
    if ( v31 < v25 )
      goto LABEL_47;
    v32 = v28 - v26;
    if ( v30 > 0 )
      v32 = v26 - v28;
    if ( v32 < v25 )
    {
LABEL_47:
      *(_DWORD *)this = 1;
      return this;
    }
    if ( v27 - v29 <= 0 )
      v29 -= v25;
    else
      v27 -= v25;
    if ( v30 <= 0 )
      v28 -= v25;
    else
      v26 -= v25;
    *((_DWORD *)this + 2) = v27;
    *((_DWORD *)this + 3) = v28;
    *((_DWORD *)this + 4) = v29;
    *((_DWORD *)this + 5) = v28;
    *((_DWORD *)this + 6) = v29;
    *((_DWORD *)this + 7) = v26;
  }
  *((_QWORD *)this + 6) = *((_QWORD *)this + 1);
  *((_DWORD *)this + 12) -= *((_DWORD *)this + 4);
  *((_DWORD *)this + 13) -= *((_DWORD *)this + 5);
  *((_QWORD *)this + 7) = *((_QWORD *)this + 2);
  *((_DWORD *)this + 14) -= *((_DWORD *)this + 6);
  *((_DWORD *)this + 15) -= *((_DWORD *)this + 7);
  *((_QWORD *)this + 4) = *((_QWORD *)this + 3);
  *((_DWORD *)this + 8) += *((_DWORD *)this + 12);
  *((_DWORD *)this + 9) += *((_DWORD *)this + 13);
  *((_DWORD *)this + 12) = (*((_DWORD *)this + 12) + 1) >> 1;
  *((_DWORD *)this + 13) = (*((_DWORD *)this + 13) + 1) >> 1;
  *((_DWORD *)this + 14) = (*((_DWORD *)this + 14) + 1) >> 1;
  *((_DWORD *)this + 15) = (*((_DWORD *)this + 15) + 1) >> 1;
  *((_QWORD *)this + 5) = *((_QWORD *)this + 3);
  *((_DWORD *)this + 10) += *((_DWORD *)this + 12);
  *((_DWORD *)this + 11) += *((_DWORD *)this + 13);
  *((_DWORD *)this + 10) += *((_DWORD *)this + 14);
  *((_DWORD *)this + 11) += *((_DWORD *)this + 15);
  return this;
}
