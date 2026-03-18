/*
 * XREFs of ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140064150
 * Callers:
 *     <none>
 * Callees:
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x140063260 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x140064AD8 (--1MULTISURF@@QEAA@XZ.c)
 *     OffStrokePath @ 0x140064BA4 (OffStrokePath.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x140065CCC (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140066484 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x140066C18 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x140066C38 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x140066CCC (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x14006719C (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     EngStrokePath @ 0x1401160D0 (EngStrokePath.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall MulStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        struct _LINEATTRS *plineattrs,
        MIX mix)
{
  unsigned int v10; // edi
  DHPDEV dhpdev; // rsi
  FLOAT_LONG v12; // ebx
  int i; // eax
  struct _DISPSURF *v15; // rdx
  struct SURFACE *v16; // r8
  BOOL (__stdcall *v17)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rcx
  _DWORD v20[14]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v21[56]; // [rsp+A0h] [rbp-60h] BYREF
  struct _DISPSURF *v22; // [rsp+D8h] [rbp-28h]
  __int64 v23; // [rsp+E0h] [rbp-20h]
  __int64 v24; // [rsp+E8h] [rbp-18h]
  __int64 v25; // [rsp+F0h] [rbp-10h]
  _BYTE v26[88]; // [rsp+100h] [rbp+0h] BYREF
  SURFOBJ *pso; // [rsp+158h] [rbp+58h]
  struct _RECTFX prectfx; // [rsp+170h] [rbp+70h] BYREF
  struct _RECTL v29; // [rsp+180h] [rbp+80h] BYREF

  v10 = 1;
  dhpdev = a1->dhpdev;
  LODWORD(v12.e) = plineattrs->elStyleState;
  if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v26, a1);
    v10 = EngStrokePath(pso, ppo, a3, a4, pbo, pptlBrushOrg, plineattrs, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v26);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v20,
    pbo,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( !v20[0] )
    return 0LL;
  prectfx = 0LL;
  PATHOBJ_vGetBounds(ppo, &prectfx);
  v29.left = prectfx.xLeft >> 4;
  v29.top = prectfx.yTop >> 4;
  v29.right = (prectfx.xRight >> 4) + 2;
  v29.bottom = (prectfx.yBottom >> 4) + 2;
  for ( i = MSURF::bFindSurface((MSURF *)v21, a1, a3, &v29); i; i = MSURF::bNextSurface((MSURF *)v21) )
  {
    PATHOBJ_vEnumStart(ppo);
    v15 = v22;
    v16 = (struct SURFACE *)(v23 - 24);
    plineattrs->elStyleState = v12;
    MULTIBRUSH::LoadElement((MULTIBRUSH *)v20, v15, v16);
    if ( (*(_DWORD *)(v23 + 88) & 0x20) != 0 )
      v17 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*((_QWORD *)v22 + 7) + 2792LL);
    else
      v17 = EngStrokePath;
    v10 &= OffStrokePath(v17, v25, v23, ppo, v24, a4, pbo, pptlBrushOrg, plineattrs, mix);
    MULTIBRUSH::StoreElement((MULTIBRUSH *)v20, *((_DWORD *)v22 + 4));
  }
  return v10;
}
