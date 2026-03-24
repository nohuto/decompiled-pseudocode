/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C
 * Callers:
 *     rimSignalReadComplete @ 0x140035980 (rimSignalReadComplete.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x140036768 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMOnPnpNotification @ 0x140039E20 (RIMOnPnpNotification.c)
 *     EtwTraceUIPIInputError @ 0x140060E40 (EtwTraceUIPIInputError.c)
 *     HandleDeferredInput @ 0x1400C1830 (HandleDeferredInput.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x140113A94 (RIMGetPnpActionBitsFromGuid.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 *     rimDereferenceDev @ 0x1401382E4 (rimDereferenceDev.c)
 *     rimInputApc @ 0x140182D20 (rimInputApc.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14018DE2C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018E544 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401998B4 (RIMOnAsyncWorkItemNotification.c)
 *     RIMQueueAndSignalAsyncWorkItem @ 0x140199F14 (RIMQueueAndSignalAsyncWorkItem.c)
 *     Win32JobObject::_anonymous_namespace_::AllocateW32Job @ 0x1401ACB44 (Win32JobObject--_anonymous_namespace_--AllocateW32Job.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1401BF260 (NtUserMapPointsByVisualIdentifier.c)
 *     rimObsAddInputObserver @ 0x1401F296C (rimObsAddInputObserver.c)
 *     rimObsDeliverInputToObserver @ 0x1401F38FC (rimObsDeliverInputToObserver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C
 * Reason: Hex-Rays returned no pseudocode for 0x14006101C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014006101C: mov     [rsp+arg_0], rbx
 * 0000000140061021: mov     [rsp+arg_8], rbp
 * 0000000140061026: mov     [rsp+arg_10], rsi
 * 000000014006102B: push    rdi
 * 000000014006102C: sub     rsp, 50h
 * 0000000140061030: movzx   ebx, [rsp+58h+arg_30]
 * 0000000140061038: mov     rsi, r9
 * 000000014006103B: mov     dil, r8b
 * 000000014006103E: mov     ebp, 8
 * 0000000140061043: test    dl, dl
 * 0000000140061045: jnz     short loc_1400610B8
 * 0000000140061047: test    dil, dil
 * 000000014006104A: jz      short loc_1400610A2
 * 000000014006104C: and     [rsp+58h+var_10], 0
 * 0000000140061052: lea     rax, [rsp+58h+arg_48]
 * 000000014006105A: mov     r9, [rsp+58h+arg_38]
 * 0000000140061062: mov     rcx, rsi
 * 0000000140061065: mov     r8d, [rsp+58h+arg_28]
 * 000000014006106D: movzx   edx, [rsp+58h+arg_20]
 * 0000000140061075: mov     [rsp+58h+var_18], rbp
 * 000000014006107A: mov     [rsp+58h+var_20], rax
 * 000000014006107F: lea     rax, [rsp+58h+arg_40]
 * 0000000140061087: mov     [rsp+58h+var_28], rbp
 * 000000014006108C: mov     [rsp+58h+var_30], rax
 * 0000000140061091: mov     word ptr [rsp+58h+var_38], bx
 * 0000000140061096: call    cs:__imp_WppAutoLogTrace
 * 000000014006109D: nop     dword ptr [rax+rax+00h]
 * 00000001400610A2: mov     rbx, [rsp+58h+arg_0]
 * 00000001400610A7: mov     rbp, [rsp+58h+arg_8]
 * 00000001400610AC: mov     rsi, [rsp+58h+arg_10]
 * 00000001400610B1: add     rsp, 50h
 * 00000001400610B5: pop     rdi
 * 00000001400610B6: retn
 * 00000001400610B8: and     [rsp+58h+var_18], 0
 * 00000001400610BE: lea     rdx, [rsp+58h+arg_48]
 * 00000001400610C6: mov     rax, cs:pfnWppTraceMessage
 * 00000001400610CD: mov     r9d, ebx
 * 00000001400610D0: mov     r8, [rsp+58h+arg_38]
 * 00000001400610D8: mov     [rsp+58h+var_20], rbp
 * 00000001400610DD: mov     [rsp+58h+var_28], rdx
 * 00000001400610E2: lea     rdx, [rsp+58h+arg_40]
 * 00000001400610EA: mov     [rsp+58h+var_30], rbp
 * 00000001400610EF: mov     [rsp+58h+var_38], rdx
 * 00000001400610F4: mov     edx, 2Bh ; '+'
 * 00000001400610F9: call    _guard_dispatch_icall
 * 00000001400610FE: jmp     loc_140061047
 */
