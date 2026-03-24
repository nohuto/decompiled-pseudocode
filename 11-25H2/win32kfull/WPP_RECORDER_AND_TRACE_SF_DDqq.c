/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DDqq @ 0x14028BA1C
 * Callers:
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1401D2B2C (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_DDqq @ 0x14028BA1C
 * Reason: Hex-Rays returned no pseudocode for 0x14028BA1C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014028BA1C: mov     r11, rsp
 * 000000014028BA1F: mov     [r11+8], rbx
 * 000000014028BA23: mov     [r11+10h], rbp
 * 000000014028BA27: mov     [r11+18h], rsi
 * 000000014028BA2B: mov     [r11+20h], rdi
 * 000000014028BA2F: push    r14
 * 000000014028BA31: sub     rsp, 70h
 * 000000014028BA35: mov     ebp, 8
 * 000000014028BA3A: mov     rdi, r9
 * 000000014028BA3D: mov     bl, r8b
 * 000000014028BA40: lea     esi, [rbp-4]
 * 000000014028BA43: lea     r14d, [rbp+9]
 * 000000014028BA47: test    dl, dl
 * 000000014028BA49: jz      short loc_14028BA99
 * 000000014028BA4B: and     qword ptr [r11-18h], 0
 * 000000014028BA50: lea     rdx, [r11+60h]
 * 000000014028BA54: mov     rax, cs:pfnWppTraceMessage
 * 000000014028BA5B: lea     r8, WPP_432efc7bf3b536e41dd1d6a6b78a846f_Traceguids
 * 000000014028BA62: mov     [r11-20h], rbp
 * 000000014028BA66: mov     r9d, r14d
 * 000000014028BA69: mov     [r11-28h], rdx
 * 000000014028BA6D: lea     rdx, [r11+58h]
 * 000000014028BA71: mov     [r11-30h], rbp
 * 000000014028BA75: mov     [r11-38h], rdx
 * 000000014028BA79: lea     rdx, [r11+50h]
 * 000000014028BA7D: mov     [r11-40h], rsi
 * 000000014028BA81: mov     [r11-48h], rdx
 * 000000014028BA85: lea     rdx, [r11+48h]
 * 000000014028BA89: mov     [r11-50h], rsi
 * 000000014028BA8D: mov     [r11-58h], rdx
 * 000000014028BA91: lea     edx, [rbp+23h]
 * 000000014028BA94: call    _guard_dispatch_icall
 * 000000014028BA99: test    bl, bl
 * 000000014028BA9B: jz      short loc_14028BB0F
 * 000000014028BA9D: and     [rsp+78h+var_10], 0
 * 000000014028BAA3: lea     rax, [rsp+78h+arg_58]
 * 000000014028BAAB: mov     [rsp+78h+var_18], rbp
 * 000000014028BAB0: lea     r9, WPP_432efc7bf3b536e41dd1d6a6b78a846f_Traceguids
 * 000000014028BAB7: mov     [rsp+78h+var_20], rax
 * 000000014028BABC: mov     r8d, 6
 * 000000014028BAC2: mov     [rsp+78h+var_28], rbp
 * 000000014028BAC7: lea     rax, [rsp+78h+arg_50]
 * 000000014028BACF: mov     [rsp+78h+var_30], rax
 * 000000014028BAD4: mov     edx, esi
 * 000000014028BAD6: mov     [rsp+78h+var_38], rsi
 * 000000014028BADB: lea     rax, [rsp+78h+arg_48]
 * 000000014028BAE3: mov     [rsp+78h+var_40], rax
 * 000000014028BAE8: mov     rcx, rdi
 * 000000014028BAEB: lea     rax, [rsp+78h+arg_40]
 * 000000014028BAF3: mov     [rsp+78h+var_48], rsi
 * 000000014028BAF8: mov     [rsp+78h+var_50], rax
 * 000000014028BAFD: mov     [rsp+78h+var_58], r14w
 * 000000014028BB03: call    cs:__imp_WppAutoLogTrace
 * 000000014028BB0A: nop     dword ptr [rax+rax+00h]
 * 000000014028BB0F: lea     r11, [rsp+78h+var_8]
 * 000000014028BB14: mov     rbx, [r11+10h]
 * 000000014028BB18: mov     rbp, [r11+18h]
 * 000000014028BB1C: mov     rsi, [r11+20h]
 * 000000014028BB20: mov     rdi, [r11+28h]
 * 000000014028BB24: mov     rsp, r11
 * 000000014028BB27: pop     r14
 * 000000014028BB29: retn
 */
