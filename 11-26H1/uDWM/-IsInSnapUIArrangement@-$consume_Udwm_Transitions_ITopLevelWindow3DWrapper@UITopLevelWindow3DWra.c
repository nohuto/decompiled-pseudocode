/*
 * XREFs of ?IsInSnapUIArrangement@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18008AEE4
 * Callers:
 *     ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180040774 (-PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D59A4 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::IsInSnapUIArrangement(
        __int64 **a1)
{
  __int64 *v1; // rcx
  __int64 v2; // rax
  int v3; // eax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  const char *v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]
  char v8; // [rsp+50h] [rbp+8h] BYREF

  v1 = *a1;
  v6 = "clientcore\\windows\\dwm\\udwm\\objfre\\amd64\\winrt\\Udwm.Transitions.h";
  v8 = 0;
  v5 = 214;
  v2 = *v1;
  v7 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64 *, char *))(v2 + 56))(v1, &v8);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3, &v5);
  return v8;
}
