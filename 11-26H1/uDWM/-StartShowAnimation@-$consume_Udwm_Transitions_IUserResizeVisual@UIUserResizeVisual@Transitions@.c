/*
 * XREFs of ?StartShowAnimation@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800D76F4
 * Callers:
 *     ?PreTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800D7318 (-PreTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x18004EE40 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Udwm_Transitions_IUserResizeVisual<winrt::Udwm::Transitions::IUserResizeVisual>::StartShowAnimation(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  const char *v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+50h] [rbp+8h] BYREF

  v1 = *a1;
  v5 = "clientcore\\windows\\dwm\\udwm\\objfre\\amd64\\winrt\\Udwm.Transitions.h";
  v4 = 705;
  v6 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
  return winrt::check_hresult(&v7, v2, (__int64)&v4);
}
