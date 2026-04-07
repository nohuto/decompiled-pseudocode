/*
 * XREFs of ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x18002FB94
 * Callers:
 *     ??0WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002F718 (--0WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??0TransitionState@implementation@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002F8A4 (--0TransitionState@implementation@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??0TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x18002F928 (--0TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z.c)
 *     ??0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x18002F98C (--0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWind.c)
 *     ??$create_and_initialize@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@1@XZ @ 0x18003077C (--$create_and_initialize@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions.c)
 *     ??0ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x1800861CC (--0ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??$create_and_initialize@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@impl@winrt@@YAPEAU?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@01@$$QEAV?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@Z @ 0x1800D9E00 (--$create_and_initialize@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUse.c)
 *     ??$create_and_initialize@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@PEAU?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@3@@impl@winrt@@YAPEAUiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@1@$$QEAPEAU?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@01@@Z @ 0x1800D9F04 (--$create_and_initialize@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@.c)
 *     ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x1800DD118 (--0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z.c)
 * Callees:
 *     ??$?0PEAXUprocess_heap_deleter@wil@@@?$__compressed_pair@PEAXUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAPEAX$$QEAUprocess_heap_deleter@wil@@@Z @ 0x18007A4A4 (--$-0PEAXUprocess_heap_deleter@wil@@@-$__compressed_pair@PEAXUprocess_heap_deleter@wil@@@wistd@@.c)
 */

__int64 __fastcall std::atomic<unsigned __int64>::atomic<unsigned __int64>(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 1LL;
  wistd::__compressed_pair<void *,wil::process_heap_deleter>::__compressed_pair<void *,wil::process_heap_deleter>(
    a1,
    v3);
  return v1;
}
