/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x14019DBC0
 * Callers:
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x14019DB48 (-bRotate@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 * Callees:
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140013B48 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSurfaceEff@PROXYDCOBJ@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x14007A170 (-pSurfaceEff@PROXYDCOBJ@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z @ 0x14007EF08 (-bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400A1960 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E810C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x14019E2E8 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x14019E304 (-vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x14019E340 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x14019E3C8 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x14026C4D0 (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@PEAU_POINTFIX@@@Z @ 0x140306AA0 (-bCreateRegion@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z @ 0x140306BB8 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x140306E18 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BLTRECORD::bRotate(
        struct _POINTFIX *this,
        struct BLTRECORD::PROXYDCOBJ *a2,
        struct BLTRECORD::PROXYDCOBJ *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  FIX *v9; // rdx
  FIX v10; // ecx
  int *v11; // rdx
  unsigned int v12; // esi
  struct _POINTFIX v13; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  char *v17; // rsi
  FIX *v18; // r9
  FIX v19; // ecx
  int *v20; // r9
  struct _POINTFIX v21; // rcx
  struct _POINTFIX v22; // rcx
  unsigned int v23; // r9d
  unsigned int v24; // r10d
  unsigned int v25; // r11d
  unsigned int x; // r8d
  unsigned int v27; // edx
  __int64 y; // r12
  unsigned int v29; // edx
  unsigned int v30; // r8d
  unsigned __int64 v31; // r9
  unsigned int v32; // r11d
  unsigned int v33; // eax
  unsigned int v34; // ecx
  FIX v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rcx
  unsigned int v38; // ebx
  int v39; // r8d
  __int64 v40; // rax
  int v41; // r10d
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct REGION *v48; // rdx
  struct ECLIPOBJ *v49; // rdx
  __int64 v50; // rbx
  __int64 v51; // r9
  __int64 v52; // r10
  __int64 v53; // rax
  __int64 v54; // rcx
  __int128 v55; // rax
  __int64 v56; // r8
  bool v57; // zf
  __int64 v58; // rax
  __int64 v59; // rcx
  __int128 v60; // rax
  struct _POINTFIX v62; // r8
  BOOL (__stdcall *v63)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // r11
  __int64 v64; // rax
  __int64 v65; // r10
  __int16 v66; // cx
  __int64 v67; // r14
  __int64 v68; // rax
  struct SURFACE *v69; // rax
  struct _POINTFIX v70; // [rsp+60h] [rbp-A0h] BYREF
  char v71; // [rsp+68h] [rbp-98h]
  int v72; // [rsp+6Ch] [rbp-94h]
  __m128i v73; // [rsp+70h] [rbp-90h] BYREF
  int v74; // [rsp+80h] [rbp-80h] BYREF
  int v75; // [rsp+84h] [rbp-7Ch]
  int v76; // [rsp+88h] [rbp-78h]
  int v77; // [rsp+8Ch] [rbp-74h]
  _BYTE v78[4]; // [rsp+90h] [rbp-70h] BYREF
  __m128i v79[9]; // [rsp+94h] [rbp-6Ch] BYREF

  BLTRECORD::vExtrema((BLTRECORD *)this);
  if ( (a4 & 0xD4) != 0 )
  {
    v17 = 0LL;
    if ( !*(_QWORD *)a3 )
      return 0LL;
    BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[19]);
    ERECTL::vOrder((ERECTL *)&this[21]);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
    {
      v19 = *v18;
      *v18 = this[22].x;
      this[22].x = v19;
    }
    if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
    {
      if ( *v20 < 0 )
        goto LABEL_9;
      if ( this[21].y < 0 )
        goto LABEL_9;
      v21 = this[8];
      if ( this[22].x > *(_DWORD *)(*(_QWORD *)&v21 + 56LL) || this[22].y > *(_DWORD *)(*(_QWORD *)&v21 + 60LL) )
        goto LABEL_9;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
    {
      if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
      {
        v22 = this[8];
        v23 = this[20].x - this[19].x;
        v24 = this[20].y - this[19].y;
        v25 = *(_DWORD *)(*(_QWORD *)&v22 + 56LL);
        x = this[21].x;
        v27 = *(_DWORD *)(*(_QWORD *)&v22 + 60LL);
        y = (unsigned int)this[21].y;
        if ( v25 < x || v27 < (unsigned int)y || v25 - x < v23 || v27 - (unsigned int)y < v24 )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v22 + 96LL) != 1 || *(_WORD *)(*(_QWORD *)&v22 + 100LL) || v25 < v23 || x + 7 < x )
            goto LABEL_9;
          v29 = (x + 7) >> 3;
          v30 = -*(_DWORD *)(*(_QWORD *)&v22 + 88LL);
          if ( *(int *)(*(_QWORD *)&v22 + 88LL) > 0 )
            v30 = *(_DWORD *)(*(_QWORD *)&v22 + 88LL);
          v31 = y * v30;
          if ( v31 > 0xFFFFFFFF )
            goto LABEL_9;
          v32 = v31 + v29;
          if ( (unsigned int)v31 + v29 < v29 )
            goto LABEL_9;
          v33 = *(_DWORD *)(*(_QWORD *)&v22 + 64LL);
          if ( v32 >= v33 )
            goto LABEL_9;
          v34 = (v33 - v32) / v30;
          if ( v24 > v34 )
            this[20].y = this[19].y + v34;
        }
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) != *(_QWORD *)(*(_QWORD *)a3 + 48LL)
      && *((_WORD *)BLTRECORD::PROXYDCOBJ::pSurfaceEff(a2) + 50)
      && *((_WORD *)BLTRECORD::PROXYDCOBJ::pSurfaceEff(a3) + 50) )
    {
LABEL_9:
      EngSetLastError(0x57u);
      return 0LL;
    }
    v35 = this[24].x;
    if ( v35 == 52428 || v35 == 43724 )
    {
      if ( !*(_QWORD *)(*(_QWORD *)a2 + 496LL) || !*(_QWORD *)(*(_QWORD *)a3 + 496LL) )
        return 1LL;
      BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&v74);
      v39 = v77 + 1;
      v40 = *(_QWORD *)a2;
      v41 = v76 + 1;
      ++v77;
      ++v76;
      if ( (*(_DWORD *)(v40 + 36) & 0xE0) != 0 )
      {
        XDCOBJ::vAccumulate(a2, (struct ERECTL *)&v74);
        v39 = v77;
        v41 = v76;
      }
      v42 = *(_QWORD *)a2;
      v43 = *(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1;
      this[12].x += 16 * *(_DWORD *)(*(_QWORD *)a2 + 8 * v43 + 1016);
      this[12].y += 16 * *(_DWORD *)(v42 + 8 * v43 + 1020);
      this[13].x += 16 * *(_DWORD *)(v42 + 8 * v43 + 1016);
      this[13].y += 16 * *(_DWORD *)(v42 + 8 * v43 + 1020);
      this[14].x += 16 * *(_DWORD *)(v42 + 8 * v43 + 1016);
      this[14].y += 16 * *(_DWORD *)(v42 + 8 * v43 + 1020);
      this[15].x += 16 * *(_DWORD *)(v42 + 8 * v43 + 1016);
      this[15].y += 16 * *(_DWORD *)(v42 + 8 * v43 + 1020);
      v44 = *(_QWORD *)a3;
      v45 = *(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1;
      this[19].x += *(_DWORD *)(*(_QWORD *)a3 + 8 * v45 + 1016);
      this[20].x += *(_DWORD *)(v44 + 8 * v45 + 1016);
      this[19].y += *(_DWORD *)(v44 + 8 * v45 + 1020);
      this[20].y += *(_DWORD *)(v44 + 8 * v45 + 1020);
      v46 = *(_QWORD *)a2;
      v47 = *(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1;
      v74 += *(_DWORD *)(*(_QWORD *)a2 + 8 * v47 + 1016);
      v76 = *(_DWORD *)(v46 + 8 * v47 + 1016) + v41;
      v75 += *(_DWORD *)(v46 + 8 * v47 + 1020);
      v77 = *(_DWORD *)(v46 + 8 * v47 + 1020) + v39;
      XDCOBJ::prgnEffRao((DC **)a2);
      XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v78);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v78, v48, (const struct ERECTL *)&v74, 0);
      if ( ERECTL::bEmpty((ERECTL *)v79) )
        return 1LL;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
      {
        v73 = v79[0];
        XDCOBJ::vAccumulateTight(a2, v49, &v73);
      }
      BLTRECORD::PROXYDCOBJ::pSurfaceEff(a3);
      BLTRECORD::PROXYDCOBJ::pSurfaceEff(a2);
      v50 = *(_QWORD *)(*(_QWORD *)&this[6] + 48LL);
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 1) != 0 )
      {
        BLTRECORD::PROXYDCOBJ::pSurfaceEff(a3);
        BLTRECORD::PROXYDCOBJ::pSurfaceEff(a2);
      }
      BLTRECORD::vMirror((BLTRECORD *)this, this + 12);
      v51 = this[12].x;
      v52 = this[12].y;
      v53 = this[14].x - v51;
      v54 = this[13].y - v52;
      v70 = 0LL;
      v55 = v54 * (__int128)v53;
      v56 = v55;
      if ( (__int64)v55 >= 0 )
        v57 = *((_QWORD *)&v55 + 1) == 0LL;
      else
        v57 = *((_QWORD *)&v55 + 1) == -1LL;
      if ( !v57 )
        goto LABEL_9;
      v58 = this[13].x - v51;
      v59 = this[14].y - v52;
      v70 = 0LL;
      v60 = v59 * (__int128)v58;
      if ( !((__int64)v60 >= 0 ? *((_QWORD *)&v60 + 1) == 0LL : *((_QWORD *)&v60 + 1) == -1LL) )
        goto LABEL_9;
      if ( v56 == (_QWORD)v60 )
      {
        return 1LL;
      }
      else
      {
        ++*(_DWORD *)(*(_QWORD *)&this[6] + 92LL);
        v62 = this[6];
        if ( (*(_DWORD *)(*(_QWORD *)&v62 + 112LL) & 4) != 0 )
          v63 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(v50 + 3240);
        else
          v63 = EngPlgBlt;
        v64 = *(_QWORD *)a2;
        v65 = 0LL;
        v66 = *(_WORD *)(*(_QWORD *)a2 + 178LL);
        v67 = *(_QWORD *)a2 + 1192LL;
        v68 = v64 + 176;
        if ( v66 >= 0 )
          v65 = v68;
        v57 = this[24].x == 52428;
        v70 = this[9];
        if ( !v57 )
        {
          v69 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
          if ( v69 )
            v17 = (char *)v69 + 24;
        }
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v63)(
                 (*(_QWORD *)&v62 + 24LL) & -(__int64)(v62 != 0LL),
                 (*(_QWORD *)&this[7] + 24LL) & -(__int64)(*(_QWORD *)&this[7] != 0LL),
                 v17,
                 v78,
                 v70,
                 v65,
                 v67,
                 &this[12],
                 &this[19],
                 &this[21],
                 a5);
      }
    }
    else
    {
      v73.m128i_i64[0] = 0LL;
      v73.m128i_i8[8] = 0;
      v73.m128i_i32[3] = 0;
      v70 = 0LL;
      v71 = 0;
      v72 = 0;
      if ( (unsigned int)BLTRECORD::bRotate(
                           (BLTRECORD *)this,
                           a3,
                           (struct SURFMEM *)&v70,
                           (struct SURFMEM *)&v73,
                           a4,
                           a5)
        && (BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[16]),
            BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 12)) )
      {
        v36 = BLTRECORD::bBitBlt((BLTRECORD *)this, (DC **)a2, (struct SURFACE **)a3, a4);
        v37 = *(_QWORD *)a2;
        v38 = v36;
        *(_DWORD *)(v37 + 36) |= 0x10u;
        *(_QWORD *)(v37 + 1128) = 0LL;
      }
      else
      {
        v38 = 0;
      }
      SURFMEM::~SURFMEM((SURFMEM *)&v70);
      SURFMEM::~SURFMEM((SURFMEM *)&v73);
      return v38;
    }
  }
  else
  {
    BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[21]);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
    {
      v10 = *v9;
      *v9 = this[22].x;
      this[22].x = v10;
    }
    v12 = 0;
    if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
    {
      if ( *v11 < 0 )
        goto LABEL_9;
      if ( this[21].y < 0 )
        goto LABEL_9;
      v13 = this[8];
      if ( this[22].x > *(_DWORD *)(*(_QWORD *)&v13 + 56LL) || this[22].y > *(_DWORD *)(*(_QWORD *)&v13 + 60LL) )
        goto LABEL_9;
    }
    v70 = 0LL;
    v71 = 0;
    v72 = 0;
    if ( (a4 & 0x10000) == 0 || (unsigned int)BLTRECORD::bRotate((BLTRECORD *)this, (struct SURFMEM *)&v70, a5) )
    {
      BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[16]);
      if ( BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 12) )
      {
        v15 = BLTRECORD::bBitBlt((BLTRECORD *)this, (DC **)a2, (struct SURFACE **)a3, a4);
        v16 = *(_QWORD *)a2;
        *(_DWORD *)(v16 + 36) |= 0x10u;
        *(_QWORD *)(v16 + 1128) = 0LL;
        v12 = v15;
      }
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v70);
    return v12;
  }
}
