/*
 * XREFs of WPP_RECORDER_SF_ddL @ 0x140054D20
 * Callers:
 *     PnpiGrowResourceDescriptor @ 0x1400CF35C (PnpiGrowResourceDescriptor.c)
 *     PnpiGrowResourceList @ 0x1400CF46C (PnpiGrowResourceList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddL @ 0x140054D20
 * Reason: Hex-Rays returned no pseudocode for 0x140054D20
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140054D20: mov     r11, rsp
 * 0000000140054D23: mov     [r11+8], rbx
 * 0000000140054D27: mov     [r11+10h], rbp
 * 0000000140054D2B: mov     [r11+18h], rsi
 * 0000000140054D2F: push    rdi
 * 0000000140054D30: sub     rsp, 60h
 * 0000000140054D34: mov     rsi, rcx
 * 0000000140054D37: movzx   edi, r9w
 * 0000000140054D3B: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140054D42: mov     ebp, 4
 * 0000000140054D47: movzx   ebx, dl
 * 0000000140054D4A: test    dword ptr [rcx+2Ch], 2000h
 * 0000000140054D51: jz      short loc_140054DA1
 * 0000000140054D53: cmp     [rcx+29h], bl
 * 0000000140054D56: jb      short loc_140054DA1
 * 0000000140054D58: mov     rax, cs:pfnWppTraceMessage
 * 0000000140054D5F: lea     rdx, [r11+40h]
 * 0000000140054D63: mov     rcx, [rcx+18h]
 * 0000000140054D67: lea     r8, WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids
 * 0000000140054D6E: mov     qword ptr [r11-18h], 0
 * 0000000140054D76: mov     r9d, edi
 * 0000000140054D79: mov     [r11-20h], rbp
 * 0000000140054D7D: mov     [r11-28h], rdx
 * 0000000140054D81: lea     rdx, [r11+38h]
 * 0000000140054D85: mov     [r11-30h], rbp
 * 0000000140054D89: mov     [r11-38h], rdx
 * 0000000140054D8D: lea     rdx, [r11+30h]
 * 0000000140054D91: mov     [r11-40h], rbp
 * 0000000140054D95: mov     [r11-48h], rdx
 * 0000000140054D99: lea     edx, [rbp+27h]
 * 0000000140054D9C: call    _guard_dispatch_icall
 * 0000000140054DA1: mov     [rsp+68h+var_10], 0
 * 0000000140054DAA: lea     rax, [rsp+68h+arg_38]
 * 0000000140054DB2: mov     [rsp+68h+var_18], rbp
 * 0000000140054DB7: lea     r9, WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids
 * 0000000140054DBE: mov     [rsp+68h+var_20], rax
 * 0000000140054DC3: mov     r8d, 0Eh
 * 0000000140054DC9: mov     [rsp+68h+var_28], rbp
 * 0000000140054DCE: lea     rax, [rsp+68h+arg_30]
 * 0000000140054DD6: mov     [rsp+68h+var_30], rax
 * 0000000140054DDB: mov     edx, ebx
 * 0000000140054DDD: lea     rax, [rsp+68h+arg_28]
 * 0000000140054DE5: mov     [rsp+68h+var_38], rbp
 * 0000000140054DEA: mov     [rsp+68h+var_40], rax
 * 0000000140054DEF: mov     rcx, rsi
 * 0000000140054DF2: mov     [rsp+68h+var_48], di
 * 0000000140054DF7: call    cs:__imp_WppAutoLogTrace
 * 0000000140054DFE: nop     dword ptr [rax+rax+00h]
 * 0000000140054E03: lea     r11, [rsp+68h+var_8]
 * 0000000140054E08: mov     rbx, [r11+10h]
 * 0000000140054E0C: mov     rbp, [r11+18h]
 * 0000000140054E10: mov     rsi, [r11+20h]
 * 0000000140054E14: mov     rsp, r11
 * 0000000140054E17: pop     rdi
 * 0000000140054E18: retn
 */
