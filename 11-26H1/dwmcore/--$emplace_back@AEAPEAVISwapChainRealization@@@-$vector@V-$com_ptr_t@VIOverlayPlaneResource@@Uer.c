/*
 * XREFs of ??$emplace_back@AEAPEAVISwapChainRealization@@@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVISwapChainRealization@@@Z @ 0x180295F9C
 * Callers:
 *     ?PinResources@CD3DDevice@@QEAAJV?$span@PEAVISwapChainRealization@@$0?0@gsl@@@Z @ 0x180297DD8 (-PinResources@CD3DDevice@@QEAAJV-$span@PEAVISwapChainRealization@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVISwapChainRealization@@@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVISwapChainRealization@@@Z @ 0x1801CEEB0 (--$_Emplace_reallocate@AEAPEAVISwapChainRealization@@@-$vector@V-$com_ptr_t@VIOverlayPlaneResour.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>::emplace_back<ISwapChainRealization * &>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v3; // rcx
  __int64 *v4; // rcx

  v3 = a1[1];
  if ( v3 == a1[2] )
    return std::vector<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>::_Emplace_reallocate<ISwapChainRealization * &>(
             a1,
             v3,
             a2);
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    v3,
    (*a2 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)*a2 >> 64));
  v4 = a1[1];
  a1[1] = v4 + 1;
  return v4;
}
