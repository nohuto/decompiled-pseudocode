/*
 * XREFs of SendMessageTo @ 0x1400675F0
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x140037B68 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x14003864C (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x140187020 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x140195544 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     SendShellClipChanged @ 0x14019D470 (SendShellClipChanged.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1401F74B4 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x14020D188 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x14020F598 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     ?InjectTouchpadAction@CPTPProcessor@@SAJPEAURawInputManagerDeviceObject@@W4tagTOUCHPAD_ACTION@@@Z @ 0x140211310 (-InjectTouchpadAction@CPTPProcessor@@SAJPEAURawInputManagerDeviceObject@@W4tagTOUCHPAD_ACTION@@@.c)
 *     ?SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x140211630 (-SendShellAction@CPTPProcessor@@AEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 *     ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x1402119D8 (-ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z.c)
 *     _lambda_81b75235315d5765559211312549c638_::_lambda_invoker_cdecl_ @ 0x140215A50 (_lambda_81b75235315d5765559211312549c638_--_lambda_invoker_cdecl_.c)
 *     SendShape @ 0x140216B30 (SendShape.c)
 *     SendSuppressionStateChanged @ 0x140216B60 (SendSuppressionStateChanged.c)
 *     UpdateDelegationTargetForMouseInput @ 0x140216FA0 (UpdateDelegationTargetForMouseInput.c)
 *     ??0VPTPContact@@QEAA@UVPTP_ID@@PEAU_LIST_ENTRY@@@Z @ 0x14021CC00 (--0VPTPContact@@QEAA@UVPTP_ID@@PEAU_LIST_ENTRY@@@Z.c)
 *     ??1VPTPContact@@QEAA@XZ @ 0x14021CC70 (--1VPTPContact@@QEAA@XZ.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140067640 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

/*
 * Hex-Rays decompilation failed for SendMessageTo @ 0x1400675F0
 * Reason: Hex-Rays returned no pseudocode for 0x1400675F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400675F0: mov     [rsp+arg_0], rbx
 * 00000001400675F5: mov     [rsp+arg_8], rsi
 * 00000001400675FA: push    rdi
 * 00000001400675FB: sub     rsp, 20h
 * 00000001400675FF: mov     ebx, r8d
 * 0000000140067602: mov     rdi, rdx
 * 0000000140067605: mov     esi, ecx
 * 0000000140067607: call    cs:__imp_W32GetUserSessionState
 * 000000014006760E: nop     dword ptr [rax+rax+00h]
 * 0000000140067613: mov     r9d, ebx
 * 0000000140067616: mov     r8, rdi
 * 0000000140067619: mov     edx, esi
 * 000000014006761B: mov     rcx, [rax+4018h]
 * 0000000140067622: call    ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z; InputExtensibilityCallout::CoreMsgSendMessage(_MIT_ENDPOINT,void const *,uint)
 * 0000000140067627: mov     rbx, [rsp+28h+arg_0]
 * 000000014006762C: mov     rsi, [rsp+28h+arg_8]
 * 0000000140067631: add     rsp, 20h
 * 0000000140067635: pop     rdi
 * 0000000140067636: retn
 */
