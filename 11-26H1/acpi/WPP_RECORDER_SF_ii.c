/*
 * XREFs of WPP_RECORDER_SF_ii @ 0x14004DF60
 * Callers:
 *     IrqArbGetNextAllocationRange @ 0x1400CFE80 (IrqArbGetNextAllocationRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ii @ 0x14004DF60
 * Reason: Hex-Rays returned no pseudocode for 0x14004DF60
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014004DF60: mov     r11, rsp
 * 000000014004DF63: mov     [r11+8], rbx
 * 000000014004DF67: mov     [r11+10h], rsi
 * 000000014004DF6B: push    rdi
 * 000000014004DF6C: sub     rsp, 50h
 * 000000014004DF70: mov     rbx, rcx
 * 000000014004DF73: mov     esi, 0Ch
 * 000000014004DF78: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000014004DF7F: lea     edi, [rsi-4]
 * 000000014004DF82: test    dword ptr [rcx+2Ch], 80000h
 * 000000014004DF89: jz      short loc_14004DFCE
 * 000000014004DF8B: cmp     byte ptr [rcx+29h], 4
 * 000000014004DF8F: jb      short loc_14004DFCE
 * 000000014004DF91: mov     rax, cs:pfnWppTraceMessage
 * 000000014004DF98: lea     rdx, [r11+38h]
 * 000000014004DF9C: mov     rcx, [rcx+18h]
 * 000000014004DFA0: lea     r8, WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids
 * 000000014004DFA7: mov     qword ptr [r11-18h], 0
 * 000000014004DFAF: mov     r9d, esi
 * 000000014004DFB2: mov     [r11-20h], rdi
 * 000000014004DFB6: mov     [r11-28h], rdx
 * 000000014004DFBA: lea     rdx, [r11+30h]
 * 000000014004DFBE: mov     [r11-30h], rdi
 * 000000014004DFC2: mov     [r11-38h], rdx
 * 000000014004DFC6: lea     edx, [rsi+1Fh]
 * 000000014004DFC9: call    _guard_dispatch_icall
 * 000000014004DFCE: mov     [rsp+58h+var_10], 0
 * 000000014004DFD7: lea     rax, [rsp+58h+arg_30]
 * 000000014004DFDF: mov     [rsp+58h+var_18], rdi
 * 000000014004DFE4: lea     r9, WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids
 * 000000014004DFEB: mov     [rsp+58h+var_20], rax
 * 000000014004DFF0: mov     edx, 4
 * 000000014004DFF5: lea     rax, [rsp+58h+arg_28]
 * 000000014004DFFD: mov     [rsp+58h+var_28], rdi
 * 000000014004E002: mov     [rsp+58h+var_30], rax
 * 000000014004E007: mov     rcx, rbx
 * 000000014004E00A: mov     [rsp+58h+var_38], si
 * 000000014004E00F: lea     r8d, [rdx+10h]
 * 000000014004E013: call    cs:__imp_WppAutoLogTrace
 * 000000014004E01A: nop     dword ptr [rax+rax+00h]
 * 000000014004E01F: mov     rbx, [rsp+58h+arg_0]
 * 000000014004E024: mov     rsi, [rsp+58h+arg_8]
 * 000000014004E029: add     rsp, 50h
 * 000000014004E02D: pop     rdi
 * 000000014004E02E: retn
 */
