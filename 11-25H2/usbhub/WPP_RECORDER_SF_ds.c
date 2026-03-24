/*
 * XREFs of WPP_RECORDER_SF_ds @ 0x140056798
 * Callers:
 *     UsbhExceptionTrace @ 0x140035D58 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ds @ 0x140056798
 * Reason: Hex-Rays returned no pseudocode for 0x140056798
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140056798: mov     rax, rsp
 * 000000014005679B: mov     [rax+8], rbx
 * 000000014005679F: mov     [rax+10h], rsi
 * 00000001400567A3: mov     [rax+18h], rdi
 * 00000001400567A7: mov     [rax+20h], r12
 * 00000001400567AB: push    r13
 * 00000001400567AD: sub     rsp, 50h
 * 00000001400567B1: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001400567B8: lea     r12, aNull; "NULL"
 * 00000001400567BF: mov     rdi, [rsp+58h+arg_30]
 * 00000001400567C7: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001400567CB: mov     rsi, rcx
 * 00000001400567CE: mov     edx, [rax+2Ch]
 * 00000001400567D1: lea     r13d, [rbx+0Dh]
 * 00000001400567D5: test    dl, 1
 * 00000001400567D8: jz      short loc_14005684B
 * 00000001400567DA: test    rdi, rdi
 * 00000001400567DD: jz      short loc_1400567F0
 * 00000001400567DF: mov     rdx, rbx
 * 00000001400567E2: inc     rdx
 * 00000001400567E5: cmp     byte ptr [rdi+rdx], 0
 * 00000001400567E9: jnz     short loc_1400567E2
 * 00000001400567EB: inc     rdx
 * 00000001400567EE: jmp     short loc_1400567F5
 * 00000001400567F0: mov     edx, 5
 * 00000001400567F5: mov     rax, cs:pfnWppTraceMessage
 * 00000001400567FC: lea     r8, WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids
 * 0000000140056803: test    rdi, rdi
 * 0000000140056806: mov     rcx, rdi
 * 0000000140056809: mov     r9d, r13d
 * 000000014005680C: cmovz   rcx, r12
 * 0000000140056810: and     [rsp+58h+var_18], 0
 * 0000000140056816: mov     [rsp+58h+var_20], rdx
 * 000000014005681B: mov     edx, 2Bh ; '+'
 * 0000000140056820: mov     [rsp+58h+var_28], rcx
 * 0000000140056825: lea     rcx, [rsp+58h+arg_28]
 * 000000014005682D: mov     [rsp+58h+var_30], 4
 * 0000000140056836: mov     [rsp+58h+var_38], rcx
 * 000000014005683B: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140056842: mov     rcx, [rcx+18h]
 * 0000000140056846: call    _guard_dispatch_icall
 * 000000014005684B: test    rdi, rdi
 * 000000014005684E: jz      short loc_14005685E
 * 0000000140056850: inc     rbx
 * 0000000140056853: cmp     byte ptr [rdi+rbx], 0
 * 0000000140056857: jnz     short loc_140056850
 * 0000000140056859: inc     rbx
 * 000000014005685C: jmp     short loc_140056863
 * 000000014005685E: mov     ebx, 5
 * 0000000140056863: test    rdi, rdi
 * 0000000140056866: lea     rax, [rsp+58h+arg_28]
 * 000000014005686E: lea     r9, WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids
 * 0000000140056875: mov     rcx, rsi
 * 0000000140056878: cmovz   rdi, r12
 * 000000014005687C: and     [rsp+58h+var_10], 0
 * 0000000140056882: mov     [rsp+58h+var_18], rbx
 * 0000000140056887: xor     edx, edx
 * 0000000140056889: mov     [rsp+58h+var_20], rdi
 * 000000014005688E: mov     [rsp+58h+var_28], 4
 * 0000000140056897: mov     [rsp+58h+var_30], rax
 * 000000014005689C: lea     r8d, [rdx+1]
 * 00000001400568A0: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001400568A6: call    cs:__imp_WppAutoLogTrace
 * 00000001400568AD: nop     dword ptr [rax+rax+00h]
 * 00000001400568B2: mov     rbx, [rsp+58h+arg_0]
 * 00000001400568B7: mov     rsi, [rsp+58h+arg_8]
 * 00000001400568BC: mov     rdi, [rsp+58h+arg_10]
 * 00000001400568C1: mov     r12, [rsp+58h+arg_18]
 * 00000001400568C6: add     rsp, 50h
 * 00000001400568CA: pop     r13
 * 00000001400568CC: retn
 */
