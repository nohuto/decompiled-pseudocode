/*
 * XREFs of ??0?$producers_base@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@V?$tuple@UTopLevelWindow3DWrapper@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@@std@@@impl@winrt@@QEAA@XZ @ 0x1800960AC
 * Callers:
 *     ??0TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x180062D40 (--0TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z.c)
 * Callees:
 *     ??0?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@X@impl@winrt@@QEAA@XZ @ 0x180086FEC (--0-$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@X@im.c)
 */

_QWORD *winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,std::tuple<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>>::producers_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,std::tuple<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>>()
{
  _QWORD *v0; // r8
  _QWORD *result; // rax

  winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,void>::producer_convert<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,void>();
  result = v0;
  *v0 = &winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,std::tuple<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>>::`vftable';
  return result;
}
