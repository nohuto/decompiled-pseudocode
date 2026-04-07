/*
 * XREFs of ??$_Copy_memmove@PEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@@std@@YAPEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@00@Z @ 0x18008D528
 * Callers:
 *     ??$_Uninitialized_move@PEAPEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCDWMDisplay@@QEAPEBV1@0PEAPEBV1@AEAV?$allocator@PEBVCDWMDisplay@@@0@@Z @ 0x18009D780 (--$_Uninitialized_move@PEAPEBVCDWMDisplay@@V-$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCD.c)
 *     ??$_Uninitialized_move@PEAU_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@YAPEAU_DWMCaptureWindowInformation@@QEAU1@0PEAU1@AEAV?$allocator@U_DWMCaptureWindowInformation@@@0@@Z @ 0x18009D808 (--$_Uninitialized_move@PEAU_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInformat.c)
 *     ?erase@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@@Z @ 0x1800A6BD4 (-erase@-$vector@U_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInformation@@@std@.c)
 *     ??$_Uninitialized_move@PEAUtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@YAPEAUtagRECT@@QEAU1@0PEAU1@AEAV?$allocator@UtagRECT@@@0@@Z @ 0x1800B1F08 (--$_Uninitialized_move@PEAUtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@YAPEAUtagRECT@@QEAU1@0PEA.c)
 *     ?OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x1800B9414 (-OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ??$_Uninitialized_copy_unchecked@PEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@@std@@YAPEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@QEAPEAU12@0@Z @ 0x1800CC528 (--$_Uninitialized_copy_unchecked@PEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@@std@@YAPEAPEAUTr.c)
 *     ?GetIids@?$implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@@@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800D0ED0 (-GetIids@-$implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResiz.c)
 *     ?GetIids@?$produce_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UIScreenRotationTransition@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800D3040 (-GetIids@-$produce_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@.c)
 *     ?GetIids@?$produce_base@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800D30E0 (-GetIids@-$produce_base@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@U.c)
 *     ?GetIids@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800D8C70 (-GetIids@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransition.c)
 *     ?GetIids@?$produce_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800DAE20 (-GetIids@-$produce_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUser.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Copy_memmove<CTouchDragVisual::TrailPoint * *,CTouchDragVisual::TrailPoint * *>(
        void *a1,
        __int64 a2,
        void *a3)
{
  return std::_Copy_memmove_tail<CVisualProxy * *>(a1, a3);
}
