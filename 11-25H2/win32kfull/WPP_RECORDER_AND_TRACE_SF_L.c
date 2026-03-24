/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_L @ 0x14028E15C
 * Callers:
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x140138088 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_L @ 0x14028E15C
 * Reason: Hex-Rays returned no pseudocode for 0x14028E15C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014028E15C: mov     r11, rsp
 * 000000014028E15F: mov     [r11+8], rbx
 * 000000014028E163: mov     [r11+10h], rbp
 * 000000014028E167: push    rdi
 * 000000014028E168: sub     rsp, 40h
 * 000000014028E16C: mov     rdi, r9
 * 000000014028E16F: mov     bl, r8b
 * 000000014028E172: mov     ebp, 1Bh
 * 000000014028E177: test    dl, dl
 * 000000014028E179: jz      short loc_14028E1A9
 * 000000014028E17B: and     qword ptr [r11-18h], 0
 * 000000014028E180: lea     rdx, [r11+48h]
 * 000000014028E184: mov     rax, cs:pfnWppTraceMessage
 * 000000014028E18B: lea     r8, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028E192: mov     qword ptr [r11-20h], 4
 * 000000014028E19A: mov     r9d, ebp
 * 000000014028E19D: mov     [r11-28h], rdx
 * 000000014028E1A1: lea     edx, [rbp+10h]
 * 000000014028E1A4: call    _guard_dispatch_icall
 * 000000014028E1A9: test    bl, bl
 * 000000014028E1AB: jz      short loc_14028E1ED
 * 000000014028E1AD: and     [rsp+48h+var_10], 0
 * 000000014028E1B3: lea     rax, [rsp+48h+arg_40]
 * 000000014028E1BB: mov     edx, 4
 * 000000014028E1C0: mov     [rsp+48h+var_18], 4
 * 000000014028E1C9: mov     [rsp+48h+var_20], rax
 * 000000014028E1CE: lea     r9, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028E1D5: mov     rcx, rdi
 * 000000014028E1D8: mov     [rsp+48h+var_28], bp
 * 000000014028E1DD: lea     r8d, [rdx+6]
 * 000000014028E1E1: call    cs:__imp_WppAutoLogTrace
 * 000000014028E1E8: nop     dword ptr [rax+rax+00h]
 * 000000014028E1ED: mov     rbx, [rsp+48h+arg_0]
 * 000000014028E1F2: mov     rbp, [rsp+48h+arg_8]
 * 000000014028E1F7: add     rsp, 40h
 * 000000014028E1FB: pop     rdi
 * 000000014028E1FC: retn
 */
