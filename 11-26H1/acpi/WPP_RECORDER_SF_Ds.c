/*
 * XREFs of WPP_RECORDER_SF_Ds @ 0x14003DC80
 * Callers:
 *     LogError @ 0x140007244 (LogError.c)
 *     GetNameSpaceObjectNoLock @ 0x140007700 (GetNameSpaceObjectNoLock.c)
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ds @ 0x14003DC80
 * Reason: Hex-Rays returned no pseudocode for 0x14003DC80
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014003DC80: mov     [rsp+arg_0], rbx
 * 000000014003DC85: mov     [rsp+arg_8], rbp
 * 000000014003DC8A: mov     [rsp+arg_10], rsi
 * 000000014003DC8F: push    rdi
 * 000000014003DC90: push    r12
 * 000000014003DC92: push    r13
 * 000000014003DC94: sub     rsp, 50h
 * 000000014003DC98: mov     rdx, cs:WPP_GLOBAL_Control
 * 000000014003DC9F: lea     r12, aNull; "NULL"
 * 000000014003DCA6: mov     rbx, [rsp+68h+arg_30]
 * 000000014003DCAE: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 000000014003DCB2: mov     rbp, rcx
 * 000000014003DCB5: test    dword ptr [rdx+2Ch], 100000h
 * 000000014003DCBC: lea     esi, [rdi+6]
 * 000000014003DCBF: lea     r13d, [rdi+0Bh]
 * 000000014003DCC3: jnz     loc_14003DD4B
 * 000000014003DCC9: test    rbx, rbx
 * 000000014003DCCC: jz      short loc_14003DCDE
 * 000000014003DCCE: inc     rdi
 * 000000014003DCD1: cmp     byte ptr [rbx+rdi], 0
 * 000000014003DCD5: jnz     short loc_14003DCCE
 * 000000014003DCD7: lea     rsi, [rdi+1]
 * 000000014003DCDB: test    rbx, rbx
 * 000000014003DCDE: mov     [rsp+68h+var_20], 0
 * 000000014003DCE7: lea     rax, [rsp+68h+arg_28]
 * 000000014003DCEF: mov     [rsp+68h+var_28], rsi
 * 000000014003DCF4: lea     r9, WPP_cb58500626293570c59447bf2bdcca7b_Traceguids
 * 000000014003DCFB: mov     edx, 2
 * 000000014003DD00: cmovz   rbx, r12
 * 000000014003DD04: mov     [rsp+68h+var_30], rbx
 * 000000014003DD09: mov     rcx, rbp
 * 000000014003DD0C: mov     [rsp+68h+var_38], 4
 * 000000014003DD15: mov     [rsp+68h+var_40], rax
 * 000000014003DD1A: lea     r8d, [rdx+13h]
 * 000000014003DD1E: mov     word ptr [rsp+68h+var_48], r13w
 * 000000014003DD24: call    cs:__imp_WppAutoLogTrace
 * 000000014003DD2B: nop     dword ptr [rax+rax+00h]
 * 000000014003DD30: lea     r11, [rsp+68h+var_18]
 * 000000014003DD35: mov     rbx, [r11+20h]
 * 000000014003DD39: mov     rbp, [r11+28h]
 * 000000014003DD3D: mov     rsi, [r11+30h]
 * 000000014003DD41: mov     rsp, r11
 * 000000014003DD44: pop     r13
 * 000000014003DD46: pop     r12
 * 000000014003DD48: pop     rdi
 * 000000014003DD49: retn
 * 000000014003DD4B: cmp     byte ptr [rdx+29h], 2
 * 000000014003DD4F: jb      loc_14003DCC9
 * 000000014003DD55: test    rbx, rbx
 * 000000014003DD58: jz      short loc_14003DD6C
 * 000000014003DD5A: mov     rax, rdi
 * 000000014003DD5D: inc     rax
 * 000000014003DD60: cmp     byte ptr [rbx+rax], 0
 * 000000014003DD64: jnz     short loc_14003DD5D
 * 000000014003DD66: lea     rdx, [rax+1]
 * 000000014003DD6A: jmp     short loc_14003DD6F
 * 000000014003DD6C: mov     rdx, rsi
 * 000000014003DD6F: mov     rax, cs:pfnWppTraceMessage
 * 000000014003DD76: lea     r8, WPP_cb58500626293570c59447bf2bdcca7b_Traceguids
 * 000000014003DD7D: mov     [rsp+68h+var_28], 0
 * 000000014003DD86: test    rbx, rbx
 * 000000014003DD89: mov     [rsp+68h+var_30], rdx
 * 000000014003DD8E: mov     rcx, rbx
 * 000000014003DD91: cmovz   rcx, r12
 * 000000014003DD95: mov     r9d, r13d
 * 000000014003DD98: mov     [rsp+68h+var_38], rcx
 * 000000014003DD9D: mov     edx, 2Bh ; '+'
 * 000000014003DDA2: lea     rcx, [rsp+68h+arg_28]
 * 000000014003DDAA: mov     [rsp+68h+var_40], 4
 * 000000014003DDB3: mov     [rsp+68h+var_48], rcx
 * 000000014003DDB8: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000014003DDBF: mov     rcx, [rcx+18h]
 * 000000014003DDC3: call    _guard_dispatch_icall
 * 000000014003DDC8: jmp     loc_14003DCC9
 */
