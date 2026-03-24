/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_i @ 0x1400F12A4
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6CD8 (rimDoProcessAnyPointerDeviceInput.c)
 *     RIMIDEValidateMouseInputStruct @ 0x140130A50 (RIMIDEValidateMouseInputStruct.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x14019D7D4 (RIMIDEValidateKeybdInputStruct.c)
 *     RIMGetLastInvertedPenTime @ 0x1401DB2F0 (RIMGetLastInvertedPenTime.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_i @ 0x1400F12A4
 * Reason: Hex-Rays returned no pseudocode for 0x1400F12A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400F12A4: mov     [rsp+arg_0], rbx
 * 00000001400F12A9: mov     [rsp+arg_8], rsi
 * 00000001400F12AE: push    rdi
 * 00000001400F12AF: sub     rsp, 40h
 * 00000001400F12B3: movzx   ebx, [rsp+48h+arg_30]
 * 00000001400F12BB: mov     rsi, r9
 * 00000001400F12BE: mov     dil, r8b
 * 00000001400F12C1: test    dl, dl
 * 00000001400F12C3: jnz     short loc_1400F131E
 * 00000001400F12C5: test    dil, dil
 * 00000001400F12C8: jz      short loc_1400F130D
 * 00000001400F12CA: and     [rsp+48h+var_10], 0
 * 00000001400F12D0: lea     rax, [rsp+48h+arg_40]
 * 00000001400F12D8: mov     r9, [rsp+48h+arg_38]
 * 00000001400F12E0: mov     r8d, 1
 * 00000001400F12E6: movzx   edx, [rsp+48h+arg_20]
 * 00000001400F12EB: mov     rcx, rsi
 * 00000001400F12EE: mov     [rsp+48h+var_18], 8
 * 00000001400F12F7: mov     [rsp+48h+var_20], rax
 * 00000001400F12FC: mov     word ptr [rsp+48h+var_28], bx
 * 00000001400F1301: call    cs:__imp_WppAutoLogTrace
 * 00000001400F1308: nop     dword ptr [rax+rax+00h]
 * 00000001400F130D: mov     rbx, [rsp+48h+arg_0]
 * 00000001400F1312: mov     rsi, [rsp+48h+arg_8]
 * 00000001400F1317: add     rsp, 40h
 * 00000001400F131B: pop     rdi
 * 00000001400F131C: retn
 * 00000001400F131E: and     [rsp+48h+var_18], 0
 * 00000001400F1324: lea     rdx, [rsp+48h+arg_40]
 * 00000001400F132C: mov     rax, cs:pfnWppTraceMessage
 * 00000001400F1333: mov     r9d, ebx
 * 00000001400F1336: mov     r8, [rsp+48h+arg_38]
 * 00000001400F133E: mov     [rsp+48h+var_20], 8
 * 00000001400F1347: mov     [rsp+48h+var_28], rdx
 * 00000001400F134C: mov     edx, 2Bh ; '+'
 * 00000001400F1351: call    _guard_dispatch_icall
 * 00000001400F1356: jmp     loc_1400F12C5
 */
