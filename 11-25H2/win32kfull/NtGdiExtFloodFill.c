/*
 * XREFs of NtGdiExtFloodFill @ 0x14015F420
 * Callers:
 *     <none>
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x140013B1C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x140078724 (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007A090 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A2CC (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x14007E4A4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008E720 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140094B50 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140095468 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095BDC (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095C60 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140095C98 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14009ACF4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x14009AD34 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400A1960 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1400A2E78 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     EngPaint @ 0x1400E42E0 (EngPaint.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x140152CAC (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x140160428 (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?bMergeScanline@STACKMEMOBJ@@QEAA_NAEAVRGNOBJ@@@Z @ 0x140160524 (-bMergeScanline@STACKMEMOBJ@@QEAA_NAEAVRGNOBJ@@@Z.c)
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x14016061C (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140160A14 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x140160B04 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ??1STACKMEMOBJ@@QEAA@XZ @ 0x140160B38 (--1STACKMEMOBJ@@QEAA@XZ.c)
 *     ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x140160B9C (--0STACKMEMOBJ@@QEAA@KKJJJ@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@XZ @ 0x140266B84 (--0-$SEMOBJ@$00@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$02@@QEAA@XZ @ 0x14026E0A8 (--0-$SEMOBJ@$02@@QEAA@XZ.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x140311290 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiExtFloodFill(Gre::Base *a1, LONG a2, LONG a3, unsigned int a4, int a5)
{
  struct Gre::Base::SESSION_GLOBALS *v8; // r15
  BRUSHOBJ **v9; // rcx
  int v10; // edx
  char v11; // bl
  __int64 v12; // rdi
  __int64 v13; // r8
  DC *v14; // rax
  __int64 v15; // rdx
  int v16; // esi
  __int64 v17; // rcx
  unsigned int v18; // r14d
  DC *v19; // rax
  __int64 v20; // rdx
  int v21; // ebx
  __int64 v22; // rbx
  __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // r9
  ULONG NearestIndexFromColorref; // eax
  DC *v29; // rdx
  ULONG v30; // r12d
  char *v31; // r13
  __int64 v32; // r8
  bool v33; // cf
  int v34; // ecx
  __int64 v35; // rcx
  __m128i v36; // xmm0
  __int64 v37; // r9
  int v38; // esi
  int v39; // edx
  LONG y; // ecx
  LONG x; // r8d
  int v42; // eax
  Gre::Base *v43; // rcx
  unsigned __int8 *v44; // rax
  bool v45; // zf
  int v46; // eax
  LONG v47; // esi
  __int64 v48; // r9
  int v49; // eax
  int v50; // eax
  LONG v51; // r11d
  __int64 v52; // rax
  int v53; // ecx
  unsigned int v54; // eax
  int v55; // edi
  int v56; // ebx
  int v57; // edi
  unsigned int v58; // ebx
  __int32 v59; // edi
  __int32 v60; // r12d
  __int64 v61; // r13
  __int32 v62; // r9d
  int v63; // eax
  __int32 v64; // r9d
  BRUSHOBJ *v66; // rdi
  MIX v67; // eax
  MIX mix; // ebx
  struct ECLIPOBJ *v69; // rdx
  POINTL *v70; // r9
  struct ECLIPOBJ *v71; // rdx
  BRUSHOBJ *v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned __int8 *v75; // rbx
  struct _GRETHREAD *v76; // rax
  struct _POINTL v77; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v78; // [rsp+68h] [rbp-98h] BYREF
  struct REGION *v79; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 *v80; // [rsp+78h] [rbp-88h] BYREF
  __int64 v81; // [rsp+80h] [rbp-80h] BYREF
  struct REGION *v82; // [rsp+88h] [rbp-78h] BYREF
  __int64 v83; // [rsp+90h] [rbp-70h] BYREF
  char v84; // [rsp+98h] [rbp-68h]
  int v85; // [rsp+9Ch] [rbp-64h]
  __int64 v86; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v87; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v88; // [rsp+B0h] [rbp-50h]
  __int64 v89; // [rsp+B8h] [rbp-48h] BYREF
  struct REGION *v90; // [rsp+C0h] [rbp-40h] BYREF
  int v91; // [rsp+C8h] [rbp-38h] BYREF
  __m128i v92; // [rsp+CCh] [rbp-34h]
  ULONG v93; // [rsp+DCh] [rbp-24h]
  unsigned __int8 *v94; // [rsp+E0h] [rbp-20h]
  int v95; // [rsp+E8h] [rbp-18h]
  int v96; // [rsp+ECh] [rbp-14h]
  BRUSHOBJ *v97; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v98[4]; // [rsp+F8h] [rbp-8h] BYREF
  int v99; // [rsp+FCh] [rbp-4h]
  __int64 v100; // [rsp+100h] [rbp+0h]
  __int64 v101; // [rsp+118h] [rbp+18h]
  _BYTE v102[4]; // [rsp+120h] [rbp+20h] BYREF
  int v103; // [rsp+124h] [rbp+24h]
  __int64 v104; // [rsp+128h] [rbp+28h]
  __int64 v105; // [rsp+140h] [rbp+40h]
  __int128 v106; // [rsp+148h] [rbp+48h] BYREF
  __int128 v107; // [rsp+158h] [rbp+58h]
  __int64 v108; // [rsp+168h] [rbp+68h] BYREF
  DC *v109[14]; // [rsp+170h] [rbp+70h] BYREF
  BRUSHOBJ pbo; // [rsp+1E0h] [rbp+E0h] BYREF
  int v111; // [rsp+1F8h] [rbp+F8h]
  int v112; // [rsp+1FCh] [rbp+FCh]
  __int64 v113; // [rsp+200h] [rbp+100h]
  __int64 v114; // [rsp+208h] [rbp+108h]
  __int64 v115; // [rsp+238h] [rbp+138h]
  __int128 v116; // [rsp+240h] [rbp+140h]
  int v117; // [rsp+258h] [rbp+158h]
  _BYTE v118[144]; // [rsp+270h] [rbp+170h] BYREF
  __m128i v119; // [rsp+300h] [rbp+200h] BYREF
  __int64 v120; // [rsp+310h] [rbp+210h] BYREF
  __int64 v121; // [rsp+318h] [rbp+218h]
  CLIPOBJ pco; // [rsp+320h] [rbp+220h] BYREF
  CLIPOBJ v123; // [rsp+3C0h] [rbp+2C0h] BYREF

  v88 = a4;
  v8 = Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v109, (HDC)a1, v8);
  v9 = (BRUSHOBJ **)v109[0];
  if ( !v109[0] || (v10 = *((_DWORD *)v109[0] + 9), (v10 & 0x10000) != 0) )
  {
    EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v109);
    return 0LL;
  }
  if ( !*((_QWORD *)v109[0] + 62) || DC::bInFullScreen(v109[0]) )
  {
    if ( (v10 & 0xE0) != 0 )
    {
      v97 = v9[6];
      v72 = v97;
      SEMOBJ<8>::SEMOBJ<8>((HSEMAPHORE *)&v80, (__int64)&v97);
      v73 = *(_QWORD *)&v72[106].iSolidColor;
      v74 = v73 ? *(_QWORD *)(v73 + 56) : *((_QWORD *)v109[0] + 64);
      v121 = v74;
      v120 = 0LL;
      XDCOBJ::vAccumulate((XDCOBJ *)v109, (struct ERECTL *)&v120);
      v75 = v80;
      if ( v80 )
      {
        EtwTraceGreLockReleaseSemaphore(L"DevLock", v80);
        v76 = GreGetCurrentThreadCrossSessionCheck();
        if ( v76 )
        {
          v45 = (*((_BYTE *)v76 + 16))-- == 1;
          if ( v45 )
            *(_QWORD *)v76 &= ~0x100uLL;
          if ( !*(_QWORD *)v76 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal((HSEMAPHORE)v75);
      }
    }
    v18 = 1;
    goto LABEL_158;
  }
  v11 = 0;
  v12 = *(_QWORD *)Gre::Base::Globals((Gre::Base *)v9) + 624LL;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v12);
  v14 = v109[0];
  v15 = *((_QWORD *)v109[0] + 122);
  v16 = *(_DWORD *)(v15 + 152);
  if ( (v16 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v109[0], *(_QWORD *)(v15 + 160));
    v14 = v109[0];
  }
  if ( (v16 & 0x2000) != 0 )
  {
    GreDCSelectPen(v14, *(_QWORD *)(*((_QWORD *)v14 + 122) + 168LL));
    v14 = v109[0];
  }
  v17 = *((_QWORD *)v14 + 62);
  v18 = 1;
  if ( v17 && *(_WORD *)(v17 + 100) == 3 )
    v11 = 1;
  if ( v12 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v12);
  if ( v11 )
  {
    UserEnterUserCritSec(v17, v15, v13);
    SEMOBJ<1>::SEMOBJ<1>(&v80);
    v19 = v109[0];
    v20 = *((_QWORD *)v109[0] + 122);
    v21 = *(_DWORD *)(v20 + 152);
    if ( (v21 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v109[0], *(_QWORD *)(v20 + 160));
      v19 = v109[0];
    }
    if ( (v21 & 0x2000) != 0 )
    {
      GreDCSelectPen(v19, *(_QWORD *)(*((_QWORD *)v19 + 122) + 168LL));
      v19 = v109[0];
    }
    v22 = *((_QWORD *)v19 + 62);
    if ( v22 && *(_WORD *)(v22 + 100) == 3 )
    {
      SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v81, v8);
      SEMOBJ<3>::SEMOBJ<3>(&v87);
      SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v89, v8);
      SEMOBJ<7>::SEMOBJ<7>((HSEMAPHORE *)&v82, v8);
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)&pbo);
      v86 = *(_QWORD *)(v22 + 48);
      DEVLOCKOBJ::vLock((DEVLOCKOBJ *)&pbo, (struct PDEVOBJ *)&v86);
      bConvertDfbDcToDib((struct XDCOBJ *)v109);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&pbo);
      if ( v82 )
        GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          (__int64)v82);
      if ( v89 )
        GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v89);
      if ( v87 )
        GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v87);
      if ( v81 )
        GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          v81);
    }
    if ( v80 )
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        (__int64)v80);
    UserLeaveUserCritSec();
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v118);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v118, (struct XDCOBJ *)v109, 0) )
    goto LABEL_145;
  v23 = *((_QWORD *)v109[0] + 62);
  v77.x = a2;
  v77.y = a3;
  DC::QuickInitXform(v109[0], &v108, 516LL);
  if ( (*(_BYTE *)(v108 + 32) & 0x43) != 0x43 && !(unsigned int)bCvtPts1(v108, (__int64)&v77, 1LL) )
    goto LABEL_145;
  v24 = *(_QWORD *)(v23 + 48);
  v25 = *(_QWORD *)(v23 + 128);
  v26 = *((_QWORD *)v109[0] + 11);
  if ( (*(_DWORD *)(*((_QWORD *)v109[0] + 6) + 40LL) & 0x80u) != 0
    || (unsigned int)DC::bIsCMYKColor(v109[0])
    || (*(_DWORD *)(v27 + 120) & 2) != 0 )
  {
    EngSetLastError(0x57u);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v118);
    v18 = 0;
    goto LABEL_158;
  }
  NearestIndexFromColorref = ulGetNearestIndexFromColorref(v25, v26, v88, 1LL);
  v29 = v109[0];
  v30 = NearestIndexFromColorref;
  v31 = (char *)v109[0] + 1200;
  v32 = *((_QWORD *)v109[0] + 122);
  v33 = (*((_DWORD *)v109[0] + 30) & 5) != 0;
  v97 = (BRUSHOBJ *)((char *)v109[0] + 1200);
  v34 = *(_DWORD *)(v32 + 152);
  LODWORD(v87) = v33 ? 2 : 0;
  if ( (v34 & 1) != 0 || (*((_DWORD *)v109[0] + 79) & 1) != 0 )
  {
    *(_DWORD *)(v32 + 152) = v34 & 0xFFFFFFFE;
    *((_DWORD *)v109[0] + 79) &= ~1u;
    EBRUSHOBJ::vInitBrush(v31, v109[0], *((_QWORD *)v109[0] + 17), v26, v25, v23, 1);
    v29 = v109[0];
  }
  if ( (*((_DWORD *)v31 + 30) & 0x100) != 0 )
  {
LABEL_42:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v118);
    goto LABEL_158;
  }
  if ( (v118[24] & 1) == 0 )
  {
    v18 = XDCOBJ::bFullScreen((XDCOBJ *)v109);
    goto LABEL_42;
  }
  v35 = *((_DWORD *)v29 + 10) & 1LL;
  v77.x += *((_DWORD *)v29 + 2 * v35 + 254);
  v77.y += *((_DWORD *)v29 + 2 * v35 + 255);
  v90 = XDCOBJ::prgnEffRao(v109);
  if ( RGNOBJ::bInside((RGNOBJ *)&v90, &v77) != 2 )
    goto LABEL_145;
  v83 = 0LL;
  v106 = 0LL;
  v84 = 0;
  v107 = 0LL;
  v85 = 0;
  v80 = *(unsigned __int8 **)(v23 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v80, (struct _SURFOBJ *)(v23 + 24), 0LL, 0);
  LODWORD(v81) = 0;
  v36 = *(__m128i *)((char *)v90 + 52);
  v78 = 0LL;
  v119 = v36;
  if ( !*(_WORD *)(v23 + 100) && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v90) != 3 )
  {
    v37 = *(_QWORD *)(v23 + 80);
    v38 = *(_DWORD *)(v23 + 88);
    v39 = *(_DWORD *)(v23 + 96);
    y = v77.y;
    x = v77.x;
    goto LABEL_77;
  }
  LODWORD(v106) = *(_DWORD *)(v23 + 96);
  LODWORD(v89) = v106;
  DWORD1(v106) = v119.m128i_i32[2] - v119.m128i_i32[0];
  DWORD2(v106) = v119.m128i_i32[3] - v119.m128i_i32[1];
  v42 = 1;
  *(_QWORD *)&v107 = 0LL;
  DWORD2(v107) = 1;
  if ( (*(_DWORD *)(v23 + 112) & 0x40000) != 0 )
    v42 = 262145;
  DWORD2(v107) = v42;
  SURFMEM::bCreateDIB((SURFMEM *)&v83, (struct _DEVBITMAPINFO *)&v106, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( !v83 )
  {
    EngSetLastError(8u);
    goto LABEL_143;
  }
  v120 = 0LL;
  v121 = *(_QWORD *)((char *)&v106 + 4);
  v44 = (unsigned __int8 *)Gre::Base::Globals(v43);
  v45 = (*(_DWORD *)(v23 + 112) & 0x400) == 0;
  v80 = v44;
  if ( v45 )
    v46 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, unsigned __int8 *, __int64 *, __m128i *))EngCopyBits)(
            (v83 + 24) & -(__int64)(v83 != 0),
            v23 + 24,
            0LL,
            v44 + 4552,
            &v120,
            &v119);
  else
    v46 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned __int8 *, __int64 *, __m128i *))(v24 + 2832))(
            (v83 + 24) & -(__int64)(v83 != 0),
            v23 + 24,
            0LL,
            v44 + 4552,
            &v120,
            &v119);
  v47 = -v119.m128i_i32[1];
  LODWORD(v81) = v46;
  v78.x = -v119.m128i_i32[0];
  v78.y = -v119.m128i_i32[1];
  if ( !v46 )
    goto LABEL_73;
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v90) != 3 )
  {
    v47 = v78.y;
LABEL_73:
    ERECTL::bOffsetAdd((ERECTL *)&v119, &v78, 0);
    goto LABEL_74;
  }
  LODWORD(v81) = 0;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v86);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v82);
  if ( !v86 )
    goto LABEL_69;
  if ( !v82 )
    goto LABEL_69;
  RGNOBJ::vSet((RGNOBJ *)&v86, (const struct _RECTL *const)&v119);
  if ( !RGNOBJ::bMerge((RGNOBJ *)&v82, (struct RGNOBJ *)&v86, (struct RGNOBJ *)&v90, 4u) )
    goto LABEL_69;
  if ( !RGNOBJ::bOffset((RGNOBJ *)&v82, &v78) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v119, &v78, 1) )
  {
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v82);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v86);
    goto LABEL_71;
  }
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v82, (struct ERECTL *)&v119);
  v112 = -1;
  pbo.flColorType = v87;
  v115 = 0LL;
  v116 = 0LL;
  pbo.pvRbrush = 0LL;
  v49 = *((_DWORD *)v80 + 768);
  v113 = 0LL;
  v114 = 0LL;
  v117 = 0;
  if ( a5 )
  {
    pbo.iSolidColor = (v30 & 1) == 0;
    if ( v49 )
    {
      v50 = ulIndexToRGB(v25, v26, (v30 & 1) == 0, v48);
      goto LABEL_67;
    }
  }
  else
  {
    pbo.iSolidColor = v30;
    if ( v49 )
    {
      v50 = v88;
LABEL_67:
      v112 = v50;
      v111 = v50;
    }
  }
  LODWORD(v81) = EngPaint((SURFOBJ *)((v83 + 24) & -(__int64)(v83 != 0)), &pco, &pbo, 0LL, 0xD0Du);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
LABEL_69:
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v82);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v86);
  v51 = v78.x;
  v47 = v78.y;
LABEL_74:
  if ( !(_DWORD)v81 )
    goto LABEL_143;
  x = v51 + v77.x;
  y = v47 + v77.y;
  v39 = v89;
  v77.x += v51;
  v78.y = -v47;
  v77.y += v47;
  v78.x = -v51;
  v38 = *(_DWORD *)(v83 + 88);
  v37 = *(_QWORD *)(v83 + 80);
  LODWORD(v81) = 1;
LABEL_77:
  v96 = -1;
  v87 = v37;
  v91 = v39;
  v92 = v119;
  v93 = v30;
  v95 = a5;
  v80 = (unsigned __int8 *)(v37 + v38 * y);
  v94 = v80;
  v52 = *(_QWORD *)(v23 + 128);
  if ( v52 )
  {
    v53 = *(_DWORD *)(v52 + 24);
    if ( (v53 & 0xC) != 0 )
    {
      v96 = 0xFFFFFF;
    }
    else if ( (v53 & 2) != 0 )
    {
      v96 = **(_DWORD **)(v52 + 112) | *(_DWORD *)(*(_QWORD *)(v52 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v52 + 112)
                                                                                             + 8LL);
    }
  }
  v54 = FLOODBM::iColorGet((FLOODBM *)&v91, x);
  if ( !a5 && v54 == v30 || a5 == 1 && v54 != v30 )
    goto LABEL_143;
  v55 = v77.x - 1;
  v56 = v77.x + 1;
  if ( a5 )
  {
    while ( v55 >= v92.m128i_i32[0] && FLOODBM::iColorGet((FLOODBM *)&v91, v55) == v30 )
      --v55;
    while ( v56 < v92.m128i_i32[2] && FLOODBM::iColorGet((FLOODBM *)&v91, v56) == v30 )
      ++v56;
  }
  else
  {
    while ( v55 >= v92.m128i_i32[0] && FLOODBM::iColorGet((FLOODBM *)&v91, v55) != v30 )
      --v55;
    while ( v56 < v92.m128i_i32[2] && FLOODBM::iColorGet((FLOODBM *)&v91, v56) != v30 )
      ++v56;
  }
  v57 = v55 + 1;
  STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v102, 0x1E0u, 1u, v77.y, v57, v56);
  if ( !v105 )
  {
    EngSetLastError(8u);
    goto LABEL_141;
  }
  STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v98, 0x100u, 0, v77.y, v57, v56);
  if ( !v101 )
  {
    EngSetLastError(8u);
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v98);
LABEL_141:
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v102);
    SURFMEM::~SURFMEM((SURFMEM *)&v83);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v118);
    v18 = 0;
    goto LABEL_158;
  }
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v79);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v79, 0x12E0u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v79);
  if ( !v79 )
  {
    EngSetLastError(8u);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v79);
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v98);
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v102);
LABEL_143:
    SURFMEM::~SURFMEM((SURFMEM *)&v83);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v118);
    v18 = 0;
    goto LABEL_158;
  }
  v58 = 1;
  v59 = v119.m128i_i32[3] - 1;
  v60 = v119.m128i_i32[1];
  if ( v77.y >= v119.m128i_i32[3] - 1 )
  {
    v99 -= *(_DWORD *)v100;
    v100 = *(_QWORD *)(v100 + 8);
  }
  else
  {
    v58 = FLOODBM::bExtendScanline(
            (FLOODBM *)&v91,
            (struct STACKOBJ *)v98,
            (struct STACKOBJ *)v102,
            v77.y + 1,
            v80,
            &v80[v38]) & 1;
    if ( !v58 )
    {
LABEL_125:
      EngSetLastError(8u);
LABEL_126:
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v79);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v79);
      STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v98);
      STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v102);
      SURFMEM::~SURFMEM((SURFMEM *)&v83);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v118);
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v109);
      return v58;
    }
  }
  v61 = v87;
  while ( 1 )
  {
    while ( v99 )
    {
      if ( !STACKMEMOBJ::bMergeScanline((STACKMEMOBJ *)v98, (struct RGNOBJ *)&v79) )
        goto LABEL_124;
      v62 = *(_DWORD *)(v100 + 20);
      if ( v62 >= v59 )
      {
        v99 -= *(_DWORD *)v100;
        v100 = *(_QWORD *)(v100 + 8);
      }
      else
      {
        v63 = FLOODBM::bExtendScanline(
                (FLOODBM *)&v91,
                (struct STACKOBJ *)v98,
                (struct STACKOBJ *)v102,
                v62 + 1,
                (unsigned __int8 *)(v61 + v38 * v62),
                (unsigned __int8 *)(v61 + v38 * v62 + v38));
LABEL_123:
        if ( !v63 )
        {
LABEL_124:
          v58 = 0;
          goto LABEL_125;
        }
      }
    }
    if ( !v103 )
      break;
    if ( !v58 || (v58 = 1, !STACKMEMOBJ::bMergeScanline((STACKMEMOBJ *)v102, (struct RGNOBJ *)&v79)) )
      v58 = 0;
    v64 = *(_DWORD *)(v104 + 20);
    if ( v64 > v60 )
    {
      v63 = FLOODBM::bExtendScanline(
              (FLOODBM *)&v91,
              (struct STACKOBJ *)v102,
              (struct STACKOBJ *)v98,
              v64 - 1,
              (unsigned __int8 *)(v61 + v38 * v64),
              (unsigned __int8 *)(v61 + v38 * v64 - v38));
      goto LABEL_123;
    }
    v103 -= *(_DWORD *)v104;
    v104 = *(_QWORD *)(v104 + 8);
  }
  if ( !v58 )
    goto LABEL_125;
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v79) == 1 )
    goto LABEL_126;
  if ( !(_DWORD)v81
    || RGNOBJ::bOffset((RGNOBJ *)&v79, &v78) && (unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v119, &v78, 1) )
  {
    v66 = v97;
    v67 = EBRUSHOBJ::mixBest(
            (EBRUSHOBJ *)v97,
            *(_BYTE *)(*((_QWORD *)v109[0] + 122) + 212LL),
            *(_BYTE *)(*((_QWORD *)v109[0] + 122) + 213LL));
    ++*(_DWORD *)(v23 + 92);
    mix = v67;
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v123, v79, (struct ERECTL *)&v119);
    v70 = (POINTL *)v109[0];
    if ( (*((_DWORD *)v109[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v109, v69, &v119);
      XDCOBJ::vAccumulateTight((XDCOBJ *)v109, v71, &v119);
      v70 = (POINTL *)v109[0];
    }
    v58 = EngPaint((SURFOBJ *)(v23 + 24), &v123, v66, v70 + 149, mix);
    if ( v58 )
      goto LABEL_126;
    goto LABEL_125;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v79);
  STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v98);
  STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v102);
LABEL_71:
  SURFMEM::~SURFMEM((SURFMEM *)&v83);
LABEL_145:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v118);
  v18 = 0;
LABEL_158:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v109);
  return v18;
}
