/*
 * XREFs of ?PreTransition@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransitionType@Transitions@Udwm@3@AEBUTransitionState@563@@Z @ 0x1800DC0C4
 * Callers:
 *     ?PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindow3D@@W4ShellTransitionType@234@@Z @ 0x180061700 (-PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindo.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18008EED4 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND.c)
 *     ?PreTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z @ 0x1800DC108 (-PreTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800D72B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::PreTransition(
        __int64 **a1,
        unsigned int *a2,
        __int64 *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // eax
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = *a3;
  v5 = *a2;
  v9 = 0;
  v6 = *v3;
  v10 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v6 + 72))(v3, v5, v4);
  return winrt::check_hresult(&v11, v7, (__int64)&v9);
}
