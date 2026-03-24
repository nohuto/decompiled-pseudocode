/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Ld @ 0x14022812C
 * Callers:
 *     ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x1402547D4 (-CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_Ld @ 0x14022812C
 * Reason: Hex-Rays returned no pseudocode for 0x14022812C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014022812C: mov     r11, rsp
 * 000000014022812F: mov     [r11+8], rbx
 * 0000000140228133: mov     [r11+10h], rbp
 * 0000000140228137: mov     [r11+18h], rsi
 * 000000014022813B: push    rdi
 * 000000014022813C: sub     rsp, 50h
 * 0000000140228140: mov     ebp, 0Fh
 * 0000000140228145: mov     rdi, r9
 * 0000000140228148: mov     bl, r8b
 * 000000014022814B: lea     esi, [rbp-0Bh]
 * 000000014022814E: test    dl, dl
 * 0000000140228150: jz      short loc_140228188
 * 0000000140228152: and     qword ptr [r11-18h], 0
 * 0000000140228157: lea     rdx, [r11+50h]
 * 000000014022815B: mov     rax, cs:pfnWppTraceMessage
 * 0000000140228162: lea     r8, WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids
 * 0000000140228169: mov     [r11-20h], rsi
 * 000000014022816D: mov     r9d, ebp
 * 0000000140228170: mov     [r11-28h], rdx
 * 0000000140228174: lea     rdx, [r11+48h]
 * 0000000140228178: mov     [r11-30h], rsi
 * 000000014022817C: mov     [r11-38h], rdx
 * 0000000140228180: lea     edx, [rbp+1Ch]
 * 0000000140228183: call    _guard_dispatch_icall
 * 0000000140228188: test    bl, bl
 * 000000014022818A: jz      short loc_1402281D9
 * 000000014022818C: and     [rsp+58h+var_10], 0
 * 0000000140228192: lea     rax, [rsp+58h+arg_48]
 * 000000014022819A: mov     [rsp+58h+var_18], rsi
 * 000000014022819F: lea     r9, WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids
 * 00000001402281A6: mov     [rsp+58h+var_20], rax
 * 00000001402281AB: mov     r8d, 7
 * 00000001402281B1: lea     rax, [rsp+58h+arg_40]
 * 00000001402281B9: mov     [rsp+58h+var_28], rsi
 * 00000001402281BE: mov     [rsp+58h+var_30], rax
 * 00000001402281C3: mov     edx, esi
 * 00000001402281C5: mov     rcx, rdi
 * 00000001402281C8: mov     [rsp+58h+var_38], bp
 * 00000001402281CD: call    cs:__imp_WppAutoLogTrace
 * 00000001402281D4: nop     dword ptr [rax+rax+00h]
 * 00000001402281D9: mov     rbx, [rsp+58h+arg_0]
 * 00000001402281DE: mov     rbp, [rsp+58h+arg_8]
 * 00000001402281E3: mov     rsi, [rsp+58h+arg_10]
 * 00000001402281E8: add     rsp, 50h
 * 00000001402281EC: pop     rdi
 * 00000001402281ED: retn
 */
