/*
 * XREFs of WPP_RECORDER_SF_LDL @ 0x140031A7C
 * Callers:
 *     OSNotifyDeviceWakeByGPEEvent @ 0x140032208 (OSNotifyDeviceWakeByGPEEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LDL @ 0x140031A7C
 * Reason: Hex-Rays returned no pseudocode for 0x140031A7C
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140031A7C: mov     [rsp+arg_0], rbx
 * 0000000140031A81: mov     [rsp+arg_8], rsi
 * 0000000140031A86: push    rdi
 * 0000000140031A87: sub     rsp, 60h
 * 0000000140031A8B: mov     rbx, rcx
 * 0000000140031A8E: mov     edi, 4
 * 0000000140031A93: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140031A9A: lea     esi, [rdi+1Bh]
 * 0000000140031A9D: test    dword ptr [rcx+2Ch], 10000h
 * 0000000140031AA4: jnz     short loc_140031B19
 * 0000000140031AA6: mov     [rsp+68h+var_10], 0
 * 0000000140031AAF: lea     rax, [rsp+68h+arg_38]
 * 0000000140031AB7: mov     [rsp+68h+var_18], rdi
 * 0000000140031ABC: lea     r9, WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids
 * 0000000140031AC3: mov     [rsp+68h+var_20], rax
 * 0000000140031AC8: mov     r8d, 11h
 * 0000000140031ACE: mov     [rsp+68h+var_28], rdi
 * 0000000140031AD3: lea     rax, [rsp+68h+arg_30]
 * 0000000140031ADB: mov     [rsp+68h+var_30], rax
 * 0000000140031AE0: mov     edx, edi
 * 0000000140031AE2: lea     rax, [rsp+68h+arg_28]
 * 0000000140031AEA: mov     [rsp+68h+var_38], rdi
 * 0000000140031AEF: mov     [rsp+68h+var_40], rax
 * 0000000140031AF4: mov     rcx, rbx
 * 0000000140031AF7: mov     word ptr [rsp+68h+var_48], si
 * 0000000140031AFC: call    cs:__imp_WppAutoLogTrace
 * 0000000140031B03: nop     dword ptr [rax+rax+00h]
 * 0000000140031B08: mov     rbx, [rsp+68h+arg_0]
 * 0000000140031B0D: mov     rsi, [rsp+68h+arg_8]
 * 0000000140031B12: add     rsp, 60h
 * 0000000140031B16: pop     rdi
 * 0000000140031B17: retn
 * 0000000140031B19: cmp     [rcx+29h], dil
 * 0000000140031B1D: jb      short loc_140031AA6
 * 0000000140031B1F: mov     rax, cs:pfnWppTraceMessage
 * 0000000140031B26: lea     rdx, [rsp+68h+arg_38]
 * 0000000140031B2E: mov     rcx, [rcx+18h]
 * 0000000140031B32: lea     r8, WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids
 * 0000000140031B39: mov     [rsp+68h+var_18], 0
 * 0000000140031B42: mov     r9d, esi
 * 0000000140031B45: mov     [rsp+68h+var_20], rdi
 * 0000000140031B4A: mov     [rsp+68h+var_28], rdx
 * 0000000140031B4F: lea     rdx, [rsp+68h+arg_30]
 * 0000000140031B57: mov     [rsp+68h+var_30], rdi
 * 0000000140031B5C: mov     [rsp+68h+var_38], rdx
 * 0000000140031B61: lea     rdx, [rsp+68h+arg_28]
 * 0000000140031B69: mov     [rsp+68h+var_40], rdi
 * 0000000140031B6E: mov     [rsp+68h+var_48], rdx
 * 0000000140031B73: mov     edx, 2Bh ; '+'
 * 0000000140031B78: call    _guard_dispatch_icall
 * 0000000140031B7D: jmp     loc_140031AA6
 */
