/*
 * XREFs of ??$create_and_initialize@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUWindowJointResizeTransition@implementation@Private@Transitions@Udwm@1@XZ @ 0x18002FF64
 * Callers:
 *     ??$make@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18002FF30 (--$make@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@Y.c)
 * Callees:
 *     ??0WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002F718 (--0WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *winrt::impl::create_and_initialize<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,>()
{
  winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *v0; // rax
  winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *v1; // rbx

  v0 = (winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *)operator new(0xB8uLL);
  v1 = v0;
  if ( !v0 )
    return 0LL;
  memset_0(v0, 0, 0xB8uLL);
  winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::WindowJointResizeTransition(v1);
  *(_QWORD *)v1 = &winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,std::tuple<winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>>'};
  *((_QWORD *)v1 + 2) = &winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>'};
  return v1;
}
