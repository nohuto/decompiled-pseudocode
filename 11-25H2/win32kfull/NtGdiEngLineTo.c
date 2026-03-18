/*
 * XREFs of NtGdiEngLineTo @ 0x14033BA90
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngLineTo @ 0x14006ABB0 (EngLineTo.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D49D8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400D64F4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400D6674 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400D66EC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1400D6998 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140204FCC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x140222BA0 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1402FB908 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     Feature_1254418747__private_IsEnabledDeviceUsageNoInline @ 0x1402FBB90 (Feature_1254418747__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x14033AA00 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x14033AC94 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        LONG a4,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *a8,
        MIX mix)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v13; // r9
  UMPDOBJ *v14; // r14
  SURFOBJ *v16; // rsi
  BRUSHOBJ *v17; // rdi
  struct _CLIPOBJ *DDIOBJ; // r14
  unsigned int v19; // ebx
  RECTL *prclBounds; // [rsp+60h] [rbp-208h] BYREF
  struct _CLIPOBJ *v22; // [rsp+68h] [rbp-200h]
  UMPDOBJ *v23; // [rsp+70h] [rbp-1F8h]
  SURFOBJ *v24; // [rsp+78h] [rbp-1F0h]
  struct _CLIPOBJ *v25; // [rsp+80h] [rbp-1E8h]
  struct _BRUSHOBJ v26; // [rsp+88h] [rbp-1E0h] BYREF
  SURFOBJ *pso[8]; // [rsp+A0h] [rbp-1C8h] BYREF
  struct W32_PUSH_LOCK *v28[4]; // [rsp+E0h] [rbp-188h] BYREF
  UMPDOBJ *v29; // [rsp+100h] [rbp-168h]
  struct _RECTL v30; // [rsp+150h] [rbp-118h] BYREF
  struct _RECTL v31; // [rsp+160h] [rbp-108h] BYREF
  _BYTE v32[160]; // [rsp+170h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+210h] [rbp-58h]

  v22 = a2;
  v25 = a2;
  prclBounds = a8;
  v31 = 0LL;
  v30.left = a4;
  v30.top = y1;
  v30.right = x2;
  v30.bottom = y2;
  memset(&v26, 0, sizeof(v26));
  CurrentThread = GreGetCurrentThread((__int64)a1, (__int64)a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v28, CurrentThread);
  v14 = v29;
  v23 = v29;
  if ( v29 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)v29, v13);
    v16 = pso[0];
    v24 = pso[0];
    v17 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a3);
    if ( !v17 )
      v17 = CaptureAndFakeBRUSHOBJ(a3, &v26);
    if ( v16 && v17 )
    {
      CaptureRECTL(&prclBounds, &v31);
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v14, v22, &v16->sizlBitmap);
      v19 = bCheckSurfaceRect(v16, &v30, DDIOBJ);
      if ( v19 )
      {
        if ( (unsigned int)Feature_1254418747__private_IsEnabledDeviceUsageNoInline() )
        {
          ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v32, v16, DDIOBJ, 0LL);
          v19 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v32)
             && EngLineTo(v16, pco, v17, a4, y1, x2, y2, prclBounds, mix);
          ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v32);
        }
        else
        {
          v19 = EngLineTo(v16, DDIOBJ, v17, a4, y1, x2, y2, prclBounds, mix);
        }
      }
    }
    else
    {
      v19 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v28);
    return v19;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v28);
    return 0LL;
  }
}
