/*
 * XREFs of ??1?$vector_facade@URectInt32@Graphics@Windows@@V?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18009ED28
 * Callers:
 *     ??1CoordMap@@QEAA@XZ @ 0x18009ED48 (--1CoordMap@@QEAA@XZ.c)
 *     ?SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplayScanout@Core@Display@Devices@Windows@@_NW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x180209884 (-SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@.c)
 * Callees:
 *     ?clear@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18009E454 (-clear@-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_e.c)
 */

int __fastcall detail::vector_facade<Windows::Graphics::RectInt32,detail::buffer_impl<Windows::Graphics::RectInt32,8,1,detail::liberal_expansion_policy>>::~vector_facade<Windows::Graphics::RectInt32,detail::buffer_impl<Windows::Graphics::RectInt32,8,1,detail::liberal_expansion_policy>>(
        __int64 *a1)
{
  void **v1; // r10

  detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::clear(a1);
  return detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(v1);
}
