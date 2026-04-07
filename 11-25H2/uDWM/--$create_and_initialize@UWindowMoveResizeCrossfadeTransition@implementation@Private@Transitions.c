/*
 * XREFs of ??$create_and_initialize@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@1@XZ @ 0x1800618F4
 * Callers:
 *     ??$make@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1800616CC (--$make@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$producers_base@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@V?$tuple@UWindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x180094EAC (--0-$producers_base@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 */

char *__fastcall winrt::impl::create_and_initialize<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,>(
        __int64 a1,
        const struct std::nothrow_t *a2)
{
  char *v2; // rax
  char *v3; // rbx

  v2 = (char *)operator new[](0x60uLL, a2);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  memset_0(v2, 0, 0x60uLL);
  winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,std::tuple<winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>>::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,std::tuple<winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>>(v3 + 16);
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
  *((_QWORD *)v3 + 1) = 1LL;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 8) = 0LL;
  v3[72] = 0;
  *(_OWORD *)(v3 + 76) = 0LL;
  *(_QWORD *)v3 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>::`vftable';
  return v3;
}
