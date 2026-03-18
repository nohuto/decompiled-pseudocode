/*
 * XREFs of NtGdiEngTextOut @ 0x140264F30
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x140012BD0 (EngTextOut.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x140017080 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1400A99D8 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1400D1B14 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400D1B54 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D2000 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D49D8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400D64F4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400D6674 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400D66EC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1400D6998 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400DA83C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1401F2D0C (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140204FCC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x140222BA0 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1402FB908 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x14033AA00 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x14033AC94 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_1522854203__private_IsEnabledDeviceUsageNoInline @ 0x14033ADB8 (Feature_1522854203__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngTextOut(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        struct _CLIPOBJ *a4,
        CLIPOBJ *a5,
        RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        POINTL *a9,
        MIX mix)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v12; // r9
  UMPDOBJ *v13; // r15
  SURFOBJ *v15; // r13
  FONTOBJ *v16; // r12
  BRUSHOBJ *pboFore; // rsi
  BRUSHOBJ *pboOpaque; // r14
  RECTL *prclExtra; // r12
  struct _CLIPOBJ *DDIOBJ; // rdx
  unsigned int v21; // edi
  FONTOBJ *v22; // rdi
  BOOL v23; // eax
  __int64 v24; // [rsp+50h] [rbp-278h] BYREF
  CLIPOBJ *v25; // [rsp+58h] [rbp-270h] BYREF
  RECTL *prclOpaque; // [rsp+60h] [rbp-268h] BYREF
  __int64 v27; // [rsp+68h] [rbp-260h]
  POINTL *pptlOrg; // [rsp+70h] [rbp-258h] BYREF
  STROBJ *pstro; // [rsp+78h] [rbp-250h]
  struct _BRUSHOBJ *v30; // [rsp+80h] [rbp-248h]
  struct _BRUSHOBJ *v31; // [rsp+88h] [rbp-240h]
  POINTL *v32; // [rsp+90h] [rbp-238h]
  struct _POINTL v33; // [rsp+98h] [rbp-230h] BYREF
  struct _CLIPOBJ *v34; // [rsp+A0h] [rbp-228h]
  UMPDOBJ *v35; // [rsp+A8h] [rbp-220h]
  SURFOBJ *v36; // [rsp+B0h] [rbp-218h]
  struct _CLIPOBJ *v37; // [rsp+B8h] [rbp-210h]
  FONTOBJ *pfo; // [rsp+C0h] [rbp-208h]
  struct _BRUSHOBJ v39; // [rsp+C8h] [rbp-200h] BYREF
  struct _BRUSHOBJ v40; // [rsp+E0h] [rbp-1E8h] BYREF
  SURFOBJ *pso[8]; // [rsp+100h] [rbp-1C8h] BYREF
  struct W32_PUSH_LOCK *v42[4]; // [rsp+140h] [rbp-188h] BYREF
  UMPDOBJ *v43; // [rsp+160h] [rbp-168h]
  struct _RECTL v44; // [rsp+1B0h] [rbp-118h] BYREF
  struct _RECTL v45; // [rsp+1C0h] [rbp-108h] BYREF
  _BYTE v46[160]; // [rsp+1D0h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+270h] [rbp-58h]

  v34 = a4;
  v24 = a3;
  v27 = a2;
  v37 = a4;
  v25 = a5;
  prclOpaque = a6;
  v30 = a7;
  v31 = a8;
  v32 = a9;
  pptlOrg = a9;
  v44 = 0LL;
  v45 = 0LL;
  v33 = 0LL;
  memset(&v39, 0, sizeof(v39));
  memset(&v40, 0, sizeof(v40));
  CurrentThread = GreGetCurrentThread((__int64)a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v42, CurrentThread);
  v13 = v43;
  v35 = v43;
  if ( v43 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)v43, v12);
    v15 = pso[0];
    v36 = pso[0];
    pstro = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)v13, v27);
    v16 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v13, v24);
    pfo = v16;
    pboFore = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a7);
    if ( !pboFore )
      pboFore = CaptureAndFakeBRUSHOBJ(v30, &v39);
    v24 = (__int64)pboFore;
    pboOpaque = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a8);
    if ( !pboOpaque )
      pboOpaque = CaptureAndFakeBRUSHOBJ(v31, &v40);
    v27 = (__int64)pboOpaque;
    if ( v15 && pstro && v16 && pboFore && v32 )
    {
      CaptureRECTL((struct _RECTL **)&v25, &v44);
      CaptureRECTL(&prclOpaque, &v45);
      CapturePOINTL(&pptlOrg, &v33);
      prclExtra = (RECTL *)v25;
      if ( (*((_DWORD *)v13 + 111) & 0x100) != 0 )
        prclExtra = 0LL;
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, v34, &v15->sizlBitmap);
      v25 = DDIOBJ;
      if ( (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) != 0 && pboFore->iSolidColor != -1
        || (v21 = 1, !(unsigned int)bCheckSurfaceRect(v15, prclOpaque, DDIOBJ)) )
      {
        v21 = 0;
      }
      if ( v21 )
      {
        v22 = pfo;
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v24, (struct PFT *)pfo);
        UMPDAcquireRFONTSem((struct RFONTOBJ *)&v24, v13, 0, 0, 0LL);
        if ( (unsigned int)Feature_1522854203__private_IsEnabledDeviceUsageNoInline() )
        {
          ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v46, v15, v25, 0LL);
          if ( !ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v46)
            || (v23 = EngTextOut(v15, pstro, v22, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix),
                v21 = 1,
                !v23) )
          {
            v21 = 0;
          }
          ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v46);
        }
        else
        {
          v21 = EngTextOut(v15, pstro, v22, v25, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
        }
        UMPDReleaseRFONTSem((struct RFONTOBJ *)&v24, v13, 0LL, 0LL, 0LL);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v24);
      }
    }
    else
    {
      v21 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v42);
    return v21;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v42);
    return 0LL;
  }
}
