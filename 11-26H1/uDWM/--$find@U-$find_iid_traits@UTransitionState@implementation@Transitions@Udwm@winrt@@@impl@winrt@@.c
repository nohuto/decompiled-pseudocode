/*
 * XREFs of ??$find@U?$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UTransitionState@Transitions@Udwm@winrt@@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x18008C0E0
 * Callers:
 *     ??$find_iid@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUTransitionState@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x180079C8C (--$find_iid@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA-A_PPEBUTrans.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$is_guid_of@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180078804 (--$is_guid_of@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$found@UIUserResizeVisualNative@@@?$find_iid_traits@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@QEBAPEAXXZ @ 0x18008B09C (--$found@UIUserResizeVisualNative@@@-$find_iid_traits@UUserResizeVisual@implementation@Transitio.c)
 *     ??$is_guid_of@UITransitionStateNative@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18008D6CC (--$is_guid_of@UITransitionStateNative@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UITransitionStateNativePrivate@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800D8A28 (--$is_guid_of@UITransitionStateNativePrivate@@@winrt@@YA_NAEBUguid@0@@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::find<winrt::impl::find_iid_traits<winrt::Udwm::Transitions::implementation::TransitionState>>(
        __int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // r8
  __int64 *v4; // r8
  __int64 v6; // rdx
  _QWORD *v7; // r8

  if ( winrt::is_guid_of<winrt::Udwm::Transitions::ITransitionState>(*(_QWORD **)(a1 + 8)) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((*v2 + 16LL) & -(__int64)(*v2 != 0LL));
  if ( (unsigned __int8)winrt::is_guid_of<ITransitionStateNative>(v1, 0LL) )
    return winrt::impl::find_iid_traits<winrt::Udwm::Transitions::implementation::UserResizeVisual>::found<IUserResizeVisualNative>(v4);
  if ( (unsigned __int8)winrt::is_guid_of<ITransitionStateNativePrivate>() )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((*v7 + 8LL) & -(__int64)(*v7 != 0LL));
  return v6;
}
