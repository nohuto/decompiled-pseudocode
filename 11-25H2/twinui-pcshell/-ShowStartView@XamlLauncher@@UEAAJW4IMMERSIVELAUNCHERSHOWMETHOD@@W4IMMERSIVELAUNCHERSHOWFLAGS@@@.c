/*
 * XREFs of ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1801D62F0
 * Callers:
 *     ?OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1801D6234 (-OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x18024FA80 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x1802C7260 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x18044D9F8 (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 *     ?OnStartButtonPressed@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18044FD40 (-OnStartButtonPressed@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERDISMI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z @ 0x180046530 (-LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180180BDC (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z @ 0x1801D64B0 (-IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z.c)
 *     ?DismissPopupMenus@ForegroundHelpers@@YA_NXZ @ 0x1801D653C (-DismissPopupMenus@ForegroundHelpers@@YA_NXZ.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801DAA80 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801F48F4 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgRe_ea_1801F48F4.c)
 *     ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x180232654 (-DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ.c)
 *     ?IsForegroundOnLockZBand@ImmersiveMonitorHelper@@QEBA_NXZ @ 0x1802C9EA4 (-IsForegroundOnLockZBand@ImmersiveMonitorHelper@@QEBA_NXZ.c)
 *     ?StartInvokeSkipped_ForegroundOnLockZBand@StartWindowTelemetry@@SAXXZ @ 0x1802CF148 (-StartInvokeSkipped_ForegroundOnLockZBand@StartWindowTelemetry@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?ShowAttemptSkippedDueToOpenContextMenu@StartWindowTelemetry@@SAXXZ @ 0x180450680 (-ShowAttemptSkippedDueToOpenContextMenu@StartWindowTelemetry@@SAXXZ.c)
 *     ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x1804506C0 (-StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x18045171C (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XamlLauncher::ShowStartView(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  ImmersiveMonitorHelper *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  int v12[4]; // [rsp+20h] [rbp-188h] BYREF
  _QWORD v13[42]; // [rsp+30h] [rbp-178h] BYREF
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
    v13[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
    CommonStartTelemetry::LauncherInvokeActivity::StartActivity((CommonStartTelemetry::LauncherInvokeActivity *)v13);
    CommonStartTelemetry::LauncherInvokeActivity::LauncherOpened((__int64)v13, a2, a3, v12[0]);
    wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v13,
      0LL);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v13);
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
      (void *)0x186,
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
    (void *)0x188,
    (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
