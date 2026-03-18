/*
 * XREFs of NtGdiEngStretchBltROP @ 0x1402644B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D49D8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400D64F4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400D6674 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400D66EC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1400D6728 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1400D6768 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1400D6A6C (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1400D6A9C (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     EngStretchBltROP @ 0x140132850 (EngStretchBltROP.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1401F2D0C (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140204FCC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14021FDD0 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x140222BA0 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x140223580 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1402298B8 (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1402FB908 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x14033AA00 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z @ 0x14033AA5C (-PROBEDISPATBRUSH@@YAHPEAU_BRUSHOBJ@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x14033AC94 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x14033AD80 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     Feature_1522854203__private_IsEnabledDeviceUsageNoInline @ 0x14033ADB8 (Feature_1522854203__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        SURFOBJ *a3,
        CLIPOBJ *a4,
        XLATEOBJ *a5,
        COLORADJUSTMENT *a6,
        POINTL *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode,
        struct _BRUSHOBJ *a12,
        DWORD rop4)
{
  unsigned int v15; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v17; // r9
  struct _SURFOBJ **v18; // rsi
  __int64 v20; // r9
  __int64 v21; // r9
  SURFOBJ *v22; // r15
  struct _SURFOBJ *v23; // rsi
  SURFOBJ *v24; // r14
  struct _XLATEOBJ *v25; // r8
  DWORD v26; // esi
  unsigned int v27; // ecx
  unsigned int v28; // edi
  struct _RECTL *v29; // rax
  BRUSHOBJ *pbo; // rsi
  struct _BRUSHOBJ *v31; // r9
  RECTL *v32; // r9
  RECTL *prclDest; // rdi
  BOOL v34; // eax
  unsigned int v35; // [rsp+70h] [rbp-328h] BYREF
  unsigned int v36; // [rsp+78h] [rbp-320h] BYREF
  SURFOBJ *psoSrc; // [rsp+80h] [rbp-318h]
  POINTL *pptlMask; // [rsp+88h] [rbp-310h] BYREF
  RECTL *prclSrc; // [rsp+90h] [rbp-308h] BYREF
  CLIPOBJ *DDIOBJ; // [rsp+98h] [rbp-300h]
  XLATEOBJ *pxlo; // [rsp+A0h] [rbp-2F8h]
  RECTL *v42; // [rsp+A8h] [rbp-2F0h] BYREF
  struct _BRUSHOBJ *v43; // [rsp+B0h] [rbp-2E8h]
  UMPDOBJ *v44; // [rsp+B8h] [rbp-2E0h]
  POINTL *pptlHTOrg; // [rsp+C0h] [rbp-2D8h] BYREF
  COLORADJUSTMENT *pca; // [rsp+C8h] [rbp-2D0h] BYREF
  POINTL *v47; // [rsp+D0h] [rbp-2C8h]
  RECTL *v48; // [rsp+D8h] [rbp-2C0h]
  RECTL *v49; // [rsp+E0h] [rbp-2B8h]
  struct _POINTL v50; // [rsp+E8h] [rbp-2B0h] BYREF
  struct _POINTL v51; // [rsp+F0h] [rbp-2A8h] BYREF
  SURFOBJ *v52; // [rsp+F8h] [rbp-2A0h]
  SURFOBJ *v53; // [rsp+100h] [rbp-298h]
  struct _BRUSHOBJ v54; // [rsp+108h] [rbp-290h] BYREF
  SURFOBJ *psoMask[8]; // [rsp+120h] [rbp-278h] BYREF
  struct _SURFOBJ *v56[8]; // [rsp+160h] [rbp-238h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+1A0h] [rbp-1F8h] BYREF
  struct W32_PUSH_LOCK *v58[4]; // [rsp+1E0h] [rbp-1B8h] BYREF
  struct UMPDOBJ *v59; // [rsp+200h] [rbp-198h]
  struct _RECTL v60; // [rsp+250h] [rbp-148h] BYREF
  struct _RECTL v61; // [rsp+260h] [rbp-138h] BYREF
  struct _RECTL v62; // [rsp+270h] [rbp-128h] BYREF
  struct tagCOLORADJUSTMENT v63; // [rsp+280h] [rbp-118h] BYREF
  _BYTE v64[160]; // [rsp+2A0h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+340h] [rbp-58h]

  DDIOBJ = a4;
  psoSrc = a3;
  v48 = a8;
  v47 = a7;
  *(_QWORD *)&v60.left = a4;
  pxlo = a5;
  pca = a6;
  pptlHTOrg = a7;
  v42 = a8;
  v49 = a9;
  prclSrc = a9;
  pptlMask = a10;
  v43 = a12;
  v35 = rop4;
  v36 = rop4;
  v61 = 0LL;
  v62 = 0LL;
  v15 = 0;
  v50 = 0LL;
  v51 = 0LL;
  memset(&v63, 0, sizeof(v63));
  CurrentThread = GreGetCurrentThread((__int64)a8, (__int64)a7);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v58, CurrentThread);
  v18 = (struct _SURFOBJ **)v59;
  v44 = v59;
  if ( !v59 )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v58);
    return 0LL;
  }
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)v59, v17);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v56, a2, v18, v20);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, psoSrc, v18, v21);
  v22 = psoDest[0];
  v52 = psoDest[0];
  v23 = v56[0];
  psoSrc = v56[0];
  v24 = psoMask[0];
  v53 = psoMask[0];
  if ( !v47 && iMode == 4 )
    goto LABEL_11;
  if ( !psoDest[0] || !v56[0] || !v48 || !v49 )
  {
LABEL_42:
    v28 = 0;
    goto LABEL_43;
  }
  CaptureRECTL(&v42, &v61);
  CaptureRECTL(&prclSrc, &v62);
  CapturePOINTL(&pptlMask, &v50);
  CapturePOINTL(&pptlHTOrg, &v51);
  CaptureCOLORADJUSTMENT(&pca, &v63);
  if ( !bCheckDestSurfaceOverlap(v22, v42) )
  {
    v15 = 1;
LABEL_11:
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v56);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v58);
    return v15;
  }
  memset(&v54, 0, sizeof(v54));
  DDIOBJ = UMPDOBJ::GetDDIOBJ(v44, DDIOBJ, &v22->sizlBitmap);
  v25 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v44, (__int64)pxlo);
  pxlo = v25;
  if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) != 0 && !bOrder(prclSrc)
    || !(unsigned int)bCheckXlate(v23, v25) )
  {
    goto LABEL_20;
  }
  v26 = rop4 >> 8;
  v27 = (unsigned __int8)rop4;
  v35 = (unsigned __int8)rop4;
  if ( (unsigned __int8)rop4 == BYTE1(rop4) || v24 )
    goto LABEL_19;
  if ( !(unsigned int)PROBEDISPATBRUSH(v43) )
  {
LABEL_20:
    v28 = 0;
    v26 = v36 >> 8;
    v27 = (unsigned __int8)v36;
    goto LABEL_21;
  }
  v27 = v35;
LABEL_19:
  v28 = 1;
LABEL_21:
  if ( v27 != (unsigned __int8)v26 && (!v24 || !pptlMask) )
    v28 = 0;
  if ( v28 )
  {
    if ( rop4 == 43724 )
    {
      if ( v24 )
      {
        v60 = 0LL;
        v35 = 0;
        v36 = 0;
        v28 = bCheckSurfaceRectSize(psoSrc, prclSrc, 0LL, &v35, &v36);
        if ( v28 )
        {
          v29 = pRect(pptlMask, &v60, v35, v36);
          v28 = bCheckMask(v24, v29);
        }
      }
    }
  }
  pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v44, (__int64)v43);
  if ( !pbo )
    pbo = CaptureAndFakeBRUSHOBJ(v31, &v54);
  if ( (unsigned int)Feature_1522854203__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v28 )
    {
      v32 = 0LL;
      prclDest = v42;
      if ( iMode == 4 )
        v32 = v42;
      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v64, v22, DDIOBJ, v32);
      if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v64)
        || (v34 = EngStretchBltROP(
                    v22,
                    psoSrc,
                    v24,
                    pco,
                    pxlo,
                    pca,
                    pptlHTOrg,
                    prclDest,
                    prclSrc,
                    pptlMask,
                    iMode,
                    pbo,
                    rop4),
            v28 = 1,
            !v34) )
      {
        v28 = 0;
      }
      ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v64);
    }
    goto LABEL_43;
  }
  if ( !v28 )
    goto LABEL_42;
  v28 = 1;
  if ( !EngStretchBltROP(v22, psoSrc, v24, DDIOBJ, pxlo, pca, pptlHTOrg, v42, prclSrc, pptlMask, iMode, pbo, rop4) )
    goto LABEL_42;
LABEL_43:
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v56);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v58);
  return v28;
}
