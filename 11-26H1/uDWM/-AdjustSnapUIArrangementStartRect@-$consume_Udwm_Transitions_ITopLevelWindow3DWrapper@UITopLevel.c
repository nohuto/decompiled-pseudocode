/*
 * XREFs of ?AdjustSnapUIArrangementStartRect@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1800D5F20
 * Callers:
 *     ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180040774 (-PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x18004EE40 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_OWORD *__fastcall winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::AdjustSnapUIArrangementStartRect(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  __int64 v5; // rax
  __int64 v6; // r9
  int v7; // eax
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+30h] [rbp-28h] BYREF
  const char *v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v10 = 402;
  *a2 = 0LL;
  v3 = *a3;
  v11 = "clientcore\\windows\\dwm\\udwm\\objfre\\amd64\\winrt\\Udwm.Transitions.h";
  v12 = 0LL;
  v9 = v3;
  v5 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)a2);
  v7 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v6 + 144LL))(v6, &v9, v5);
  winrt::check_hresult(&v13, v7, (__int64)&v10);
  return a2;
}
