/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x14007F744
 * Callers:
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x14016BC94 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x14031D908 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333@Z @ 0x1400048C4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140015900 (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z @ 0x14006AB54 (-bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSurfaceEff@PROXYDCOBJ@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x14008011C (-pSurfaceEff@PROXYDCOBJ@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x140080170 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x1400B5808 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400BB8E8 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14016C418 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ?vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1401D4B48 (-vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KJJ@Z @ 0x140215C74 (-bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KJJ@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x14031E808 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BLTRECORD::bStretch(
        BLTRECORD *this,
        struct XDCOBJ *a2,
        struct BLTRECORD::PROXYDCOBJ *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  int v5; // eax
  int v7; // edx
  int v11; // eax
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r14
  int v15; // r8d
  __int64 v16; // rdi
  char v17; // r9
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  _DWORD *v26; // rcx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  _DWORD *v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct REGION *v42; // rax
  struct ECLIPOBJ *v43; // rdx
  _DWORD *v44; // rbx
  BOOL (__stdcall *v45)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // r15
  __int64 v46; // rdx
  bool v47; // cc
  int v48; // ecx
  int v49; // ecx
  __int64 v50; // r8
  __int64 v51; // rdi
  int v52; // r13d
  __int64 v53; // r12
  struct SURFACE *v54; // rax
  char v55; // dl
  int v56; // edx
  int v57; // ecx
  __int64 v58; // rax
  BLTRECORD *v59; // rcx
  int *v60; // rdx
  __int64 v61; // rcx
  unsigned int v62; // r14d
  __int64 v63; // rcx
  int v64; // r8d
  struct SURFACE *v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  int v70; // ecx
  int v71; // r8d
  char v72; // [rsp+70h] [rbp-90h]
  __m128i v73; // [rsp+78h] [rbp-88h] BYREF
  int v74; // [rsp+88h] [rbp-78h] BYREF
  int v75; // [rsp+8Ch] [rbp-74h] BYREF
  int v76; // [rsp+90h] [rbp-70h] BYREF
  int v77; // [rsp+94h] [rbp-6Ch] BYREF
  int v78; // [rsp+98h] [rbp-68h] BYREF
  int v79; // [rsp+9Ch] [rbp-64h] BYREF
  _DWORD v80[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v81[104]; // [rsp+B0h] [rbp-50h] BYREF
  struct SURFACE *v82; // [rsp+118h] [rbp+18h]
  _BYTE v83[112]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v84[4]; // [rsp+190h] [rbp+90h] BYREF
  __m128i v85[3]; // [rsp+194h] [rbp+94h] BYREF
  __int64 v86; // [rsp+1C8h] [rbp+C8h]
  __int64 v87; // [rsp+1E0h] [rbp+E0h]
  int v88; // [rsp+1E8h] [rbp+E8h]
  int v89; // [rsp+210h] [rbp+110h]
  __int64 v90; // [rsp+220h] [rbp+120h]

  v5 = *((_DWORD *)this + 34);
  v7 = *((_DWORD *)this + 32);
  if ( v7 > v5 )
  {
    *((_DWORD *)this + 32) = v5 + 1;
    *((_DWORD *)this + 34) = v7 + 1;
    *((_DWORD *)this + 49) ^= 8u;
  }
  v11 = *((_DWORD *)this + 35);
  v12 = *((_DWORD *)this + 33);
  if ( v12 > v11 )
  {
    *((_DWORD *)this + 33) = v11 + 1;
    *((_DWORD *)this + 35) = v12 + 1;
    *((_DWORD *)this + 49) ^= 0x10u;
  }
  if ( (a4 & 0xD4) != 0 )
  {
    v13 = *(_QWORD *)a3;
    v14 = 0LL;
    if ( !*(_QWORD *)a3 )
      goto LABEL_23;
    v15 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
    v16 = *(_QWORD *)(*((_QWORD *)this + 6) + 48LL);
    if ( (v15 & 0x200) == 0 || !v16 || (v17 = 1, (*(_DWORD *)(v16 + 40) & 0x20000) == 0) )
      v17 = 0;
    v72 = v17;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) != *(_QWORD *)(v13 + 48)
      && (v15 & 0x4000) == 0
      && !_bittest((const signed __int32 *)(v13 + 36), 0xEu)
      && !v17
      && (*((_WORD *)XDCOBJ::pSurfaceEff(a2) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(a2) + 3))
      && (*((_WORD *)BLTRECORD::PROXYDCOBJ::pSurfaceEff(a3) + 50)
       || *((_QWORD *)BLTRECORD::PROXYDCOBJ::pSurfaceEff(a3) + 3)) )
    {
      goto LABEL_23;
    }
    v18 = *((_DWORD *)this + 44);
    v19 = *((_DWORD *)this + 42);
    if ( v19 > v18 )
    {
      *((_DWORD *)this + 42) = v18 + 1;
      *((_DWORD *)this + 44) = v19 + 1;
    }
    v20 = *((_DWORD *)this + 45);
    v21 = *((_DWORD *)this + 43);
    if ( v21 > v20 )
    {
      *((_DWORD *)this + 43) = v20 + 1;
      *((_DWORD *)this + 45) = v21 + 1;
    }
    if ( (*((_DWORD *)this + 49) & 0x10000) != 0 )
    {
      if ( *((_QWORD *)this + 8) )
      {
        if ( *((int *)this + 42) < 0
          || *((int *)this + 43) < 0
          || (v66 = *((_QWORD *)this + 8), *((_DWORD *)this + 44) > *(_DWORD *)(v66 + 56))
          || *((_DWORD *)this + 45) > *(_DWORD *)(v66 + 60) )
        {
          if ( (unsigned int)dword_1403AAA30 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1403AAA30, 0x200000000000LL) )
          {
            v74 = *((_DWORD *)this + 41);
            v75 = *((_DWORD *)this + 40);
            v76 = *((_DWORD *)this + 39);
            v77 = *((_DWORD *)this + 38);
            v78 = *((_DWORD *)this + 45);
            v79 = *((_DWORD *)this + 44);
            v80[0] = *((_DWORD *)this + 43);
            v73.m128i_i32[0] = v69;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v67,
              (__int64)&unk_14037ABF9,
              v68,
              v69,
              (__int64)&v73,
              (__int64)v80,
              (__int64)&v79,
              (__int64)&v78,
              (__int64)&v77,
              (__int64)&v76,
              (__int64)&v75,
              (__int64)&v74);
          }
          goto LABEL_23;
        }
      }
    }
    v22 = *((_DWORD *)this + 40);
    v23 = *((_DWORD *)this + 38);
    if ( v23 > v22 )
    {
      *((_DWORD *)this + 38) = v22 + 1;
      *((_DWORD *)this + 40) = v23 + 1;
      *((_DWORD *)this + 49) ^= 8u;
    }
    v24 = *((_DWORD *)this + 41);
    v25 = *((_DWORD *)this + 39);
    if ( v25 > v24 )
    {
      *((_DWORD *)this + 39) = v24 + 1;
      *((_DWORD *)this + 41) = v25 + 1;
      *((_DWORD *)this + 49) ^= 0x10u;
    }
    if ( a5 != 4
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) != 2
      && !BLTRECORD::pSurfMskOut(this)
      && (v55 & 0x18) == 0 )
    {
      v56 = *((_DWORD *)this + 34) + *((_DWORD *)this + 38) - *((_DWORD *)this + 32) - *((_DWORD *)this + 40);
      v57 = *((_DWORD *)this + 35) + *((_DWORD *)this + 39) - *((_DWORD *)this + 41) - *((_DWORD *)this + 33);
      if ( v56 >= -1 && v56 <= 1 && (unsigned int)(v57 + 1) <= 2 )
        return BLTRECORD::bBitBlt(this, a2, a3, a4, v56, v57);
    }
    v26 = *(_DWORD **)a2;
    if ( !*(_QWORD *)(*(_QWORD *)a2 + 496LL) || !*(_QWORD *)(*(_QWORD *)a3 + 496LL) )
      return 1LL;
    v28 = v26[9];
    if ( (v28 & 0xE0) != 0 )
    {
      if ( (v28 & 0x20) != 0 )
      {
        v29 = *((_DWORD *)this + 32);
        if ( v29 < v26[266] )
          v26[266] = v29;
        v30 = *((_DWORD *)this + 33);
        if ( v30 < v26[267] )
          v26[267] = v30;
        v31 = *((_DWORD *)this + 34);
        if ( v31 > v26[268] )
          v26[268] = v31;
        v32 = *((_DWORD *)this + 35);
        if ( v32 > v26[269] )
          v26[269] = v32;
      }
      v33 = *(_DWORD **)a2;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x80u) != 0 )
      {
        v34 = *((_DWORD *)this + 32);
        if ( v34 < v33[274] )
          v33[274] = v34;
        v35 = *((_DWORD *)this + 33);
        if ( v35 < v33[275] )
          v33[275] = v35;
        v36 = *((_DWORD *)this + 34);
        if ( v36 > v33[276] )
          v33[276] = v36;
        v37 = *((_DWORD *)this + 35);
        if ( v37 > v33[277] )
          v33[277] = v37;
      }
    }
    v38 = *(_QWORD *)a2;
    v39 = *(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1;
    *((_DWORD *)this + 32) += *(_DWORD *)(*(_QWORD *)a2 + 8 * v39 + 1016);
    *((_DWORD *)this + 34) += *(_DWORD *)(v38 + 8 * v39 + 1016);
    *((_DWORD *)this + 33) += *(_DWORD *)(v38 + 8 * v39 + 1020);
    *((_DWORD *)this + 35) += *(_DWORD *)(v38 + 8 * v39 + 1020);
    v40 = *(_QWORD *)a3;
    v41 = *(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1;
    *((_DWORD *)this + 38) += *(_DWORD *)(*(_QWORD *)a3 + 8 * v41 + 1016);
    *((_DWORD *)this + 40) += *(_DWORD *)(v40 + 8 * v41 + 1016);
    *((_DWORD *)this + 39) += *(_DWORD *)(v40 + 8 * v41 + 1020);
    *((_DWORD *)this + 41) += *(_DWORD *)(v40 + 8 * v41 + 1020);
    v42 = XDCOBJ::prgnEffRao((DC **)a2);
    v86 = 0LL;
    v87 = 0LL;
    v88 = 0;
    v89 = 1;
    v90 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v84, v42, (BLTRECORD *)((char *)this + 128), 0);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v85) )
      return 1LL;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0
      && ((a4 & 0xE8) == 0 || (v58 = *((_QWORD *)this + 10)) != 0 && (*(_DWORD *)(v58 + 120) & 0x100) == 0) )
    {
      v73 = v85[0];
      XDCOBJ::vAccumulateTight(a2, v43, &v73);
    }
    BLTRECORD::PROXYDCOBJ::pSurfaceEff(a3);
    v44 = *(_DWORD **)(*((_QWORD *)this + 7) + 48LL);
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 1) != 0 )
      BLTRECORD::PROXYDCOBJ::pSurfaceEff(a3);
    if ( (*(_DWORD *)(*((_QWORD *)this + 6) + 112LL) & 0x2000) != 0 )
      v45 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v16 + 3232);
    else
      v45 = EngStretchBltROP;
    if ( v72 )
      goto LABEL_61;
    if ( a5 == 4 && (*(_BYTE *)(v16 + 1808) & 0x10) == 0 )
      v45 = EngStretchBltROP;
    v46 = *((_QWORD *)this + 7);
    if ( *(_WORD *)(v46 + 100) == 1 && v44 && (v44[10] & 0x20000) != 0 )
    {
      v70 = v44[644];
      if ( *((_DWORD *)this + 38) < v70 )
        goto LABEL_83;
      v71 = v44[645];
      if ( *((_DWORD *)this + 39) < v71 || *((_DWORD *)this + 40) > *(_DWORD *)(v46 + 56) + v70 )
        goto LABEL_83;
      v47 = *((_DWORD *)this + 41) <= v71 + *(_DWORD *)(v46 + 60);
    }
    else
    {
      if ( *((int *)this + 38) < 0 || *((int *)this + 39) < 0 || *((_DWORD *)this + 40) > *(_DWORD *)(v46 + 56) )
        goto LABEL_83;
      v47 = *((_DWORD *)this + 41) <= *(_DWORD *)(v46 + 60);
    }
    if ( v47 )
    {
LABEL_60:
      if ( *((_QWORD *)this + 6) == v46 && (unsigned int)bIntersect((char *)this + 152, (char *)this + 128) )
        v45 = EngStretchBltROP;
LABEL_61:
      if ( (*((_DWORD *)this + 49) & 8) != 0 )
      {
        v48 = *((_DWORD *)this + 32);
        *((_DWORD *)this + 32) = *((_DWORD *)this + 34);
        *((_DWORD *)this + 34) = v48;
      }
      if ( (*((_DWORD *)this + 49) & 0x10) != 0 )
      {
        v49 = *((_DWORD *)this + 33);
        *((_DWORD *)this + 33) = *((_DWORD *)this + 35);
        *((_DWORD *)this + 35) = v49;
      }
      v50 = 0LL;
      ++*(_DWORD *)(*((_QWORD *)this + 6) + 92LL);
      v51 = *(_QWORD *)a2;
      v52 = *((_DWORD *)this + 48);
      v53 = *((_QWORD *)this + 9);
      v73.m128i_i64[0] = *((_QWORD *)this + 10);
      if ( *(__int16 *)(v51 + 178) >= 0 )
        v50 = v51 + 176;
      if ( v52 != 52428 )
      {
        v54 = BLTRECORD::pSurfMskOut(this);
        v14 = ((unsigned __int64)v54 + 24) & -(__int64)(v54 != 0LL);
      }
      return ((__int64 (__fastcall *)(__int64, __int64, __int64, _BYTE *, __int64, __int64, __int64, char *, char *, char *, _DWORD, __int64, int))v45)(
               (*((_QWORD *)this + 6) + 24LL) & -(__int64)(*((_QWORD *)this + 6) != 0LL),
               (*((_QWORD *)this + 7) + 24LL) & -(__int64)(*((_QWORD *)this + 7) != 0LL),
               v14,
               v84,
               v53,
               v50,
               v51 + 1192,
               (char *)this + 128,
               (char *)this + 152,
               (char *)this + 168,
               a5,
               v73.m128i_i64[0],
               v52);
    }
