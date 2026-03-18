/*
 * XREFs of NtGdiEngAlphaBlend @ 0x14033AF40
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngAlphaBlend @ 0x14006D290 (EngAlphaBlend.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400D64F4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400D6674 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400D66EC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1400D6728 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1400D6998 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1400D6A9C (-bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140204FCC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?bOrder@@YAHPEAU_RECTL@@@Z @ 0x140223580 (-bOrder@@YAHPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        RECTL *a5,
        RECTL *a6,
        __int64 a7)
{
  unsigned int v9; // esi
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v11; // r9
  UMPDOBJ *v12; // r14
  __int64 v14; // r9
  BLENDOBJ *pBlendObj; // rdi
  SURFOBJ *v16; // r13
  SURFOBJ *v17; // r15
  RECTL *prclSrc; // r12
  struct _CLIPOBJ *v19; // rdx
  XLATEOBJ *v20; // r14
  RECTL *prclDest; // [rsp+48h] [rbp-1B0h] BYREF
  CLIPOBJ *pco; // [rsp+50h] [rbp-1A8h]
  RECTL *v23; // [rsp+58h] [rbp-1A0h] BYREF
  CLIPOBJ *v24; // [rsp+60h] [rbp-198h]
  RECTL *v25; // [rsp+68h] [rbp-190h]
  RECTL *v26; // [rsp+70h] [rbp-188h]
  __int64 v27; // [rsp+78h] [rbp-180h]
  UMPDOBJ *v28; // [rsp+80h] [rbp-178h]
  SURFOBJ *v29; // [rsp+88h] [rbp-170h]
  SURFOBJ *v30; // [rsp+90h] [rbp-168h]
  __int64 v31; // [rsp+98h] [rbp-160h]
  SURFOBJ *psoSrc[8]; // [rsp+A0h] [rbp-158h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+E0h] [rbp-118h] BYREF
  struct W32_PUSH_LOCK *v34[4]; // [rsp+120h] [rbp-D8h] BYREF
  UMPDOBJ *v35; // [rsp+140h] [rbp-B8h]
  struct _RECTL v36; // [rsp+190h] [rbp-68h] BYREF
  struct _RECTL v37; // [rsp+1A0h] [rbp-58h] BYREF

  v24 = a4;
  v27 = a3;
  v31 = a3;
  pco = a4;
  v25 = a5;
  prclDest = a5;
  v26 = a6;
  v23 = a6;
  v9 = 1;
  v37 = 0LL;
  v36 = 0LL;
  CurrentThread = GreGetCurrentThread((__int64)a1, (__int64)a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v34, CurrentThread);
  v12 = v35;
  v28 = v35;
  if ( v35 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)v35, v11);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, (struct _SURFOBJ **)v12, v14);
    if ( a7 == *((_QWORD *)v12 + 41) )
      pBlendObj = (BLENDOBJ *)*((_QWORD *)v12 + 40);
    else
      pBlendObj = 0LL;
    if ( (*((_DWORD *)v12 + 111) & 0x100) != 0 && pBlendObj && pBlendObj < MmSystemRangeStart )
      pBlendObj = 0LL;
    v16 = psoDest[0];
    v30 = psoDest[0];
    v17 = psoSrc[0];
    v29 = psoSrc[0];
    if ( psoDest[0] && psoSrc[0] && pBlendObj && v25 && v26 )
    {
      CaptureRECTL(&v23, &v36);
      CaptureRECTL(&prclDest, &v37);
      prclSrc = v23;
      if ( bOrder(v23) && bOrder(prclDest) )
      {
        pco = UMPDOBJ::GetDDIOBJ(v12, v19, &v16->sizlBitmap);
        v20 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v12, (__int64)v24);
        if ( !(unsigned int)bCheckSurfaceRect(v17, prclSrc, 0LL) || (v9 = 1, !(unsigned int)bCheckXlate(v17, v20)) )
          v9 = 0;
        if ( v9 )
          v9 = EngAlphaBlend(v16, v17, pco, v20, prclDest, prclSrc, pBlendObj);
      }
    }
    else
    {
      v9 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v34);
    return v9;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v34);
    return 0LL;
  }
}
