/*
 * XREFs of ?AnimationComplete@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBUAnimationCompletedHandler@Transitions@Udwm@3@@Z @ 0x18004026C
 * Callers:
 *     ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180040774 (-PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D59A4 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::AnimationComplete(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  const char *v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v2 = *a1;
  v3 = *a2;
  v7 = "clientcore\\windows\\dwm\\udwm\\objfre\\amd64\\winrt\\Udwm.Transitions.h";
  v6 = 301;
  v4 = *v2;
  v8 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64 *, __int64))(v4 + 96))(v2, v3);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result, &v6);
  return result;
}
