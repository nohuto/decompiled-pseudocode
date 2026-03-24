/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DDDq @ 0x1401CD2E0
 * Callers:
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1401DFB58 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_DDDq @ 0x1401CD2E0
 * Reason: Hex-Rays returned no pseudocode for 0x1401CD2E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CD2E0: mov     [rsp+arg_0], rbx
 * 00000001401CD2E5: mov     [rsp+arg_8], rsi
 * 00000001401CD2EA: mov     [rsp+arg_10], rdi
 * 00000001401CD2EF: push    r14
 * 00000001401CD2F1: sub     rsp, 70h
 * 00000001401CD2F5: mov     esi, 4
 * 00000001401CD2FA: mov     rdi, r9
 * 00000001401CD2FD: mov     bl, r8b
 * 00000001401CD300: lea     r14d, [rsi+0Bh]
 * 00000001401CD304: test    dl, dl
 * 00000001401CD306: jnz     loc_1401CD39E
 * 00000001401CD30C: test    bl, bl
 * 00000001401CD30E: jz      short loc_1401CD386
 * 00000001401CD310: and     [rsp+78h+var_10], 0
 * 00000001401CD316: lea     rax, [rsp+78h+arg_58]
 * 00000001401CD31E: mov     [rsp+78h+var_18], 8
 * 00000001401CD327: lea     r9, WPP_16d99dae375038a043ec2d3ce624d2cd_Traceguids
 * 00000001401CD32E: mov     [rsp+78h+var_20], rax
 * 00000001401CD333: mov     r8d, 0Bh
 * 00000001401CD339: mov     [rsp+78h+var_28], rsi
 * 00000001401CD33E: lea     rax, [rsp+78h+arg_50]
 * 00000001401CD346: mov     [rsp+78h+var_30], rax
 * 00000001401CD34B: mov     edx, esi
 * 00000001401CD34D: mov     [rsp+78h+var_38], rsi
 * 00000001401CD352: lea     rax, [rsp+78h+arg_48]
 * 00000001401CD35A: mov     [rsp+78h+var_40], rax
 * 00000001401CD35F: mov     rcx, rdi
 * 00000001401CD362: lea     rax, [rsp+78h+arg_40]
 * 00000001401CD36A: mov     [rsp+78h+var_48], rsi
 * 00000001401CD36F: mov     [rsp+78h+var_50], rax
 * 00000001401CD374: mov     word ptr [rsp+78h+var_58], r14w
 * 00000001401CD37A: call    cs:__imp_WppAutoLogTrace
 * 00000001401CD381: nop     dword ptr [rax+rax+00h]
 * 00000001401CD386: lea     r11, [rsp+78h+var_8]
 * 00000001401CD38B: mov     rbx, [r11+10h]
 * 00000001401CD38F: mov     rsi, [r11+18h]
 * 00000001401CD393: mov     rdi, [r11+20h]
 * 00000001401CD397: mov     rsp, r11
 * 00000001401CD39A: pop     r14
 * 00000001401CD39C: retn
 * 00000001401CD39E: and     [rsp+78h+var_18], 0
 * 00000001401CD3A4: lea     rdx, [rsp+78h+arg_58]
 * 00000001401CD3AC: mov     rax, cs:pfnWppTraceMessage
 * 00000001401CD3B3: lea     r8, WPP_16d99dae375038a043ec2d3ce624d2cd_Traceguids
 * 00000001401CD3BA: mov     [rsp+78h+var_20], 8
 * 00000001401CD3C3: mov     r9d, r14d
 * 00000001401CD3C6: mov     [rsp+78h+var_28], rdx
 * 00000001401CD3CB: lea     rdx, [rsp+78h+arg_50]
 * 00000001401CD3D3: mov     [rsp+78h+var_30], rsi
 * 00000001401CD3D8: mov     [rsp+78h+var_38], rdx
 * 00000001401CD3DD: lea     rdx, [rsp+78h+arg_48]
 * 00000001401CD3E5: mov     [rsp+78h+var_40], rsi
 * 00000001401CD3EA: mov     [rsp+78h+var_48], rdx
 * 00000001401CD3EF: lea     rdx, [rsp+78h+arg_40]
 * 00000001401CD3F7: mov     [rsp+78h+var_50], rsi
 * 00000001401CD3FC: mov     [rsp+78h+var_58], rdx
 * 00000001401CD401: mov     edx, 2Bh ; '+'
 * 00000001401CD406: call    _guard_dispatch_icall
 * 00000001401CD40B: jmp     loc_1401CD30C
 */
