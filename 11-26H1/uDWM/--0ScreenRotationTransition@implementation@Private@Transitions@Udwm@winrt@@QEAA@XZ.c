/*
 * XREFs of ??0ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x1800861CC
 * Callers:
 *     ??$create_and_initialize@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUScreenRotationTransition@implementation@Private@Transitions@Udwm@1@XZ @ 0x180086050 (--$create_and_initialize@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x18002FB94 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$producers_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@V?$tuple@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@UIScreenRotationTransition@2345@@std@@@impl@winrt@@QEAA@XZ @ 0x180086254 (--0-$producers_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@V-$.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::ScreenRotationTransition(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 result; // rax

  winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,std::tuple<winrt::Udwm::Transitions::Private::ScreenRotationTransition,winrt::Udwm::Transitions::Private::IScreenRotationTransition>>::producers_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,std::tuple<winrt::Udwm::Transitions::Private::ScreenRotationTransition,winrt::Udwm::Transitions::Private::IScreenRotationTransition>>(
    (char *)this + 16,
    a2,
    a3,
    this);
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v3 + 8);
  *(_QWORD *)(v4 + 32) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>::`vftable'{for `IAnimationListener'};
  *(_QWORD *)v4 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>::`vftable'{for `winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,>'};
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  *(_QWORD *)(v4 + 64) = 0LL;
  *(_DWORD *)(v4 + 72) = -1;
  *(_DWORD *)(v4 + 76) = -1;
  result = v4;
  *(_WORD *)(v4 + 80) = 0;
  *(_BYTE *)(v4 + 82) = 0;
  *(_DWORD *)(v4 + 84) = 0;
  *(_QWORD *)(v4 + 88) = 0LL;
  *(_QWORD *)(v4 + 96) = 0LL;
  *(_QWORD *)(v4 + 104) = 0LL;
  *(_DWORD *)(v4 + 112) = 0;
  return result;
}
