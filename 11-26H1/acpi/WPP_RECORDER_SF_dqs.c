/*
 * XREFs of WPP_RECORDER_SF_dqs @ 0x14005D56C
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes @ 0x14003EFA0 (ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqs @ 0x14005D56C
 * Reason: Hex-Rays returned no pseudocode for 0x14005D56C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014005D56C: mov     rax, rsp
 * 000000014005D56F: mov     [rax+8], rbx
 * 000000014005D573: mov     [rax+10h], rbp
 * 000000014005D577: mov     [rax+18h], rsi
 * 000000014005D57B: mov     [rax+20h], rdi
 * 000000014005D57F: push    r13
 * 000000014005D581: sub     rsp, 60h
 * 000000014005D585: mov     rdx, cs:WPP_GLOBAL_Control
 * 000000014005D58C: lea     r13, aNull; "NULL"
 * 000000014005D593: mov     rbx, [rsp+68h+arg_38]
 * 000000014005D59B: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 000000014005D59F: mov     rbp, rcx
 * 000000014005D5A2: test    dword ptr [rdx+2Ch], 200h
 * 000000014005D5A9: lea     esi, [rdi+6]
 * 000000014005D5AC: lea     r8d, [rdi+3Dh]
 * 000000014005D5B0: jz      loc_14005D64F
 * 000000014005D5B6: cmp     byte ptr [rdx+29h], 4
 * 000000014005D5BA: jb      loc_14005D64F
 * 000000014005D5C0: test    rbx, rbx
 * 000000014005D5C3: jz      short loc_14005D5D7
 * 000000014005D5C5: mov     rax, rdi
 * 000000014005D5C8: inc     rax
 * 000000014005D5CB: cmp     byte ptr [rbx+rax], 0
 * 000000014005D5CF: jnz     short loc_14005D5C8
 * 000000014005D5D1: lea     rdx, [rax+1]
 * 000000014005D5D5: jmp     short loc_14005D5DA
 * 000000014005D5D7: mov     rdx, rsi
 * 000000014005D5DA: mov     rax, cs:pfnWppTraceMessage
 * 000000014005D5E1: test    rbx, rbx
 * 000000014005D5E4: mov     [rsp+68h+var_18], 0
 * 000000014005D5ED: mov     r9d, r8d
 * 000000014005D5F0: mov     [rsp+68h+var_20], rdx
 * 000000014005D5F5: lea     r8, WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids
 * 000000014005D5FC: mov     rcx, rbx
 * 000000014005D5FF: mov     edx, 2Bh ; '+'
 * 000000014005D604: cmovz   rcx, r13
 * 000000014005D608: mov     [rsp+68h+var_28], rcx
 * 000000014005D60D: lea     rcx, [rsp+68h+arg_30]
 * 000000014005D615: mov     [rsp+68h+var_30], 8
 * 000000014005D61E: mov     [rsp+68h+var_38], rcx
 * 000000014005D623: lea     rcx, [rsp+68h+arg_28]
 * 000000014005D62B: mov     [rsp+68h+var_40], 4
 * 000000014005D634: mov     [rsp+68h+var_48], rcx
 * 000000014005D639: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000014005D640: mov     rcx, [rcx+18h]
 * 000000014005D644: call    _guard_dispatch_icall
 * 000000014005D649: mov     r8d, 3Ch ; '<'
 * 000000014005D64F: test    rbx, rbx
 * 000000014005D652: jz      short loc_14005D664
 * 000000014005D654: inc     rdi
 * 000000014005D657: cmp     byte ptr [rbx+rdi], 0
 * 000000014005D65B: jnz     short loc_14005D654
 * 000000014005D65D: lea     rsi, [rdi+1]
 * 000000014005D661: test    rbx, rbx
 * 000000014005D664: mov     [rsp+68h+var_10], 0
 * 000000014005D66D: lea     rax, [rsp+68h+arg_30]
 * 000000014005D675: mov     [rsp+68h+var_18], rsi
 * 000000014005D67A: lea     r9, WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids
 * 000000014005D681: cmovz   rbx, r13
 * 000000014005D685: mov     edx, 4
 * 000000014005D68A: mov     [rsp+68h+var_20], rbx
 * 000000014005D68F: mov     rcx, rbp
 * 000000014005D692: mov     [rsp+68h+var_28], 8
 * 000000014005D69B: mov     [rsp+68h+var_30], rax
 * 000000014005D6A0: lea     rax, [rsp+68h+arg_28]
 * 000000014005D6A8: mov     [rsp+68h+var_38], 4
 * 000000014005D6B1: mov     [rsp+68h+var_40], rax
 * 000000014005D6B6: mov     word ptr [rsp+68h+var_48], r8w
 * 000000014005D6BC: lea     r8d, [rdx+6]
 * 000000014005D6C0: call    cs:__imp_WppAutoLogTrace
 * 000000014005D6C7: nop     dword ptr [rax+rax+00h]
 * 000000014005D6CC: lea     r11, [rsp+68h+var_8]
 * 000000014005D6D1: mov     rbx, [r11+10h]
 * 000000014005D6D5: mov     rbp, [r11+18h]
 * 000000014005D6D9: mov     rsi, [r11+20h]
 * 000000014005D6DD: mov     rdi, [r11+28h]
 * 000000014005D6E1: mov     rsp, r11
 * 000000014005D6E4: pop     r13
 * 000000014005D6E6: retn
 */
