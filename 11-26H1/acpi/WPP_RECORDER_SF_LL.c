/*
 * XREFs of WPP_RECORDER_SF_LL @ 0x14004EF4C
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1400B8A44 (PnpCmResourcesToBiosResources.c)
 *     OSReadRegValue @ 0x1400C8470 (OSReadRegValue.c)
 *     PnpBiosResourcesToNtResources @ 0x1400CE578 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LL @ 0x14004EF4C
 * Reason: Hex-Rays returned no pseudocode for 0x14004EF4C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014004EF4C: mov     [rsp+arg_0], rbx
 * 000000014004EF51: mov     [rsp+arg_8], rbp
 * 000000014004EF56: mov     [rsp+arg_10], rsi
 * 000000014004EF5B: push    rdi
 * 000000014004EF5C: push    r14
 * 000000014004EF5E: push    r15
 * 000000014004EF60: sub     rsp, 50h
 * 000000014004EF64: mov     ebp, r8d
 * 000000014004EF67: mov     r14, rcx
 * 000000014004EF6A: mov     ebx, r8d
 * 000000014004EF6D: mov     r15d, 4
 * 000000014004EF73: shr     rbx, 10h
 * 000000014004EF77: movzx   esi, r9w
 * 000000014004EF7B: lea     r11d, [rbp-1]
 * 000000014004EF7F: movzx   edi, dl
 * 000000014004EF82: mov     r10d, r11d
 * 000000014004EF85: and     r11d, 1Fh
 * 000000014004EF89: shr     r10, 5
 * 000000014004EF8D: lea     rax, [rbx+rbx*4]
 * 000000014004EF91: and     r10d, 7FFh
 * 000000014004EF98: lea     rax, [r10+rax*4]
 * 000000014004EF9C: mov     r10, cs:WPP_GLOBAL_Control
 * 000000014004EFA3: mov     eax, [r10+rax*4+2Ch]
 * 000000014004EFA8: bt      eax, r11d
 * 000000014004EFAC: jnb     short loc_14004F009
 * 000000014004EFAE: lea     rcx, [rbx+rbx*4]
 * 000000014004EFB2: add     rcx, rcx
 * 000000014004EFB5: cmp     [r10+rcx*8+29h], dil
 * 000000014004EFBA: jb      short loc_14004F009
 * 000000014004EFBC: mov     rax, cs:pfnWppTraceMessage
 * 000000014004EFC3: lea     rdx, [rsp+68h+arg_30]
 * 000000014004EFCB: mov     r8, [rsp+68h+arg_20]
 * 000000014004EFD3: mov     r9d, esi
 * 000000014004EFD6: mov     rcx, [r10+rcx*8+18h]
 * 000000014004EFDB: mov     [rsp+68h+var_28], 0
 * 000000014004EFE4: mov     [rsp+68h+var_30], r15
 * 000000014004EFE9: mov     [rsp+68h+var_38], rdx
 * 000000014004EFEE: lea     rdx, [rsp+68h+arg_28]
 * 000000014004EFF6: mov     [rsp+68h+var_40], r15
 * 000000014004EFFB: mov     [rsp+68h+var_48], rdx
 * 000000014004F000: lea     edx, [r15+27h]
 * 000000014004F004: call    _guard_dispatch_icall
 * 000000014004F009: mov     r9, [rsp+68h+arg_20]
 * 000000014004F011: lea     rax, [rsp+68h+arg_30]
 * 000000014004F019: mov     [rsp+68h+var_20], 0
 * 000000014004F022: mov     r8d, ebp
 * 000000014004F025: mov     [rsp+68h+var_28], r15
 * 000000014004F02A: mov     edx, edi
 * 000000014004F02C: mov     [rsp+68h+var_30], rax
 * 000000014004F031: mov     rcx, r14
 * 000000014004F034: lea     rax, [rsp+68h+arg_28]
 * 000000014004F03C: mov     [rsp+68h+var_38], r15
 * 000000014004F041: mov     [rsp+68h+var_40], rax
 * 000000014004F046: mov     word ptr [rsp+68h+var_48], si
 * 000000014004F04B: call    cs:__imp_WppAutoLogTrace
 * 000000014004F052: nop     dword ptr [rax+rax+00h]
 * 000000014004F057: lea     r11, [rsp+68h+var_18]
 * 000000014004F05C: mov     rbx, [r11+20h]
 * 000000014004F060: mov     rbp, [r11+28h]
 * 000000014004F064: mov     rsi, [r11+30h]
 * 000000014004F068: mov     rsp, r11
 * 000000014004F06B: pop     r15
 * 000000014004F06D: pop     r14
 * 000000014004F06F: pop     rdi
 * 000000014004F070: retn
 */
