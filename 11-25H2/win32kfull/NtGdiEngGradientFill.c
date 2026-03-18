/*
 * XREFs of NtGdiEngGradientFill @ 0x14033B610
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
 *     EngGradientFill @ 0x1400F77E0 (EngGradientFill.c)
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1401F2D0C (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140204FCC (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1402FB908 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x14033AA00 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?CaptureBits@@YAXPEAX0K@Z @ 0x14033AA1C (-CaptureBits@@YAXPEAX0K@Z.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x14033AC94 (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x14033ACB4 (-bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z.c)
 *     Feature_1522854203__private_IsEnabledDeviceUsageNoInline @ 0x14033ADB8 (Feature_1522854203__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall NtGdiEngGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        __int64 a3,
        void *a4,
        ULONG nVertex,
        void *a6,
        ULONG a7,
        RECTL *a8,
        POINTL *a9,
        ULONG ulMode)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v12; // r9
  SURFOBJ *v13; // r13
  int v14; // ebx
  unsigned int nMesh; // edi
  bool v16; // cc
  unsigned int v17; // ebx
  TRIVERTEX *v18; // r14
  __int64 v19; // rax
  void *pMesh; // rsi
  BOOL v21; // ebx
  struct _CLIPOBJ *DDIOBJ; // rbx
  XLATEOBJ *v23; // rax
  XLATEOBJ *v24; // rax
  UMPDOBJ *v26; // [rsp+58h] [rbp-240h]
  POINTL *pptlDitherOrg; // [rsp+78h] [rbp-220h] BYREF
  RECTL *prclExtents; // [rsp+80h] [rbp-218h] BYREF
  void *v30; // [rsp+88h] [rbp-210h]
  void *v31; // [rsp+90h] [rbp-208h]
  struct _CLIPOBJ *v32; // [rsp+98h] [rbp-200h]
  RECTL *v33; // [rsp+A0h] [rbp-1F8h]
  POINTL *v34; // [rsp+A8h] [rbp-1F0h]
  struct _POINTL v35; // [rsp+B0h] [rbp-1E8h] BYREF
  TRIVERTEX *v36; // [rsp+B8h] [rbp-1E0h]
  __int64 v37; // [rsp+C0h] [rbp-1D8h]
  SURFOBJ *v38; // [rsp+C8h] [rbp-1D0h]
  struct _CLIPOBJ *v39; // [rsp+D0h] [rbp-1C8h]
  __int64 v40; // [rsp+D8h] [rbp-1C0h]
  SURFOBJ *psoDest[8]; // [rsp+E0h] [rbp-1B8h] BYREF
  struct W32_PUSH_LOCK *v42[4]; // [rsp+120h] [rbp-178h] BYREF
  struct UMPDOBJ *v43; // [rsp+140h] [rbp-158h]
  struct _RECTL v44; // [rsp+190h] [rbp-108h] BYREF
  _BYTE v45[160]; // [rsp+1A0h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+240h] [rbp-58h]

  v30 = a4;
  v32 = a2;
  v39 = a2;
  v40 = a3;
  v31 = a6;
  v33 = a8;
  prclExtents = a8;
  v34 = a9;
  pptlDitherOrg = a9;
  v44 = 0LL;
  v35 = 0LL;
  CurrentThread = GreGetCurrentThread((__int64)a1, (__int64)a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v42, CurrentThread);
  v26 = v43;
  if ( !v43 )
    goto LABEL_33;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)v43, v12);
  v13 = psoDest[0];
  v38 = psoDest[0];
  if ( ulMode < 2 )
  {
    v14 = 8;
    nMesh = a7;
    v16 = a7 <= 0x4E2000;
  }
  else
  {
    if ( ulMode != 2 )
    {
LABEL_32:
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
LABEL_33:
      UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v42);
      return 0LL;
    }
    v14 = 12;
    nMesh = a7;
    v16 = a7 <= 0x341555;
  }
  if ( !v16 )
    goto LABEL_32;
  if ( !nMesh || !nVertex )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v42);
    return 1LL;
  }
  v17 = nMesh * v14;
  if ( nVertex > 0x271000 )
    goto LABEL_32;
  v18 = (TRIVERTEX *)PALLOCNOZ(16 * nVertex, 1886221639LL);
  v36 = v18;
  v19 = PALLOCNOZ(v17, 1886221639LL);
  pMesh = (void *)v19;
  v37 = v19;
  if ( v13 && v30 && v31 && v18 && v19 && v33 && v34 )
  {
    CaptureRECTL(&prclExtents, &v44);
    CapturePOINTL(&pptlDitherOrg, &v35);
    CaptureBits(v18, (char *)v30, 16 * nVertex);
    CaptureBits(pMesh, (char *)v31, v17);
    v21 = bValidVertexMeshData(v18, (unsigned int *)pMesh, nVertex, nMesh, ulMode) != 0;
    if ( v21 )
    {
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v26, v32, &v13->sizlBitmap);
      if ( (unsigned int)Feature_1522854203__private_IsEnabledDeviceUsageNoInline() )
      {
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v45, v13, DDIOBJ, 0LL);
        v21 = 0;
        if ( ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v45) )
        {
          v23 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v26, a3);
          if ( EngGradientFill(v13, pco, v23, v18, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode) )
            v21 = 1;
        }
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v45);
      }
      else
      {
        v24 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v26, a3);
        v21 = EngGradientFill(v13, DDIOBJ, v24, v18, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
      }
    }
  }
  else
  {
    v21 = 0;
  }
  if ( v18 )
    Win32FreePool(v18);
  if ( pMesh )
    Win32FreePool(pMesh);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v42);
  return v21;
}
