/*
 * XREFs of ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x140066E90
 * Callers:
 *     <none>
 * Callees:
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x140063260 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x140064AD8 (--1MULTISURF@@QEAA@XZ.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x140065CCC (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140066484 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x140066C18 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x140066C38 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x140066CCC (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x14006719C (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??1MULTIFONT@@QEAA@XZ @ 0x1400673DC (--1MULTIFONT@@QEAA@XZ.c)
 *     ??0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z @ 0x140067438 (--0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z.c)
 *     OffTextOut @ 0x1400674C8 (OffTextOut.c)
 *     EngTextOut @ 0x1400DA230 (EngTextOut.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall MulTextOut(
        struct _SURFOBJ *a1,
        STROBJ *pstro,
        struct _FONTOBJ *a3,
        CLIPOBJ *pco,
        struct _RECTL *prclExtra,
        RECTL *prclOpaque,
        struct _BRUSHOBJ *pboFore,
        struct _BRUSHOBJ *pboOpaque,
        struct _POINTL *pptlOrg,
        MIX mix)
{
  DHPDEV dhpdev; // rbx
  unsigned int v15; // r13d
  __int64 v16; // r12
  RECTL *p_rclBkGround; // rsi
  struct _RECTL v19; // xmm6
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // r8
  BOOL (__stdcall *v23)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rcx
  ULONG cGlyphs; // [rsp+68h] [rbp-A0h]
  __int64 v25; // [rsp+90h] [rbp-78h] BYREF
  __int64 v26; // [rsp+98h] [rbp-70h]
  struct _CLIPOBJ *v27; // [rsp+A0h] [rbp-68h]
  struct _FONTOBJ *v28; // [rsp+A8h] [rbp-60h]
  _DWORD v29[12]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v30[14]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v31[56]; // [rsp+118h] [rbp+10h] BYREF
  struct _DISPSURF *v32; // [rsp+150h] [rbp+48h]
  __int64 v33; // [rsp+158h] [rbp+50h]
  __int64 v34; // [rsp+160h] [rbp+58h]
  __int64 v35; // [rsp+168h] [rbp+60h]
  _BYTE v36[88]; // [rsp+178h] [rbp+70h] BYREF
  SURFOBJ *pso; // [rsp+1D0h] [rbp+C8h]

  dhpdev = a1->dhpdev;
  v15 = 1;
  v27 = pco;
  v28 = a3;
  if ( IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v36, a1);
    v15 = EngTextOut(pso, pstro, a3, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v36);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v29,
    pboFore,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( !v29[0] )
    return 0LL;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v30,
    pboOpaque,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( !v30[0] )
    return 0LL;
  MULTIFONT::MULTIFONT((MULTIFONT *)&v25, a3, *((_DWORD *)dhpdev + 4), (struct _VDEV *)dhpdev);
  v16 = v26;
  if ( !v26 )
  {
    MULTIFONT::~MULTIFONT((MULTIFONT *)&v25);
    return 0LL;
  }
  p_rclBkGround = prclOpaque;
  if ( !prclOpaque )
    p_rclBkGround = &pstro->rclBkGround;
  v19 = *p_rclBkGround;
  cGlyphs = pstro[1].cGlyphs;
  if ( (unsigned int)MSURF::bFindSurface((MSURF *)v31, a1, v27, p_rclBkGround) )
  {
    v20 = v25;
    v21 = (__int64)v28;
    do
    {
      *(_QWORD *)&pstro[1].cGlyphs = 0LL;
      if ( v20 )
        *(_QWORD *)(v20 + 48) = *(_QWORD *)(v16 + 8LL * *((int *)v32 + 4) + 8);
      MULTIBRUSH::LoadElement((MULTIBRUSH *)v29, v32, (struct SURFACE *)(v33 - 24));
      MULTIBRUSH::LoadElement((MULTIBRUSH *)v30, v32, (struct SURFACE *)(v33 - 24));
      v22 = v33;
      pstro[1].cGlyphs = cGlyphs;
      *p_rclBkGround = v19;
      if ( (*(_DWORD *)(v22 + 88) & 8) != 0 )
        v23 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*((_QWORD *)v32 + 7) + 2864LL);
      else
        v23 = EngTextOut;
      v15 &= OffTextOut(
               (_DWORD)v23,
               v35,
               v22,
               (_DWORD)pstro,
               v21,
               v34,
               (__int64)prclExtra,
               (__int64)prclOpaque,
               (__int64)pboFore,
               (__int64)pboOpaque,
               (__int64)pptlOrg,
               mix);
      MULTIBRUSH::StoreElement((MULTIBRUSH *)v29, *((_DWORD *)v32 + 4));
      MULTIBRUSH::StoreElement((MULTIBRUSH *)v30, *((_DWORD *)v32 + 4));
      if ( v20 )
        *(_QWORD *)(v16 + 8LL * *((int *)v32 + 4) + 8) = *(_QWORD *)(v20 + 48);
    }
    while ( (unsigned int)MSURF::bNextSurface((MSURF *)v31) );
  }
  MULTIFONT::~MULTIFONT((MULTIFONT *)&v25);
  return v15;
}
