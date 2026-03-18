/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x1401A91A0
 * Callers:
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x1401A90FC (-bRotate@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 * Callees:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z @ 0x14006BEDC (-bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14007BAF0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSurfaceEff@PROXYDCOBJ@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x14008011C (-pSurfaceEff@PROXYDCOBJ@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x140080170 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x140114094 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1401AACA8 (-vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1401AACE4 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1401AAD6C (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1402909EC (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@PEAU_POINTFIX@@@Z @ 0x14031E028 (-bCreateRegion@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z @ 0x14031E140 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x14031E398 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
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
  __int64 v17; // rsi
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
  unsigned int v30; // eax
  unsigned __int64 v31; // rcx
  unsigned int v32; // r9d
  unsigned int v33; // r8d
  unsigned int v34; // eax
  unsigned int v35; // ecx
  FIX v36; // eax
  unsigned int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // ebx
  int v40; // r8d
  __int64 v41; // rax
  int v42; // r10d
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  struct REGION *v49; // rax
  struct ECLIPOBJ *v50; // rdx
  __int64 v51; // rbx
  __int64 v52; // r9
  __int64 v53; // r10
  __int128 v54; // rax
  __int64 v55; // r8
  bool v56; // zf
  __int128 v57; // rax
  struct _POINTFIX v59; // rdx
  BOOL (__stdcall *v60)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // r15
  __int64 v61; // r13
  __int64 v62; // r14
  struct _POINTFIX v63; // r12
  __int64 v64; // r8
  struct SURFACE *v65; // rax
  __int64 v66; // [rsp+60h] [rbp-A0h] BYREF
  char v67; // [rsp+68h] [rbp-98h]
  int v68; // [rsp+6Ch] [rbp-94h]
  __m128i v69; // [rsp+70h] [rbp-90h] BYREF
  int v70; // [rsp+80h] [rbp-80h] BYREF
  int v71; // [rsp+84h] [rbp-7Ch]
  int v72; // [rsp+88h] [rbp-78h]
  int v73; // [rsp+8Ch] [rbp-74h]
  _BYTE v74[4]; // [rsp+90h] [rbp-70h] BYREF
  __m128i v75[3]; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v76; // [rsp+C8h] [rbp-38h]
  __int64 v77; // [rsp+E0h] [rbp-20h]
  int v78; // [rsp+E8h] [rbp-18h]
  int v79; // [rsp+110h] [rbp+10h]
  __int64 v80; // [rsp+120h] [rbp+20h]

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
          v32 = v30;
          if ( v31 > 0xFFFFFFFF )
            goto LABEL_9;
          v33 = v31 + v29;
          if ( (unsigned int)v31 + v29 < v29 )
            goto LABEL_9;
          v34 = *(_DWORD *)(*(_QWORD *)&this[8] + 64LL);
          if ( v33 >= v34 )
            goto LABEL_9;
          v35 = (v34 - v33) / v32;
          if ( v24 > v35 )
            this[20].y = this[19].y + v35;
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
    v36 = this[24].x;
    if ( v36 == 52428 || v36 == 43724 )
    {
      if ( !*(_QWORD *)(*(_QWORD *)a2 + 496LL) || !*(_QWORD *)(*(_QWORD *)a3 + 496LL) )
        return 1LL;
      BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&v70);
      v40 = v73 + 1;
      v41 = *(_QWORD *)a2;
      v42 = v72 + 1;
      ++v73;
      ++v72;
      if ( (*(_DWORD *)(v41 + 36) & 0xE0) != 0 )
      {
        XDCOBJ::vAccumulate(a2, (struct ERECTL *)&v70);
        v40 = v73;
        v42 = v72;
      }
      v43 = *(_QWORD *)a2;
      v44 = *(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1;
      this[12].x += 16 * *(_DWORD *)(*(_QWORD *)a2 + 8 * v44 + 1016);
      this[12].y += 16 * *(_DWORD *)(v43 + 8 * v44 + 1020);
      this[13].x += 16 * *(_DWORD *)(v43 + 8 * v44 + 1016);
      this[13].y += 16 * *(_DWORD *)(v43 + 8 * v44 + 1020);
      this[14].x += 16 * *(_DWORD *)(v43 + 8 * v44 + 1016);
      this[14].y += 16 * *(_DWORD *)(v43 + 8 * v44 + 1020);
      this[15].x += 16 * *(_DWORD *)(v43 + 8 * v44 + 1016);
      this[15].y += 16 * *(_DWORD *)(v43 + 8 * v44 + 1020);
      v45 = *(_QWORD *)a3;
      v46 = *(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1;
      this[19].x += *(_DWORD *)(*(_QWORD *)a3 + 8 * v46 + 1016);
      this[20].x += *(_DWORD *)(v45 + 8 * v46 + 1016);
      this[19].y += *(_DWORD *)(v45 + 8 * v46 + 1020);
      this[20].y += *(_DWORD *)(v45 + 8 * v46 + 1020);
      v47 = *(_QWORD *)a2;
      v48 = *(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1;
      v70 += *(_DWORD *)(*(_QWORD *)a2 + 8 * v48 + 1016);
      v72 = *(_DWORD *)(v47 + 8 * v48 + 1016) + v42;
      v71 += *(_DWORD *)(v47 + 8 * v48 + 1020);
      v73 = *(_DWORD *)(v47 + 8 * v48 + 1020) + v40;
      v49 = XDCOBJ::prgnEffRao((DC **)a2);
      v76 = 0LL;
      v77 = 0LL;
      v78 = 0;
      v79 = 1;
      v80 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v74, v49, (const struct ERECTL *)&v70, 0);
      if ( ERECTL::bEmpty((ERECTL *)v75) )
        return 1LL;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
      {
        v69 = v75[0];
        XDCOBJ::vAccumulateTight(a2, v50, &v69);
      }
      BLTRECORD::PROXYDCOBJ::pSurfaceEff(a3);
      BLTRECORD::PROXYDCOBJ::pSurfaceEff(a2);
      v51 = *(_QWORD *)(*(_QWORD *)&this[6] + 48LL);
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 1) != 0 )
      {
        BLTRECORD::PROXYDCOBJ::pSurfaceEff(a3);
        BLTRECORD::PROXYDCOBJ::pSurfaceEff(a2);
      }
      BLTRECORD::vMirror((BLTRECORD *)this, this + 12);
      v52 = this[12].x;
      v53 = this[12].y;
      v54 = (this[13].y - v53) * (__int128)(this[14].x - v52);
      v55 = v54;
      if ( (__int64)v54 >= 0 )
        v56 = *((_QWORD *)&v54 + 1) == 0LL;
      else
        v56 = *((_QWORD *)&v54 + 1) == -1LL;
      if ( !v56 )
        goto LABEL_9;
      v57 = (this[14].y - v53) * (__int128)(this[13].x - v52);
      if ( !((__int64)v57 >= 0 ? *((_QWORD *)&v57 + 1) == 0LL : *((_QWORD *)&v57 + 1) == -1LL) )
        goto LABEL_9;
      if ( v55 == (_QWORD)v57 )
      {
        return 1LL;
      }
      else
      {
        ++*(_DWORD *)(*(_QWORD *)&this[6] + 92LL);
        v59 = this[6];
        if ( (*(_DWORD *)(*(_QWORD *)&v59 + 112LL) & 4) != 0 )
          v60 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(v51 + 3240);
        else
          v60 = EngPlgBlt;
        v61 = *(_QWORD *)a2;
        v62 = 0LL;
        v63 = this[9];
        if ( *(__int16 *)(v61 + 178) >= 0 )
          v62 = v61 + 176;
        if ( this[24].x == 52428 )
        {
          v64 = 0LL;
        }
        else
        {
          v65 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
          v64 = ((unsigned __int64)v65 + 24) & -(__int64)(v65 != 0LL);
        }
        if ( v59 )
          v17 = *(_QWORD *)&v59 + 24LL;
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v60)(
                 v17,
                 (*(_QWORD *)&this[7] + 24LL) & -(__int64)(*(_QWORD *)&this[7] != 0LL),
                 v64,
                 v74,
                 v63,
                 v62,
                 v61 + 1192,
                 &this[12],
                 &this[19],
                 &this[21],
                 a5);
      }
    }
    else
    {
      v69.m128i_i64[0] = 0LL;
      v69.m128i_i8[8] = 0;
      v69.m128i_i32[3] = 0;
      v66 = 0LL;
      v67 = 0;
      v68 = 0;
      if ( (unsigned int)BLTRECORD::bRotate(
                           (BLTRECORD *)this,
                           a3,
                           (struct SURFMEM *)&v66,
                           (struct SURFMEM *)&v69,
                           a4,
                           a5)
        && (BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[16]),
            BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 12)) )
      {
        v37 = BLTRECORD::bBitBlt((BLTRECORD *)this, (DC **)a2, (struct SURFACE **)a3, a4);
        v38 = *(_QWORD *)a2;
        v39 = v37;
        *(_DWORD *)(v38 + 36) |= 0x10u;
        *(_QWORD *)(v38 + 1128) = 0LL;
      }
      else
      {
        v39 = 0;
      }
      SURFMEM::~SURFMEM((SURFMEM *)&v66);
      SURFMEM::~SURFMEM((SURFMEM *)&v69);
      return v39;
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
    v66 = 0LL;
    v67 = 0;
    v68 = 0;
    if ( (a4 & 0x10000) == 0 || (unsigned int)BLTRECORD::bRotate((BLTRECORD *)this, (struct SURFMEM *)&v66, a5) )
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
    SURFMEM::~SURFMEM((SURFMEM *)&v66);
    return v12;
  }
}
