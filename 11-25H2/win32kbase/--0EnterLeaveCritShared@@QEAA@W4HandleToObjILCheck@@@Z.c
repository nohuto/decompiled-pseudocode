/*
 * XREFs of ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238
 * Callers:
 *     NtUserGetPointerDeviceOrientation @ 0x14003B7F0 (NtUserGetPointerDeviceOrientation.c)
 *     ReferenceDwmApiPort @ 0x14003F9B0 (ReferenceDwmApiPort.c)
 *     NtUserReleaseDC @ 0x1400474E0 (NtUserReleaseDC.c)
 *     NtUserEnumDisplayDevices @ 0x140047D40 (NtUserEnumDisplayDevices.c)
 *     NtUserGetKeyboardLayout @ 0x140048D00 (NtUserGetKeyboardLayout.c)
 *     NtUserEnumDisplaySettings @ 0x14004BC10 (NtUserEnumDisplaySettings.c)
 *     NtUserEnumDisplayMonitors @ 0x14004D210 (NtUserEnumDisplayMonitors.c)
 *     NtUserGetKeyboardState @ 0x140060B00 (NtUserGetKeyboardState.c)
 *     NtUserGetClipCursor @ 0x140063870 (NtUserGetClipCursor.c)
 *     NtUserGetDpiForMonitor @ 0x140089500 (NtUserGetDpiForMonitor.c)
 *     NtUserGetHDevName @ 0x14009E490 (NtUserGetHDevName.c)
 *     NtUserVkKeyScanEx @ 0x14009EED0 (NtUserVkKeyScanEx.c)
 *     NtUserMapVirtualKeyEx @ 0x14009F250 (NtUserMapVirtualKeyEx.c)
 *     NtMITGetCursorUpdateHandle @ 0x1400BD110 (NtMITGetCursorUpdateHandle.c)
 *     NtUserGetUniformSpaceMapping @ 0x1400CDAB0 (NtUserGetUniformSpaceMapping.c)
 *     UserReleaseDC @ 0x1400F4E50 (UserReleaseDC.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x140105920 (NtUserGetProcessDpiAwarenessContext.c)
 *     NtUserGetDoubleClickTime @ 0x14010C7C0 (NtUserGetDoubleClickTime.c)
 *     NtUserGetKeyboardLayoutList @ 0x140110360 (NtUserGetKeyboardLayoutList.c)
 *     NtUserGetKeyboardType @ 0x140125E70 (NtUserGetKeyboardType.c)
 *     NtUserGetSystemDpiForProcess @ 0x140146FE0 (NtUserGetSystemDpiForProcess.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1401523C0 (NtUserIsMouseInPointerEnabled.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x14016F770 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetAsyncKeyState @ 0x14016FB90 (NtUserGetAsyncKeyState.c)
 *     NtUserGetInputLocaleInfo @ 0x1401701F0 (NtUserGetInputLocaleInfo.c)
 *     NtUserGetKeyState @ 0x140170360 (NtUserGetKeyState.c)
 *     NtUserGetPointerCursorId @ 0x140170930 (NtUserGetPointerCursorId.c)
 *     NtUserGetPointerFrameTimes @ 0x1401709F0 (NtUserGetPointerFrameTimes.c)
 *     NtUserGetPointerInfoList @ 0x140170AE0 (NtUserGetPointerInfoList.c)
 *     NtUserGetPointerInputTransform @ 0x140170EA0 (NtUserGetPointerInputTransform.c)
 *     NtUserGetPointerProprietaryId @ 0x140170FB0 (NtUserGetPointerProprietaryId.c)
 *     NtUserGetPointerType @ 0x140171080 (NtUserGetPointerType.c)
 *     NtUserGetRawPointerDeviceData @ 0x140171150 (NtUserGetRawPointerDeviceData.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1401741B0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     UserGetWindowThreadProcessId @ 0x14019B1B0 (UserGetWindowThreadProcessId.c)
 *     NtMITSetLastInputRecipient @ 0x1401BB550 (NtMITSetLastInputRecipient.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1401BD4C0 (NtUserGetExtendedPointerDeviceProperty.c)
 *     NtUserGetMinuserIdForBaseWindow @ 0x1401BD890 (NtUserGetMinuserIdForBaseWindow.c)
 *     NtUserGetPointerDeviceInputSpace @ 0x1401BD920 (NtUserGetPointerDeviceInputSpace.c)
 * Callees:
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 */

__int64 *__fastcall EnterLeaveCritShared::EnterLeaveCritShared(__int64 *a1, unsigned int a2)
{
  *a1 = EnterSharedCrit(0, a2);
  return a1;
}
