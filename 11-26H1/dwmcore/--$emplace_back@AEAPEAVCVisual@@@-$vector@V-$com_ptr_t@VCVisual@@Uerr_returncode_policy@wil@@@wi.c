/*
 * XREFs of ??$emplace_back@AEAPEAVCVisual@@@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCVisual@@@Z @ 0x180229588
 * Callers:
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180020674 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVCVisual@@@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCVisual@@@Z @ 0x18014DB80 (--$_Emplace_reallocate@AEAPEAVCVisual@@@-$vector@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@w.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::emplace_back<CVisual * &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
    return std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::_Emplace_reallocate<CVisual * &>(
             (__int64 **)a1,
             *(__int64 **)(a1 + 8),
             a2);
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    *(_QWORD **)(a1 + 8),
    *a2);
  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v3 + 8;
  return (__int64 *)v3;
}
