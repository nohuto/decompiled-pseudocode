/*
 * XREFs of ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140
 * Callers:
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140011330 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_vScale@Win32kRS@@YAXPEAVREGION_CORE@@VPOINTFL@@@Z @ 0x140092664 (-RegionCore_vScale@Win32kRS@@YAXPEAVREGION_CORE@@VPOINTFL@@@Z.c)
 *     ?RegionCore_upload_for_floodfill@Win32kRS@@YAJPEAVREGION_CORE@@PEBJKPEAJK@Z @ 0x140094A0C (-RegionCore_upload_for_floodfill@Win32kRS@@YAJPEAVREGION_CORE@@PEBJKPEAJK@Z.c)
 *     ?RegionCore_set_from_path@Win32kRS@@YAHPEAVREGION_CORE@@AEAVEPATHOBJ@@KPEBU_RECTL@@@Z @ 0x140095BA8 (-RegionCore_set_from_path@Win32kRS@@YAHPEAVREGION_CORE@@AEAVEPATHOBJ@@KPEBU_RECTL@@@Z.c)
 *     ?RegionCore_tighten@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140096B54 (-RegionCore_tighten@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_set_to_rectls@Win32kRS@@YAHPEAVREGION_CORE@@_KPEBU_RECTL@@@Z @ 0x140098984 (-RegionCore_set_to_rectls@Win32kRS@@YAHPEAVREGION_CORE@@_KPEBU_RECTL@@@Z.c)
 *     ?RegionCore_fill_path_with_outline@Win32kRS@@YAHPEBVREGION_CORE@@AEAVEPATHOBJ@@PEBVEXFORMOBJ@@@Z @ 0x140098E60 (-RegionCore_fill_path_with_outline@Win32kRS@@YAHPEBVREGION_CORE@@AEAVEPATHOBJ@@PEBVEXFORMOBJ@@@Z.c)
 *     ?RegionCore_iReduce@Win32kRS@@YAJPEAVREGION_CORE@@PEBV2@@Z @ 0x140098EF8 (-RegionCore_iReduce@Win32kRS@@YAJPEAVREGION_CORE@@PEBV2@@Z.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1400990F0 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ?GetWakeOnDeviceTypes@CInputGlobals@@QEBA?AW4InputType@@XZ @ 0x140099290 (-GetWakeOnDeviceTypes@CInputGlobals@@QEBA-AW4InputType@@XZ.c)
 *     ?GetKind@LastWokenThread@@YA?AW4LastWokenThreadKind@@XZ @ 0x14009A9A0 (-GetKind@LastWokenThread@@YA-AW4LastWokenThreadKind@@XZ.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1400A7AF0 (_GetPrecisionTouchPadConfiguration.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1400FF970 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     UpdateMouseConnectionState @ 0x14012F3A8 (UpdateMouseConnectionState.c)
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x14012F640 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     ?RegionCore_upload@Win32kRS@@YAHPEAVREGION_CORE@@PEBJK@Z @ 0x14013E95C (-RegionCore_upload@Win32kRS@@YAHPEAVREGION_CORE@@PEBJK@Z.c)
 *     ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x140148878 (-TraceEnvironment@CPTPProcessor@@SAXXZ.c)
 *     ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x14014B200 (-OwnsPointerId@CInputManager@@SA_NII@Z.c)
 *     ?GetLastInputType@CInputGlobals@@QEBA?AW4_LINP_SOURCE@@XZ @ 0x1401517E0 (-GetLastInputType@CInputGlobals@@QEBA-AW4_LINP_SOURCE@@XZ.c)
 *     ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x14018ABC0 (-GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z.c)
 *     ?RegionCore_bExpand@Win32kRS@@YAHPEAVREGION_CORE@@K@Z @ 0x14019C64C (-RegionCore_bExpand@Win32kRS@@YAHPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_get_pscnTail_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x14019DFDC (-RegionCore_get_pscnTail_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?CreateCoreMsgPort@CoreMessagingKPort@@QEAAJXZ @ 0x1401AAC50 (-CreateCoreMsgPort@CoreMessagingKPort@@QEAAJXZ.c)
 *     ?SendMessageToEndpoint@CoreMessagingKPort@@QEBAJW4COREMESSAGINGK_ENDPOINT_ID@@PEBXI@Z @ 0x1401AB064 (-SendMessageToEndpoint@CoreMessagingKPort@@QEBAJW4COREMESSAGINGK_ENDPOINT_ID@@PEBXI@Z.c)
 *     ?LogProcessInformation@ForegroundBoost@@YAXXZ @ 0x1401AF208 (-LogProcessInformation@ForegroundBoost@@YAXXZ.c)
 *     EnablePTPDevices @ 0x1401B4DE0 (EnablePTPDevices.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1401B4FC0 (_SetPrecisionTouchPadConfiguration.c)
 *     ??0RustAutoHotpatchLockSH@@QEAA@XZ @ 0x1401C4338 (--0RustAutoHotpatchLockSH@@QEAA@XZ.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1401F74B4 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x14020EA60 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ?GetInfo@SensorLocalityEx@CBaseInput@@QEBA?AW4SensorLocalityInfo@@XZ @ 0x14020F968 (-GetInfo@SensorLocalityEx@CBaseInput@@QEBA-AW4SensorLocalityInfo@@XZ.c)
 *     ?GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA?AVDoWorkAndWait@2@XZ @ 0x14020FB14 (-GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA-AVDoWorkAndWait@2@XZ.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x14020FBD8 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?GetDimmedState@CInputGlobals@@QEBA_NXZ @ 0x140211C10 (-GetDimmedState@CInputGlobals@@QEBA_NXZ.c)
 *     ?GetDisplayOnState@CInputGlobals@@QEBA_NXZ @ 0x140211C60 (-GetDisplayOnState@CInputGlobals@@QEBA_NXZ.c)
 *     ?WasLastInputInjected@CInputGlobals@@QEBA_NXZ @ 0x140211D90 (-WasLastInputInjected@CInputGlobals@@QEBA_NXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x140213D10 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140214114 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 *     GetInputThreadKernelThread @ 0x140216164 (GetInputThreadKernelThread.c)
 * Callees:
 *     <none>
 */

void __fastcall W32AcquirePushLockSharedEx(struct W32_PUSH_LOCK *a1, unsigned int a2)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, a2);
}
