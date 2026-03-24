/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_LL @ 0x14019F190
 * Callers:
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1400D4560 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1401876C8 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x140187960 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x14020112C (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x140201A00 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x140201C90 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1402095AC (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x14020CA8C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_LL @ 0x14019F190
 * Reason: Hex-Rays returned no pseudocode for 0x14019F190
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014019F190: mov     r11, rsp
 * 000000014019F193: mov     [r11+8], rbx
 * 000000014019F197: mov     [r11+10h], rbp
 * 000000014019F19B: mov     [r11+18h], rsi
 * 000000014019F19F: push    rdi
 * 000000014019F1A0: sub     rsp, 50h
 * 000000014019F1A4: movzx   ebx, [rsp+58h+arg_30]
 * 000000014019F1AC: mov     rsi, r9
 * 000000014019F1AF: mov     dil, r8b
 * 000000014019F1B2: mov     ebp, 4
 * 000000014019F1B7: test    dl, dl
 * 000000014019F1B9: jz      short loc_14019F1F1
 * 000000014019F1BB: and     qword ptr [r11-18h], 0
 * 000000014019F1C0: lea     rdx, [r11+50h]
 * 000000014019F1C4: mov     rax, cs:pfnWppTraceMessage
 * 000000014019F1CB: lea     r8, WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids
 * 000000014019F1D2: mov     [r11-20h], rbp
 * 000000014019F1D6: mov     r9d, ebx
 * 000000014019F1D9: mov     [r11-28h], rdx
 * 000000014019F1DD: lea     rdx, [r11+48h]
 * 000000014019F1E1: mov     [r11-30h], rbp
 * 000000014019F1E5: mov     [r11-38h], rdx
 * 000000014019F1E9: lea     edx, [rbp+27h]
 * 000000014019F1EC: call    _guard_dispatch_icall
 * 000000014019F1F1: test    dil, dil
 * 000000014019F1F4: jz      short loc_14019F246
 * 000000014019F1F6: and     [rsp+58h+var_10], 0
 * 000000014019F1FC: lea     rax, [rsp+58h+arg_48]
 * 000000014019F204: movzx   edx, [rsp+58h+arg_20]
 * 000000014019F20C: lea     r9, WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids
 * 000000014019F213: mov     [rsp+58h+var_18], rbp
 * 000000014019F218: mov     r8d, ebp
 * 000000014019F21B: mov     [rsp+58h+var_20], rax
 * 000000014019F220: mov     rcx, rsi
 * 000000014019F223: lea     rax, [rsp+58h+arg_40]
 * 000000014019F22B: mov     [rsp+58h+var_28], rbp
 * 000000014019F230: mov     [rsp+58h+var_30], rax
 * 000000014019F235: mov     [rsp+58h+var_38], bx
 * 000000014019F23A: call    cs:__imp_WppAutoLogTrace
 * 000000014019F241: nop     dword ptr [rax+rax+00h]
 * 000000014019F246: mov     rbx, [rsp+58h+arg_0]
 * 000000014019F24B: mov     rbp, [rsp+58h+arg_8]
 * 000000014019F250: mov     rsi, [rsp+58h+arg_10]
 * 000000014019F255: add     rsp, 50h
 * 000000014019F259: pop     rdi
 * 000000014019F25A: retn
 */
