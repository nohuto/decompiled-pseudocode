/*
 * XREFs of ?PreTransition@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransitionType@Transitions@Udwm@3@AEBUTransitionState@563@@Z @ 0x1800306D0
 * Callers:
 *     ?PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindow3D@@W4ShellTransitionType@234@@Z @ 0x1800305E4 (-PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindo.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18007C210 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND.c)
 *     ?PreTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z @ 0x1800D8E58 (-PreTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D59A4 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::PreTransition(
        __int64 **a1,
        unsigned int *a2,
        __int64 *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-28h] BYREF
  const char *v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = *a1;
  v4 = *a3;
  v5 = *a2;
  v9 = "clientcore\\windows\\dwm\\udwm\\objfre\\amd64\\winrt\\Udwm.Transitions.h";
  v6 = *v3;
  v8 = 483;
  v10 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v6 + 72))(v3, v5, v4);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result, &v8);
  return result;
}
