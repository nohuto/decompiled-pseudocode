/*
 * XREFs of ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0
 * Callers:
 *     NtUserGetPointerFrameTimes @ 0x140051220 (NtUserGetPointerFrameTimes.c)
 *     NtUserGetPointerInputTransform @ 0x140053640 (NtUserGetPointerInputTransform.c)
 *     NtUserGetPointerInfoList @ 0x140053E60 (NtUserGetPointerInfoList.c)
 *     NtUserGetClipCursor @ 0x140082750 (NtUserGetClipCursor.c)
 *     NtUserGetPointerType @ 0x140087BC0 (NtUserGetPointerType.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1400DD8E0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     NtUserGetHDevName @ 0x1400DECF0 (NtUserGetHDevName.c)
 *     NtUserGetKeyboardState @ 0x1400E83A0 (NtUserGetKeyboardState.c)
 *     NtUserGetAsyncKeyState @ 0x1400E8790 (NtUserGetAsyncKeyState.c)
 *     NtUserGetKeyState @ 0x140117EE0 (NtUserGetKeyState.c)
 *     NtUserGetKeyboardLayoutList @ 0x14011C350 (NtUserGetKeyboardLayoutList.c)
 *     NtUserGetUniformSpaceMapping @ 0x14011D250 (NtUserGetUniformSpaceMapping.c)
 *     NtUserGetPointerDeviceOrientation @ 0x140156800 (NtUserGetPointerDeviceOrientation.c)
 *     NtUserGetPointerProprietaryId @ 0x1401616B0 (NtUserGetPointerProprietaryId.c)
 *     NtUserGetInputLocaleInfo @ 0x140164250 (NtUserGetInputLocaleInfo.c)
 *     NtUserGetDpiForMonitor @ 0x14017AFC0 (NtUserGetDpiForMonitor.c)
 *     NtUserEnumDisplayMonitors @ 0x140199A90 (NtUserEnumDisplayMonitors.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1401E3DB0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1401E4270 (NtUserGetExtendedPointerDeviceProperty.c)
 *     NtUserGetKeyEventInfo @ 0x1401E45E0 (NtUserGetKeyEventInfo.c)
 *     NtUserGetPointerCursorId @ 0x1401E4AF0 (NtUserGetPointerCursorId.c)
 *     NtUserGetPointerDeviceInputSpace @ 0x1401E4C50 (NtUserGetPointerDeviceInputSpace.c)
 *     NtUserGetRawPointerDeviceData @ 0x1401E4D40 (NtUserGetRawPointerDeviceData.c)
 * Callees:
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 */

_QWORD *__fastcall EnterLeaveCritShared::EnterLeaveCritShared(_QWORD *a1)
{
  *a1 = EnterSharedCrit(0LL);
  return a1;
}
