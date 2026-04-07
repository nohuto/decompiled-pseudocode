/*
 * XREFs of ??0ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x1800946C4
 * Callers:
 *     ??$create_and_initialize@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUScreenRotationTransition@implementation@Private@Transitions@Udwm@1@XZ @ 0x180094618 (--$create_and_initialize@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??0?$producers_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@V?$tuple@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@UIScreenRotationTransition@2345@@std@@@impl@winrt@@QEAA@XZ @ 0x18009474C (--0-$producers_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@V-$.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::ScreenRotationTransition(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,std::tuple<winrt::Udwm::Transitions::Private::ScreenRotationTransition,winrt::Udwm::Transitions::Private::IScreenRotationTransition>>::producers_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,std::tuple<winrt::Udwm::Transitions::Private::ScreenRotationTransition,winrt::Udwm::Transitions::Private::IScreenRotationTransition>>(
    (char *)this + 16,
    a2,
    a3,
    this);
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
  *(_QWORD *)(v3 + 8) = 1LL;
  *(_QWORD *)v3 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>::`vftable'{for `winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,>'};
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_QWORD *)(v3 + 32) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>::`vftable'{for `IAnimationListener'};
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_QWORD *)(v3 + 64) = 0LL;
  *(_DWORD *)(v3 + 72) = -1;
  *(_DWORD *)(v3 + 76) = -1;
  result = v3;
  *(_WORD *)(v3 + 80) = 0;
  *(_BYTE *)(v3 + 82) = 0;
  *(_DWORD *)(v3 + 84) = 0;
  *(_QWORD *)(v3 + 88) = 0LL;
  *(_QWORD *)(v3 + 96) = 0LL;
  *(_QWORD *)(v3 + 104) = 0LL;
  *(_DWORD *)(v3 + 112) = 0;
  return result;
}
