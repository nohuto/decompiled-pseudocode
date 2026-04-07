/*
 * XREFs of ??$find_iid@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUTransitionState@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x18008BE2C
 * Callers:
 *     ?find_interface@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800DCA20 (-find_interface@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITra.c)
 * Callees:
 *     ??$find@U?$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UTransitionState@Transitions@Udwm@winrt@@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x1800DBBBC (--$find@U-$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@.c)
 */

__int64 __fastcall winrt::impl::find_iid<winrt::Udwm::Transitions::implementation::TransitionState>(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::find<winrt::impl::find_iid_traits<winrt::Udwm::Transitions::implementation::TransitionState>>(v3);
}
