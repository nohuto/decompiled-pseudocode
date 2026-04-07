/*
 * XREFs of ??$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x1800959C0
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x1800613E0 (--$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDispl.c)
 *     ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@AEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800615C8 (--$_Emplace_reallocate@AEBQEAVCWindowData@@@-$vector@PEAVCWindowData@@V-$allocator@PEAVCWindowDa.c)
 *     ??$_Uninitialized_move@PEAPEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCDWMDisplay@@QEAPEBV1@0PEAPEBV1@AEAV?$allocator@PEBVCDWMDisplay@@@0@@Z @ 0x180095980 (--$_Uninitialized_move@PEAPEBVCDWMDisplay@@V-$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCD.c)
 *     ??$_Copy_memmove_n@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z @ 0x180096478 (--$_Copy_memmove_n@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z.c)
 *     ??$_Uninitialized_move@PEAUtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@YAPEAUtagRECT@@QEAU1@0PEAU1@AEAV?$allocator@UtagRECT@@@0@@Z @ 0x1800B2598 (--$_Uninitialized_move@PEAUtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@YAPEAUtagRECT@@QEAU1@0PEA.c)
 *     ?OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x1800BA128 (-OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?GetIids@?$implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@@@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800D39C0 (-GetIids@-$implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResiz.c)
 *     ?GetIids@?$produce_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UIScreenRotationTransition@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800D5E30 (-GetIids@-$produce_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@.c)
 *     ?GetIids@?$produce_base@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800D5ED0 (-GetIids@-$produce_base@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@U.c)
 *     ?GetIids@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800DBEE0 (-GetIids@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransition.c)
 *     ?GetIids@?$produce_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800DDF70 (-GetIids@-$produce_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUser.c)
 * Callees:
 *     memmove_0 @ 0x1800EB124 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<tagRECT *,tagRECT *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
