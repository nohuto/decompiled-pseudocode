/*
 * XREFs of NtGdiEngTransparentBlt @ 0x14033C780
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
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1400D6998 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1400D6A9C (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     EngTransparentBlt @ 0x1400F62F0 (EngTransparentBlt.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140204FCC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x140223580 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        __int64 a4,
        RECTL *a5,
        RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  unsigned int v11; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v13; // r9
  struct _SURFOBJ **v14; // r15
  __int64 v16; // r9
  SURFOBJ *v17; // rsi
  SURFOBJ *v18; // rdi
  RECTL *prclDst; // r12
  RECTL *prclSrc; // r14
  CLIPOBJ *DDIOBJ; // r13
  XLATEOBJ *v22; // r15
  RECTL *v23; // [rsp+40h] [rbp-198h] BYREF
  RECTL *v24; // [rsp+48h] [rbp-190h] BYREF
  __int64 v25; // [rsp+50h] [rbp-188h]
  UMPDOBJ *v26; // [rsp+58h] [rbp-180h]
  SURFOBJ *v27; // [rsp+60h] [rbp-178h]
  SURFOBJ *v28; // [rsp+68h] [rbp-170h]
  struct _CLIPOBJ *v29; // [rsp+70h] [rbp-168h]
  __int64 v30; // [rsp+78h] [rbp-160h]
  SURFOBJ *psoSrc[8]; // [rsp+80h] [rbp-158h] BYREF
  SURFOBJ *psoDst[8]; // [rsp+C0h] [rbp-118h] BYREF
  struct W32_PUSH_LOCK *v33[4]; // [rsp+100h] [rbp-D8h] BYREF
  UMPDOBJ *v34; // [rsp+120h] [rbp-B8h]
  struct _RECTL v35; // [rsp+170h] [rbp-68h] BYREF
  struct _RECTL v36; // [rsp+180h] [rbp-58h] BYREF

  v25 = a4;
  v29 = a3;
  v30 = a4;
  v23 = a5;
  v24 = a6;
  v11 = 1;
  v36 = 0LL;
  v35 = 0LL;
  CurrentThread = GreGetCurrentThread((__int64)a1, (__int64)a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v33, CurrentThread);
  v14 = (struct _SURFOBJ **)v34;
  v26 = v34;
  if ( v34 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDst, a1, (struct _SURFOBJ **)v34, v13);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v14, v16);
    v17 = psoDst[0];
    v27 = psoDst[0];
    v18 = psoSrc[0];
    v28 = psoSrc[0];
    if ( psoDst[0] && psoSrc[0] && a5 && a6 )
    {
      CaptureRECTL(&v24, &v35);
      CaptureRECTL(&v23, &v36);
      prclDst = v23;
      if ( bOrder(v23) )
      {
        prclSrc = v24;
        if ( bOrder(v24) )
        {
          DDIOBJ = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v14, a3, &v17->sizlBitmap);
          v22 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v14, v25);
          v11 = (unsigned int)bCheckSurfaceRect(v18, prclSrc, 0LL) && (unsigned int)bCheckXlate(v18, v22);
          if ( v11 )
            v11 = EngTransparentBlt(v17, v18, DDIOBJ, v22, prclDst, prclSrc, iTransColor, ulReserved);
        }
      }
    }
    else
    {
      v11 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDst);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v33);
    return v11;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v33);
    return 0LL;
  }
}
