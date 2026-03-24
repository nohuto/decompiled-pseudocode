/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dD @ 0x14014D250
 * Callers:
 *     _anonymous_namespace_::SetMonitorDockThresholds @ 0x14014CFA4 (_anonymous_namespace_--SetMonitorDockThresholds.c)
 *     ?ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401D9F64 (-ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dD @ 0x14014D250
 * Reason: Hex-Rays returned no pseudocode for 0x14014D250
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014014D250: mov     [rsp+arg_0], rbx
 * 000000014014D255: mov     [rsp+arg_8], rbp
 * 000000014014D25A: mov     [rsp+arg_10], rsi
 * 000000014014D25F: push    rdi
 * 000000014014D260: sub     rsp, 50h
 * 000000014014D264: movzx   ebx, [rsp+58h+arg_30]
 * 000000014014D26C: mov     rsi, r9
 * 000000014014D26F: mov     dil, r8b
 * 000000014014D272: mov     ebp, 4
 * 000000014014D277: test    dl, dl
 * 000000014014D279: jnz     short loc_14014D2E6
 * 000000014014D27B: test    dil, dil
 * 000000014014D27E: jz      short loc_14014D2D0
 * 000000014014D280: and     [rsp+58h+var_10], 0
 * 000000014014D286: lea     rax, [rsp+58h+arg_48]
 * 000000014014D28E: mov     r9, [rsp+58h+arg_38]
 * 000000014014D296: mov     edx, ebp
 * 000000014014D298: mov     r8d, [rsp+58h+arg_28]
 * 000000014014D2A0: mov     rcx, rsi
 * 000000014014D2A3: mov     [rsp+58h+var_18], rbp
 * 000000014014D2A8: mov     [rsp+58h+var_20], rax
 * 000000014014D2AD: lea     rax, [rsp+58h+arg_40]
 * 000000014014D2B5: mov     [rsp+58h+var_28], rbp
 * 000000014014D2BA: mov     [rsp+58h+var_30], rax
 * 000000014014D2BF: mov     word ptr [rsp+58h+var_38], bx
 * 000000014014D2C4: call    cs:__imp_WppAutoLogTrace
 * 000000014014D2CB: nop     dword ptr [rax+rax+00h]
 * 000000014014D2D0: mov     rbx, [rsp+58h+arg_0]
 * 000000014014D2D5: mov     rbp, [rsp+58h+arg_8]
 * 000000014014D2DA: mov     rsi, [rsp+58h+arg_10]
 * 000000014014D2DF: add     rsp, 50h
 * 000000014014D2E3: pop     rdi
 * 000000014014D2E4: retn
 * 000000014014D2E6: and     [rsp+58h+var_18], 0
 * 000000014014D2EC: lea     rdx, [rsp+58h+arg_48]
 * 000000014014D2F4: mov     rax, cs:pfnWppTraceMessage
 * 000000014014D2FB: mov     r9d, ebx
 * 000000014014D2FE: mov     r8, [rsp+58h+arg_38]
 * 000000014014D306: mov     [rsp+58h+var_20], rbp
 * 000000014014D30B: mov     [rsp+58h+var_28], rdx
 * 000000014014D310: lea     rdx, [rsp+58h+arg_40]
 * 000000014014D318: mov     [rsp+58h+var_30], rbp
 * 000000014014D31D: mov     [rsp+58h+var_38], rdx
 * 000000014014D322: mov     edx, 2Bh ; '+'
 * 000000014014D327: call    _guard_dispatch_icall
 * 000000014014D32C: jmp     loc_14014D27B
 */
