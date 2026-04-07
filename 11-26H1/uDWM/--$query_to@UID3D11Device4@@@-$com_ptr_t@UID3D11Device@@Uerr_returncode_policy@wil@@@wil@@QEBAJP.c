/*
 * XREFs of ??$query_to@UID3D11Device4@@@?$com_ptr_t@UID3D11Device@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUID3D11Device4@@@Z @ 0x18008D268
 * Callers:
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180053870 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z @ 0x180053A00 (-InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 */

__int64 __fastcall wil::com_ptr_t<ID3D11Device,wil::err_returncode_policy>::query_to<ID3D11Device4>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64); // r9

  v2 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a2);
  return (**v3)(v3, &GUID_8992ab71_02e6_4b8d_ba48_b056dcda42c4, v2);
}
