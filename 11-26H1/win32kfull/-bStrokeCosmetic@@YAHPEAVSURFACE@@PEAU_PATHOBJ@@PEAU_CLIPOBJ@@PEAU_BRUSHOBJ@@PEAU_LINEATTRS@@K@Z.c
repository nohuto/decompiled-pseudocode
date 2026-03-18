/*
 * XREFs of ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x140114F8C
 * Callers:
 *     EngStrokePath @ 0x1401160D0 (EngStrokePath.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140117E38 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     EngLineTo @ 0x1401874C0 (EngLineTo.c)
 * Callees:
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1400E1388 (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1400E1918 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     ?bLines@@YAHPEBU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEBQ6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1401154E8 (-bLines@@YAHPEBU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEBQ6AXPEAU_STRI.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bStrokeCosmetic(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *this,
        struct _BRUSHOBJ *a4,
        struct _LINEATTRS *a5,
        FIX a6)
{
  FLONG fl; // r8d
  unsigned int v11; // ebx
  PFLOAT_LONG pstyle; // r9
  unsigned int v13; // r8d
  ULONG iSolidColor; // ecx
  const struct _BMINFO *v15; // r15
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  void (*const near *const *v21)(struct _STRIP *, const struct _BMINFO *, struct _LINESTATE *); // rcx
  void (*const *v22)(struct _STRIP *, const struct _BMINFO *, struct _LINESTATE *); // r13
  struct _PATHOBJ v23; // rcx
  int v24; // eax
  int v25; // r9d
  int v26; // r12d
  unsigned int v27; // ecx
  char v28; // r8
  struct _POINTFIX *v29; // rdx
  struct _POINTFIX *v30; // r11
  struct _POINTFIX *v31; // r10
  unsigned int v32; // eax
  unsigned int v34; // eax
  unsigned int v35; // ebx
  BOOL v36; // edi
  _DWORD *v37; // rdx
  int v38; // edx
  ULONG cstyle; // ecx
  int v40; // r10d
  int *v41; // r8
  int *v42; // rcx
  int v43; // eax
  int v44; // r10d
  int e_low; // eax
  unsigned int v46; // ecx
  int v47; // eax
  int v48; // [rsp+60h] [rbp-A0h]
  struct _POINTFIX *v49[2]; // [rsp+68h] [rbp-98h] BYREF
  struct _POINTFIX v50; // [rsp+78h] [rbp-88h] BYREF
  unsigned int *v51; // [rsp+80h] [rbp-80h]
  struct _POINTFIX v52; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v53[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v54[16]; // [rsp+98h] [rbp-68h] BYREF
  int v55; // [rsp+A8h] [rbp-58h]
  int v56; // [rsp+ACh] [rbp-54h]
  unsigned int v57; // [rsp+B0h] [rbp-50h]
  int v58; // [rsp+B4h] [rbp-4Ch]
  _DWORD *v59; // [rsp+D0h] [rbp-30h]
  _BYTE *v60; // [rsp+D8h] [rbp-28h]
  BOOL v61; // [rsp+E4h] [rbp-1Ch]
  int v62; // [rsp+E8h] [rbp-18h]
  int v63; // [rsp+ECh] [rbp-14h]
  unsigned int v64; // [rsp+F0h] [rbp-10h]
  int v65; // [rsp+F4h] [rbp-Ch]
  __int64 v66; // [rsp+100h] [rbp+0h]
  struct _CLIPLINE v67[6]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v68[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v69[64]; // [rsp+210h] [rbp+110h] BYREF

  v50.x = a6;
  memset_0(v54, 0, 0x60uLL);
  fl = a5->fl;
  v66 = 0LL;
  v11 = 0;
  if ( (fl & 2) != 0 )
  {
    v65 = 1;
    v59 = &unk_140360B50;
    v11 = 1024;
    v60 = &unk_140360B50;
    v34 = HIWORD(a5->elStyleState.l) & 1;
    v62 = 1;
    v57 = v34;
    v63 = 1;
    v55 = 1;
    v56 = 2;
    v64 = 1;
  }
  else
  {
    pstyle = a5->pstyle;
    if ( pstyle )
    {
      v37 = (_DWORD *)*((_QWORD *)a1 + 6);
      if ( v37 )
      {
        v62 = v37[549];
        v63 = v37[550];
        v38 = v37[551];
      }
      else
      {
        v62 = 1;
        v38 = 3;
        v63 = 1;
      }
      cstyle = a5->cstyle;
      v64 = v38;
      v11 = 1024;
      v55 = 0;
      if ( cstyle > 0x10 )
        cstyle = 16;
      v40 = 0;
      v65 = cstyle;
      v61 = (fl & 4) != 0;
      if ( cstyle )
      {
        v41 = &v68[cstyle - 1];
        v42 = (int *)v69;
        while ( v41 >= v68 )
        {
          v43 = pstyle->l * v38;
          v40 += v43;
          *v41 = v43;
          *v42 = v43;
          --v41;
          ++v42;
          v55 = v40;
          ++pstyle;
        }
      }
      v44 = 2 * v40;
      v59 = v68;
      v60 = v69;
      e_low = LOWORD(a5->elStyleState.e);
      v46 = v38 * HIWORD(a5->elStyleState.l);
      v56 = v44;
      v47 = v46 + e_low;
      if ( v47 < 0 )
        v47 = 0;
      v57 = v47;
      if ( v47 >= v44 )
        v57 = v47 % v44;
    }
  }
  v13 = *((_DWORD *)a1 + 24);
  iSolidColor = a4->iSolidColor;
  v48 = *((_DWORD *)a1 + 22) / 4;
  v51 = (unsigned int *)*((_QWORD *)a1 + 10);
  v15 = (const struct _BMINFO *)((char *)&gabminfo + 32 * v13);
  if ( v13 == 1 )
  {
    iSolidColor |= (2 * iSolidColor) | (4 * (iSolidColor | (2 * iSolidColor)));
    goto LABEL_52;
  }
  if ( v13 == 2 )
  {
LABEL_52:
    iSolidColor |= 16 * iSolidColor;
    goto LABEL_53;
  }
  if ( v13 != 3 )
  {
    if ( v13 != 4 )
      goto LABEL_7;
    goto LABEL_54;
  }
LABEL_53:
  iSolidColor |= iSolidColor << 8;
LABEL_54:
  iSolidColor |= iSolidColor << 16;
LABEL_7:
  HIDWORD(v49[0]) = iSolidColor;
  LODWORD(v49[0]) = 0;
  LODWORD(v49[1]) = ~iSolidColor;
  HIDWORD(v49[1]) = -1;
  v16 = dword_140360B10[v50.x & 0xF];
  v17 = *((_DWORD *)v49 + (unsigned __int8)v16);
  v18 = *((_DWORD *)v49 + (v16 >> 8));
  v19 = 8LL;
  if ( v13 != 5 )
    v19 = 0LL;
  v53[0] = v17;
  v53[1] = v18;
  v20 = (v11 != 0 ? 4 : 0) | (unsigned __int64)v19;
  v21 = &gapfnStripCddCallback;
  if ( !*((_QWORD *)a1 + 79) )
    v21 = &gapfnStrip;
  v22 = (void (*const *)(struct _STRIP *, const struct _BMINFO *, struct _LINESTATE *))&v21[v20];
  if ( this && this->iDComplexity )
  {
    memset_0(v67, 0, 0xB8uLL);
    v35 = v11 | 0x40;
    XCLIPOBJ::vEnumPathStart((XCLIPOBJ *)this, a2, a1, a5);
    while ( 1 )
    {
      v36 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)&a2[9], a2, 0xB8u, v67, 1);
      if ( v67[0].c )
      {
        if ( (v35 & 0x400) != 0 )
          v58 = LOWORD(v67[0].lStyleState) + v64 * HIWORD(v67[0].lStyleState);
        if ( !(unsigned int)bLines(
                              v15,
                              &v67[0].ptfxA,
                              &v67[0].ptfxB,
                              v67[0].arun,
                              v67[0].c,
                              (struct _LINESTATE *)v53,
                              0LL,
                              v22,
                              v35,
                              v51,
                              v48,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
          break;
      }
      if ( !v36 )
        return 1LL;
    }
    return 0LL;
  }
  else
  {
    v23 = a2[1];
    a2->fl &= ~8u;
    *(_OWORD *)v49 = 0LL;
    v52 = 0LL;
    v50 = 0LL;
    *(_QWORD *)(*(_QWORD *)&v23 + 80LL) = *(_QWORD *)(*(_QWORD *)&v23 + 32LL);
    do
    {
      v24 = EPATHOBJ::bEnum((EPATHOBJ *)a2, (struct _PATHDATA *)v49);
      v25 = HIDWORD(v49[0]);
      v26 = v24;
      v27 = HIDWORD(v49[0]);
      if ( !HIDWORD(v49[0]) )
        break;
      v28 = (char)v49[0];
      v29 = v49[1];
      if ( ((__int64)v49[0] & 1) != 0 )
      {
        v30 = v49[1] + 1;
        v52 = *v49[1];
        v31 = v49[1];
        v27 = HIDWORD(v49[0]) - 1;
      }
      else
      {
        v31 = &v50;
        v30 = v49[1];
      }
      v32 = v57;
      if ( ((__int64)v49[0] & 4) != 0 )
        v32 = v66;
      v57 = v32;
      if ( v27 )
      {
        if ( !(unsigned int)bLines(
                              v15,
                              v31,
                              v30,
                              0LL,
                              v27,
                              (struct _LINESTATE *)v53,
                              0LL,
                              v22,
                              v11,
                              v51,
                              v48,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
          return 0LL;
        v29 = v49[1];
        v25 = HIDWORD(v49[0]);
        v28 = (char)v49[0];
      }
      v50 = v29[v25 - 1];
      if ( (v28 & 8) != 0
        && !(unsigned int)bLines(
                            v15,
                            &v50,
                            &v52,
                            0LL,
                            1u,
                            (struct _LINESTATE *)v53,
                            0LL,
                            v22,
                            v11,
                            v51,
                            v48,
                            *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
      {
        return 0LL;
      }
    }
    while ( v26 );
    if ( v11 )
      a5->elStyleState.l = (unsigned __int16)(v57 % v64) | ((unsigned __int16)(v57 / v64) << 16);
    return 1LL;
  }
}
