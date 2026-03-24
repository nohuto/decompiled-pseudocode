/*
 * XREFs of WPP_RECORDER_SF_iDD @ 0x1400391F8
 * Callers:
 *     NotifyHandler @ 0x14001E9B0 (NotifyHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_iDD @ 0x1400391F8
 * Reason: Hex-Rays returned no pseudocode for 0x1400391F8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400391F8: mov     [rsp+arg_0], rbx
 * 00000001400391FD: mov     [rsp+arg_8], rbp
 * 0000000140039202: push    rdi
 * 0000000140039203: sub     rsp, 60h
 * 0000000140039207: mov     rbx, rcx
 * 000000014003920A: mov     edi, 4
 * 000000014003920F: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140039216: lea     ebp, [rdi+6]
 * 0000000140039219: mov     eax, [rcx+2Ch]
 * 000000014003921C: test    al, 2
 * 000000014003921E: jnz     short loc_140039297
 * 0000000140039220: mov     [rsp+68h+var_10], 0
 * 0000000140039229: lea     rax, [rsp+68h+arg_38]
 * 0000000140039231: mov     [rsp+68h+var_18], rdi
 * 0000000140039236: lea     r9, WPP_50e810bdc9813ec783e127f6110de7f2_Traceguids
 * 000000014003923D: mov     [rsp+68h+var_20], rax
 * 0000000140039242: mov     r8d, 2
 * 0000000140039248: mov     [rsp+68h+var_28], rdi
 * 000000014003924D: lea     rax, [rsp+68h+arg_30]
 * 0000000140039255: mov     [rsp+68h+var_30], rax
 * 000000014003925A: mov     edx, edi
 * 000000014003925C: lea     rax, [rsp+68h+arg_28]
 * 0000000140039264: mov     [rsp+68h+var_38], 8
 * 000000014003926D: mov     [rsp+68h+var_40], rax
 * 0000000140039272: mov     rcx, rbx
 * 0000000140039275: mov     word ptr [rsp+68h+var_48], bp
 * 000000014003927A: call    cs:__imp_WppAutoLogTrace
 * 0000000140039281: nop     dword ptr [rax+rax+00h]
 * 0000000140039286: mov     rbx, [rsp+68h+arg_0]
 * 000000014003928B: mov     rbp, [rsp+68h+arg_8]
 * 0000000140039290: add     rsp, 60h
 * 0000000140039294: pop     rdi
 * 0000000140039295: retn
 * 0000000140039297: cmp     [rcx+29h], dil
 * 000000014003929B: jb      short loc_140039220
 * 000000014003929D: mov     rax, cs:pfnWppTraceMessage
 * 00000001400392A4: lea     rdx, [rsp+68h+arg_38]
 * 00000001400392AC: mov     rcx, [rcx+18h]
 * 00000001400392B0: lea     r8, WPP_50e810bdc9813ec783e127f6110de7f2_Traceguids
 * 00000001400392B7: mov     [rsp+68h+var_18], 0
 * 00000001400392C0: mov     r9d, ebp
 * 00000001400392C3: mov     [rsp+68h+var_20], rdi
 * 00000001400392C8: mov     [rsp+68h+var_28], rdx
 * 00000001400392CD: lea     rdx, [rsp+68h+arg_30]
 * 00000001400392D5: mov     [rsp+68h+var_30], rdi
 * 00000001400392DA: mov     [rsp+68h+var_38], rdx
 * 00000001400392DF: lea     rdx, [rsp+68h+arg_28]
 * 00000001400392E7: mov     [rsp+68h+var_40], 8
 * 00000001400392F0: mov     [rsp+68h+var_48], rdx
 * 00000001400392F5: mov     edx, 2Bh ; '+'
 * 00000001400392FA: call    _guard_dispatch_icall
 * 00000001400392FF: jmp     loc_140039220
 */
