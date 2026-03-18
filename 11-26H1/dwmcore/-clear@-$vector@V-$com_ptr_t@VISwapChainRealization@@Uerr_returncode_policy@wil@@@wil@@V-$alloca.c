/*
 * XREFs of ?clear@?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18012A834
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x18012AA90 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x18012ACF0 (-ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x18012B648 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::clear(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 *result; // rax

  v1 = a1[1];
  if ( *a1 != v1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(*a1, v1);
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
