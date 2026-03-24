/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_SqDD @ 0x1402D307C
 * Callers:
 *     ?ApplyWindowActionErrorCode@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@W4ApplyWindowActionError@AdvancedWindowPos@@@Z @ 0x1402CAA24 (-ApplyWindowActionErrorCode@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@W4ApplyWindowActionError@Advance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_SqDD @ 0x1402D307C
 * Reason: Hex-Rays returned no pseudocode for 0x1402D307C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402D307C: mov     rax, rsp
 * 00000001402D307F: mov     [rax+8], rbx
 * 00000001402D3083: mov     [rax+10h], rbp
 * 00000001402D3087: mov     [rax+18h], rsi
 * 00000001402D308B: mov     [rax+20h], rdi
 * 00000001402D308F: push    r12
 * 00000001402D3091: push    r14
 * 00000001402D3093: push    r15
 * 00000001402D3095: sub     rsp, 70h
 * 00000001402D3099: mov     rbx, [rsp+88h+arg_40]
 * 00000001402D30A1: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001402D30A5: xor     r15d, r15d
 * 00000001402D30A8: mov     r14, r9
 * 00000001402D30AB: mov     bpl, r8b
 * 00000001402D30AE: mov     r11, rcx
 * 00000001402D30B1: lea     r8, aNull_0; "NULL"
 * 00000001402D30B8: lea     esi, [rdi+0Bh]
 * 00000001402D30BB: lea     r9d, [rdi+0Eh]
 * 00000001402D30BF: lea     r12d, [rdi+5]
 * 00000001402D30C3: test    dl, dl
 * 00000001402D30C5: jz      loc_1402D3168
 * 00000001402D30CB: mov     r10, cs:pfnWppTraceMessage
 * 00000001402D30D2: test    rbx, rbx
 * 00000001402D30D5: jz      short loc_1402D30EE
 * 00000001402D30D7: mov     rax, rdi
 * 00000001402D30DA: inc     rax
 * 00000001402D30DD: cmp     [rbx+rax*2], r15w
 * 00000001402D30E2: jnz     short loc_1402D30DA
 * 00000001402D30E4: lea     rax, ds:2[rax*2]
 * 00000001402D30EC: jmp     short loc_1402D30F1
 * 00000001402D30EE: mov     rax, rsi
 * 00000001402D30F1: mov     [rsp+88h+var_28], r15
 * 00000001402D30F6: lea     rdx, [rsp+88h+arg_58]
 * 00000001402D30FE: mov     [rsp+88h+var_30], r12
 * 00000001402D3103: test    rbx, rbx
 * 00000001402D3106: mov     [rsp+88h+var_38], rdx
 * 00000001402D310B: mov     rcx, rbx
 * 00000001402D310E: mov     [rsp+88h+var_40], r12
 * 00000001402D3113: lea     rdx, [rsp+88h+arg_50]
 * 00000001402D311B: mov     [rsp+88h+var_48], rdx
 * 00000001402D3120: cmovz   rcx, r8
 * 00000001402D3124: lea     rdx, [rsp+88h+arg_48]
 * 00000001402D312C: mov     [rsp+88h+var_50], 8
 * 00000001402D3135: mov     [rsp+88h+var_58], rdx
 * 00000001402D313A: lea     r8, WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids
 * 00000001402D3141: mov     [rsp+88h+var_60], rax
 * 00000001402D3146: mov     edx, 2Bh ; '+'
 * 00000001402D314B: mov     [rsp+88h+var_68], rcx
 * 00000001402D3150: mov     rax, r10
 * 00000001402D3153: mov     rcx, r11
 * 00000001402D3156: call    _guard_dispatch_icall
 * 00000001402D315B: lea     r8, aNull_0; "NULL"
 * 00000001402D3162: mov     r9d, 0Dh
 * 00000001402D3168: test    bpl, bpl
 * 00000001402D316B: jz      loc_1402D31FC
 * 00000001402D3171: test    rbx, rbx
 * 00000001402D3174: jz      short loc_1402D318B
 * 00000001402D3176: inc     rdi
 * 00000001402D3179: cmp     [rbx+rdi*2], r15w
 * 00000001402D317E: jnz     short loc_1402D3176
 * 00000001402D3180: lea     rsi, ds:2[rdi*2]
 * 00000001402D3188: test    rbx, rbx
 * 00000001402D318B: mov     [rsp+88h+var_20], r15
 * 00000001402D3190: lea     rax, [rsp+88h+arg_58]
 * 00000001402D3198: mov     [rsp+88h+var_28], r12
 * 00000001402D319D: cmovz   rbx, r8
 * 00000001402D31A1: mov     [rsp+88h+var_30], rax
 * 00000001402D31A6: mov     r8d, r12d
 * 00000001402D31A9: mov     [rsp+88h+var_38], r12
 * 00000001402D31AE: lea     rax, [rsp+88h+arg_50]
 * 00000001402D31B6: mov     [rsp+88h+var_40], rax
 * 00000001402D31BB: mov     edx, 3
 * 00000001402D31C0: mov     [rsp+88h+var_48], 8
 * 00000001402D31C9: lea     rax, [rsp+88h+arg_48]
 * 00000001402D31D1: mov     [rsp+88h+var_50], rax
 * 00000001402D31D6: mov     rcx, r14
 * 00000001402D31D9: mov     [rsp+88h+var_58], rsi
 * 00000001402D31DE: mov     [rsp+88h+var_60], rbx
 * 00000001402D31E3: mov     word ptr [rsp+88h+var_68], r9w
 * 00000001402D31E9: lea     r9, WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids
 * 00000001402D31F0: call    cs:__imp_WppAutoLogTrace
 * 00000001402D31F7: nop     dword ptr [rax+rax+00h]
 * 00000001402D31FC: lea     r11, [rsp+88h+var_18]
 * 00000001402D3201: mov     rbx, [r11+20h]
 * 00000001402D3205: mov     rbp, [r11+28h]
 * 00000001402D3209: mov     rsi, [r11+30h]
 * 00000001402D320D: mov     rdi, [r11+38h]
 * 00000001402D3211: mov     rsp, r11
 * 00000001402D3214: pop     r15
 * 00000001402D3216: pop     r14
 * 00000001402D3218: pop     r12
 * 00000001402D321A: retn
 */
