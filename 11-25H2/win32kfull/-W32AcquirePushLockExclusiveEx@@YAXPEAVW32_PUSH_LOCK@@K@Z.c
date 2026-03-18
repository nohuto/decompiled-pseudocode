/*
 * XREFs of ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121C48
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140060500 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x14011A8A4 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1401212F8 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140121404 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x140121430 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x140123B08 (-ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ??$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x140147584 (--$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 *     ?ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x14018ED6C (-ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?DeBoost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A8314 (-DeBoost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A8484 (-Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?DeBoostIfTime@CShellForegroundBoost@@QEAAX_J@Z @ 0x1401C4BB0 (-DeBoostIfTime@CShellForegroundBoost@@QEAAX_J@Z.c)
 *     ?OnDaemonTimer@CForegroundLaunch@@QEAAXXZ @ 0x1401C82E8 (-OnDaemonTimer@CForegroundLaunch@@QEAAXXZ.c)
 *     ?OnDaemonTimerRateChanged@CForegroundLaunch@@QEAAX_N@Z @ 0x1401CCD40 (-OnDaemonTimerRateChanged@CForegroundLaunch@@QEAAX_N@Z.c)
 *     ?ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401D9F64 (-ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?CancelForegroundActivate@CForegroundLaunch@@QEAAXXZ @ 0x1401DF528 (-CancelForegroundActivate@CForegroundLaunch@@QEAAXXZ.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1401F9344 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x14020B0DC (-Connect@CUserPlaySound@@AEAAJPEAX@Z.c)
 *     ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x14020B19C (-Disconnect@CUserPlaySound@@AEAAJXZ.c)
 *     ?OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ @ 0x14021A0DC (-OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ.c)
 *     ?DeBoostAll@CShellForegroundBoost@@QEAAXXZ @ 0x1402266F4 (-DeBoostAll@CShellForegroundBoost@@QEAAXXZ.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x14025CB6C (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x14026E128 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1402728EC (-GetActivePpiPreference@CRotationMgr@@SA-AW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x1402729B0 (-IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z.c)
 *     ?PushForegroundPolicy@CForegroundLaunch@@QEAAXPEAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z @ 0x14028EEA0 (-PushForegroundPolicy@CForegroundLaunch@@QEAAXPEAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z.c)
 *     ?TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x14028F334 (-TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?StoreNewCursorShape@CursorApiRouter@@AEAAKPEAU_MIT_CURSOR_MANAGEMENT_SHAPEHEADER@@K@Z @ 0x1402DC81C (-StoreNewCursorShape@CursorApiRouter@@AEAAKPEAU_MIT_CURSOR_MANAGEMENT_SHAPEHEADER@@K@Z.c)
 *     ?UserGetDwmCursorShape@CursorApiRouter@@QEAAKKREAXKREAK@Z @ 0x1402DCA0C (-UserGetDwmCursorShape@CursorApiRouter@@QEAAKKREAXKREAK@Z.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1402EBDA8 (--1InkProcessor@@AEAA@XZ.c)
 *     ?OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402EBEDC (-OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402EBF90 (-OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402EC044 (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall W32AcquirePushLockExclusiveEx(struct W32_PUSH_LOCK *a1, unsigned int a2)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, a2);
}
