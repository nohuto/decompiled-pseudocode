/*
 * XREFs of ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801A8400
 * Callers:
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x1800AE53C (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ??1CCrashDetector@@QEAA@XZ @ 0x1801A8108 (--1CCrashDetector@@QEAA@XZ.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x1801A8168 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ??1COperationWaiter@@UEAA@XZ @ 0x1801A825C (--1COperationWaiter@@UEAA@XZ.c)
 *     ?_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z @ 0x1801A82F4 (-_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z.c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x180227FB4 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ?MoveWindowToDesktop@VirtualDesktopsApi@@UEAAJPEAUHWND__@@AEBU_GUID@@@Z @ 0x180229610 (-MoveWindowToDesktop@VirtualDesktopsApi@@UEAAJPEAUHWND__@@AEBU_GUID@@@Z.c)
 *     ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x18022EFE4 (-StopMonitoring@CCrashDetector@@QEAAXXZ.c)
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1802529AC (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1802B6B50 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?Release@?$CRefCountedObject@V?$CAutoHandle@PEAX@@@@UEAAKXZ @ 0x1802C8880 (-Release@-$CRefCountedObject@V-$CAutoHandle@PEAX@@@@UEAAKXZ.c)
 *     ??1CImmersiveApp@@MEAA@XZ @ 0x1802FBFE4 (--1CImmersiveApp@@MEAA@XZ.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18030AE04 (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetProcessImageName@EdpHelpers@@YAJKPEAPEAG@Z @ 0x18030B46C (-GetProcessImageName@EdpHelpers@@YAJKPEAPEAG@Z.c)
 *     ?TryAcquireForegroundRightsForRemoteLaunch@RemoteLauncherForegroundHandler@@UEAAJXZ @ 0x1803D8E80 (-TryAcquireForegroundRightsForRemoteLaunch@RemoteLauncherForegroundHandler@@UEAAJXZ.c)
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x1804965D0 (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x1806795E4 (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 *     ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x18067A26C (-GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x18067A2E4 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 *     ?v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ @ 0x1806CA600 (-v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ.c)
 *     _CImmersiveApp::_SetApplicationForegroundPriority_::_1_::dtor$0 @ 0x1806D21CC (_CImmersiveApp--_SetApplicationForegroundPriority_--_1_--dtor$0.c)
 *     _CAppViewManager::_ProcessNextOperation_::_1_::dtor$2 @ 0x1806DA9E3 (_CAppViewManager--_ProcessNextOperation_--_1_--dtor$2.c)
 *     _CApplicationFrameService::_CreateFrameManager_::_1_::dtor$2 @ 0x1806DEF7E (_CApplicationFrameService--_CreateFrameManager_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

int __fastcall CAutoHandle<void *>::~CAutoHandle<void *>(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 && v1 != (void *)-1LL )
    LODWORD(v1) = CloseHandle(v1);
  return (int)v1;
}
