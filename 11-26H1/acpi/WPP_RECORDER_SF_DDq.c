/*
 * XREFs of WPP_RECORDER_SF_DDq @ 0x140047018
 * Callers:
 *     IrqArbpUnreferenceArbitrationList @ 0x1400C3308 (IrqArbpUnreferenceArbitrationList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDq @ 0x140047018
 * Reason: Hex-Rays returned no pseudocode for 0x140047018
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140047018: mov     [rsp+arg_0], rbx
 * 000000014004701D: mov     [rsp+arg_8], rbp
 * 0000000140047022: push    rdi
 * 0000000140047023: sub     rsp, 60h
 * 0000000140047027: mov     rbx, rcx
 * 000000014004702A: mov     edi, 4
 * 000000014004702F: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140047036: lea     ebp, [rdi+0Fh]
 * 0000000140047039: test    dword ptr [rcx+2Ch], 80000h
 * 0000000140047040: jnz     short loc_1400470B9
 * 0000000140047042: mov     [rsp+68h+var_10], 0
 * 000000014004704B: lea     rax, [rsp+68h+arg_38]
 * 0000000140047053: mov     [rsp+68h+var_18], 8
 * 000000014004705C: lea     r9, WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids
 * 0000000140047063: mov     [rsp+68h+var_20], rax
 * 0000000140047068: mov     r8d, 14h
 * 000000014004706E: mov     [rsp+68h+var_28], rdi
 * 0000000140047073: lea     rax, [rsp+68h+arg_30]
 * 000000014004707B: mov     [rsp+68h+var_30], rax
 * 0000000140047080: mov     edx, edi
 * 0000000140047082: lea     rax, [rsp+68h+arg_28]
 * 000000014004708A: mov     [rsp+68h+var_38], rdi
 * 000000014004708F: mov     [rsp+68h+var_40], rax
 * 0000000140047094: mov     rcx, rbx
 * 0000000140047097: mov     word ptr [rsp+68h+var_48], bp
 * 000000014004709C: call    cs:__imp_WppAutoLogTrace
 * 00000001400470A3: nop     dword ptr [rax+rax+00h]
 * 00000001400470A8: mov     rbx, [rsp+68h+arg_0]
 * 00000001400470AD: mov     rbp, [rsp+68h+arg_8]
 * 00000001400470B2: add     rsp, 60h
 * 00000001400470B6: pop     rdi
 * 00000001400470B7: retn
 * 00000001400470B9: cmp     [rcx+29h], dil
 * 00000001400470BD: jb      short loc_140047042
 * 00000001400470BF: mov     rax, cs:pfnWppTraceMessage
 * 00000001400470C6: lea     rdx, [rsp+68h+arg_38]
 * 00000001400470CE: mov     rcx, [rcx+18h]
 * 00000001400470D2: lea     r8, WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids
 * 00000001400470D9: mov     [rsp+68h+var_18], 0
 * 00000001400470E2: mov     r9d, ebp
 * 00000001400470E5: mov     [rsp+68h+var_20], 8
 * 00000001400470EE: mov     [rsp+68h+var_28], rdx
 * 00000001400470F3: lea     rdx, [rsp+68h+arg_30]
 * 00000001400470FB: mov     [rsp+68h+var_30], rdi
 * 0000000140047100: mov     [rsp+68h+var_38], rdx
 * 0000000140047105: lea     rdx, [rsp+68h+arg_28]
 * 000000014004710D: mov     [rsp+68h+var_40], rdi
 * 0000000140047112: mov     [rsp+68h+var_48], rdx
 * 0000000140047117: mov     edx, 2Bh ; '+'
 * 000000014004711C: call    _guard_dispatch_icall
 * 0000000140047121: jmp     loc_140047042
 */
