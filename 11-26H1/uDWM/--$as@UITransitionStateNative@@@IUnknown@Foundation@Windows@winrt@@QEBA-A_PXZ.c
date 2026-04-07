/*
 * XREFs of ??$as@UITransitionStateNative@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1800D1CD8
 * Callers:
 *     ?CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D2AE8 (-CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winr.c)
 *     ?DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D2D38 (-DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D38AC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D3D34 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 * Callees:
 *     ??$as@UITransitionStateNative@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionStateNative@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800D1CFC (--$as@UITransitionStateNative@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A.c)
 */

__int64 __fastcall winrt::Windows::Foundation::IUnknown::as<ITransitionStateNative>(_QWORD *a1, __int64 a2)
{
  winrt::impl::as<ITransitionStateNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(a2, *a1);
  return a2;
}
