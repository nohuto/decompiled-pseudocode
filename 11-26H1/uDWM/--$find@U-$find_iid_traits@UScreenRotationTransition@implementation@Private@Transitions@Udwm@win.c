/*
 * XREFs of ??$find@U?$find_iid_traits@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@UIScreenRotationTransition@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@12@@Z @ 0x18005C90C
 * Callers:
 *     ??$find_iid@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUScreenRotationTransition@implementation@Private@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x18005C8E8 (--$find_iid@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$is_guid_of@UITransition@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18005C96C (--$is_guid_of@UITransition@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIScreenRotationTransition@Private@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18005C994 (--$is_guid_of@UIScreenRotationTransition@Private@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@.c)
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Udwm::Transitions::Private::ScreenRotationTransition,winrt::Udwm::Transitions::Private::IScreenRotationTransition>::find<winrt::impl::find_iid_traits<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // rdx
  _QWORD *v5; // r8

  if ( (unsigned __int8)winrt::is_guid_of<winrt::Udwm::Transitions::ITransition>(*(_QWORD *)(a1 + 8), a2, a1) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((*v3 + 16LL) & -(__int64)(*v3 != 0LL));
  if ( (unsigned __int8)winrt::is_guid_of<winrt::Udwm::Transitions::Private::IScreenRotationTransition>(v2, 0LL) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((*v5 + 24LL) & -(__int64)(*v5 != 0LL));
  return v4;
}
