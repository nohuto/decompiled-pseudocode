/*
 * XREFs of ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x180076A7C
 * Callers:
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180076AC0 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x1801D49CC (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180246630 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180248BD0 (-OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x180248E00 (-OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Intern.c)
 *     ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180461E10 (-OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x1804621F0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x18046280C (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x180463284 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180075C3C (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Pa.c)
 */

struct wil::details::IFailureCallback *__fastcall CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread(
        __int64 a1,
        struct wil::details::IFailureCallback *a2)
{
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
    a2,
    a1,
    **(_DWORD **)(a1 + 272) == 1);
  *(_QWORD *)a2 = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
  return a2;
}
