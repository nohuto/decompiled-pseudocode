/*
 * XREFs of ??$find_iid@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUWindowJointResizeTransition@implementation@Private@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x1800D68F4
 * Callers:
 *     ?find_interface@?$implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D8130 (-find_interface@-$implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udw.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$is_guid_of@UITransition@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18005C96C (--$is_guid_of@UITransition@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$found@UIUserResizeVisualNative@@@?$find_iid_traits@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@QEBAPEAXXZ @ 0x18008B09C (--$found@UIUserResizeVisualNative@@@-$find_iid_traits@UUserResizeVisual@implementation@Transitio.c)
 *     ??$is_guid_of@UIBitmapManager@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800D6B08 (--$is_guid_of@UIBitmapManager@@@winrt@@YA_NAEBUguid@0@@Z.c)
 */

__int64 __fastcall winrt::impl::find_iid<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v6; // r8
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[0] = a1;
  v8[1] = (__int64)a2;
  if ( winrt::is_guid_of<winrt::Udwm::Transitions::ITransition>(a2) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((v4 + 8) & -(__int64)(v4 != 0));
  if ( (unsigned __int8)winrt::is_guid_of<IBitmapManager>(v3, v2, 0LL) )
    return winrt::impl::find_iid_traits<winrt::Udwm::Transitions::implementation::UserResizeVisual>::found<IUserResizeVisualNative>(v8);
  return v6;
}
