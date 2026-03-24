/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_i @ 0x140136684
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x140047BC8 (rimDoProcessAnyPointerDeviceInput.c)
 *     RIMIDEValidateMouseInputStruct @ 0x140155390 (RIMIDEValidateMouseInputStruct.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1401BBC44 (RIMIDEValidateKeybdInputStruct.c)
 *     RIMGetLastInvertedPenTime @ 0x140201990 (RIMGetLastInvertedPenTime.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_i @ 0x140136684
 * Reason: Hex-Rays returned no pseudocode for 0x140136684
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140136684: mov     [rsp+arg_0], rbx
 * 0000000140136689: mov     [rsp+arg_8], rsi
 * 000000014013668E: push    rdi
 * 000000014013668F: sub     rsp, 40h
 * 0000000140136693: movzx   ebx, [rsp+48h+arg_30]
 * 000000014013669B: mov     rsi, r9
 * 000000014013669E: mov     dil, r8b
 * 00000001401366A1: test    dl, dl
 * 00000001401366A3: jnz     short loc_140136701
 * 00000001401366A5: test    dil, dil
 * 00000001401366A8: jz      short loc_1401366F0
 * 00000001401366AA: mov     r9, [rsp+48h+arg_38]
 * 00000001401366B2: lea     rax, [rsp+48h+arg_40]
 * 00000001401366BA: movzx   edx, [rsp+48h+arg_20]
 * 00000001401366BF: mov     r8d, 1
 * 00000001401366C5: mov     [rsp+48h+var_10], 0
 * 00000001401366CE: mov     rcx, rsi
 * 00000001401366D1: mov     [rsp+48h+var_18], 8
 * 00000001401366DA: mov     [rsp+48h+var_20], rax
 * 00000001401366DF: mov     word ptr [rsp+48h+var_28], bx
 * 00000001401366E4: call    cs:__imp_WppAutoLogTrace
 * 00000001401366EB: nop     dword ptr [rax+rax+00h]
 * 00000001401366F0: mov     rbx, [rsp+48h+arg_0]
 * 00000001401366F5: mov     rsi, [rsp+48h+arg_8]
 * 00000001401366FA: add     rsp, 40h
 * 00000001401366FE: pop     rdi
 * 00000001401366FF: retn
 * 0000000140136701: mov     rax, cs:pfnWppTraceMessage
 * 0000000140136708: lea     rdx, [rsp+48h+arg_40]
 * 0000000140136710: mov     r8, [rsp+48h+arg_38]
 * 0000000140136718: mov     r9d, ebx
 * 000000014013671B: mov     [rsp+48h+var_18], 0
 * 0000000140136724: mov     [rsp+48h+var_20], 8
 * 000000014013672D: mov     [rsp+48h+var_28], rdx
 * 0000000140136732: mov     edx, 2Bh ; '+'
 * 0000000140136737: call    _guard_dispatch_icall
 * 000000014013673C: jmp     loc_1401366A5
 */
