/*
 * XREFs of ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x18002B03C
 * Callers:
 *     ??_E?$heap_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18002B4D8 (--_E-$heap_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAP.c)
 * Callees:
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002A75C (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18003E6C0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18007B900 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@s.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180086E2C (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1800958D0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     ??$_Destroy_range@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x1800990C0 (--$_Destroy_range@V-$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspe.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TransitionState::~TransitionState(
        winrt::Udwm::Transitions::implementation::TransitionState *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vftable'{for `winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,ITransitionStateNative,void>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vftable'{for `winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,ITransitionStateNativePrivate,void>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vftable';
  if ( !*((_BYTE *)this + 120) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( !*((_BYTE *)this + 120) )
    winrt::Udwm::Transitions::implementation::TransitionState::Complete(this);
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::implementation::TransitionState *)((char *)this + 112));
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::implementation::TransitionState *)((char *)this + 104));
  v2 = (winrt::Windows::Foundation::IUnknown *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IInspectable>>(v2);
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 10),
      (*((_QWORD *)this + 12) - *((_QWORD *)this + 10)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(v3, *((_QWORD *)this + 8));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 7),
      (*((_QWORD *)this + 9) - *((_QWORD *)this + 7)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((char *)this + 48);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((char *)this + 40);
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>::~root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>((char *)this + 24);
}
