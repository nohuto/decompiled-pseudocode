/*
 * XREFs of ??$create_and_initialize@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUScreenRotationTransition@implementation@Private@Transitions@Udwm@1@XZ @ 0x180086050
 * Callers:
 *     ??$make@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x180085DF0 (--$make@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA-A.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ??0ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x1800861CC (--0ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *winrt::impl::create_and_initialize<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,>()
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *v0; // rax
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *v1; // rbx

  v0 = (winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)operator new(0x78uLL);
  v1 = v0;
  if ( !v0 )
    return 0LL;
  memset_0(v0, 0, 0x78uLL);
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::ScreenRotationTransition(v1);
  *((_QWORD *)v1 + 4) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>::`vftable'{for `IAnimationListener'};
  *(_QWORD *)v1 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>::`vftable'{for `winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,>'};
  return v1;
}
