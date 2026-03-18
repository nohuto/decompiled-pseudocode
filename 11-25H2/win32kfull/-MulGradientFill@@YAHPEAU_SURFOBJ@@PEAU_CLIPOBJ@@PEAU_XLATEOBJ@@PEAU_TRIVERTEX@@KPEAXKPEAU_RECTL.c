/*
 * XREFs of ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1401E5EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x14000D764 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14000DF38 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x14000E210 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x14000EA4C (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngGradientFill @ 0x1400F77E0 (EngGradientFill.c)
 *     OffGradientFill @ 0x1401E6460 (OffGradientFill.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1401FEB88 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140323AF4 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall MulGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        void *a6,
        ULONG nMesh,
        struct _RECTL *a8,
        struct _POINTL *a9,
        ULONG ulMode)
{
  TRIVERTEX *v10; // r12
  unsigned int v14; // r14d
  struct Gre::Base::SESSION_GLOBALS *v15; // r13
  int i; // eax
  __int64 v17; // rdi
  __int64 v18; // rcx
  XLATEOBJ *v19; // rsi
  HDEV v20; // rcx
  struct PALETTE *v21; // r11
  __int64 v22; // r12
  FLONG flXlate; // r9d
  int v24; // ecx
  ULONG iUniq; // edx
  ULONG *pulXlate; // r10
  ULONG v27; // r8d
  int inited; // eax
  BOOL (__stdcall *v29)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  XLATEOBJ *v33; // [rsp+60h] [rbp-A0h] BYREF
  POINTL *pptlDitherOrg; // [rsp+68h] [rbp-98h]
  PVOID pMesh; // [rsp+70h] [rbp-90h]
  TRIVERTEX *v36; // [rsp+78h] [rbp-88h]
  _BYTE v37[56]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-48h]
  __int64 v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  __int64 v41; // [rsp+D0h] [rbp-30h]
  _BYTE v42[88]; // [rsp+E0h] [rbp-20h] BYREF
  SURFOBJ *psoDest; // [rsp+138h] [rbp+38h]
  RECTL *prclExtents; // [rsp+140h] [rbp+40h]

  v10 = pVertex;
  pMesh = a6;
  pptlDitherOrg = a9;
  v36 = pVertex;
  v14 = 1;
  v15 = Gre::Base::Globals((Gre::Base *)a1);
  if ( IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v42, a1, a8);
    v14 = EngGradientFill(psoDest, a2, pxlo, v10, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
    MULTISURF::~MULTISURF((MULTISURF *)v42);
  }
  for ( i = MSURF::bFindSurface((MSURF *)v37, a1, a2, a8); i; i = MSURF::bNextSurface((MSURF *)v37) )
  {
    v17 = v39;
    v33 = 0LL;
    v18 = v38;
    if ( *(_DWORD *)(v39 + 72) <= 3u )
    {
      v19 = pxlo;
      if ( *(_DWORD *)(v38 + 24) )
      {
        v20 = *(HDEV *)(v38 + 48);
        v21 = (struct PALETTE *)*((_QWORD *)v15 + 471);
        v22 = *((_QWORD *)v15 + 472);
        if ( ((_DWORD)v20[539] & 0x100) != 0 )
          v21 = DrvRealizeHalftonePalette(v20, 0);
        if ( pxlo )
        {
          flXlate = pxlo[1].flXlate;
          v24 = *(_DWORD *)&pxlo[1].iSrcType;
          iUniq = pxlo[1].iUniq;
        }
        else
        {
          flXlate = 0;
          v24 = 0;
          iUniq = 0;
        }
        if ( pxlo )
        {
          pulXlate = pxlo[2].pulXlate;
          v27 = pxlo[3].iUniq;
        }
        else
        {
          pulXlate = 0LL;
          v27 = 0;
        }
        inited = EXLATEOBJ::bInitXlateObj(
                   (Gre::Base *)&v33,
                   (__int64)pulXlate,
                   v27,
                   v22,
                   *(_QWORD *)(v17 + 104),
                   (__int64)v21,
                   (__int64)v21,
                   flXlate,
                   v24,
                   iUniq,
                   0);
        v17 = v39;
        v18 = v38;
        if ( inited )
          v19 = v33;
        v10 = v36;
      }
    }
    else
    {
      v19 = 0LL;
    }
    if ( (*(_DWORD *)(v17 + 88) & 0x20000) != 0 )
      v29 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v18 + 56) + 3224LL);
    else
      v29 = EngGradientFill;
    v14 &= OffGradientFill(v29, v41, v17, v40, v19, v10, nVertex, pMesh, nMesh, a8, pptlDitherOrg, ulMode);
    EXLATEOBJ::vAltUnlock((Gre::Base **)&v33, v30, v31);
  }
  return v14;
}
