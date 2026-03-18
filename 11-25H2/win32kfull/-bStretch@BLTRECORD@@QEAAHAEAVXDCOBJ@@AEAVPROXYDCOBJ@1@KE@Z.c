/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x140078744
 * Callers:
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x140188250 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x140306398 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333@Z @ 0x140006E74 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140013B48 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x140077B78 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSurfaceEff@PROXYDCOBJ@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x14007A170 (-pSurfaceEff@PROXYDCOBJ@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z @ 0x14007EE58 (-bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14007EEC4 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400A1960 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400DEF38 (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x14019E2E8 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1401A8924 (-vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KJJ@Z @ 0x1401E456C (-bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KJJ@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x140307288 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
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
  int v11; // edx
  int v12; // eax
  __int64 v13; // rcx
  char *v14; // r14
  int v15; // r8d
  __int64 v16; // rdi
  char v17; // r9
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct REGION *v31; // rdx
  struct ECLIPOBJ *v32; // rdx
  _DWORD *v33; // rbx
  BOOL (__stdcall *v34)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // r15
  __int64 v35; // rdx
  int v36; // r10d
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // rax
  int v40; // r9d
  __int64 v41; // r11
  __int16 v42; // cx
  __int64 v43; // r12
  __int64 v44; // rax
  int v45; // ecx
  struct SURFACE *v46; // rax
  int v47; // edx
  int v48; // ecx
  int v49; // ecx
  BLTRECORD *v50; // rcx
  int *v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // r14d
  __int64 v54; // rcx
  int v55; // r8d
  struct SURFACE *v56; // rbx
  __int64 v57; // rcx
  __int64 v58; // rcx
  int v59; // r9d
  __int64 v60; // rax
  int v61; // ecx
  int v62; // r9d
  char v63; // [rsp+70h] [rbp-90h]
  __int128 v64; // [rsp+78h] [rbp-88h] BYREF
  int v65; // [rsp+88h] [rbp-78h]
  int v66; // [rsp+8Ch] [rbp-74h]
  int v67; // [rsp+90h] [rbp-70h]
  int v68; // [rsp+94h] [rbp-6Ch]
  int v69; // [rsp+98h] [rbp-68h]
  int v70; // [rsp+9Ch] [rbp-64h]
  int v71; // [rsp+A0h] [rbp-60h]
  _BYTE v72[112]; // [rsp+B0h] [rbp-50h] BYREF
  struct SURFACE *v73; // [rsp+120h] [rbp+20h]
  _BYTE v74[128]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v75[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  _OWORD v76[9]; // [rsp+1B4h] [rbp+B4h] BYREF

  v5 = *((_DWORD *)this + 34);
  v7 = *((_DWORD *)this + 32);
  if ( v7 > v5 )
  {
    *((_DWORD *)this + 32) = v5 + 1;
    *((_DWORD *)this + 34) = v7 + 1;
    *((_DWORD *)this + 49) ^= 8u;
  }
  v11 = *((_DWORD *)this + 33);
  v12 = *((_DWORD *)this + 35);
  if ( v11 > v12 )
  {
    *((_DWORD *)this + 33) = v12 + 1;
    *((_DWORD *)this + 35) = v11 + 1;
    *((_DWORD *)this + 49) ^= 0x10u;
  }
  if ( (a4 & 0xD4) != 0 )
  {
    v13 = *(_QWORD *)a3;
    v14 = 0LL;
    if ( !*(_QWORD *)a3 )
      goto LABEL_22;
    v15 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
    v16 = *(_QWORD *)(*((_QWORD *)this + 6) + 48LL);
    if ( (v15 & 0x200) == 0 || !v16 || (v17 = 1, (*(_DWORD *)(v16 + 40) & 0x20000) == 0) )
      v17 = 0;
    v63 = v17;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) != *(_QWORD *)(v13 + 48)
      && (v15 & 0x4000) == 0
      && !_bittest((const signed __int32 *)(v13 + 36), 0xEu)
      && !v17
      && (*((_WORD *)XDCOBJ::pSurfaceEff(a2) + 50) || *((_QWORD *)XDCOBJ::pSurfaceEff(a2) + 3))
      && (*((_WORD *)BLTRECORD::PROXYDCOBJ::pSurfaceEff(a3) + 50)
       || *((_QWORD *)BLTRECORD::PROXYDCOBJ::pSurfaceEff(a3) + 3)) )
    {
      goto LABEL_22;
    }
    v18 = *((_DWORD *)this + 42);
    v19 = *((_DWORD *)this + 44);
    if ( v18 > v19 )
    {
      *((_DWORD *)this + 42) = v19 + 1;
      *((_DWORD *)this + 44) = v18 + 1;
    }
    v20 = *((_DWORD *)this + 43);
    v21 = *((_DWORD *)this + 45);
    if ( v20 > v21 )
    {
      *((_DWORD *)this + 43) = v21 + 1;
      *((_DWORD *)this + 45) = v20 + 1;
    }
    if ( BLTRECORD::pSurfMskOut(this) )
    {
      if ( *((int *)this + 42) < 0
        || *((int *)this + 43) < 0
        || (v57 = *((_QWORD *)this + 8), *((_DWORD *)this + 44) > *(_DWORD *)(v57 + 56))
        || *((_DWORD *)this + 45) > *(_DWORD *)(v57 + 60) )
      {
        if ( (unsigned int)dword_14039BBC0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14039BBC0, 0x200000000000LL) )
        {
          v65 = *((_DWORD *)this + 41);
          v66 = *((_DWORD *)this + 40);
          v67 = *((_DWORD *)this + 39);
          v68 = *((_DWORD *)this + 38);
          v69 = *((_DWORD *)this + 45);
          v70 = *((_DWORD *)this + 44);
          v71 = *((_DWORD *)this + 43);
          LODWORD(v64) = v59;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v58,
            (__int64)&unk_14036C030);
        }
        goto LABEL_22;
      }
    }
    v22 = *((_DWORD *)this + 38);
    v23 = *((_DWORD *)this + 40);
    if ( v22 > v23 )
    {
      *((_DWORD *)this + 38) = v23 + 1;
      *((_DWORD *)this + 40) = v22 + 1;
      *((_DWORD *)this + 49) ^= 8u;
    }
    v24 = *((_DWORD *)this + 39);
    v25 = *((_DWORD *)this + 41);
    if ( v24 > v25 )
    {
      *((_DWORD *)this + 39) = v25 + 1;
      *((_DWORD *)this + 41) = v24 + 1;
      *((_DWORD *)this + 49) ^= 0x10u;
    }
    if ( a5 != 4
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) != 2
      && !BLTRECORD::pSurfMskOut(this)
      && (*((_DWORD *)this + 49) & 0x18) == 0 )
    {
      v47 = *((_DWORD *)this + 34) + *((_DWORD *)this + 38) - *((_DWORD *)this + 40) - *((_DWORD *)this + 32);
      v48 = *((_DWORD *)this + 35) + *((_DWORD *)this + 39) - *((_DWORD *)this + 41) - *((_DWORD *)this + 33);
      if ( (unsigned int)(v47 + 1) <= 2 && (unsigned int)(v48 + 1) <= 2 )
        return BLTRECORD::bBitBlt(this, a2, a3, a4, v47, v48);
    }
    if ( !*(_QWORD *)(*(_QWORD *)a2 + 496LL) || !*(_QWORD *)(*(_QWORD *)a3 + 496LL) )
      return 1LL;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
      XDCOBJ::vAccumulate(a2, (BLTRECORD *)((char *)this + 128));
    v27 = *(_QWORD *)a2;
    v28 = *(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1;
    *((_DWORD *)this + 32) += *(_DWORD *)(*(_QWORD *)a2 + 8 * v28 + 1016);
    *((_DWORD *)this + 34) += *(_DWORD *)(v27 + 8 * v28 + 1016);
    *((_DWORD *)this + 33) += *(_DWORD *)(v27 + 8 * v28 + 1020);
    *((_DWORD *)this + 35) += *(_DWORD *)(v27 + 8 * v28 + 1020);
    v29 = *(_QWORD *)a3;
    v30 = *(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1;
    *((_DWORD *)this + 38) += *(_DWORD *)(*(_QWORD *)a3 + 8 * v30 + 1016);
    *((_DWORD *)this + 40) += *(_DWORD *)(v29 + 8 * v30 + 1016);
    *((_DWORD *)this + 39) += *(_DWORD *)(v29 + 8 * v30 + 1020);
    *((_DWORD *)this + 41) += *(_DWORD *)(v29 + 8 * v30 + 1020);
    XDCOBJ::prgnEffRao(a2);
    XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v75);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v75, v31, (BLTRECORD *)((char *)this + 128), 0);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v76) )
      return 1LL;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0
      && ((a4 & 0xE8) == 0 || (v60 = *((_QWORD *)this + 10)) != 0 && (*(_DWORD *)(v60 + 120) & 0x100) == 0) )
    {
      v64 = v76[0];
      XDCOBJ::vAccumulateTight(a2, v32, (struct ERECTL *)&v64);
    }
    BLTRECORD::PROXYDCOBJ::pSurfaceEff(a3);
    v33 = *(_DWORD **)(*((_QWORD *)this + 7) + 48LL);
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 1) != 0 )
      BLTRECORD::PROXYDCOBJ::pSurfaceEff(a3);
    if ( (*(_DWORD *)(*((_QWORD *)this + 6) + 112LL) & 0x2000) != 0 )
      v34 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v16 + 3232);
    else
      v34 = EngStretchBltROP;
    if ( v63 )
      goto LABEL_43;
    if ( a5 == 4 && (*(_BYTE *)(v16 + 1808) & 0x10) == 0 )
      v34 = EngStretchBltROP;
    v35 = *((_QWORD *)this + 7);
    v36 = 0;
    if ( *(_WORD *)(v35 + 100) == 1 && v33 && (v33[10] & 0x20000) != 0 )
    {
      v61 = v33[644];
      if ( *((_DWORD *)this + 38) < v61
        || (v62 = v33[645], *((_DWORD *)this + 39) < v62)
        || *((_DWORD *)this + 40) > *(_DWORD *)(v35 + 56) + v61
        || (v37 = *((_QWORD *)this + 7), *((_DWORD *)this + 41) > v62 + *(_DWORD *)(v35 + 60)) )
      {
        v36 = 1;
        v37 = *((_QWORD *)this + 7);
      }
    }
    else if ( *((int *)this + 38) < 0
           || *((int *)this + 39) < 0
           || *((_DWORD *)this + 40) > *(_DWORD *)(v35 + 56)
           || (v37 = *((_QWORD *)this + 7), *((_DWORD *)this + 41) > *(_DWORD *)(v35 + 60)) )
    {
      v37 = *((_QWORD *)this + 7);
      goto LABEL_63;
    }
    if ( !v36 )
    {
LABEL_42:
      if ( *((_QWORD *)this + 6) == v35 && (unsigned int)bIntersect((char *)this + 152, (char *)this + 128) )
        v34 = EngStretchBltROP;
LABEL_43:
      if ( (*((_DWORD *)this + 49) & 8) != 0 )
      {
        v45 = *((_DWORD *)this + 32);
        *((_DWORD *)this + 32) = *((_DWORD *)this + 34);
        *((_DWORD *)this + 34) = v45;
      }
      if ( (*((_DWORD *)this + 49) & 0x10) != 0 )
      {
        v49 = *((_DWORD *)this + 33);
        *((_DWORD *)this + 33) = *((_DWORD *)this + 35);
        *((_DWORD *)this + 35) = v49;
      }
      v38 = 0LL;
      ++*(_DWORD *)(*((_QWORD *)this + 6) + 92LL);
      v39 = *(_QWORD *)a2;
      v40 = *((_DWORD *)this + 48);
      v41 = *((_QWORD *)this + 10);
      v42 = *(_WORD *)(*(_QWORD *)a2 + 178LL);
      v43 = *(_QWORD *)a2 + 1192LL;
      v44 = v39 + 176;
      if ( v42 >= 0 )
        v38 = v44;
      *(_QWORD *)&v64 = *((_QWORD *)this + 9);
      if ( v40 != 52428 )
      {
        v46 = BLTRECORD::pSurfMskOut(this);
        if ( v46 )
          v14 = (char *)v46 + 24;
      }
      return ((__int64 (__fastcall *)(__int64, __int64, char *, _BYTE *, _QWORD, __int64, __int64, char *, char *, char *, _DWORD, __int64, int))v34)(
               (*((_QWORD *)this + 6) + 24LL) & -(__int64)(*((_QWORD *)this + 6) != 0LL),
               (*((_QWORD *)this + 7) + 24LL) & -(__int64)(*((_QWORD *)this + 7) != 0LL),
               v14,
               v75,
               v64,
               v38,
               v43,
               (char *)this + 128,
               (char *)this + 152,
               (char *)this + 168,
               a5,
               v41,
               v40);
    }
