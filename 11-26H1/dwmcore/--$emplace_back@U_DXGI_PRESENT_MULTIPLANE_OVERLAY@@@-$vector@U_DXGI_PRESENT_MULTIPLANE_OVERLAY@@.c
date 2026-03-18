/*
 * XREFs of ??$emplace_back@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@QEAAAEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@$$QEAU2@@Z @ 0x1802A5784
 * Callers:
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180033A40 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OV.c)
 * Callees:
 *     ??$_Emplace_reallocate@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@QEAU2@$$QEAU2@@Z @ 0x1802A52FC (--$_Emplace_reallocate@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@U_DXGI_PRESENT_MULTIPLANE_OV.c)
 */

char *__fastcall std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::emplace_back<_DXGI_PRESENT_MULTIPLANE_OVERLAY>(
        __int64 a1,
        __int64 a2)
{
  _OWORD *v3; // rdx
  _QWORD *v4; // rdx
  __int64 v5; // rdx

  v3 = *(_OWORD **)(a1 + 8);
  if ( v3 == *(_OWORD **)(a1 + 16) )
    return std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::_Emplace_reallocate<_DXGI_PRESENT_MULTIPLANE_OVERLAY>(
             (void **)a1,
             (__int64)v3,
             (__int128 *)a2);
  *v3 = *(_OWORD *)a2;
  v3[1] = *(_OWORD *)(a2 + 16);
  v3[2] = *(_OWORD *)(a2 + 32);
  v3[3] = *(_OWORD *)(a2 + 48);
  v3[4] = *(_OWORD *)(a2 + 64);
  v3[5] = *(_OWORD *)(a2 + 80);
  v3[6] = *(_OWORD *)(a2 + 96);
  v4 = v3 + 8;
  *((_OWORD *)v4 - 1) = *(_OWORD *)(a2 + 112);
  *v4 = *(_QWORD *)(a2 + 128);
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v5 + 136;
  return (char *)v5;
}
