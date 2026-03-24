/*
 * XREFs of WPP_RECORDER_SF_i @ 0x140045AE8
 * Callers:
 *     Interrupter_UpdateERDP @ 0x1400077D0 (Interrupter_UpdateERDP.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1400494D0 (Interrupter_DeInitializeAfterOffload.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1400765BC (Controller_PopulateHardwareVerifierFlags.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x140045AE8
 * Reason: Hex-Rays returned no pseudocode for 0x140045AE8
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140045AE8: mov     rax, rsp
 * 0000000140045AEB: mov     [rax+8], rbx
 * 0000000140045AEF: mov     [rax+10h], rbp
 * 0000000140045AF3: mov     [rax+18h], rsi
 * 0000000140045AF7: mov     [rax+20h], rdi
 * 0000000140045AFB: push    r14
 * 0000000140045AFD: sub     rsp, 40h
 * 0000000140045B01: mov     ebp, r8d
 * 0000000140045B04: mov     r14, rcx
 * 0000000140045B07: mov     ebx, r8d
 * 0000000140045B0A: shr     rbx, 10h
 * 0000000140045B0E: movzx   esi, r9w
 * 0000000140045B12: lea     r11d, [rbp-1]
 * 0000000140045B16: movzx   edi, dl
 * 0000000140045B19: mov     r10d, r11d
 * 0000000140045B1C: and     r11d, 1Fh
 * 0000000140045B20: shr     r10, 5
 * 0000000140045B24: lea     rax, [rbx+rbx*4]
 * 0000000140045B28: and     r10d, 7FFh
 * 0000000140045B2F: lea     rax, [r10+rax*4]
 * 0000000140045B33: mov     r10, cs:WPP_GLOBAL_Control
 * 0000000140045B3A: mov     eax, [r10+rax*4+2Ch]
 * 0000000140045B3F: bt      eax, r11d
 * 0000000140045B43: jnb     short loc_140045B8D
 * 0000000140045B45: lea     rcx, [rbx+rbx*4]
 * 0000000140045B49: add     rcx, rcx
 * 0000000140045B4C: cmp     [r10+rcx*8+29h], dil
 * 0000000140045B51: jb      short loc_140045B8D
 * 0000000140045B53: mov     rax, cs:pfnWppTraceMessage
 * 0000000140045B5A: lea     rdx, [rsp+48h+arg_28]
 * 0000000140045B5F: mov     r8, [rsp+48h+arg_20]
 * 0000000140045B64: mov     r9d, esi
 * 0000000140045B67: mov     rcx, [r10+rcx*8+18h]
 * 0000000140045B6C: mov     [rsp+48h+var_18], 0
 * 0000000140045B75: mov     [rsp+48h+var_20], 8
 * 0000000140045B7E: mov     [rsp+48h+var_28], rdx
 * 0000000140045B83: mov     edx, 2Bh ; '+'
 * 0000000140045B88: call    _guard_dispatch_icall
 * 0000000140045B8D: mov     r9, [rsp+48h+arg_20]
 * 0000000140045B92: lea     rax, [rsp+48h+arg_28]
 * 0000000140045B97: mov     [rsp+48h+var_10], 0
 * 0000000140045BA0: mov     r8d, ebp
 * 0000000140045BA3: mov     [rsp+48h+var_18], 8
 * 0000000140045BAC: mov     edx, edi
 * 0000000140045BAE: mov     [rsp+48h+var_20], rax
 * 0000000140045BB3: mov     rcx, r14
 * 0000000140045BB6: mov     word ptr [rsp+48h+var_28], si
 * 0000000140045BBB: call    cs:__imp_WppAutoLogTrace
 * 0000000140045BC2: nop     dword ptr [rax+rax+00h]
 * 0000000140045BC7: mov     rbx, [rsp+48h+arg_0]
 * 0000000140045BCC: mov     rbp, [rsp+48h+arg_8]
 * 0000000140045BD1: mov     rsi, [rsp+48h+arg_10]
 * 0000000140045BD6: mov     rdi, [rsp+48h+arg_18]
 * 0000000140045BDB: add     rsp, 40h
 * 0000000140045BDF: pop     r14
 * 0000000140045BE1: retn
 */
