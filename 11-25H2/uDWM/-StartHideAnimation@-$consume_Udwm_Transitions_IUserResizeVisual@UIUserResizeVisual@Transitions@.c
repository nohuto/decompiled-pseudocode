/*
 * XREFs of ?StartHideAnimation@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBUUnloadDelegate@Transitions@Udwm@3@@Z @ 0x1800DA744
 * Callers:
 *     ?PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800DA1FC (-PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800D72B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Udwm_Transitions_IUserResizeVisual<winrt::Udwm::Transitions::IUserResizeVisual>::StartHideAnimation(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = *a2;
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 80LL))(v2, v3);
  return winrt::check_hresult(&v8, v4, (__int64)&v6);
}
