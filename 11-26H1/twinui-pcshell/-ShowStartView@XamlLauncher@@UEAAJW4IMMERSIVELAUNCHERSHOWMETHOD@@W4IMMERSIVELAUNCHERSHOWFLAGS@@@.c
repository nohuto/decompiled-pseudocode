/*
 * XREFs of ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1801CE8E0
 * Callers:
 *     ?OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1801CE830 (-OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x180243FD0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x1802BE160 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x18045A040 (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 *     ?OnStartButtonPressed@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18045C770 (-OnStartButtonPressed@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERDISMI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180077628 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009777C (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag.c)
 *     ?LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z @ 0x180097CCC (-LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z.c)
 *     ?IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z @ 0x1801CEAA4 (-IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z.c)
 *     ?DismissPopupMenus@ForegroundHelpers@@YA_NXZ @ 0x1801CEB30 (-DismissPopupMenus@ForegroundHelpers@@YA_NXZ.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801EAC60 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgRe_ea_1801EAC60.c)
 *     ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x180223EB4 (-DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ.c)
 *     ?IsForegroundOnLockZBand@ImmersiveMonitorHelper@@QEBA_NXZ @ 0x1802C1628 (-IsForegroundOnLockZBand@ImmersiveMonitorHelper@@QEBA_NXZ.c)
 *     ?StartInvokeSkipped_ForegroundOnLockZBand@StartWindowTelemetry@@SAXXZ @ 0x1802C65B0 (-StartInvokeSkipped_ForegroundOnLockZBand@StartWindowTelemetry@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ShowAttemptSkippedDueToOpenContextMenu@StartWindowTelemetry@@SAXXZ @ 0x18045D1C0 (-ShowAttemptSkippedDueToOpenContextMenu@StartWindowTelemetry@@SAXXZ.c)
 *     ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x18045D200 (-StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x18045E348 (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XamlLauncher::ShowStartView(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  ImmersiveMonitorHelper *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  int v12[4]; // [rsp+20h] [rbp-188h] BYREF
  volatile signed __int32 *v13[42]; // [rsp+30h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 352) )
    return 2147943568LL;
  if ( (a3 & 8) == 0 )
  {
    if ( !ForegroundHelpers::DismissPopupMenus((ForegroundHelpers *)a1) && (a3 & 4) == 0 )
    {
      StartWindowTelemetry::ShowAttemptSkippedDueToOpenContextMenu();
      return 0LL;
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 56LL))(*(_QWORD *)(a1 + 160));
    if ( ImmersiveMonitorHelper::IsForegroundOnLockZBand(v9) )
    {
      StartWindowTelemetry::StartInvokeSkipped_ForegroundOnLockZBand();
      return 0LL;
    }
  }
  v12[0] = 0;
  if ( !XamlLauncher::IsStartMenuEnabled((XamlLauncher *)(a1 - 24), (enum LauncherTelemetry::Mode *)v12) )
  {
    wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v13);
    v13[0] = (volatile signed __int32 *)&CommonStartTelemetry::LauncherInvokeActivity::`vftable';
    CommonStartTelemetry::LauncherInvokeActivity::StartActivity((CommonStartTelemetry::LauncherInvokeActivity *)v13);
    CommonStartTelemetry::LauncherInvokeActivity::LauncherOpened((__int64)v13, a2, a3, v12[0]);
    wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v13,
      0);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity(v13);
    return 0LL;
  }
  if ( a2 == 1 )
  {
    if ( XamlLauncher::DidHolographicHandleHotKey((XamlLauncher *)(a1 - 24)) )
      return 0LL;
  }
  else if ( a2 == 11 || a2 == 16 )
  {
    goto LABEL_6;
  }
  v10 = ImmersiveMonitorHelper::AdjustMonitorConnectedIfNeeded(*(ImmersiveMonitorHelper **)(a1 + 176));
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x175,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
LABEL_6:
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 352) + 56LL))(
         *(_QWORD *)(a1 + 352),
         a2,
         a3);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x177,
    (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
