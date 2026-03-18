/*
 * XREFs of ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x18012C478
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x18012C310 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x1801CA108 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z @ 0x18012C58C (-UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVICompositionSurfaceInfoListener@@_K0@Z @ 0x18012C5CC (-reserve_region@-$vector_facade@PEAVICompositionSurfaceInfoListener@@V-$buffer_impl@PEAVIComposi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCompositionSurfaceBitmap::SetSurfaceInfo(
        CCompositionSurfaceBitmap *this,
        struct CCompositionSurfaceInfo *a2)
{
  CCompositionSurfaceInfo *v4; // rcx
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rcx
  void (__fastcall *v8)(struct CCompositionSurfaceInfo *, _QWORD); // rbx
  __int64 v9; // rax

  v4 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 12);
  if ( v4 != a2 )
  {
    v5 = (unsigned __int64)this + 80;
    if ( v4 )
      CCompositionSurfaceInfo::UnRegisterBitmapNotifier(
        v4,
        (struct ICompositionSurfaceInfoListener *)(v5 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    v6 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)a2 + 8LL))(a2);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = *((_QWORD *)this + 12);
    if ( v7 )
    {
      *(_QWORD *)detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::reserve_region(
                   v7 + 64,
                   (__int64)(*(_QWORD *)(v7 + 72) - *(_QWORD *)(v7 + 64)) >> 3) = v5 & -(__int64)(this != 0LL);
      if ( (*(__int64 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)this + 160LL))(this) )
      {
        v8 = *(void (__fastcall **)(struct CCompositionSurfaceInfo *, _QWORD))(*(_QWORD *)a2 + 472LL);
        v9 = (*(__int64 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)this + 160LL))(this);
        v8(a2, *(unsigned int *)(v9 + 128));
      }
    }
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *, _QWORD, CCompositionSurfaceBitmap *))(*(_QWORD *)this + 80LL))(
      this,
      0LL,
      this);
  }
}
