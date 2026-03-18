/*
 * XREFs of ??$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z @ 0x140331F58
 * Callers:
 *     NtGdiExtFloodFill @ 0x140281500 (NtGdiExtFloodFill.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C78C (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x14006AA44 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140072EE8 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z @ 0x1400781A0 (-bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14007BAF0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007E1D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     EngPaint @ 0x140083090 (EngPaint.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FA80 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB18 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14009FB50 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A9094 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x14016BC60 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1401840E8 (--0STACKMEMOBJ@@QEAA@KKJJJ@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14018A09C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1401AEF4C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1401C8274 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1401D01A4 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1401D48F0 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bMergeScanline@STACKMEMOBJ@@QEAA_NAEAVRGNOBJ@@@Z @ 0x1401E2D68 (-bMergeScanline@STACKMEMOBJ@@QEAA_NAEAVRGNOBJ@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1402138C4 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1STACKMEMOBJ@@QEAA@XZ @ 0x140231F38 (--1STACKMEMOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$00@@QEAA@XZ @ 0x14024C60C (--0-$SEMOBJ@$00@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$02@@QEAA@XZ @ 0x140268C8C (--0-$SEMOBJ@$02@@QEAA@XZ.c)
 *     ?bExtendScanline@?$FLOODBM@$0A@@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x140332ED0 (-bExtendScanline@-$FLOODBM@$0A@@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 *     ?iColorGet@?$FLOODBM@$0A@@@QEAAKJ@Z @ 0x140333340 (-iColorGet@-$FLOODBM@$0A@@@QEAAKJ@Z.c)
 *     ?vFindExtent@?$FLOODBM@$0A@@@QEAAXJAEAJ0@Z @ 0x140333438 (-vFindExtent@-$FLOODBM@$0A@@@QEAAXJAEAJ0@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x140333564 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiExtFloodFillImpl<0>(Gre::Base *a1, LONG a2, LONG a3, int a4, int a5)
{
  struct Gre::Base::SESSION_GLOBALS *v8; // rsi
  DC *v9; // rbx
  char v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  BRUSHOBJ *v13; // rax
  struct REGION *v14; // rbx
  struct _GRETHREAD *v15; // rax
  bool v16; // zf
  unsigned int v17; // r14d
  char v18; // bl
  __int64 v19; // r8
  DC *v20; // rax
  __int64 v21; // rdx
  int v22; // edi
  __int64 v23; // rcx
  __int64 v24; // rdx
  DC *v25; // rax
  __int64 v26; // rdx
  int v27; // ebx
  __int64 v28; // rbx
  __int64 v29; // r15
  __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // r9
  ULONG NearestIndexFromColorref; // eax
  DC *v35; // rdx
  ULONG v36; // r13d
  char *v37; // r12
  __int64 v38; // r8
  bool v39; // cf
  int v40; // ecx
  _DWORD *v41; // rcx
  __int64 v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // rax
  int v45; // esi
  int v46; // edx
  LONG y; // ecx
  unsigned int x; // r8d
  int v49; // eax
  Gre::Base *v50; // rcx
  struct Gre::Base::SESSION_GLOBALS *v51; // rax
  int v52; // eax
  BOOL v53; // r12d
  LONG v54; // esi
  __int64 v55; // r9
  int v56; // eax
  int v57; // eax
  LONG v58; // r11d
  __int64 v59; // r12
  int v60; // ecx
  __int64 v61; // r12
  __int64 v62; // rax
  int v63; // ecx
  int v64; // eax
  int v65; // ebx
  int v66; // r13d
  unsigned int v67; // ebx
  __int32 v68; // r13d
  __int64 v69; // r12
  __int32 v70; // r9d
  int v71; // eax
  int v72; // r9d
  BRUSHOBJ *v73; // rsi
  MIX v74; // eax
  MIX mix; // ebx
  struct ECLIPOBJ *v76; // rdx
  POINTL *v77; // r9
  struct ECLIPOBJ *v78; // rdx
  struct _POINTL v80; // [rsp+50h] [rbp-B0h] BYREF
  struct _POINTL v81; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v82; // [rsp+60h] [rbp-A0h] BYREF
  struct REGION *v83; // [rsp+68h] [rbp-98h] BYREF
  struct REGION *v84; // [rsp+70h] [rbp-90h] BYREF
  __int64 v85; // [rsp+78h] [rbp-88h] BYREF
  char v86; // [rsp+80h] [rbp-80h]
  int v87; // [rsp+84h] [rbp-7Ch]
  struct Gre::Base::SESSION_GLOBALS *v88; // [rsp+90h] [rbp-70h] BYREF
  __int64 v89; // [rsp+98h] [rbp-68h]
  int v90; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v91; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v92; // [rsp+B0h] [rbp-50h] BYREF
  struct REGION *v93; // [rsp+B8h] [rbp-48h] BYREF
  int v94[2]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v95[4]; // [rsp+C8h] [rbp-38h] BYREF
  int v96; // [rsp+CCh] [rbp-34h]
  __int64 v97; // [rsp+D0h] [rbp-30h]
  __int64 v98; // [rsp+E8h] [rbp-18h]
  _BYTE v99[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v100; // [rsp+F4h] [rbp-Ch]
  __int64 v101; // [rsp+F8h] [rbp-8h]
  __int64 v102; // [rsp+110h] [rbp+10h]
  BRUSHOBJ *v103[2]; // [rsp+118h] [rbp+18h] BYREF
  __int128 v104; // [rsp+128h] [rbp+28h] BYREF
  __int128 v105; // [rsp+138h] [rbp+38h]
  int v106; // [rsp+148h] [rbp+48h] BYREF
  __m128i v107; // [rsp+14Ch] [rbp+4Ch]
  ULONG v108; // [rsp+15Ch] [rbp+5Ch]
  __int64 v109; // [rsp+160h] [rbp+60h]
  int v110; // [rsp+168h] [rbp+68h]
  int v111; // [rsp+16Ch] [rbp+6Ch]
  int v112; // [rsp+170h] [rbp+70h]
  DC *v113[14]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v114[16]; // [rsp+1F0h] [rbp+F0h] BYREF
  BRUSHOBJ pbo; // [rsp+200h] [rbp+100h] BYREF
  int v116; // [rsp+218h] [rbp+118h]
  int v117; // [rsp+21Ch] [rbp+11Ch]
  __int64 v118; // [rsp+220h] [rbp+120h]
  __int64 v119; // [rsp+228h] [rbp+128h]
  __int64 v120; // [rsp+258h] [rbp+158h]
  __int128 v121; // [rsp+260h] [rbp+160h]
  int v122; // [rsp+278h] [rbp+178h]
  _BYTE v123[160]; // [rsp+290h] [rbp+190h] BYREF
  __m128i v124; // [rsp+330h] [rbp+230h] BYREF
  _QWORD v125[2]; // [rsp+340h] [rbp+240h] BYREF
  CLIPOBJ v126; // [rsp+350h] [rbp+250h] BYREF
  CLIPOBJ pco; // [rsp+3F0h] [rbp+2F0h] BYREF

  LODWORD(v89) = a4;
  v8 = Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v113, (HDC)a1, v8);
  v9 = v113[0];
  if ( !v113[0] || (*((_DWORD *)v113[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v113);
    return 0LL;
  }
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v113) )
  {
    if ( (v10 & 0xE0) != 0 )
    {
      v11 = *((_QWORD *)v9 + 6);
      v82 = v11;
      SEMOBJ<8>::SEMOBJ<8>((HSEMAPHORE *)&v83, (__int64)&v82);
      v12 = *(_QWORD *)(v11 + 2544);
      v13 = v12 ? *(BRUSHOBJ **)(v12 + 56) : (BRUSHOBJ *)*((_QWORD *)v113[0] + 64);
      v103[1] = v13;
      v103[0] = 0LL;
      XDCOBJ::vAccumulate((XDCOBJ *)v113, (struct ERECTL *)v103);
      v14 = v83;
      if ( v83 )
      {
        EtwTraceGreLockReleaseSemaphore(L"DevLock", v83);
        v15 = GreGetCurrentThreadCrossSessionCheck();
        if ( v15 )
        {
          v16 = (*((_BYTE *)v15 + 16))-- == 1;
          if ( v16 )
            *(_QWORD *)v15 &= ~0x100uLL;
          if ( !*(_QWORD *)v15 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal((HSEMAPHORE)v14);
      }
    }
    v17 = 1;
    goto LABEL_144;
  }
  v18 = 0;
  SEMOBJ<1>::SEMOBJ<1>((Gre::Base *)&v82);
  v20 = v113[0];
  v21 = *((_QWORD *)v113[0] + 122);
  v22 = *(_DWORD *)(v21 + 152);
  if ( (v22 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v113[0], *(_QWORD *)(v21 + 160));
    v20 = v113[0];
  }
  if ( (v22 & 0x2000) != 0 )
  {
    GreDCSelectPen(v20, *(_QWORD *)(*((_QWORD *)v20 + 122) + 168LL));
    v20 = v113[0];
  }
  v23 = *((_QWORD *)v20 + 62);
  v17 = 1;
  if ( v23 && *(_WORD *)(v23 + 100) == 3 )
    v18 = 1;
  v24 = v82;
  if ( v82 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v82);
  if ( v18 )
  {
    UserEnterUserCritSec(v23, v24, v19);
    SEMOBJ<1>::SEMOBJ<1>((Gre::Base *)v94);
    v25 = v113[0];
    v26 = *((_QWORD *)v113[0] + 122);
    v27 = *(_DWORD *)(v26 + 152);
    if ( (v27 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v113[0], *(_QWORD *)(v26 + 160));
      v25 = v113[0];
    }
    if ( (v27 & 0x2000) != 0 )
    {
      GreDCSelectPen(v25, *(_QWORD *)(*((_QWORD *)v25 + 122) + 168LL));
      v25 = v113[0];
    }
    v28 = *((_QWORD *)v25 + 62);
    if ( v28 && *(_WORD *)(v28 + 100) == 3 )
    {
      SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v88, v8);
      SEMOBJ<3>::SEMOBJ<3>((Gre::Base *)&v91);
      SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v92, v8);
      SEMOBJ<7>::SEMOBJ<7>((HSEMAPHORE *)&v83, v8);
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)&v126);
      v82 = *(_QWORD *)(v28 + 48);
      DEVLOCKOBJ::vLock((DEVLOCKOBJ *)&v126, (struct PDEVOBJ *)&v82);
      bConvertDfbDcToDib((struct XDCOBJ *)v113);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v126);
      if ( v83 )
        GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          (__int64)v83);
      if ( v92 )
        GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v92);
      if ( v91 )
        GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v91);
      if ( v88 )
        GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          (__int64)v88);
    }
    if ( *(_QWORD *)v94 )
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        *(__int64 *)v94);
    UserLeaveUserCritSec();
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v123);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v123, (struct XDCOBJ *)v113, 0) )
    goto LABEL_143;
  v29 = *((_QWORD *)v113[0] + 62);
  v80.x = a2;
  v80.y = a3;
  DC::QuickInitXform(v113[0], v114, 516LL);
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v114, &v80) )
    goto LABEL_143;
  v30 = *(_QWORD *)(v29 + 48);
  v31 = *(_QWORD *)(v29 + 128);
  v32 = *((_QWORD *)v113[0] + 11);
  if ( (*(_DWORD *)(*((_QWORD *)v113[0] + 6) + 40LL) & 0x80u) != 0
    || (unsigned int)DC::bIsCMYKColor(v113[0])
    || (*(_DWORD *)(v33 + 120) & 2) != 0 )
  {
    EngSetLastError(0x57u);
    goto LABEL_143;
  }
  NearestIndexFromColorref = ulGetNearestIndexFromColorref(v31, v32, (unsigned int)v89, 1LL);
  v35 = v113[0];
  v36 = NearestIndexFromColorref;
  v37 = (char *)v113[0] + 1200;
  v38 = *((_QWORD *)v113[0] + 122);
  v39 = (*((_DWORD *)v113[0] + 30) & 5) != 0;
  v103[0] = (BRUSHOBJ *)((char *)v113[0] + 1200);
  v40 = *(_DWORD *)(v38 + 152);
  LODWORD(v91) = v39 ? 2 : 0;
  if ( (v40 & 1) != 0 || (*((_DWORD *)v113[0] + 79) & 1) != 0 )
  {
    *(_DWORD *)(v38 + 152) = v40 & 0xFFFFFFFE;
    *((_DWORD *)v113[0] + 79) &= ~1u;
    EBRUSHOBJ::vInitBrush(v37, v113[0], *((_QWORD *)v113[0] + 17), v32, v31, v29, 1);
    v35 = v113[0];
  }
  if ( (*((_DWORD *)v37 + 30) & 0x100) != 0 )
    goto LABEL_52;
  if ( (v123[24] & 1) == 0 )
  {
    v17 = XDCOBJ::bFullScreen((XDCOBJ *)v113);
LABEL_52:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v123);
LABEL_144:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v113);
    return v17;
  }
  v41 = (_DWORD *)((char *)v35 + 1024);
  if ( (*((_DWORD *)v35 + 10) & 1) == 0 )
    v41 = (_DWORD *)((char *)v35 + 1016);
  v80.x += *v41;
  v80.y += v41[1];
  v93 = XDCOBJ::prgnEffRao(v113);
  if ( RGNOBJ::bInside((RGNOBJ *)&v93, &v80) != 2 )
  {
LABEL_143:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v123);
    v17 = 0;
    goto LABEL_144;
  }
  v104 = 0LL;
  v85 = 0LL;
  v105 = 0LL;
  v86 = 0;
  v87 = 0;
  v42 = *(_QWORD *)(v29 + 48);
  v94[0] = 0;
  v90 = 0;
  v82 = v42;
  if ( v42 )
    PDEVOBJ::vSync((PDEVOBJ *)&v82, (struct _SURFOBJ *)(v29 + 24), 0LL, 0);
  LODWORD(v88) = 0;
  v43 = *(__m128i *)((char *)v93 + 52);
  v81 = 0LL;
  v124 = v43;
  if ( !*(_WORD *)(v29 + 100) && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v93) != 3 )
  {
    v44 = *(_QWORD *)(v29 + 80);
    v45 = *(_DWORD *)(v29 + 88);
    v46 = *(_DWORD *)(v29 + 96);
    y = v80.y;
    x = v80.x;
    goto LABEL_90;
  }
  LODWORD(v104) = *(_DWORD *)(v29 + 96);
  LODWORD(v92) = v104;
  DWORD1(v104) = v124.m128i_i32[2] - v124.m128i_i32[0];
  DWORD2(v104) = v124.m128i_i32[3] - v124.m128i_i32[1];
  v49 = 1;
  DWORD2(v105) = 1;
  *(_QWORD *)&v105 = 0LL;
  if ( (*(_DWORD *)(v29 + 112) & 0x40000) != 0 )
    v49 = 262145;
  DWORD2(v105) = v49;
  SURFMEM::bCreateDIB((SURFMEM *)&v85, (struct _DEVBITMAPINFO *)&v104, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
  if ( !v85 )
  {
    EngSetLastError(8u);
LABEL_141:
    SURFMEM::~SURFMEM((SURFMEM *)&v85);
    goto LABEL_143;
  }
  v125[1] = *(_QWORD *)((char *)&v104 + 4);
  v125[0] = 0LL;
  v51 = Gre::Base::Globals(v50);
  v16 = (*(_DWORD *)(v29 + 112) & 0x400) == 0;
  v88 = v51;
  if ( v16 )
    v52 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, char *, _QWORD *, __m128i *))EngCopyBits)(
            (v85 + 24) & -(__int64)(v85 != 0),
            v29 + 24,
            0LL,
            (char *)v51 + 4664,
            v125,
            &v124);
  else
    v52 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *, __m128i *))(v30 + 2832))(
            (v85 + 24) & -(__int64)(v85 != 0),
            v29 + 24,
            0LL,
            (__int64)v51 + 4664,
            v125,
            &v124);
  v53 = v52;
  v54 = -v124.m128i_i32[1];
  v81.x = -v124.m128i_i32[0];
  v81.y = -v124.m128i_i32[1];
  if ( !v52 )
    goto LABEL_86;
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v93) != 3 )
  {
    v54 = v81.y;
LABEL_86:
    ERECTL::bOffsetAdd((ERECTL *)&v124, &v81, 0);
    goto LABEL_87;
  }
  v53 = 0;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v82);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v83);
  if ( !v82 )
    goto LABEL_83;
  if ( !v83 )
    goto LABEL_83;
  RGNOBJ::vSet((RGNOBJ *)&v82, (const struct _RECTL *const)&v124);
  if ( !RGNOBJ::bMerge((RGNOBJ *)&v83, (struct RGNOBJ *)&v82, (struct RGNOBJ *)&v93, 4u) )
    goto LABEL_83;
  if ( !RGNOBJ::bOffset((RGNOBJ *)&v83, &v81) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v124, &v81, 1) )
  {
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v83);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v82);
    SURFMEM::~SURFMEM((SURFMEM *)&v85);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v123);
    v17 = 0;
    goto LABEL_144;
  }
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v83, (struct ERECTL *)&v124, 0);
  pbo.flColorType = v91;
  v120 = 0LL;
  v121 = 0LL;
  pbo.pvRbrush = 0LL;
  v56 = *((_DWORD *)v88 + 788);
  v117 = -1;
  v118 = 0LL;
  v119 = 0LL;
  v122 = 0;
  if ( a5 )
  {
    pbo.iSolidColor = (v36 & 1) == 0;
    if ( v56 )
    {
      v57 = ulIndexToRGB(v31, v32, (v36 & 1) == 0, v55);
      goto LABEL_81;
    }
  }
  else
  {
    pbo.iSolidColor = v36;
    if ( v56 )
    {
      v57 = v89;
LABEL_81:
      v117 = v57;
      v116 = v57;
    }
  }
  v53 = EngPaint((SURFOBJ *)((v85 + 24) & -(__int64)(v85 != 0)), &pco, &pbo, 0LL, 0xD0Du);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
LABEL_83:
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v83);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v82);
  v58 = v81.x;
  v54 = v81.y;
LABEL_87:
  if ( !v53 )
  {
LABEL_88:
    SURFMEM::~SURFMEM((SURFMEM *)&v85);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v123);
    v17 = 0;
    goto LABEL_144;
  }
  x = v58 + v80.x;
  y = v54 + v80.y;
  v46 = v92;
  v80.x += v58;
  v81.y = -v54;
  v80.y += v54;
  v81.x = -v58;
  v45 = *(_DWORD *)(v85 + 88);
  v44 = *(_QWORD *)(v85 + 80);
  LODWORD(v88) = 1;
LABEL_90:
  v89 = v44;
  v59 = v45 * y;
  v60 = 0;
  v61 = v44 + v59;
  if ( *(_QWORD *)(v29 + 224) || (*(_BYTE *)(v29 + 102) & 8) != 0 )
    v60 = 1;
  v62 = *(_QWORD *)(v29 + 128);
  v106 = v46;
  v108 = v36;
  v110 = a5;
  v109 = v61;
  v112 = v60;
  v111 = -1;
  v107 = v124;
  if ( v62 )
  {
    v63 = *(_DWORD *)(v62 + 24);
    if ( (v63 & 0xC) != 0 )
    {
      v111 = 0xFFFFFF;
    }
    else if ( (v63 & 2) != 0 )
    {
      v111 = **(_DWORD **)(v62 + 112) | *(_DWORD *)(*(_QWORD *)(v62 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v62 + 112)
                                                                                              + 8LL);
    }
  }
  v64 = FLOODBM<0>::iColorGet(&v106, x);
  if ( !a5 && v64 == v36 || a5 == 1 && v64 != v36 )
    goto LABEL_88;
  FLOODBM<0>::vFindExtent(&v106, (unsigned int)v80.x, v94, &v90);
  v65 = v90;
  v66 = v94[0];
  STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v99, 0x1E0u, 1LL, v80.y, v94[0], v90);
  if ( !v102 )
  {
    EngSetLastError(8u);
    goto LABEL_139;
  }
  STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v95, 0x100u, 0LL, v80.y, v66, v65);
  if ( !v98 )
  {
    EngSetLastError(8u);
    goto LABEL_137;
  }
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v84, 0x12E0u);
  if ( !v84 )
  {
    EngSetLastError(8u);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v84);
LABEL_137:
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v95);
LABEL_139:
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v99);
    goto LABEL_88;
  }
  v67 = 1;
  v68 = v124.m128i_i32[3] - 1;
  LODWORD(v92) = v124.m128i_i32[1];
  if ( v80.y >= v124.m128i_i32[3] - 1 )
  {
    v96 -= *(_DWORD *)v97;
    v97 = *(_QWORD *)(v97 + 8);
  }
  else
  {
    v67 = FLOODBM<0>::bExtendScanline((int)&v106, (STACKOBJ *)v95, v61, v61 + v45) & 1;
    if ( !v67 )
      goto LABEL_133;
  }
  v69 = v89;
  while ( 1 )
  {
    while ( v96 )
    {
      if ( !STACKMEMOBJ::bMergeScanline((STACKMEMOBJ *)v95, (struct RGNOBJ *)&v84) )
        goto LABEL_115;
      v70 = *(_DWORD *)(v97 + 20);
      if ( v70 >= v68 )
      {
        v96 -= *(_DWORD *)v97;
        v97 = *(_QWORD *)(v97 + 8);
      }
      else
      {
        v71 = FLOODBM<0>::bExtendScanline((int)&v106, (STACKOBJ *)v95, v69 + v45 * v70, v69 + v45 * v70 + v45);
LABEL_114:
        if ( !v71 )
        {
LABEL_115:
          v67 = 0;
          goto LABEL_133;
        }
      }
    }
    if ( !v100 )
      break;
    if ( !v67 || (v67 = 1, !STACKMEMOBJ::bMergeScanline((STACKMEMOBJ *)v99, (struct RGNOBJ *)&v84)) )
      v67 = 0;
    v72 = *(_DWORD *)(v101 + 20);
    if ( v72 > (int)v92 )
    {
      v71 = FLOODBM<0>::bExtendScanline((int)&v106, (STACKOBJ *)v99, v69 + v45 * v72, v69 + v45 * v72 - v45);
      goto LABEL_114;
    }
    v100 -= *(_DWORD *)v101;
    v101 = *(_QWORD *)(v101 + 8);
  }
  if ( !v67 )
    goto LABEL_133;
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v84) != 1 )
  {
    if ( (_DWORD)v88
      && (!RGNOBJ::bOffset((RGNOBJ *)&v84, &v81) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v124, &v81, 1)) )
    {
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v84);
      STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v95);
      STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v99);
      goto LABEL_141;
    }
    v73 = v103[0];
    v74 = EBRUSHOBJ::mixBest(
            (EBRUSHOBJ *)v103[0],
            *(_BYTE *)(*((_QWORD *)v113[0] + 122) + 212LL),
            *(_BYTE *)(*((_QWORD *)v113[0] + 122) + 213LL));
    ++*(_DWORD *)(v29 + 92);
    mix = v74;
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v126, v84, (struct ERECTL *)&v124, 0);
    v77 = (POINTL *)v113[0];
    if ( (*((_DWORD *)v113[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v113, v76, &v124);
      XDCOBJ::vAccumulateTight((XDCOBJ *)v113, v78, &v124);
      v77 = (POINTL *)v113[0];
    }
    v67 = EngPaint((SURFOBJ *)(v29 + 24), &v126, v73, v77 + 149, mix);
    if ( !v67 )
LABEL_133:
      EngSetLastError(8u);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v84);
  STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v95);
  STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v99);
  SURFMEM::~SURFMEM((SURFMEM *)&v85);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v123);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v113);
  return v67;
}
