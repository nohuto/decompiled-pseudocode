/*
 * XREFs of ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x140210770
 * Callers:
 *     <none>
 * Callees:
 *     EngGradientFill @ 0x140061280 (EngGradientFill.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140062E9C (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x140064AD8 (--1MULTISURF@@QEAA@XZ.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x140065CCC (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140066484 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x140066C18 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     OffGradientFill @ 0x140210CD8 (OffGradientFill.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140346178 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
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
  __int64 v18; // rdi
  __int64 v19; // rcx
  XLATEOBJ *v20; // rsi
  BOOL (__stdcall *v21)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  HDEV v24; // rcx
  Gre::Base *v25; // r9
  __int64 v26; // r12
  FLONG flXlate; // r8d
  int v28; // ecx
  ULONG iUniq; // edx
  ULONG *pulXlate; // r10
  ULONG v31; // r11d
  int inited; // eax
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
    v18 = v39;
    v19 = v38;
    v33 = 0LL;
    if ( *(_DWORD *)(v39 + 72) <= 3u )
    {
      v20 = pxlo;
      if ( *(_DWORD *)(v38 + 24) )
      {
        v24 = *(HDEV *)(v38 + 48);
        v25 = (Gre::Base *)*((_QWORD *)v15 + 484);
        v26 = *((_QWORD *)v15 + 485);
        if ( ((_DWORD)v24[539] & 0x100) != 0 )
          v25 = DrvRealizeHalftonePalette(v24, 0);
        if ( pxlo )
        {
          flXlate = pxlo[1].flXlate;
          v28 = *(_DWORD *)&pxlo[1].iSrcType;
          iUniq = pxlo[1].iUniq;
        }
        else
        {
          flXlate = 0;
          v28 = 0;
          iUniq = 0;
        }
        if ( pxlo )
        {
          pulXlate = pxlo[2].pulXlate;
          v31 = pxlo[3].iUniq;
        }
        else
        {
          pulXlate = 0LL;
          v31 = 0;
        }
        inited = EXLATEOBJ::bInitXlateObj(
                   (Gre::Base *)&v33,
                   pulXlate,
                   v31,
                   v26,
                   *(_QWORD *)(v18 + 104),
                   (__int64)v25,
                   v25,
                   flXlate,
                   v28,
                   iUniq,
                   0);
        v18 = v39;
        v19 = v38;
        if ( inited )
          v20 = v33;
        v10 = v36;
      }
    }
    else
    {
      v20 = 0LL;
    }
    if ( (*(_DWORD *)(v18 + 88) & 0x20000) != 0 )
      v21 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v19 + 56) + 3224LL);
    else
      v21 = EngGradientFill;
    v14 &= OffGradientFill(v21, v41, v18, v40, v20, v10, nVertex, pMesh, nMesh, a8, pptlDitherOrg, ulMode);
    EXLATEOBJ::vAltUnlock((Gre::Base **)&v33, v22, v23);
  }
  return v14;
}
