/*
 * XREFs of ?UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z @ 0x18012C58C
 * Callers:
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800AC2FC (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x18012C478 (-SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18012C790 (-clear_region@-$vector_facade@PEAVICompositionSurfaceInfoListener@@V-$buffer_impl@PEAVICompositi.c)
 */

void __fastcall CCompositionSurfaceInfo::UnRegisterBitmapNotifier(
        CCompositionSurfaceInfo *this,
        struct ICompositionSurfaceInfoListener *a2)
{
  struct ICompositionSurfaceInfoListener **v2; // r8
  struct ICompositionSurfaceInfoListener ***v4; // rcx
  struct ICompositionSurfaceInfoListener **i; // rdx

  v2 = (struct ICompositionSurfaceInfoListener **)*((_QWORD *)this + 9);
  v4 = (struct ICompositionSurfaceInfoListener ***)((char *)this + 64);
  for ( i = *v4; i != v2; ++i )
  {
    if ( *i == a2 )
    {
      detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::clear_region(
        v4,
        i - *v4,
        1LL);
      return;
    }
  }
}
