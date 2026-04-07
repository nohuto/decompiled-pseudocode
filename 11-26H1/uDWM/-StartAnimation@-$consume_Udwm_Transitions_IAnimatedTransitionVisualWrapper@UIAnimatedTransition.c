/*
 * XREFs of ?StartAnimation@?$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@HH@Z @ 0x180040378
 * Callers:
 *     ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180040774 (-PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D59A4 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper<winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::StartAnimation(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-28h] BYREF
  const char *v4; // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+30h] [rbp-18h]

  v1 = *a1;
  v4 = "clientcore\\windows\\dwm\\udwm\\objfre\\amd64\\winrt\\Udwm.Transitions.h";
  v3 = 163;
  v5 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v1 + 112LL))(v1, 104LL, 1LL);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result, &v3);
  return result;
}
