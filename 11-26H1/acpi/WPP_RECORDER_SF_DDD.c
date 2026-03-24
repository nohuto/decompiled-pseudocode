/*
 * XREFs of WPP_RECORDER_SF_dDD @ 0x14006182C
 * Callers:
 *     ACPIGpeInstallRemoveIndex @ 0x14006154C (ACPIGpeInstallRemoveIndex.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dDD @ 0x14006182C
 * Reason: Hex-Rays returned no pseudocode for 0x14006182C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014006182C: mov     r11, rsp
 * 000000014006182F: mov     [r11+8], rbx
 * 0000000140061833: mov     [r11+10h], rsi
 * 0000000140061837: push    rdi
 * 0000000140061838: sub     rsp, 60h
 * 000000014006183C: mov     rdi, rcx
 * 000000014006183F: movzx   ebx, r9w
 * 0000000140061843: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000014006184A: mov     esi, 4
 * 000000014006184F: mov     eax, [rcx+2Ch]
 * 0000000140061852: test    al, 2
 * 0000000140061854: jz      short loc_1400618A5
 * 0000000140061856: cmp     [rcx+29h], sil
 * 000000014006185A: jb      short loc_1400618A5
 * 000000014006185C: mov     rax, cs:pfnWppTraceMessage
 * 0000000140061863: lea     rdx, [r11+40h]
 * 0000000140061867: mov     rcx, [rcx+18h]
 * 000000014006186B: lea     r8, WPP_1219ceb08a59382993486227e101cade_Traceguids
 * 0000000140061872: mov     qword ptr [r11-18h], 0
 * 000000014006187A: mov     r9d, ebx
 * 000000014006187D: mov     [r11-20h], rsi
 * 0000000140061881: mov     [r11-28h], rdx
 * 0000000140061885: lea     rdx, [r11+38h]
 * 0000000140061889: mov     [r11-30h], rsi
 * 000000014006188D: mov     [r11-38h], rdx
 * 0000000140061891: lea     rdx, [r11+30h]
 * 0000000140061895: mov     [r11-40h], rsi
 * 0000000140061899: mov     [r11-48h], rdx
 * 000000014006189D: lea     edx, [rsi+27h]
 * 00000001400618A0: call    _guard_dispatch_icall
 * 00000001400618A5: mov     [rsp+68h+var_10], 0
 * 00000001400618AE: lea     rax, [rsp+68h+arg_38]
 * 00000001400618B6: mov     [rsp+68h+var_18], rsi
 * 00000001400618BB: lea     r9, WPP_1219ceb08a59382993486227e101cade_Traceguids
 * 00000001400618C2: mov     [rsp+68h+var_20], rax
 * 00000001400618C7: mov     r8d, 2
 * 00000001400618CD: mov     [rsp+68h+var_28], rsi
 * 00000001400618D2: lea     rax, [rsp+68h+arg_30]
 * 00000001400618DA: mov     [rsp+68h+var_30], rax
 * 00000001400618DF: mov     edx, esi
 * 00000001400618E1: lea     rax, [rsp+68h+arg_28]
 * 00000001400618E9: mov     [rsp+68h+var_38], rsi
 * 00000001400618EE: mov     [rsp+68h+var_40], rax
 * 00000001400618F3: mov     rcx, rdi
 * 00000001400618F6: mov     [rsp+68h+var_48], bx
 * 00000001400618FB: call    cs:__imp_WppAutoLogTrace
 * 0000000140061902: nop     dword ptr [rax+rax+00h]
 * 0000000140061907: mov     rbx, [rsp+68h+arg_0]
 * 000000014006190C: mov     rsi, [rsp+68h+arg_8]
 * 0000000140061911: add     rsp, 60h
 * 0000000140061915: pop     rdi
 * 0000000140061916: retn
 */
