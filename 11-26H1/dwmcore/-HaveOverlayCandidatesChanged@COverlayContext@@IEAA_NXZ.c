/*
 * XREFs of ?HaveOverlayCandidatesChanged@COverlayContext@@IEAA_NXZ @ 0x1801B0E14
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@KAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x1801B0D5C (-ComputeOverlayConfigurationForAdapter@COverlayContext@@KAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ??8@YA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005C30C (--8@YA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniquenes.c)
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x1800E2864 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@KAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x180216F34 (-ComparePlaneAttributes@COverlayContext@@KAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::HaveOverlayCandidatesChanged(COverlayContext *this)
{
  char v1; // si
  __int64 v3; // rdx
  unsigned int i; // ebp
  __int64 v5; // rcx
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  char v13; // al

  v1 = 0;
  if ( *((_BYTE *)this + 19356) )
  {
    v1 = 1;
    *((_BYTE *)this + 19356) = 0;
  }
  v3 = *((_QWORD *)this + 799);
  if ( *((_QWORD *)this + 13) - *((_QWORD *)this + 12) != *((_QWORD *)this + 800) - v3
    || *((_DWORD *)this + 4780) != *((_DWORD *)this + 4762) )
  {
    return 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)this + 12);
    if ( i >= 438261969 * (unsigned int)((*((_QWORD *)this + 13) - v5) >> 3) )
      break;
    v7 = 392LL * i;
    COverlayContext::ComparePlaneAttributes(
      (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v7 + v5 + 32),
      (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v7 + v3 + 32),
      (bool *)(v7 + v5 + 363),
      (bool *)(v7 + v5 + 364));
    v8 = *((_QWORD *)this + 12);
    if ( *(_BYTE *)(v7 + v8 + 363) )
      return 1;
    v9 = *((_QWORD *)this + 799);
    if ( *(_QWORD *)(v7 + v8 + 16) != *(_QWORD *)(v7 + v9 + 16) )
      return 1;
    if ( *(_QWORD *)(v7 + v8 + 24) != *(_QWORD *)(v7 + v9 + 24) )
      return 1;
    if ( *(_BYTE *)(v7 + v8 + 361) != *(_BYTE *)(v7 + v9 + 361) )
      return 1;
    if ( !operator==((float *)(v7 + v8 + 144), (float *)(v7 + v9 + 144)) )
      return 1;
    if ( *(_QWORD *)(v7 + v11 + 352) != *(_QWORD *)(v7 + v10 + 352) )
      return 1;
    if ( operator!=((_DWORD *)(v7 + v11 + 228), (_DWORD *)(v7 + v10 + 228)) )
      return 1;
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 120LL))(v12);
    v3 = *((_QWORD *)this + 799);
    if ( !v13 && *(_DWORD *)(v7 + v3 + 368) != *(_DWORD *)(v7 + *((_QWORD *)this + 12) + 368) )
      return 1;
  }
  return v1;
}
