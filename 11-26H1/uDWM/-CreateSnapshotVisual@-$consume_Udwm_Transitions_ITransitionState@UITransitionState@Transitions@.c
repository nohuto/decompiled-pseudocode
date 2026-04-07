/*
 * XREFs of ?CreateSnapshotVisual@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBUTopLevelWindow3DWrapper@Transitions@Udwm@3@@Z @ 0x180071AFC
 * Callers:
 *     ?CaptureVisuals@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4ShellTransitionType@456@@Z @ 0x180042200 (-CaptureVisuals@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D59A4 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::CreateSnapshotVisual(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  int v9; // [rsp+28h] [rbp-20h] BYREF
  const char *v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v9 = 602;
  v10 = "clientcore\\windows\\dwm\\udwm\\objfre\\amd64\\winrt\\Udwm.Transitions.h";
  v12 = 0LL;
  v5 = *v3;
  v6 = *a3;
  v11 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 72))(v3, v6, &v12);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7, &v9);
  *a2 = v12;
  return a2;
}
