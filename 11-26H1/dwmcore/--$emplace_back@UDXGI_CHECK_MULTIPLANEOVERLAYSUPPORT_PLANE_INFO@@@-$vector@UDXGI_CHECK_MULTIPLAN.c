/*
 * XREFs of ??$emplace_back@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@?$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@QEAAAEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$$QEAU2@@Z @ 0x1802A56F4
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180126E80 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_.c)
 * Callees:
 *     ??$_Emplace_reallocate@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@?$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@AEAAPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@QEAU2@$$QEAU2@@Z @ 0x1802A513C (--$_Emplace_reallocate@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@-$vector@UDXGI_CHECK_MU.c)
 */

char *__fastcall std::vector<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>::emplace_back<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>(
        __int64 a1,
        __int128 *a2)
{
  __int128 *v3; // rdx
  __int64 v4; // rdx

  v3 = *(__int128 **)(a1 + 8);
  if ( v3 == *(__int128 **)(a1 + 16) )
    return std::vector<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>::_Emplace_reallocate<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>(
             (void **)a1,
             (__int64)v3,
             a2);
  *v3 = *a2;
  v3[1] = a2[1];
  v3[2] = a2[2];
  v3[3] = a2[3];
  v3[4] = a2[4];
  v3[5] = a2[5];
  v3[6] = a2[6];
  v3[7] = a2[7];
  v3[8] = a2[8];
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4 + 144;
  return (char *)v4;
}
