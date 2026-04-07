/*
 * XREFs of ?StartAnimation@?$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@HH@Z @ 0x1800624C4
 * Callers:
 *     ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180062034 (-PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800D72B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper<winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::StartAnimation(
        __int64 *a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = a3;
  v3 = *a1;
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 112LL))(v3, 104LL, 1LL);
  return winrt::check_hresult(&v8, v4, &v6);
}
