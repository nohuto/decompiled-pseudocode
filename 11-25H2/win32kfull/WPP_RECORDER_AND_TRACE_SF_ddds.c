/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ddds @ 0x14026A2FC
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14002D590 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ddds @ 0x14026A2FC
 * Reason: Hex-Rays returned no pseudocode for 0x14026A2FC
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014026A2FC: mov     [rsp+arg_0], rbx
 * 000000014026A301: mov     [rsp+arg_8], rbp
 * 000000014026A306: mov     [rsp+arg_10], rsi
 * 000000014026A30B: push    rdi
 * 000000014026A30C: push    r12
 * 000000014026A30E: push    r13
 * 000000014026A310: sub     rsp, 70h
 * 000000014026A314: mov     rdi, [rsp+88h+arg_58]
 * 000000014026A31C: lea     r13, aNull; "NULL"
 * 000000014026A323: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 000000014026A327: mov     sil, r8b
 * 000000014026A32A: mov     rbp, r9
 * 000000014026A32D: mov     r11, rcx
 * 000000014026A330: lea     r8d, [rbx+11h]
 * 000000014026A334: lea     r12d, [rbx+5]
 * 000000014026A338: test    dl, dl
 * 000000014026A33A: jz      loc_14026A3D2
 * 000000014026A340: mov     r10, cs:pfnWppTraceMessage
 * 000000014026A347: test    rdi, rdi
 * 000000014026A34A: jz      short loc_14026A35D
 * 000000014026A34C: mov     rax, rbx
 * 000000014026A34F: inc     rax
 * 000000014026A352: cmp     byte ptr [rdi+rax], 0
 * 000000014026A356: jnz     short loc_14026A34F
 * 000000014026A358: inc     rax
 * 000000014026A35B: jmp     short loc_14026A362
 * 000000014026A35D: mov     eax, 5
 * 000000014026A362: test    rdi, rdi
 * 000000014026A365: mov     r9d, r8d
 * 000000014026A368: mov     rcx, rdi
 * 000000014026A36B: lea     r8, WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids
 * 000000014026A372: cmovz   rcx, r13
 * 000000014026A376: mov     edx, 2Bh ; '+'
 * 000000014026A37B: and     [rsp+88h+var_28], 0
 * 000000014026A381: mov     [rsp+88h+var_30], rax
 * 000000014026A386: lea     rax, [rsp+88h+arg_50]
 * 000000014026A38E: mov     [rsp+88h+var_38], rcx
 * 000000014026A393: mov     rcx, r11
 * 000000014026A396: mov     [rsp+88h+var_40], r12
 * 000000014026A39B: mov     [rsp+88h+var_48], rax
 * 000000014026A3A0: lea     rax, [rsp+88h+arg_48]
 * 000000014026A3A8: mov     [rsp+88h+var_50], r12
 * 000000014026A3AD: mov     [rsp+88h+var_58], rax
 * 000000014026A3B2: lea     rax, [rsp+88h+arg_40]
 * 000000014026A3BA: mov     [rsp+88h+var_60], r12
 * 000000014026A3BF: mov     [rsp+88h+var_68], rax
 * 000000014026A3C4: mov     rax, r10
 * 000000014026A3C7: call    _guard_dispatch_icall
 * 000000014026A3CC: mov     r8d, 10h
 * 000000014026A3D2: test    sil, sil
 * 000000014026A3D5: jz      loc_14026A465
 * 000000014026A3DB: test    rdi, rdi
 * 000000014026A3DE: jz      short loc_14026A3EE
 * 000000014026A3E0: inc     rbx
 * 000000014026A3E3: cmp     byte ptr [rdi+rbx], 0
 * 000000014026A3E7: jnz     short loc_14026A3E0
 * 000000014026A3E9: inc     rbx
 * 000000014026A3EC: jmp     short loc_14026A3F3
 * 000000014026A3EE: mov     ebx, 5
 * 000000014026A3F3: test    rdi, rdi
 * 000000014026A3F6: lea     rax, [rsp+88h+arg_50]
 * 000000014026A3FE: mov     edx, 5
 * 000000014026A403: lea     r9, WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids
 * 000000014026A40A: cmovz   rdi, r13
 * 000000014026A40E: mov     rcx, rbp
 * 000000014026A411: and     [rsp+88h+var_20], 0
 * 000000014026A417: mov     [rsp+88h+var_28], rbx
 * 000000014026A41C: mov     [rsp+88h+var_30], rdi
 * 000000014026A421: mov     [rsp+88h+var_38], r12
 * 000000014026A426: mov     [rsp+88h+var_40], rax
 * 000000014026A42B: lea     rax, [rsp+88h+arg_48]
 * 000000014026A433: mov     [rsp+88h+var_48], r12
 * 000000014026A438: mov     [rsp+88h+var_50], rax
 * 000000014026A43D: lea     rax, [rsp+88h+arg_40]
 * 000000014026A445: mov     [rsp+88h+var_58], r12
 * 000000014026A44A: mov     [rsp+88h+var_60], rax
 * 000000014026A44F: mov     word ptr [rsp+88h+var_68], r8w
 * 000000014026A455: lea     r8d, [rdx+0Ah]
 * 000000014026A459: call    cs:__imp_WppAutoLogTrace
 * 000000014026A460: nop     dword ptr [rax+rax+00h]
 * 000000014026A465: lea     r11, [rsp+88h+var_18]
 * 000000014026A46A: mov     rbx, [r11+20h]
 * 000000014026A46E: mov     rbp, [r11+28h]
 * 000000014026A472: mov     rsi, [r11+30h]
 * 000000014026A476: mov     rsp, r11
 * 000000014026A479: pop     r13
 * 000000014026A47B: pop     r12
 * 000000014026A47D: pop     rdi
 * 000000014026A47E: retn
 */
