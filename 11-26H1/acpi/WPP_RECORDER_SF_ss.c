/*
 * XREFs of WPP_RECORDER_SF_ss @ 0x140065A44
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1400214B0 (PciConfigSpaceHandlerWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ss @ 0x140065A44
 * Reason: Hex-Rays returned no pseudocode for 0x140065A44
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140065A44: mov     rax, rsp
 * 0000000140065A47: mov     [rax+8], rbx
 * 0000000140065A4B: mov     [rax+10h], rbp
 * 0000000140065A4F: mov     [rax+18h], rsi
 * 0000000140065A53: mov     [rax+20h], rdi
 * 0000000140065A57: push    r12
 * 0000000140065A59: push    r13
 * 0000000140065A5B: push    r14
 * 0000000140065A5D: sub     rsp, 50h
 * 0000000140065A61: mov     rdx, cs:WPP_GLOBAL_Control
 * 0000000140065A68: lea     r12, aNull; "NULL"
 * 0000000140065A6F: mov     rbx, [rsp+68h+arg_30]
 * 0000000140065A77: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 0000000140065A7B: mov     rsi, [rsp+68h+arg_28]
 * 0000000140065A83: mov     r14, rcx
 * 0000000140065A86: test    dword ptr [rdx+2Ch], 100000h
 * 0000000140065A8D: lea     ebp, [rdi+6]
 * 0000000140065A90: lea     r13d, [rdi+0Ch]
 * 0000000140065A94: jz      loc_140065B2F
 * 0000000140065A9A: cmp     byte ptr [rdx+29h], 2
 * 0000000140065A9E: jb      loc_140065B2F
 * 0000000140065AA4: test    rbx, rbx
 * 0000000140065AA7: jz      short loc_140065ABB
 * 0000000140065AA9: mov     rax, rdi
 * 0000000140065AAC: inc     rax
 * 0000000140065AAF: cmp     byte ptr [rbx+rax], 0
 * 0000000140065AB3: jnz     short loc_140065AAC
 * 0000000140065AB5: lea     r9, [rax+1]
 * 0000000140065AB9: jmp     short loc_140065ABE
 * 0000000140065ABB: mov     r9, rbp
 * 0000000140065ABE: test    rbx, rbx
 * 0000000140065AC1: mov     rdx, rbx
 * 0000000140065AC4: cmovz   rdx, r12
 * 0000000140065AC8: test    rsi, rsi
 * 0000000140065ACB: jz      short loc_140065ADF
 * 0000000140065ACD: mov     rax, rdi
 * 0000000140065AD0: inc     rax
 * 0000000140065AD3: cmp     byte ptr [rsi+rax], 0
 * 0000000140065AD7: jnz     short loc_140065AD0
 * 0000000140065AD9: lea     r8, [rax+1]
 * 0000000140065ADD: jmp     short loc_140065AE2
 * 0000000140065ADF: mov     r8, rbp
 * 0000000140065AE2: mov     rax, cs:pfnWppTraceMessage
 * 0000000140065AE9: test    rsi, rsi
 * 0000000140065AEC: mov     [rsp+68h+var_28], 0
 * 0000000140065AF5: mov     rcx, rsi
 * 0000000140065AF8: mov     [rsp+68h+var_30], r9
 * 0000000140065AFD: cmovz   rcx, r12
 * 0000000140065B01: mov     [rsp+68h+var_38], rdx
 * 0000000140065B06: mov     r9d, r13d
 * 0000000140065B09: mov     [rsp+68h+var_40], r8
 * 0000000140065B0E: mov     edx, 2Bh ; '+'
 * 0000000140065B13: mov     [rsp+68h+var_48], rcx
 * 0000000140065B18: lea     r8, WPP_0287697259653d931b5061367bd98a44_Traceguids
 * 0000000140065B1F: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140065B26: mov     rcx, [rcx+18h]
 * 0000000140065B2A: call    _guard_dispatch_icall
 * 0000000140065B2F: test    rbx, rbx
 * 0000000140065B32: jz      short loc_140065B45
 * 0000000140065B34: mov     rax, rdi
 * 0000000140065B37: inc     rax
 * 0000000140065B3A: cmp     byte ptr [rbx+rax], 0
 * 0000000140065B3E: jnz     short loc_140065B37
 * 0000000140065B40: inc     rax
 * 0000000140065B43: jmp     short loc_140065B48
 * 0000000140065B45: mov     rax, rbp
 * 0000000140065B48: test    rbx, rbx
 * 0000000140065B4B: cmovz   rbx, r12
 * 0000000140065B4F: test    rsi, rsi
 * 0000000140065B52: jz      short loc_140065B64
 * 0000000140065B54: inc     rdi
 * 0000000140065B57: cmp     byte ptr [rsi+rdi], 0
 * 0000000140065B5B: jnz     short loc_140065B54
 * 0000000140065B5D: lea     rbp, [rdi+1]
 * 0000000140065B61: test    rsi, rsi
 * 0000000140065B64: mov     [rsp+68h+var_20], 0
 * 0000000140065B6D: lea     r9, WPP_0287697259653d931b5061367bd98a44_Traceguids
 * 0000000140065B74: mov     [rsp+68h+var_28], rax
 * 0000000140065B79: mov     edx, 2
 * 0000000140065B7E: mov     [rsp+68h+var_30], rbx
 * 0000000140065B83: cmovz   rsi, r12
 * 0000000140065B87: mov     [rsp+68h+var_38], rbp
 * 0000000140065B8C: mov     rcx, r14
 * 0000000140065B8F: mov     [rsp+68h+var_40], rsi
 * 0000000140065B94: lea     r8d, [rdx+13h]
 * 0000000140065B98: mov     word ptr [rsp+68h+var_48], r13w
 * 0000000140065B9E: call    cs:__imp_WppAutoLogTrace
 * 0000000140065BA5: nop     dword ptr [rax+rax+00h]
 * 0000000140065BAA: lea     r11, [rsp+68h+var_18]
 * 0000000140065BAF: mov     rbx, [r11+20h]
 * 0000000140065BB3: mov     rbp, [r11+28h]
 * 0000000140065BB7: mov     rsi, [r11+30h]
 * 0000000140065BBB: mov     rdi, [r11+38h]
 * 0000000140065BBF: mov     rsp, r11
 * 0000000140065BC2: pop     r14
 * 0000000140065BC4: pop     r13
 * 0000000140065BC6: pop     r12
 * 0000000140065BC8: retn
 */
