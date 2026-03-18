/*
 * XREFs of ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x1800FBF64
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC518 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x18000A17C (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ?clear_region@?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C0D10 (-clear_region@-$vector_facade@UBounds@CCpuClipAntialiasSink@@V-$buffer_impl@UBounds@CCpuClipAnti.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800FC034 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

bool __fastcall CRenderingTechniqueFragment::NeedsToBeBrokenUp(
        CRenderingTechniqueFragment *this,
        struct CBrushRenderingGraph *a2)
{
  __int64 v2; // rdx
  bool v3; // bl
  unsigned __int64 v4; // r8
  _BYTE *v6; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE *v7; // [rsp+28h] [rbp-F0h]
  __int64 *v8; // [rsp+30h] [rbp-E8h]
  _BYTE v9[192]; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+F8h] [rbp-20h] BYREF

  v6 = v9;
  v7 = v9;
  v8 = &v10;
  v3 = (unsigned int)CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(this, a2, &v6) > 4;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((v7 - v6) >> 2);
  if ( v4 )
    detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v6,
      v2,
      v4);
  detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v6);
  return v3;
}
