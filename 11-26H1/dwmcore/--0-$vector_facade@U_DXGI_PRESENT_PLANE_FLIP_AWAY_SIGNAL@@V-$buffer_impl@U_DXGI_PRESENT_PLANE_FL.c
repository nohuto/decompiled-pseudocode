/*
 * XREFs of ??0?$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@_K@Z @ 0x180205AFC
 * Callers:
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180033A40 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OV.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V?$buffer_impl@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAU_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@_K0@Z @ 0x180205B84 (-reserve_region@-$vector_facade@U_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@V-$buffer_impl@U_DXGI_PRE.c)
 */

_QWORD *__fastcall detail::vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>::vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>(
        _QWORD *a1,
        __int64 a2)
{
  _OWORD *v4; // rax

  *a1 = a1 + 3;
  a1[1] = a1 + 3;
  a1[2] = a1 + 35;
  v4 = (_OWORD *)detail::vector_facade<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,detail::buffer_impl<_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL,16,1,detail::liberal_expansion_policy>>::reserve_region(
                   a1,
                   0LL,
                   a2);
  if ( a2 )
  {
    *v4 = 0LL;
    qmemcpy(v4 + 1, v4, 8 * ((unsigned __int64)(16 * a2 - 9) >> 3));
  }
  return a1;
}
