/*
 * XREFs of ?StartHideAnimation@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBUUnloadDelegate@Transitions@Udwm@3@@Z @ 0x1800D76A4
 * Callers:
 *     ?PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800D71AC (-PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x18004EE40 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Udwm_Transitions_IUserResizeVisual<winrt::Udwm::Transitions::IUserResizeVisual>::StartHideAnimation(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // eax
  int v7; // [rsp+20h] [rbp-28h] BYREF
  const char *v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = *a2;
  v8 = "clientcore\\windows\\dwm\\udwm\\objfre\\amd64\\winrt\\Udwm.Transitions.h";
  v7 = 721;
  v4 = *v2;
  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v4 + 80))(v2, v3);
  return winrt::check_hresult(&v10, v5, (__int64)&v7);
}
