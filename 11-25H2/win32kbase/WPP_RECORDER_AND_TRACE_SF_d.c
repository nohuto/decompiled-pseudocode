/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0
 * Callers:
 *     rimSignalReadComplete @ 0x140035980 (rimSignalReadComplete.c)
 *     rimExtractPointerDeviceUsages @ 0x140077F1C (rimExtractPointerDeviceUsages.c)
 *     xxxInternalToUnicode @ 0x1400A04D0 (xxxInternalToUnicode.c)
 *     ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1400AF980 (-BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_.c)
 *     ?_VerifyTHQBlob@@YAHGGPEAE0@Z @ 0x1400AFD1C (-_VerifyTHQBlob@@YAHGGPEAE0@Z.c)
 *     ?_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z @ 0x1400B00B4 (-_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z.c)
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1400B09BC (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 *     ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1400B0C98 (-RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HI.c)
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1400B1E90 (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1400B25A8 (RIMApiSetValidateDeviceSignature.c)
 *     ?ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400C0B80 (-ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1400D30E0 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_F.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1400D33C0 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     ProcessKeyboardInputWorker @ 0x1400FAA64 (ProcessKeyboardInputWorker.c)
 *     NtUserInjectGenericHidInput @ 0x14011EB50 (NtUserInjectGenericHidInput.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMAllocateHidConfigDesc @ 0x14012A498 (RIMAllocateHidConfigDesc.c)
 *     RIMIDEValidateMouseInputStruct @ 0x140130A50 (RIMIDEValidateMouseInputStruct.c)
 *     NtUserInjectDeviceInput @ 0x14013AF50 (NtUserInjectDeviceInput.c)
 *     ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x140144064 (-IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z.c)
 *     RIMIDECreateDeviceInstancePath @ 0x14014FF4C (RIMIDECreateDeviceInstancePath.c)
 *     RIMRegisterForInputWithCallbacks @ 0x140154130 (RIMRegisterForInputWithCallbacks.c)
 *     xxxInitProcessInfo @ 0x140165DD4 (xxxInitProcessInfo.c)
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x140168CE4 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 *     ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1401691E0 (-UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxUserProcessCallout @ 0x14016B6A0 (xxxUserProcessCallout.c)
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 *     NtUserInjectKeyboardInput @ 0x140171970 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x140172360 (NtUserInjectMouseInput.c)
 *     NtUserReportInertia @ 0x140173210 (NtUserReportInertia.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1401838DC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x140187020 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x14018826C (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x14019D7D4 (RIMIDEValidateKeybdInputStruct.c)
 *     ?SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401A6B4C (-SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     NtMapVisualRelativePoints @ 0x1401AE6E0 (NtMapVisualRelativePoints.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401BC380 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserInjectPointerInput @ 0x1401BE260 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1401BF260 (NtUserMapPointsByVisualIdentifier.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401C0060 (NtUserSetProcessLaunchForegroundPolicy.c)
 *     NtRIMAddInputObserver @ 0x1401D7BC0 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1401D87E0 (NtRIMUpdateInputObserverRegistration.c)
 *     RIMAllocateHidDesc @ 0x1401DE298 (RIMAllocateHidDesc.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1401F1C54 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     rimObsAddInputObserver @ 0x1401F296C (rimObsAddInputObserver.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1401FCAD0 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z @ 0x1402138CC (-KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0
 * Reason: Hex-Rays returned no pseudocode for 0x1400C16E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400C16E0: mov     r11, rsp
 * 00000001400C16E3: mov     [r11+8], rbx
 * 00000001400C16E7: mov     [r11+10h], rsi
 * 00000001400C16EB: push    rdi
 * 00000001400C16EC: sub     rsp, 40h
 * 00000001400C16F0: movzx   ebx, [rsp+48h+arg_30]
 * 00000001400C16F8: mov     rsi, r9
 * 00000001400C16FB: mov     dil, r8b
 * 00000001400C16FE: test    dl, dl
 * 00000001400C1700: jz      short loc_1400C1733
 * 00000001400C1702: and     qword ptr [r11-18h], 0
 * 00000001400C1707: lea     rdx, [r11+48h]
 * 00000001400C170B: mov     rax, cs:pfnWppTraceMessage
 * 00000001400C1712: mov     r9d, ebx
 * 00000001400C1715: mov     r8, [rsp+48h+arg_38]
 * 00000001400C171D: mov     qword ptr [r11-20h], 4
 * 00000001400C1725: mov     [r11-28h], rdx
 * 00000001400C1729: mov     edx, 2Bh ; '+'
 * 00000001400C172E: call    _guard_dispatch_icall
 * 00000001400C1733: test    dil, dil
 * 00000001400C1736: jz      short loc_1400C177A
 * 00000001400C1738: and     [rsp+48h+var_10], 0
 * 00000001400C173E: lea     rax, [rsp+48h+arg_40]
 * 00000001400C1746: mov     r9, [rsp+48h+arg_38]
 * 00000001400C174E: mov     rcx, rsi
 * 00000001400C1751: mov     r8d, [rsp+48h+arg_28]
 * 00000001400C1756: movzx   edx, [rsp+48h+arg_20]
 * 00000001400C175B: mov     [rsp+48h+var_18], 4
 * 00000001400C1764: mov     [rsp+48h+var_20], rax
 * 00000001400C1769: mov     [rsp+48h+var_28], bx
 * 00000001400C176E: call    cs:__imp_WppAutoLogTrace
 * 00000001400C1775: nop     dword ptr [rax+rax+00h]
 * 00000001400C177A: mov     rbx, [rsp+48h+arg_0]
 * 00000001400C177F: mov     rsi, [rsp+48h+arg_8]
 * 00000001400C1784: add     rsp, 40h
 * 00000001400C1788: pop     rdi
 * 00000001400C1789: retn
 */
