/*
 * XREFs of ?erase@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCVisual@@@2@V?$basic_iterator@QEAVCVisual@@@2@@Z @ 0x1801B0FA4
 * Callers:
 *     ?AffectsVisual@CSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180281E60 (-AffectsVisual@CSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?RemoveExcludedTargetVisual@CSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x180282730 (-RemoveExcludedTargetVisual@CSpotLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveTargetVisual@CSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x1802827B0 (-RemoveTargetVisual@CSpotLight@@UEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?erase_unchecked@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCVisual@@@2@V?$basic_iterator@QEAVCVisual@@@2@0@Z @ 0x1801B0FDC (-erase_unchecked@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@.c)
 */

__int64 __fastcall detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::erase(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = *a3;
  v5 = v6 + 8;
  detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::erase_unchecked(a1, a2, &v6, &v5);
  return a2;
}
