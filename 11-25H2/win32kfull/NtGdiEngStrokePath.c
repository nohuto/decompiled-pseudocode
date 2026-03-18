/*
 * XREFs of NtGdiEngStrokePath @ 0x140264B40
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngStrokePath @ 0x14006C7B0 (EngStrokePath.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D3CC4 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D49D8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1400D525C (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400D64F4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400D6674 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400D66EC (--1UMPDSURFOBJ@@QEAA@XZ.c)
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

__int64 __fastcall NtGdiEngStrokePath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        POINTL *a6,
        LINEATTRS *a7,
        MIX mix)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v11; // r9
  UMPDOBJ *v12; // r13
  SURFOBJ *v14; // rsi
  PATHOBJ *v15; // r12
  BRUSHOBJ *pbo; // rdi
  unsigned int v17; // ebx
  LINEATTRS *plineattrs; // r14
  struct _CLIPOBJ *v19; // rdx
  unsigned __int64 v20; // rax
  __int64 fl; // rcx
  LINEATTRS *v22; // r13
  CLIPOBJ *v23; // r13
  PFLOAT_LONG pstyle; // rcx
  LINEATTRS *DDIOBJ; // [rsp+40h] [rbp-248h] BYREF
  struct _CLIPOBJ *v26; // [rsp+48h] [rbp-240h]
  XFORMOBJ *pxo; // [rsp+50h] [rbp-238h]
  struct _BRUSHOBJ *v28; // [rsp+58h] [rbp-230h]
  POINTL *pptlBrushOrg; // [rsp+60h] [rbp-228h] BYREF
  POINTL *v30; // [rsp+68h] [rbp-220h]
  struct _POINTL v31; // [rsp+70h] [rbp-218h] BYREF
  UMPDOBJ *v32; // [rsp+78h] [rbp-210h]
  SURFOBJ *v33; // [rsp+80h] [rbp-208h]
  PATHOBJ *v34; // [rsp+88h] [rbp-200h]
  struct _CLIPOBJ *v35; // [rsp+90h] [rbp-1F8h]
  XFORMOBJ *v36; // [rsp+98h] [rbp-1F0h]
  struct _BRUSHOBJ v37; // [rsp+A0h] [rbp-1E8h] BYREF
  struct _LINEATTRS v38; // [rsp+B8h] [rbp-1D0h] BYREF
  SURFOBJ *pso[8]; // [rsp+E0h] [rbp-1A8h] BYREF
  struct W32_PUSH_LOCK *v40[4]; // [rsp+120h] [rbp-168h] BYREF
  UMPDOBJ *v41; // [rsp+140h] [rbp-148h]
  _BYTE v42[160]; // [rsp+190h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+230h] [rbp-58h]

  pxo = a4;
  v26 = a3;
  v35 = a3;
  v36 = a4;
  v28 = a5;
  v30 = a6;
  pptlBrushOrg = a6;
  DDIOBJ = a7;
  v31 = 0LL;
  memset(&v38, 0, sizeof(v38));
  memset(&v37, 0, sizeof(v37));
  CurrentThread = GreGetCurrentThread((__int64)a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v40, CurrentThread);
  v12 = v41;
  v32 = v41;
  if ( v41 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)v41, v11);
    v14 = pso[0];
    v33 = pso[0];
    v15 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v12, a2);
    v34 = v15;
    pbo = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v12, (__int64)a5);
    if ( !pbo )
      pbo = CaptureAndFakeBRUSHOBJ(v28, &v37);
    v28 = pbo;
    if ( v14 && pbo && v15 && a7 && v30 )
    {
      CapturePOINTL(&pptlBrushOrg, &v31);
      v17 = bCaptureLINEATTRS(&DDIOBJ, &v38);
      plineattrs = DDIOBJ;
      if ( v17 )
      {
        v19 = v26;
        if ( (*((_DWORD *)v12 + 111) & 0x100) != 0 && (DDIOBJ->fl & 1) != 0 )
          v17 &= -(v26 != 0LL);
      }
      else
      {
        v19 = v26;
      }
      if ( v17 )
      {
        DDIOBJ = (LINEATTRS *)UMPDOBJ::GetDDIOBJ(v12, v19, &v14->sizlBitmap);
        v20 = UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)v12, (__int64)pxo);
        pxo = (XFORMOBJ *)v20;
        fl = plineattrs->fl;
        if ( (fl & 1) != 0 )
        {
          fl = -(__int64)v20;
          v17 &= -(v20 != 0);
        }
        if ( (unsigned int)Feature_1886439739__private_IsEnabledDeviceUsageNoInline(fl) )
        {
          v22 = DDIOBJ;
          v17 = v17
             && (unsigned int)bCheckSurfacePath(v14, v15, (struct _CLIPOBJ *)DDIOBJ)
             && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->iSolidColor == -1);
          if ( v17 )
          {
            ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v42, v14, (struct _CLIPOBJ *)v22, 0LL);
            v17 = ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v42)
               && EngStrokePath(v14, v15, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
            ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v42);
          }
        }
        else
        {
          v17 = v17
             && (v23 = (CLIPOBJ *)DDIOBJ, (unsigned int)bCheckSurfacePath(v14, v15, (struct _CLIPOBJ *)DDIOBJ))
             && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || pbo->iSolidColor == -1)
             && EngStrokePath(v14, v15, v23, pxo, pbo, pptlBrushOrg, plineattrs, mix);
        }
        pstyle = plineattrs->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle);
      }
    }
    else
    {
      v17 = 0;
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v40);
    return v17;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v40);
    return 0LL;
  }
}
