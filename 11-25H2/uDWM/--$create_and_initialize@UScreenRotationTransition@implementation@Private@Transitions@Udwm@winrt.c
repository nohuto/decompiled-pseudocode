/*
 * XREFs of ??$create_and_initialize@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUScreenRotationTransition@implementation@Private@Transitions@Udwm@1@XZ @ 0x180094618
 * Callers:
 *     ??$make@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1800945AC (--$make@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA-A.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x1800946C4 (--0ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 */

winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *__fastcall winrt::impl::create_and_initialize<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,>(
        __int64 a1,
        const struct std::nothrow_t *a2)
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *v2; // rax
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *v3; // rbx

  v2 = (winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)operator new[](0x78uLL, a2);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  memset_0(v2, 0, 0x78uLL);
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::ScreenRotationTransition(v3);
  *((_QWORD *)v3 + 4) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>::`vftable'{for `IAnimationListener'};
  *(_QWORD *)v3 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>::`vftable'{for `winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,>'};
  return v3;
}
