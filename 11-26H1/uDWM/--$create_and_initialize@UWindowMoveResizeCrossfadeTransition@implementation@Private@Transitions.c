/*
 * XREFs of ??$create_and_initialize@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@1@XZ @ 0x18003077C
 * Callers:
 *     ??$make@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1800309BC (--$make@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x18002FB94 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ??0?$producers_base@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@V?$tuple@UWindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x180086AB4 (--0-$producers_base@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

char *winrt::impl::create_and_initialize<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,>()
{
  char *v0; // rax
  char *v1; // rbx

  v0 = (char *)operator new(0x60uLL);
  v1 = v0;
  if ( !v0 )
    return 0LL;
  memset_0(v0, 0, 0x60uLL);
  winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,std::tuple<winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>>::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,std::tuple<winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>>(v1 + 16);
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)(v1 + 8));
  *((_QWORD *)v1 + 3) = 0LL;
  *((_QWORD *)v1 + 4) = 0LL;
  *((_QWORD *)v1 + 5) = 0LL;
  *((_QWORD *)v1 + 7) = 0LL;
  *((_QWORD *)v1 + 8) = 0LL;
  v1[72] = 0;
  *(_OWORD *)(v1 + 76) = 0LL;
  *(_QWORD *)v1 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>::`vftable';
  return v1;
}
