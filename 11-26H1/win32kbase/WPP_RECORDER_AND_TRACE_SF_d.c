/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80
 * Callers:
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x14004F25C (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_F.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x14004F53C (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x140052DE8 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 *     NtUserInjectGenericHidInput @ 0x14005F280 (NtUserInjectGenericHidInput.c)
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x14008A620 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     rimSignalReadComplete @ 0x140098988 (rimSignalReadComplete.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 *     xxxInternalToUnicode @ 0x1400E7610 (xxxInternalToUnicode.c)
 *     ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1400EC374 (-BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_.c)
 *     ?_VerifyTHQBlob@@YAHGGPEAE0@Z @ 0x1400EC7AC (-_VerifyTHQBlob@@YAHGGPEAE0@Z.c)
 *     ?_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z @ 0x1400ECB48 (-_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z.c)
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1400ED158 (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 *     ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1400ED42C (-RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HI.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1400EE9C4 (RIMApiSetValidateDeviceSignature.c)
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1400EF4D8 (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 *     RIMAllocateHidConfigDesc @ 0x1400EFCEC (RIMAllocateHidConfigDesc.c)
 *     rimExtractPointerDeviceUsages @ 0x1400F65C8 (rimExtractPointerDeviceUsages.c)
 *     ?ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400F77B0 (-ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1400F955C (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x14010CBE8 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ProcessKeyboardInputWorker @ 0x140123CFC (ProcessKeyboardInputWorker.c)
 *     RIMIDEValidateMouseInputStruct @ 0x140155390 (RIMIDEValidateMouseInputStruct.c)
 *     NtUserReportInertia @ 0x14015FBC0 (NtUserReportInertia.c)
 *     ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x14017A340 (-IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z.c)
 *     NtUserInjectMouseInput @ 0x14018E9E0 (NtUserInjectMouseInput.c)
 *     RIMIDECreateDeviceInstancePath @ 0x14018F42C (RIMIDECreateDeviceInstancePath.c)
 *     ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x14019CF70 (-UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x14019D2A0 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMAllocateHidDesc @ 0x1401AE930 (RIMAllocateHidDesc.c)
 *     ?KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z @ 0x1401B0948 (-KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1401BBC44 (RIMIDEValidateKeybdInputStruct.c)
 *     ?SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401C9F34 (-SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 *     ?GetPsProcessWindowState@tagPROCESSINFO@@QEBA?AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolicy@1@@Z @ 0x1401CC3C4 (-GetPsProcessWindowState@tagPROCESSINFO@@QEBA-AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolic.c)
 *     NtMapVisualRelativePoints @ 0x1401D0840 (NtMapVisualRelativePoints.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     ?DeboostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401D3898 (-DeboostAllProcesses@ForegroundBoost@@YAXXZ.c)
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x1401D4108 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy @ 0x1401D42F4 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClassWithPolicy.c)
 *     ?SyncBoostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401D4474 (-SyncBoostAllProcesses@ForegroundBoost@@YAXXZ.c)
 *     xxxUserProcessCallout @ 0x1401D8EA0 (xxxUserProcessCallout.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401E2960 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserInjectDeviceInput @ 0x1401E5960 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1401E6330 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectPointerInput @ 0x1401E6D30 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1401E7BB0 (NtUserMapPointsByVisualIdentifier.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401E8E40 (NtUserSetProcessLaunchForegroundPolicy.c)
 *     NtRIMAddInputObserver @ 0x1401FED60 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1401FF800 (NtRIMUpdateInputObserverRegistration.c)
 *     rimObsAddInputObserver @ 0x14020E44C (rimObsAddInputObserver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80
 * Reason: Hex-Rays returned no pseudocode for 0x1400F7C80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400F7C80: mov     r11, rsp
 * 00000001400F7C83: mov     [r11+8], rbx
 * 00000001400F7C87: mov     [r11+10h], rsi
 * 00000001400F7C8B: push    rdi
 * 00000001400F7C8C: sub     rsp, 40h
 * 00000001400F7C90: movzx   ebx, [rsp+48h+arg_30]
 * 00000001400F7C98: mov     rsi, r9
 * 00000001400F7C9B: mov     dil, r8b
 * 00000001400F7C9E: test    dl, dl
 * 00000001400F7CA0: jz      short loc_1400F7CD6
 * 00000001400F7CA2: mov     rax, cs:pfnWppTraceMessage
 * 00000001400F7CA9: lea     rdx, [r11+48h]
 * 00000001400F7CAD: mov     r8, [rsp+48h+arg_38]
 * 00000001400F7CB5: mov     r9d, ebx
 * 00000001400F7CB8: mov     qword ptr [r11-18h], 0
 * 00000001400F7CC0: mov     qword ptr [r11-20h], 4
 * 00000001400F7CC8: mov     [r11-28h], rdx
 * 00000001400F7CCC: mov     edx, 2Bh ; '+'
 * 00000001400F7CD1: call    _guard_dispatch_icall
 * 00000001400F7CD6: test    dil, dil
 * 00000001400F7CD9: jz      short loc_1400F7D20
 * 00000001400F7CDB: mov     r9, [rsp+48h+arg_38]
 * 00000001400F7CE3: lea     rax, [rsp+48h+arg_40]
 * 00000001400F7CEB: mov     r8d, [rsp+48h+arg_28]
 * 00000001400F7CF0: mov     rcx, rsi
 * 00000001400F7CF3: movzx   edx, [rsp+48h+arg_20]
 * 00000001400F7CF8: mov     [rsp+48h+var_10], 0
 * 00000001400F7D01: mov     [rsp+48h+var_18], 4
 * 00000001400F7D0A: mov     [rsp+48h+var_20], rax
 * 00000001400F7D0F: mov     [rsp+48h+var_28], bx
 * 00000001400F7D14: call    cs:__imp_WppAutoLogTrace
 * 00000001400F7D1B: nop     dword ptr [rax+rax+00h]
 * 00000001400F7D20: mov     rbx, [rsp+48h+arg_0]
 * 00000001400F7D25: mov     rsi, [rsp+48h+arg_8]
 * 00000001400F7D2A: add     rsp, 40h
 * 00000001400F7D2E: pop     rdi
 * 00000001400F7D2F: retn
 */
