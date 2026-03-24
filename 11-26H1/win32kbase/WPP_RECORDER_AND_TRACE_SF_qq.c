/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006F7DC
 * Callers:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1400460CC (RIMQueueAndSignalAsyncWorkItem.c)
 *     RIMOnPnpNotification @ 0x14005B7D0 (RIMOnPnpNotification.c)
 *     EtwTraceUIPIInputError @ 0x14006F600 (EtwTraceUIPIInputError.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14006F90C (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14007122C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x140090160 (RIMGetPnpActionBitsFromGuid.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1400977A8 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimSignalReadComplete @ 0x140098988 (rimSignalReadComplete.c)
 *     rimInputApc @ 0x14009DFA0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 *     HandleDeferredInput @ 0x1400E3510 (HandleDeferredInput.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401288B4 (RIMOnAsyncWorkItemNotification.c)
 *     rimDereferenceDev @ 0x14013217C (rimDereferenceDev.c)
 *     rimObsAddInputObserver @ 0x14020E44C (rimObsAddInputObserver.c)
 *     rimObsDeliverInputToObserver @ 0x14020F380 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006F7DC
 * Reason: Hex-Rays returned no pseudocode for 0x14006F7DC
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014006F7DC: mov     [rsp+arg_0], rbx
 * 000000014006F7E1: mov     [rsp+arg_8], rbp
 * 000000014006F7E6: mov     [rsp+arg_10], rsi
 * 000000014006F7EB: push    rdi
 * 000000014006F7EC: sub     rsp, 50h
 * 000000014006F7F0: movzx   ebx, [rsp+58h+arg_30]
 * 000000014006F7F8: mov     rsi, r9
 * 000000014006F7FB: mov     dil, r8b
 * 000000014006F7FE: mov     ebp, 8
 * 000000014006F803: test    dl, dl
 * 000000014006F805: jnz     short loc_14006F87B
 * 000000014006F807: test    dil, dil
 * 000000014006F80A: jz      short loc_14006F865
 * 000000014006F80C: mov     r9, [rsp+58h+arg_38]
 * 000000014006F814: lea     rax, [rsp+58h+arg_48]
 * 000000014006F81C: mov     r8d, [rsp+58h+arg_28]
 * 000000014006F824: mov     rcx, rsi
 * 000000014006F827: movzx   edx, [rsp+58h+arg_20]
 * 000000014006F82F: mov     [rsp+58h+var_10], 0
 * 000000014006F838: mov     [rsp+58h+var_18], rbp
 * 000000014006F83D: mov     [rsp+58h+var_20], rax
 * 000000014006F842: lea     rax, [rsp+58h+arg_40]
 * 000000014006F84A: mov     [rsp+58h+var_28], rbp
 * 000000014006F84F: mov     [rsp+58h+var_30], rax
 * 000000014006F854: mov     word ptr [rsp+58h+var_38], bx
 * 000000014006F859: call    cs:__imp_WppAutoLogTrace
 * 000000014006F860: nop     dword ptr [rax+rax+00h]
 * 000000014006F865: mov     rbx, [rsp+58h+arg_0]
 * 000000014006F86A: mov     rbp, [rsp+58h+arg_8]
 * 000000014006F86F: mov     rsi, [rsp+58h+arg_10]
 * 000000014006F874: add     rsp, 50h
 * 000000014006F878: pop     rdi
 * 000000014006F879: retn
 * 000000014006F87B: mov     rax, cs:pfnWppTraceMessage
 * 000000014006F882: lea     rdx, [rsp+58h+arg_48]
 * 000000014006F88A: mov     r8, [rsp+58h+arg_38]
 * 000000014006F892: mov     r9d, ebx
 * 000000014006F895: mov     [rsp+58h+var_18], 0
 * 000000014006F89E: mov     [rsp+58h+var_20], rbp
 * 000000014006F8A3: mov     [rsp+58h+var_28], rdx
 * 000000014006F8A8: lea     rdx, [rsp+58h+arg_40]
 * 000000014006F8B0: mov     [rsp+58h+var_30], rbp
 * 000000014006F8B5: mov     [rsp+58h+var_38], rdx
 * 000000014006F8BA: mov     edx, 2Bh ; '+'
 * 000000014006F8BF: call    _guard_dispatch_icall
 * 000000014006F8C4: jmp     loc_14006F807
 */
