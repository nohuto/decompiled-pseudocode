/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ii @ 0x1400087FC
 * Callers:
 *     USBType1RenderBytePosition @ 0x140001010 (USBType1RenderBytePosition.c)
 *     USBCaptureBytePosition @ 0x140001530 (USBCaptureBytePosition.c)
 *     PropertyGetAudioPositionEx @ 0x14003A710 (PropertyGetAudioPositionEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ii @ 0x1400087FC
 * Reason: Hex-Rays returned no pseudocode for 0x1400087FC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400087FC: mov     r11, rsp
 * 00000001400087FF: mov     [r11+8], rbx
 * 0000000140008803: mov     [r11+10h], rbp
 * 0000000140008807: mov     [r11+18h], rsi
 * 000000014000880B: push    rdi
 * 000000014000880C: sub     rsp, 50h
 * 0000000140008810: movzx   ebx, [rsp+58h+arg_30]
 * 0000000140008818: mov     rsi, r9
 * 000000014000881B: mov     dil, r8b
 * 000000014000881E: mov     ebp, 8
 * 0000000140008823: test    dl, dl
 * 0000000140008825: jz      short loc_140008861
 * 0000000140008827: mov     rax, cs:pfnWppTraceMessage
 * 000000014000882E: lea     rdx, [r11+50h]
 * 0000000140008832: mov     r8, [rsp+58h+arg_38]
 * 000000014000883A: mov     r9d, ebx
 * 000000014000883D: mov     qword ptr [r11-18h], 0
 * 0000000140008845: mov     [r11-20h], rbp
 * 0000000140008849: mov     [r11-28h], rdx
 * 000000014000884D: lea     rdx, [r11+48h]
 * 0000000140008851: mov     [r11-30h], rbp
 * 0000000140008855: mov     [r11-38h], rdx
 * 0000000140008859: lea     edx, [rbp+23h]
 * 000000014000885C: call    _guard_dispatch_icall
 * 0000000140008861: test    dil, dil
 * 0000000140008864: jz      short loc_1400088B5
 * 0000000140008866: mov     r9, [rsp+58h+arg_38]
 * 000000014000886E: lea     rax, [rsp+58h+arg_48]
 * 0000000140008876: mov     [rsp+58h+var_10], 0
 * 000000014000887F: xor     edx, edx
 * 0000000140008881: mov     [rsp+58h+var_18], rbp
 * 0000000140008886: mov     rcx, rsi
 * 0000000140008889: mov     [rsp+58h+var_20], rax
 * 000000014000888E: lea     rax, [rsp+58h+arg_40]
 * 0000000140008896: mov     [rsp+58h+var_28], rbp
 * 000000014000889B: mov     [rsp+58h+var_30], rax
 * 00000001400088A0: lea     r8d, [rdx+3]
 * 00000001400088A4: mov     [rsp+58h+var_38], bx
 * 00000001400088A9: call    cs:__imp_WppAutoLogTrace
 * 00000001400088B0: nop     dword ptr [rax+rax+00h]
 * 00000001400088B5: mov     rbx, [rsp+58h+arg_0]
 * 00000001400088BA: mov     rbp, [rsp+58h+arg_8]
 * 00000001400088BF: mov     rsi, [rsp+58h+arg_10]
 * 00000001400088C4: add     rsp, 50h
 * 00000001400088C8: pop     rdi
 * 00000001400088C9: retn
 */