LABEL_83:
    v45 = EngStretchBltROP;
    goto LABEL_60;
  }
  BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 168));
  v62 = 0;
  if ( BLTRECORD::pSurfMskOut(v59) )
  {
    if ( *v60 < 0
      || *(int *)(v61 + 172) < 0
      || (v63 = *(_QWORD *)(v61 + 64), *((_DWORD *)this + 44) > *(_DWORD *)(v63 + 56))
      || *((_DWORD *)this + 45) > *(_DWORD *)(v63 + 60) )
    {
LABEL_23:
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  v73.m128i_i64[0] = 0LL;
  v73.m128i_i8[8] = 0;
  v73.m128i_i32[3] = 0;
  if ( (a4 & 0x10000) == 0 || (unsigned int)BLTRECORD::bStretch(this, (struct SURFMEM *)&v73, a5) )
  {
    v64 = *((_DWORD *)this + 35) + *((_DWORD *)this + 39) - *((_DWORD *)this + 33);
    *((_DWORD *)this + 40) = *((_DWORD *)this + 34) + *((_DWORD *)this + 38) - *((_DWORD *)this + 32);
    *((_DWORD *)this + 41) = v64;
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v83, a2);
    v65 = XDCOBJ::pSurfaceEff(a2);
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v81, (struct OPTAPIDCOBJ *)v83);
    v82 = v65;
    v62 = BLTRECORD::bBitBlt(this, a2, (struct BLTRECORD::PROXYDCOBJ *)v81, a4);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v81);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v83);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v73);
  return v62;
}
