/*
 * XREFs of ?StartAnimation@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransitionType@Transitions@Udwm@3@AEBURect@Foundation@Windows@3@@Z @ 0x180040318
 * Callers:
 *     ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180040774 (-PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D59A4 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::StartAnimation(
        __int64 **a1,
        unsigned int *a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  __int64 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+30h] [rbp-28h] BYREF
  const char *v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  v3 = *a3;
  v4 = *a1;
  v5 = *a2;
  v10 = "clientcore\\windows\\dwm\\udwm\\objfre\\amd64\\winrt\\Udwm.Transitions.h";
  v9 = 317;
  v6 = *v4;
  v11 = 0LL;
  v8 = v3;
  result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *))(v6 + 104))(v4, v5, &v8);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result, &v9);
  return result;
}
