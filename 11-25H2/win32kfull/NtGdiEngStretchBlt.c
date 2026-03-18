/*
 * XREFs of NtGdiEngStretchBlt @ 0x140263F90
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400D64F4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400D6674 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400D66EC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1400D6728 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1400D6768 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1400D6A6C (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1400D6A9C (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     EngStretchBlt @ 0x140132EF0 (EngStretchBlt.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1401F2D0C (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140204FCC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14021FDD0 (-bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x140223580 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1402298B8 (-CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1402FB908 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x14033AA00 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x14033AC94 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x14033AD80 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     Feature_1522854203__private_IsEnabledDeviceUsageNoInline @ 0x14033ADB8 (Feature_1522854203__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        CLIPOBJ *a7,
        XLATEOBJ *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  unsigned int v14; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v16; // r9
  struct _SURFOBJ **v17; // r13
  __int64 v19; // r9
  __int64 v20; // r9
  SURFOBJ *v21; // rsi
  SURFOBJ *v22; // r14
  SURFOBJ *v23; // r15
  RECTL *prclSrc; // r13
  struct _XLATEOBJ *v25; // rdx
  unsigned int v26; // edi
  struct _RECTL *v27; // rax
  RECTL *v28; // r9
  RECTL *prclDest; // rdi
  BOOL v30; // eax
  unsigned int v31[2]; // [rsp+60h] [rbp-2F8h] BYREF
  struct _CLIPOBJ *v32; // [rsp+68h] [rbp-2F0h] BYREF
  POINTL *pptlMask; // [rsp+70h] [rbp-2E8h] BYREF
  RECTL *v34; // [rsp+78h] [rbp-2E0h] BYREF
  XLATEOBJ *pxlo; // [rsp+80h] [rbp-2D8h]
  CLIPOBJ *DDIOBJ; // [rsp+88h] [rbp-2D0h]
  POINTL *pptlHTOrg; // [rsp+90h] [rbp-2C8h] BYREF
  COLORADJUSTMENT *pca; // [rsp+98h] [rbp-2C0h] BYREF
  RECTL *v39; // [rsp+A0h] [rbp-2B8h] BYREF
  RECTL *v40; // [rsp+A8h] [rbp-2B0h]
  struct _POINTL v41; // [rsp+B0h] [rbp-2A8h] BYREF
  struct _POINTL v42; // [rsp+B8h] [rbp-2A0h] BYREF
  UMPDOBJ *v43; // [rsp+C0h] [rbp-298h]
  SURFOBJ *v44; // [rsp+C8h] [rbp-290h]
  SURFOBJ *v45; // [rsp+D0h] [rbp-288h]
  SURFOBJ *v46; // [rsp+D8h] [rbp-280h]
  SURFOBJ *psoMask[8]; // [rsp+E0h] [rbp-278h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+120h] [rbp-238h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+160h] [rbp-1F8h] BYREF
  struct W32_PUSH_LOCK *v50[4]; // [rsp+1A0h] [rbp-1B8h] BYREF
  UMPDOBJ *v51; // [rsp+1C0h] [rbp-198h]
  struct _RECTL v52; // [rsp+210h] [rbp-148h] BYREF
  struct _RECTL v53; // [rsp+220h] [rbp-138h] BYREF
  struct _RECTL v54; // [rsp+230h] [rbp-128h] BYREF
  tagCOLORADJUSTMENT v55; // [rsp+240h] [rbp-118h] BYREF
  _BYTE v56[160]; // [rsp+260h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+300h] [rbp-58h]

  v32 = a4;
  pxlo = a8;
  DDIOBJ = a7;
  *(_QWORD *)&v52.left = a4;
  *(_QWORD *)v31 = a5;
  pca = a6;
  pptlHTOrg = (POINTL *)a7;
  v34 = (RECTL *)a8;
  v40 = a9;
  v39 = a9;
  pptlMask = a10;
  v53 = 0LL;
  v54 = 0LL;
  v14 = 0;
  v41 = 0LL;
  v42 = 0LL;
  memset(&v55, 0, sizeof(v55));
  CurrentThread = GreGetCurrentThread((__int64)a8, (__int64)a7);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v50, CurrentThread);
  v17 = (struct _SURFOBJ **)v51;
  v43 = v51;
  if ( !v51 )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v50);
    return 0LL;
  }
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)v51, v16);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v17, v19);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, a3, v17, v20);
  v21 = psoDest[0];
  v44 = psoDest[0];
  v22 = psoSrc[0];
  v45 = psoSrc[0];
  v23 = psoMask[0];
  v46 = psoMask[0];
  if ( !DDIOBJ && iMode == 4 )
    goto LABEL_11;
  if ( psoDest[0] && psoSrc[0] && pxlo && v40 )
  {
    CaptureRECTL(&v34, &v53);
    CapturePOINTL(&pptlMask, &v41);
    CaptureRECTL(&v39, &v54);
    CaptureCOLORADJUSTMENT(&pca, &v55);
    CapturePOINTL(&pptlHTOrg, &v42);
    if ( !bCheckDestSurfaceOverlap(v21, v34) )
    {
      v14 = 1;
LABEL_11:
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
      UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v50);
      return v14;
    }
    DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v17, v32, &v21->sizlBitmap);
    pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v17, *(__int64 *)v31);
    prclSrc = v39;
    if ( !bOrder(v39) || (v26 = 1, !(unsigned int)bCheckXlate(v22, v25)) )
      v26 = 0;
    if ( v26 )
    {
      if ( v23 )
      {
        v52 = 0LL;
        LODWORD(v32) = 0;
        v31[0] = 0;
        v26 = bCheckSurfaceRectSize(v22, prclSrc, 0LL, (unsigned int *)&v32, v31);
        if ( v26 )
        {
          v27 = pRect(pptlMask, &v52, (unsigned int)v32, v31[0]);
          v26 = bCheckMask(v23, v27);
        }
      }
      if ( v26 )
      {
        if ( (unsigned int)Feature_1522854203__private_IsEnabledDeviceUsageNoInline() )
        {
          v28 = 0LL;
          prclDest = v34;
          if ( iMode == 4 )
            v28 = v34;
          ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v56, v21, DDIOBJ, v28);
          if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v56)
            || (v30 = EngStretchBlt(v21, v22, v23, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode),
                v26 = 1,
                !v30) )
          {
            v26 = 0;
          }
          ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v56);
        }
        else
        {
          v26 = EngStretchBlt(v21, v22, v23, DDIOBJ, pxlo, pca, pptlHTOrg, v34, prclSrc, pptlMask, iMode);
        }
      }
    }
  }
  else
  {
    v26 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v50);
  return v26;
}
