/*
 * XREFs of ??$find_iid@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUUserResizeVisual@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x1800DA0F4
 * Callers:
 *     ?find_interface@?$implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800DCD40 (-find_interface@-$implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUs.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$found@UIUserResizeVisualNative@@@?$find_iid_traits@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@QEBAPEAXXZ @ 0x18008B09C (--$found@UIUserResizeVisualNative@@@-$find_iid_traits@UUserResizeVisual@implementation@Transitio.c)
 *     ??$is_guid_of@UIUserResizeVisual@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800DA22C (--$is_guid_of@UIUserResizeVisual@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIUserResizeVisualNative@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800DA254 (--$is_guid_of@UIUserResizeVisualNative@@@winrt@@YA_NAEBUguid@0@@Z.c)
 */

__int64 __fastcall winrt::impl::find_iid<winrt::Udwm::Transitions::implementation::UserResizeVisual>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v7; // r8
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned __int8)winrt::is_guid_of<winrt::Udwm::Transitions::IUserResizeVisual>(a2, a2, a3, a1, a1, a2) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((v5 + 8) & -(__int64)(v5 != 0));
  if ( (unsigned __int8)winrt::is_guid_of<IUserResizeVisualNative>(v4, v3, 0LL) )
    return winrt::impl::find_iid_traits<winrt::Udwm::Transitions::implementation::UserResizeVisual>::found<IUserResizeVisualNative>(&v9);
  return v7;
}
