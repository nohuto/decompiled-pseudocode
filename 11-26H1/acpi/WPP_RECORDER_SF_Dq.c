/*
 * XREFs of WPP_RECORDER_SF_Dq @ 0x140052D04
 * Callers:
 *     IrqArbAddAllocation @ 0x1400BD7C0 (IrqArbAddAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1400BE070 (IrqArbBacktrackAllocation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dq @ 0x140052D04
 * Reason: Hex-Rays returned no pseudocode for 0x140052D04
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140052D04: mov     r11, rsp
 * 0000000140052D07: mov     [r11+8], rbx
 * 0000000140052D0B: push    rdi
 * 0000000140052D0C: sub     rsp, 50h
 * 0000000140052D10: mov     rdi, rcx
 * 0000000140052D13: movzx   ebx, r9w
 * 0000000140052D17: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140052D1E: test    dword ptr [rcx+2Ch], 80000h
 * 0000000140052D25: jz      short loc_140052D74
 * 0000000140052D27: cmp     byte ptr [rcx+29h], 4
 * 0000000140052D2B: jb      short loc_140052D74
 * 0000000140052D2D: mov     rax, cs:pfnWppTraceMessage
 * 0000000140052D34: lea     rdx, [r11+38h]
 * 0000000140052D38: mov     rcx, [rcx+18h]
 * 0000000140052D3C: lea     r8, WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids
 * 0000000140052D43: mov     qword ptr [r11-18h], 0
 * 0000000140052D4B: mov     r9d, ebx
 * 0000000140052D4E: mov     qword ptr [r11-20h], 8
 * 0000000140052D56: mov     [r11-28h], rdx
 * 0000000140052D5A: lea     rdx, [r11+30h]
 * 0000000140052D5E: mov     qword ptr [r11-30h], 4
 * 0000000140052D66: mov     [r11-38h], rdx
 * 0000000140052D6A: mov     edx, 2Bh ; '+'
 * 0000000140052D6F: call    _guard_dispatch_icall
 * 0000000140052D74: mov     [rsp+58h+var_10], 0
 * 0000000140052D7D: lea     rax, [rsp+58h+arg_30]
 * 0000000140052D85: mov     [rsp+58h+var_18], 8
 * 0000000140052D8E: lea     r9, WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids
 * 0000000140052D95: mov     [rsp+58h+var_20], rax
 * 0000000140052D9A: mov     edx, 4
 * 0000000140052D9F: lea     rax, [rsp+58h+arg_28]
 * 0000000140052DA7: mov     [rsp+58h+var_28], 4
 * 0000000140052DB0: mov     [rsp+58h+var_30], rax
 * 0000000140052DB5: mov     rcx, rdi
 * 0000000140052DB8: mov     [rsp+58h+var_38], bx
 * 0000000140052DBD: lea     r8d, [rdx+10h]
 * 0000000140052DC1: call    cs:__imp_WppAutoLogTrace
 * 0000000140052DC8: nop     dword ptr [rax+rax+00h]
 * 0000000140052DCD: mov     rbx, [rsp+58h+arg_0]
 * 0000000140052DD2: add     rsp, 50h
 * 0000000140052DD6: pop     rdi
 * 0000000140052DD7: retn
 */
