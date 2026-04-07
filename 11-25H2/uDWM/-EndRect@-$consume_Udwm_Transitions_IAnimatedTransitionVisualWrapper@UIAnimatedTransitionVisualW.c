/*
 * XREFs of ?EndRect@?$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x180062708
 * Callers:
 *     ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180062034 (-PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800D72B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper<winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::EndRect(
        __int64 **a1,
        __int128 *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // eax
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+38h] [rbp-20h]
  char v9; // [rsp+60h] [rbp+8h] BYREF

  v2 = *a1;
  v7 = 0;
  v8 = 0LL;
  v3 = *v2;
  v6 = *a2;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v3 + 72))(v2, &v6);
  return winrt::check_hresult(&v9, v4, &v7);
}
