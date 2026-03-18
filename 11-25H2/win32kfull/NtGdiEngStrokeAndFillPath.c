/*
 * XREFs of NtGdiEngStrokeAndFillPath @ 0x14033C2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D3CC4 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D49D8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1400D525C (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400D64F4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400D6674 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400D66EC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     EngStrokeAndFillPath @ 0x1400E48A0 (EngStrokeAndFillPath.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1401F2D0C (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1402193FC (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x140222BA0 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1402FB908 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x14033AA00 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x14033AAD8 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x14033AC94 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     Feature_1886439739__private_IsEnabledDeviceUsageNoInline @ 0x14033AE0C (Feature_1886439739__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEngStrokeAndFillPath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _LINEATTRS *a6,
        __int64 a7,
        POINTL *a8,
        MIX mixFill,
        FLONG flOptions)
{
  unsigned int v13; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v15; // r9
  UMPDOBJ *v16; // r13
  SURFOBJ *v18; // r14
  struct _CLIPOBJ *DDIOBJ; // rsi
  BRUSHOBJ *pboStroke; // r12
  BRUSHOBJ *v21; // rdi
  struct _BRUSHOBJ *v22; // r9
  XFORMOBJ *v23; // rax
  XFORMOBJ *v24; // r13
  _DWORD *v25; // r9
  struct _LINEATTRS *v26; // rdi
  PFLOAT_LONG pstyle; // rcx
  BRUSHOBJ *pboFill; // [rsp+30h] [rbp-298h]
  BRUSHOBJ *pboFilla; // [rsp+30h] [rbp-298h]
  struct _LINEATTRS *plineattrs; // [rsp+50h] [rbp-278h]
  PATHOBJ *ppo; // [rsp+60h] [rbp-268h]
  struct _LINEATTRS *v32; // [rsp+70h] [rbp-258h] BYREF
  POINTL *pptlBrushOrg; // [rsp+78h] [rbp-250h] BYREF
  XFORMOBJ *pxo; // [rsp+80h] [rbp-248h]
  struct _CLIPOBJ *v35; // [rsp+88h] [rbp-240h]
  BRUSHOBJ *v36; // [rsp+90h] [rbp-238h]
  XFORMOBJ *v37; // [rsp+98h] [rbp-230h]
  POINTL *v38; // [rsp+A0h] [rbp-228h]
  struct _POINTL v39; // [rsp+A8h] [rbp-220h] BYREF
  UMPDOBJ *v40; // [rsp+B0h] [rbp-218h]
  SURFOBJ *v41; // [rsp+B8h] [rbp-210h]
  struct _BRUSHOBJ v42; // [rsp+C0h] [rbp-208h] BYREF
  struct _BRUSHOBJ v43; // [rsp+D8h] [rbp-1F0h] BYREF
  struct _LINEATTRS v44; // [rsp+F0h] [rbp-1D8h] BYREF
  SURFOBJ *pso[8]; // [rsp+120h] [rbp-1A8h] BYREF
  struct W32_PUSH_LOCK *v46[4]; // [rsp+160h] [rbp-168h] BYREF
  UMPDOBJ *v47; // [rsp+180h] [rbp-148h]
  _BYTE v48[160]; // [rsp+1D0h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+270h] [rbp-58h]

  v37 = a4;
  pxo = a4;
  v32 = a6;
  v38 = a8;
  pptlBrushOrg = a8;
  v13 = 0;
  v39 = 0LL;
  memset(&v44, 0, sizeof(v44));
  memset(&v42, 0, sizeof(v42));
  memset(&v43, 0, sizeof(v43));
  CurrentThread = GreGetCurrentThread((__int64)a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v46, CurrentThread);
  v16 = v47;
  v40 = v47;
  if ( !v47 )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v46);
    return 0LL;
  }
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)v47, v15);
  v18 = pso[0];
  v41 = pso[0];
  ppo = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v16, a2);
  if ( v18 )
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v16, a3, &v18->sizlBitmap);
  else
    DDIOBJ = 0LL;
  v35 = DDIOBJ;
  pboStroke = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v16, (__int64)a5);
  if ( !pboStroke )
    pboStroke = CaptureAndFakeBRUSHOBJ(a5, &v42);
  v36 = pboStroke;
  v21 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v16, a7);
  if ( !v21 )
    v21 = CaptureAndFakeBRUSHOBJ(v22, &v43);
  if ( v18 )
  {
    if ( pboStroke )
    {
      if ( v21 )
      {
        if ( ppo )
        {
          if ( a6 )
          {
            if ( DDIOBJ )
            {
              if ( v38 )
              {
                CapturePOINTL(&pptlBrushOrg, &v39);
                v13 = bCaptureLINEATTRS(&v32, &v44);
                plineattrs = v32;
                if ( v13 )
                {
                  v23 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v16, (__int64)v37);
                  v24 = v23;
                  pxo = v23;
                  if ( (*v25 & 1) != 0 )
                    v13 &= -(v23 != 0LL);
                  if ( (unsigned int)Feature_1886439739__private_IsEnabledDeviceUsageNoInline() )
                  {
                    v13 = v13
                       && (unsigned int)bCheckSurfacePath(v18, ppo, DDIOBJ)
                       && ((((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || v21->iSolidColor == -1);
                    if ( v13 )
                    {
                      ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v48, v18, DDIOBJ, 0LL);
                      if ( ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v48) )
                      {
                        pboFill = v21;
                        v26 = plineattrs;
                        if ( EngStrokeAndFillPath(
                               v18,
                               ppo,
                               pco,
                               pxo,
                               pboStroke,
                               plineattrs,
                               pboFill,
                               pptlBrushOrg,
                               mixFill,
                               flOptions) )
                        {
                          v13 = 1;
LABEL_33:
                          ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v48);
                          goto LABEL_43;
                        }
                      }
                      else
                      {
                        v26 = plineattrs;
                      }
                      v13 = 0;
                      goto LABEL_33;
                    }
                    v26 = plineattrs;
                  }
                  else
                  {
                    if ( v13
                      && (unsigned int)bCheckSurfacePath(v18, ppo, DDIOBJ)
                      && ((((unsigned __int8)mixFill ^ BYTE1(mixFill)) & 0xF) == 0 || v21->iSolidColor == -1) )
                    {
                      pboFilla = v21;
                      v26 = plineattrs;
                      if ( EngStrokeAndFillPath(
                             v18,
                             ppo,
                             DDIOBJ,
                             v24,
                             pboStroke,
                             plineattrs,
                             pboFilla,
                             pptlBrushOrg,
                             mixFill,
                             flOptions) )
                      {
                        v13 = 1;
                        goto LABEL_43;
                      }
                    }
                    else
                    {
                      v26 = plineattrs;
                    }
                    v13 = 0;
                  }
LABEL_43:
                  pstyle = v26->pstyle;
                  if ( pstyle )
                    Win32FreePool(pstyle);
                }
              }
            }
          }
        }
      }
    }
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v46);
  return v13;
}
