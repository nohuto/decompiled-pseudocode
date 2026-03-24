/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dlDdddddl @ 0x1402E530C
 * Callers:
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x14025F0FC (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dlDdddddl @ 0x1402E530C
 * Reason: Hex-Rays returned no pseudocode for 0x1402E530C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E530C: mov     r11, rsp
 * 00000001402E530F: mov     [r11+8], rbx
 * 00000001402E5313: mov     [r11+10h], rsi
 * 00000001402E5317: mov     [r11+18h], rdi
 * 00000001402E531B: mov     [r11+20h], r14
 * 00000001402E531F: push    rbp
 * 00000001402E5320: lea     rbp, [r11-0Fh]
 * 00000001402E5324: sub     rsp, 0C0h
 * 00000001402E532B: mov     esi, 4
 * 00000001402E5330: mov     rdi, r9
 * 00000001402E5333: mov     bl, r8b
 * 00000001402E5336: lea     r14d, [rsi+14h]
 * 00000001402E533A: test    dl, dl
 * 00000001402E533C: jz      loc_1402E53DA
 * 00000001402E5342: and     qword ptr [r11-18h], 0
 * 00000001402E5347: lea     rdx, [rbp+7+arg_80]
 * 00000001402E534E: mov     rax, cs:pfnWppTraceMessage
 * 00000001402E5355: lea     r8, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E535C: mov     [r11-20h], rsi
 * 00000001402E5360: mov     r9d, r14d
 * 00000001402E5363: mov     [r11-28h], rdx
 * 00000001402E5367: lea     rdx, [rbp+7+arg_78]
 * 00000001402E536E: mov     [r11-30h], rsi
 * 00000001402E5372: mov     [r11-38h], rdx
 * 00000001402E5376: lea     rdx, [rbp+7+arg_70]
 * 00000001402E537D: mov     [r11-40h], rsi
 * 00000001402E5381: mov     [r11-48h], rdx
 * 00000001402E5385: lea     rdx, [rbp+7+arg_68]
 * 00000001402E5389: mov     [r11-50h], rsi
 * 00000001402E538D: mov     [r11-58h], rdx
 * 00000001402E5391: lea     rdx, [rbp+7+arg_60]
 * 00000001402E5395: mov     [r11-60h], rsi
 * 00000001402E5399: mov     [r11-68h], rdx
 * 00000001402E539D: lea     rdx, [rbp+7+arg_58]
 * 00000001402E53A1: mov     [r11-70h], rsi
 * 00000001402E53A5: mov     [r11-78h], rdx
 * 00000001402E53A9: lea     rdx, [rbp+7+arg_50]
 * 00000001402E53AD: mov     [r11-80h], rsi
 * 00000001402E53B1: mov     [rsp+0C0h+var_80], rdx
 * 00000001402E53B6: lea     rdx, [rbp+7+arg_48]
 * 00000001402E53BA: mov     [rsp+0C0h+var_88], rsi
 * 00000001402E53BF: mov     [rsp+0C0h+var_90], rdx
 * 00000001402E53C4: lea     rdx, [rbp+7+arg_40]
 * 00000001402E53C8: mov     [rsp+0C0h+var_98], rsi
 * 00000001402E53CD: mov     [rsp+0C0h+var_A0], rdx
 * 00000001402E53D2: lea     edx, [rsi+27h]
 * 00000001402E53D5: call    _guard_dispatch_icall
 * 00000001402E53DA: test    bl, bl
 * 00000001402E53DC: jz      loc_1402E54AB
 * 00000001402E53E2: and     qword ptr [rsp+0C0h+var_8], 0
 * 00000001402E53EB: lea     rax, [rbp+7+arg_80]
 * 00000001402E53F2: mov     [rsp+0C0h+var_10], rsi
 * 00000001402E53FA: lea     r9, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E5401: mov     [rsp+0C0h+var_18], rax
 * 00000001402E5409: mov     r8d, 9
 * 00000001402E540F: mov     [rsp+0C0h+var_20], rsi
 * 00000001402E5417: lea     rax, [rbp+7+arg_78]
 * 00000001402E541E: mov     [rsp+0C0h+var_28], rax
 * 00000001402E5426: mov     edx, esi
 * 00000001402E5428: mov     [rsp+0C0h+var_30], rsi
 * 00000001402E5430: lea     rax, [rbp+7+arg_70]
 * 00000001402E5437: mov     [rsp+0C0h+var_38], rax
 * 00000001402E543F: mov     rcx, rdi
 * 00000001402E5442: mov     [rsp+0C0h+var_40], rsi
 * 00000001402E544A: lea     rax, [rbp+7+arg_68]
 * 00000001402E544E: mov     [rsp+0C0h+var_48], rax
 * 00000001402E5453: lea     rax, [rbp+7+arg_60]
 * 00000001402E5457: mov     [rsp+0C0h+var_50], rsi
 * 00000001402E545C: mov     [rsp+0C0h+var_58], rax
 * 00000001402E5461: lea     rax, [rbp+7+arg_58]
 * 00000001402E5465: mov     [rsp+0C0h+var_60], rsi
 * 00000001402E546A: mov     [rsp+0C0h+var_68], rax
 * 00000001402E546F: lea     rax, [rbp+7+arg_50]
 * 00000001402E5473: mov     [rsp+0C0h+var_70], rsi
 * 00000001402E5478: mov     [rsp+0C0h+var_78], rax
 * 00000001402E547D: lea     rax, [rbp+7+arg_48]
 * 00000001402E5481: mov     [rsp+0C0h+var_80], rsi
 * 00000001402E5486: mov     [rsp+0C0h+var_88], rax
 * 00000001402E548B: lea     rax, [rbp+7+arg_40]
 * 00000001402E548F: mov     [rsp+0C0h+var_90], rsi
 * 00000001402E5494: mov     [rsp+0C0h+var_98], rax
 * 00000001402E5499: mov     word ptr [rsp+0C0h+var_A0], r14w
 * 00000001402E549F: call    cs:__imp_WppAutoLogTrace
 * 00000001402E54A6: nop     dword ptr [rax+rax+00h]
 * 00000001402E54AB: lea     r11, [rsp+0C0h+var_s0]
 * 00000001402E54B3: mov     rbx, [r11+10h]
 * 00000001402E54B7: mov     rsi, [r11+18h]
 * 00000001402E54BB: mov     rdi, [r11+20h]
 * 00000001402E54BF: mov     r14, [r11+28h]
 * 00000001402E54C3: mov     rsp, r11
 * 00000001402E54C6: pop     rbp
 * 00000001402E54C7: retn
 */
