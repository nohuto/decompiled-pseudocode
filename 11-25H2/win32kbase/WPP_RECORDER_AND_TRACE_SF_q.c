/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x14002A1AC (RIMIDECreateHIDDesc.c)
 *     rimOnPnpRemoveCompleteInUserCrit @ 0x14002B6EC (rimOnPnpRemoveCompleteInUserCrit.c)
 *     RIMDeliverDeviceResetRequest @ 0x140032DCC (RIMDeliverDeviceResetRequest.c)
 *     rimDeviceResetApc @ 0x140033010 (rimDeviceResetApc.c)
 *     RIMIDERemoveInjectionDevice @ 0x1400339A4 (RIMIDERemoveInjectionDevice.c)
 *     RIMReadInput @ 0x140034A90 (RIMReadInput.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x140035294 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMOnPnpNotification @ 0x140039E20 (RIMOnPnpNotification.c)
 *     RIMUnregisterForInput @ 0x14009DC10 (RIMUnregisterForInput.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D1754 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D29FC (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1400D33C0 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     RIMGetPointerInputType @ 0x1400D98BC (RIMGetPointerInputType.c)
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x140106ACC (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z.c)
 *     ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140108430 (-RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1401086C0 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x140122408 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z.c)
 *     rimObsObserveNextInput @ 0x14013BE38 (rimObsObserveNextInput.c)
 *     rimObsPopInputMessage @ 0x14013C0D8 (rimObsPopInputMessage.c)
 *     rimResetPnpRemovePendingStateBits @ 0x140144ED0 (rimResetPnpRemovePendingStateBits.c)
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x14014C58C (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x14014CE10 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x140154130 (RIMRegisterForInputWithCallbacks.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x140158A58 (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     EtwTraceUIPISystemError @ 0x14016E1F0 (EtwTraceUIPISystemError.c)
 *     NtUserReportInertia @ 0x140173210 (NtUserReportInertia.c)
 *     RIMMarkSiblingMouseDevice @ 0x14017F7BC (RIMMarkSiblingMouseDevice.c)
 *     RIMAddToActiveDevices @ 0x14017F910 (RIMAddToActiveDevices.c)
 *     RIMGetMaxCountFeatureDetails @ 0x14017FBE8 (RIMGetMaxCountFeatureDetails.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x14018A890 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14018DE2C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018E544 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401998B4 (RIMOnAsyncWorkItemNotification.c)
 *     Win32JobObject::_anonymous_namespace_::DeleteW32Job @ 0x1401ACEF8 (Win32JobObject--_anonymous_namespace_--DeleteW32Job.c)
 *     ?UserGlobalAtomTableCallout_Old@@YAPEAXXZ @ 0x1401B5AC4 (-UserGlobalAtomTableCallout_Old@@YAPEAXXZ.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401BC380 (NtUserCreateSyntheticPointerDevice2.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1401D62EC (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     _lambda_a227ac8fdd86ffb519ef5e6aae7f861c_::operator() @ 0x1401D7604 (_lambda_a227ac8fdd86ffb519ef5e6aae7f861c_--operator().c)
 *     RIMAllocateHidDesc @ 0x1401DE298 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1401DF458 (RIMCreateHidDesc.c)
 *     RIMFindSiblingMouseDeviceWorker @ 0x1401E04B8 (RIMFindSiblingMouseDeviceWorker.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x1401E06B0 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 *     RIMHidGetCaps @ 0x1401E0AB8 (RIMHidGetCaps.c)
 *     RIMHidGetPreparsedData @ 0x1401E0E5C (RIMHidGetPreparsedData.c)
 *     RIMRemoveFromActiveDevices @ 0x1401E4710 (RIMRemoveFromActiveDevices.c)
 *     RawInputManagerObjectDelete @ 0x1401E6DF8 (RawInputManagerObjectDelete.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1401EAD20 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EFCCC (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     rimObsDeliverInputToObserver @ 0x1401F38FC (rimObsDeliverInputToObserver.c)
 *     rimObsPushInputMessage @ 0x1401F4338 (rimObsPushInputMessage.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1401F4CF0 (rimObsUpdateInputObserverRegistration.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401FB1F0 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z @ 0x140213544 (-Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z.c)
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x14021BBEC (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 *     InitCreateUserCrit @ 0x1402EB1A4 (InitCreateUserCrit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548
 * Reason: Hex-Rays returned no pseudocode for 0x140036548
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140036548: mov     [rsp+arg_0], rbx
 * 000000014003654D: mov     [rsp+arg_8], rsi
 * 0000000140036552: push    rdi
 * 0000000140036553: sub     rsp, 40h
 * 0000000140036557: movzx   ebx, [rsp+48h+arg_30]
 * 000000014003655F: mov     rsi, r9
 * 0000000140036562: mov     dil, r8b
 * 0000000140036565: test    dl, dl
 * 0000000140036567: jnz     short loc_1400365C1
 * 0000000140036569: test    dil, dil
 * 000000014003656C: jz      short loc_1400365B0
 * 000000014003656E: and     [rsp+48h+var_10], 0
 * 0000000140036574: lea     rax, [rsp+48h+arg_40]
 * 000000014003657C: mov     r9, [rsp+48h+arg_38]
 * 0000000140036584: mov     rcx, rsi
 * 0000000140036587: mov     r8d, [rsp+48h+arg_28]
 * 000000014003658C: movzx   edx, [rsp+48h+arg_20]
 * 0000000140036591: mov     [rsp+48h+var_18], 8
 * 000000014003659A: mov     [rsp+48h+var_20], rax
 * 000000014003659F: mov     word ptr [rsp+48h+var_28], bx
 * 00000001400365A4: call    cs:__imp_WppAutoLogTrace
 * 00000001400365AB: nop     dword ptr [rax+rax+00h]
 * 00000001400365B0: mov     rbx, [rsp+48h+arg_0]
 * 00000001400365B5: mov     rsi, [rsp+48h+arg_8]
 * 00000001400365BA: add     rsp, 40h
 * 00000001400365BE: pop     rdi
 * 00000001400365BF: retn
 * 00000001400365C1: and     [rsp+48h+var_18], 0
 * 00000001400365C7: lea     rdx, [rsp+48h+arg_40]
 * 00000001400365CF: mov     rax, cs:pfnWppTraceMessage
 * 00000001400365D6: mov     r9d, ebx
 * 00000001400365D9: mov     r8, [rsp+48h+arg_38]
 * 00000001400365E1: mov     [rsp+48h+var_20], 8
 * 00000001400365EA: mov     [rsp+48h+var_28], rdx
 * 00000001400365EF: mov     edx, 2Bh ; '+'
 * 00000001400365F4: call    _guard_dispatch_icall
 * 00000001400365F9: jmp     loc_140036569
 */
