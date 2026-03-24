/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqldd @ 0x1402E6F5C
 * Callers:
 *     xxxDoScrollMenu @ 0x1402E8138 (xxxDoScrollMenu.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qqldd @ 0x1402E6F5C
 * Reason: Hex-Rays returned no pseudocode for 0x1402E6F5C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E6F5C: mov     r11, rsp
 * 00000001402E6F5F: mov     [r11+8], rbx
 * 00000001402E6F63: mov     [r11+10h], rbp
 * 00000001402E6F67: mov     [r11+18h], rsi
 * 00000001402E6F6B: mov     [r11+20h], rdi
 * 00000001402E6F6F: push    r14
 * 00000001402E6F71: sub     rsp, 80h
 * 00000001402E6F78: mov     esi, 4
 * 00000001402E6F7D: mov     rdi, r9
 * 00000001402E6F80: mov     bl, r8b
 * 00000001402E6F83: lea     ebp, [rsi+4]
 * 00000001402E6F86: lea     r14d, [rsi+3Dh]
 * 00000001402E6F8A: test    dl, dl
 * 00000001402E6F8C: jz      short loc_1402E6FE8
 * 00000001402E6F8E: and     qword ptr [r11-18h], 0
 * 00000001402E6F93: lea     rdx, [r11+68h]
 * 00000001402E6F97: mov     rax, cs:pfnWppTraceMessage
 * 00000001402E6F9E: lea     r8, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E6FA5: mov     [r11-20h], rsi
 * 00000001402E6FA9: mov     r9d, r14d
 * 00000001402E6FAC: mov     [r11-28h], rdx
 * 00000001402E6FB0: lea     rdx, [r11+60h]
 * 00000001402E6FB4: mov     [r11-30h], rsi
 * 00000001402E6FB8: mov     [r11-38h], rdx
 * 00000001402E6FBC: lea     rdx, [r11+58h]
 * 00000001402E6FC0: mov     [r11-40h], rsi
 * 00000001402E6FC4: mov     [r11-48h], rdx
 * 00000001402E6FC8: lea     rdx, [r11+50h]
 * 00000001402E6FCC: mov     [r11-50h], rbp
 * 00000001402E6FD0: mov     [r11-58h], rdx
 * 00000001402E6FD4: lea     rdx, [r11+48h]
 * 00000001402E6FD8: mov     [r11-60h], rbp
 * 00000001402E6FDC: mov     [r11-68h], rdx
 * 00000001402E6FE0: lea     edx, [rsi+27h]
 * 00000001402E6FE3: call    _guard_dispatch_icall
 * 00000001402E6FE8: test    bl, bl
 * 00000001402E6FEA: jz      loc_1402E7074
 * 00000001402E6FF0: and     [rsp+88h+var_10], 0
 * 00000001402E6FF6: lea     rax, [rsp+88h+arg_60]
 * 00000001402E6FFE: mov     [rsp+88h+var_18], rsi
 * 00000001402E7003: lea     r9, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E700A: mov     [rsp+88h+var_20], rax
 * 00000001402E700F: mov     r8d, 9
 * 00000001402E7015: mov     [rsp+88h+var_28], rsi
 * 00000001402E701A: lea     rax, [rsp+88h+arg_58]
 * 00000001402E7022: mov     [rsp+88h+var_30], rax
 * 00000001402E7027: mov     edx, esi
 * 00000001402E7029: mov     [rsp+88h+var_38], rsi
 * 00000001402E702E: lea     rax, [rsp+88h+arg_50]
 * 00000001402E7036: mov     [rsp+88h+var_40], rax
 * 00000001402E703B: mov     rcx, rdi
 * 00000001402E703E: mov     [rsp+88h+var_48], rbp
 * 00000001402E7043: lea     rax, [rsp+88h+arg_48]
 * 00000001402E704B: mov     [rsp+88h+var_50], rax
 * 00000001402E7050: lea     rax, [rsp+88h+arg_40]
 * 00000001402E7058: mov     [rsp+88h+var_58], rbp
 * 00000001402E705D: mov     [rsp+88h+var_60], rax
 * 00000001402E7062: mov     [rsp+88h+var_68], r14w
 * 00000001402E7068: call    cs:__imp_WppAutoLogTrace
 * 00000001402E706F: nop     dword ptr [rax+rax+00h]
 * 00000001402E7074: lea     r11, [rsp+88h+var_8]
 * 00000001402E707C: mov     rbx, [r11+10h]
 * 00000001402E7080: mov     rbp, [r11+18h]
 * 00000001402E7084: mov     rsi, [r11+20h]
 * 00000001402E7088: mov     rdi, [r11+28h]
 * 00000001402E708C: mov     rsp, r11
 * 00000001402E708F: pop     r14
 * 00000001402E7091: retn
 */