LABEL_63:
    v34 = EngStretchBltROP;
    v35 = v37;
    goto LABEL_42;
  }
  BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 168));
  v53 = 0;
  if ( BLTRECORD::pSurfMskOut(v50) )
  {
    if ( *v51 < 0
      || *(int *)(v52 + 172) < 0
      || (v54 = *(_QWORD *)(v52 + 64), *((_DWORD *)this + 44) > *(_DWORD *)(v54 + 56))
      || *((_DWORD *)this + 45) > *(_DWORD *)(v54 + 60) )
    {
LABEL_22:
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  *(_QWORD *)&v64 = 0LL;
  BYTE8(v64) = 0;
  HIDWORD(v64) = 0;
  if ( (a4 & 0x10000) == 0 || (unsigned int)BLTRECORD::bStretch(this, (struct SURFMEM *)&v64, a5) )
  {
    v55 = *((_DWORD *)this + 35) + *((_DWORD *)this + 39) - *((_DWORD *)this + 33);
    *((_DWORD *)this + 40) = *((_DWORD *)this + 34) + *((_DWORD *)this + 38) - *((_DWORD *)this + 32);
    *((_DWORD *)this + 41) = v55;
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v74, a2);
    v56 = XDCOBJ::pSurfaceEff(a2);
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v72, (struct OPTAPIDCOBJ *)v74);
    v73 = v56;
    v53 = BLTRECORD::bBitBlt(this, a2, (struct BLTRECORD::PROXYDCOBJ *)v72, a4);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v72);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v74);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v64);
  return v53;
}
