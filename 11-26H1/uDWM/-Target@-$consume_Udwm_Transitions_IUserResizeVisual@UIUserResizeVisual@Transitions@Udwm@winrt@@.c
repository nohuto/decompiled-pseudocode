/*
 * XREFs of ?Target@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800D7744
 * Callers:
 *     ?UpdateRect@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@6@@Z @ 0x1800D787C (-UpdateRect@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBU.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x18004EE40 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_IUserResizeVisual<winrt::Udwm::Transitions::IUserResizeVisual>::Target(
        __int64 **a1)
{
  __int64 *v1; // rcx
  __int64 v2; // rax
  int v3; // eax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  const char *v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v1 = *a1;
  v6 = "clientcore\\windows\\dwm\\udwm\\objfre\\amd64\\winrt\\Udwm.Transitions.h";
  v8 = 0;
  v5 = 688;
  v2 = *v1;
  v7 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(v2 + 64))(v1, &v8);
  winrt::check_hresult(&v9, v3, (__int64)&v5);
  return v8;
}
