/*
 * XREFs of NtGdiEngCopyBits @ 0x14033B220
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400D64F4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400D6674 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400D66EC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1400D6728 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1400D6768 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1400D6998 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1400D6A9C (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1401F2D0C (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140204FCC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x140223580 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     ?pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z @ 0x14033AD80 (-pRect@@YAPEAU_RECTL@@PEAU_POINTL@@PEAU1@KK@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        RECTL *a5,
        POINTL *a6)
{
  unsigned int v8; // edi
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v10; // r9
  struct _SURFOBJ **v11; // r12
  __int64 v13; // r9
  SURFOBJ *v14; // r14
  SURFOBJ *v15; // rsi
  __int64 v16; // r13
  RECTL *prclDest; // r15
  struct _CLIPOBJ *v18; // rdx
  XLATEOBJ *v19; // r13
  struct _CLIPOBJ *v20; // r10
  POINTL *pptlSrc; // r12
  struct _RECTL *v22; // rax
  unsigned int v23; // [rsp+30h] [rbp-1A8h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-1A4h] BYREF
  CLIPOBJ *pco; // [rsp+38h] [rbp-1A0h]
  RECTL *v26; // [rsp+40h] [rbp-198h] BYREF
  POINTL *v27; // [rsp+48h] [rbp-190h] BYREF
  struct _POINTL v28; // [rsp+50h] [rbp-188h] BYREF
  __int64 v29; // [rsp+58h] [rbp-180h]
  CLIPOBJ *v30; // [rsp+60h] [rbp-178h]
  UMPDOBJ *v31; // [rsp+68h] [rbp-170h]
  SURFOBJ *v32; // [rsp+70h] [rbp-168h]
  SURFOBJ *v33; // [rsp+78h] [rbp-160h]
  SURFOBJ *psoSrc[8]; // [rsp+80h] [rbp-158h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+C0h] [rbp-118h] BYREF
  struct W32_PUSH_LOCK *v36[4]; // [rsp+100h] [rbp-D8h] BYREF
  UMPDOBJ *v37; // [rsp+120h] [rbp-B8h]
  struct _RECTL v38; // [rsp+170h] [rbp-68h] BYREF
  struct _RECTL v39; // [rsp+180h] [rbp-58h] BYREF

  v30 = a4;
  v29 = a3;
  *(_QWORD *)&v38.left = a3;
  pco = a4;
  v26 = a5;
  v27 = a6;
  v39 = 0LL;
  v28 = 0LL;
  v24 = 0;
  v23 = 0;
  v8 = 1;
  CurrentThread = GreGetCurrentThread((__int64)a1, (__int64)a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v36, CurrentThread);
  v11 = (struct _SURFOBJ **)v37;
  v31 = v37;
  if ( v37 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)v37, v10);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v11, v13);
    v14 = psoDest[0];
    v32 = psoDest[0];
    v15 = psoSrc[0];
    v33 = psoSrc[0];
    if ( psoDest[0] && psoSrc[0] && !psoDest[0]->iType && a5 && a6 )
    {
      CaptureRECTL(&v26, &v39);
      CapturePOINTL(&v27, &v28);
      v16 = (__int64)v30;
      prclDest = v26;
      if ( bOrder(v26) )
      {
        pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v11, v18, &v14->sizlBitmap);
        v19 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v11, v16);
        if ( !(unsigned int)bCheckSurfaceRectSize(v14, prclDest, v20, &v24, &v23)
          || (v8 = 1, !(unsigned int)bCheckXlate(v15, v19)) )
        {
          v8 = 0;
        }
        if ( v8 )
        {
          v38 = 0LL;
          pptlSrc = v27;
          v22 = pRect(v27, &v38, v24, v23);
          v8 = bCheckSurfaceRect(v15, v22, 0LL);
          if ( v8 )
            v8 = EngCopyBits(v14, v15, pco, v19, prclDest, pptlSrc);
        }
      }
    }
    else
    {
      v8 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v36);
    return v8;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v36);
    return 0LL;
  }
}
