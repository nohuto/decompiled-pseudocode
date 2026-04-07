/*
 * XREFs of ?EndRect@?$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1800402BC
 * Callers:
 *     ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180040774 (-PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D59A4 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper<winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::EndRect(
        __int64 **a1,
        __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+30h] [rbp-28h] BYREF
  const char *v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  v2 = *a2;
  v3 = *a1;
  v8 = "clientcore\\windows\\dwm\\udwm\\objfre\\amd64\\winrt\\Udwm.Transitions.h";
  v7 = 79;
  v9 = 0LL;
  v4 = *v3;
  v6 = v2;
  result = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v4 + 72))(v3, &v6);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result, &v7);
  return result;
}
