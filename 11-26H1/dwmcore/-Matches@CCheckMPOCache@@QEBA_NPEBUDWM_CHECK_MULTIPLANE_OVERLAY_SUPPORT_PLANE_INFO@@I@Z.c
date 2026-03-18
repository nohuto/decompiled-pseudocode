/*
 * XREFs of ?Matches@CCheckMPOCache@@QEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I@Z @ 0x180297BD0
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180126E80 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180128560 (-CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TY.c)
 *     ?CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18021713C (-CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 * Callees:
 *     ?IsEqual@PlaneInfo@CCheckMPOCache@@QEBA_NAEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x1802979E4 (-IsEqual@PlaneInfo@CCheckMPOCache@@QEBA_NAEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z.c)
 */

char __fastcall CCheckMPOCache::Matches(
        CCheckMPOCache *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2,
        __int64 a3)
{
  unsigned int v5; // edi
  __int64 i; // rbx

  v5 = a3;
  if ( (unsigned int)a3 != 0x86BCA1AF286BCA1BuLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 2) )
    return 0;
  for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
  {
    if ( !CCheckMPOCache::PlaneInfo::IsEqual(
            (CCheckMPOCache::PlaneInfo *)(*(_QWORD *)this + 76LL * (unsigned int)i),
            (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)((char *)a2 + 144 * i),
            a3) )
      return 0;
  }
  return 1;
}
