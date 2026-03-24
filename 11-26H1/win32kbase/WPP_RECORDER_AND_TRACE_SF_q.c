/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638
 * Callers:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004BBA0 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004C108 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x14004F53C (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     rimDeviceResetApc @ 0x1400599D0 (rimDeviceResetApc.c)
 *     RIMIDERemoveInjectionDevice @ 0x14005A710 (RIMIDERemoveInjectionDevice.c)
 *     RIMDeliverDeviceResetRequest @ 0x14005B0E0 (RIMDeliverDeviceResetRequest.c)
 *     RIMOnPnpNotification @ 0x14005B7D0 (RIMOnPnpNotification.c)
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x14005DFAC (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14006F90C (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14007122C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     RIMGetPointerInputType @ 0x140074390 (RIMGetPointerInputType.c)
 *     RIMCreateHidDesc @ 0x1400780EC (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x140079BD4 (RIMHidGetCaps.c)
 *     RIMHidGetPreparsedData @ 0x140079FB0 (RIMHidGetPreparsedData.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x14009050C (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     rimOnPnpRemoveCompleteInUserCrit @ 0x140095794 (rimOnPnpRemoveCompleteInUserCrit.c)
 *     RIMReadInput @ 0x1400979E0 (RIMReadInput.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x140098420 (rimHandleAnyPnpRemovePendingDevices.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x1400A3194 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401288B4 (RIMOnAsyncWorkItemNotification.c)
 *     RIMUnregisterForInput @ 0x140129F90 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectDelete @ 0x140130BFC (RawInputManagerObjectDelete.c)
 *     RIMRemoveFromActiveDevices @ 0x140131468 (RIMRemoveFromActiveDevices.c)
 *     RIMAddToActiveDevices @ 0x1401317B0 (RIMAddToActiveDevices.c)
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x14013E738 (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z.c)
 *     ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140149BC0 (-RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     NtUserReportInertia @ 0x14015FBC0 (NtUserReportInertia.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1401685BC (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     rimObsObserveNextInput @ 0x140177C0C (rimObsObserveNextInput.c)
 *     rimObsPopInputMessage @ 0x140177EAC (rimObsPopInputMessage.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x14017B7F0 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140180860 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1401809D0 (rimResetPnpRemovePendingStateBits.c)
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1401893FC (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x14018A228 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x140197E8C (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     RIMAllocateHidDesc @ 0x1401AE930 (RIMAllocateHidDesc.c)
 *     Win32JobObject::_anonymous_namespace_::DeleteW32Job @ 0x1401CEFC0 (Win32JobObject--_anonymous_namespace_--DeleteW32Job.c)
 *     ?UserGlobalAtomTableCallout_Old@@YAPEAXXZ @ 0x1401D80E8 (-UserGlobalAtomTableCallout_Old@@YAPEAXXZ.c)
 *     EtwTraceUIPISystemError @ 0x1401DBAF0 (EtwTraceUIPISystemError.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401E2960 (NtUserCreateSyntheticPointerDevice2.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1401FDC70 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     _lambda_d81c0963a0a1d90e432c4324de57ff4b_::operator() @ 0x1401FE8C8 (_lambda_d81c0963a0a1d90e432c4324de57ff4b_--operator().c)
 *     RIMFindSiblingMouseDeviceWorker @ 0x140204868 (RIMFindSiblingMouseDeviceWorker.c)
 *     RIMMarkSiblingMouseDevice @ 0x1402049FC (RIMMarkSiblingMouseDevice.c)
 *     RIMGetMaxCountFeatureDetails @ 0x140205008 (RIMGetMaxCountFeatureDetails.c)
 *     RIMIDECreateHIDDesc @ 0x14020749C (RIMIDECreateHIDDesc.c)
 *     rimObsDeliverInputToObserver @ 0x14020F380 (rimObsDeliverInputToObserver.c)
 *     rimObsPushInputMessage @ 0x14020FDC0 (rimObsPushInputMessage.c)
 *     rimObsUpdateInputObserverRegistration @ 0x14021076C (rimObsUpdateInputObserverRegistration.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x140213C90 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?RIMDeviceCallback_QueryRemove@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140218730 (-RIMDeviceCallback_QueryRemove@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     InitCreateUserCrit @ 0x1402F1D28 (InitCreateUserCrit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638
 * Reason: Hex-Rays returned no pseudocode for 0x140099638
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140099638: mov     [rsp+arg_0], rbx
 * 000000014009963D: mov     [rsp+arg_8], rsi
 * 0000000140099642: push    rdi
 * 0000000140099643: sub     rsp, 40h
 * 0000000140099647: movzx   ebx, [rsp+48h+arg_30]
 * 000000014009964F: mov     rsi, r9
 * 0000000140099652: mov     dil, r8b
 * 0000000140099655: test    dl, dl
 * 0000000140099657: jnz     short loc_1400996B4
 * 0000000140099659: test    dil, dil
 * 000000014009965C: jz      short loc_1400996A3
 * 000000014009965E: mov     r9, [rsp+48h+arg_38]
 * 0000000140099666: lea     rax, [rsp+48h+arg_40]
 * 000000014009966E: mov     r8d, [rsp+48h+arg_28]
 * 0000000140099673: mov     rcx, rsi
 * 0000000140099676: movzx   edx, [rsp+48h+arg_20]
 * 000000014009967B: mov     [rsp+48h+var_10], 0
 * 0000000140099684: mov     [rsp+48h+var_18], 8
 * 000000014009968D: mov     [rsp+48h+var_20], rax
 * 0000000140099692: mov     word ptr [rsp+48h+var_28], bx
 * 0000000140099697: call    cs:__imp_WppAutoLogTrace
 * 000000014009969E: nop     dword ptr [rax+rax+00h]
 * 00000001400996A3: mov     rbx, [rsp+48h+arg_0]
 * 00000001400996A8: mov     rsi, [rsp+48h+arg_8]
 * 00000001400996AD: add     rsp, 40h
 * 00000001400996B1: pop     rdi
 * 00000001400996B2: retn
 * 00000001400996B4: mov     rax, cs:pfnWppTraceMessage
 * 00000001400996BB: lea     rdx, [rsp+48h+arg_40]
 * 00000001400996C3: mov     r8, [rsp+48h+arg_38]
 * 00000001400996CB: mov     r9d, ebx
 * 00000001400996CE: mov     [rsp+48h+var_18], 0
 * 00000001400996D7: mov     [rsp+48h+var_20], 8
 * 00000001400996E0: mov     [rsp+48h+var_28], rdx
 * 00000001400996E5: mov     edx, 2Bh ; '+'
 * 00000001400996EA: call    _guard_dispatch_icall
 * 00000001400996EF: jmp     loc_140099659
 */
