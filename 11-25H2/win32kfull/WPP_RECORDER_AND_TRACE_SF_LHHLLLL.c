/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_LHHLLLL @ 0x14028E2FC
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1401C51F8 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_LHHLLLL @ 0x14028E2FC
 * Reason: Hex-Rays returned no pseudocode for 0x14028E2FC
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014028E2FC: mov     r11, rsp
 * 000000014028E2FF: mov     [r11+8], rbx
 * 000000014028E303: mov     [r11+10h], rsi
 * 000000014028E307: mov     [r11+18h], rdi
 * 000000014028E30B: push    rbp
 * 000000014028E30C: push    r14
 * 000000014028E30E: push    r15
 * 000000014028E310: lea     rbp, [r11-1Fh]
 * 000000014028E314: sub     rsp, 0A0h
 * 000000014028E31B: mov     esi, 4
 * 000000014028E320: mov     rdi, r9
 * 000000014028E323: mov     bl, r8b
 * 000000014028E326: lea     r15d, [rsi+12h]
 * 000000014028E32A: lea     r14d, [rsi-2]
 * 000000014028E32E: test    dl, dl
 * 000000014028E330: jz      short loc_14028E3B0
 * 000000014028E332: and     qword ptr [r11-28h], 0
 * 000000014028E337: lea     rdx, [rbp+17h+arg_70]
 * 000000014028E33E: mov     rax, cs:pfnWppTraceMessage
 * 000000014028E345: lea     r8, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028E34C: mov     [r11-30h], rsi
 * 000000014028E350: mov     r9d, r15d
 * 000000014028E353: mov     [r11-38h], rdx
 * 000000014028E357: lea     rdx, [rbp+17h+arg_68]
 * 000000014028E35E: mov     [r11-40h], rsi
 * 000000014028E362: mov     [r11-48h], rdx
 * 000000014028E366: lea     rdx, [rbp+17h+arg_60]
 * 000000014028E36D: mov     [r11-50h], rsi
 * 000000014028E371: mov     [r11-58h], rdx
 * 000000014028E375: lea     rdx, [rbp+17h+arg_58]
 * 000000014028E379: mov     [r11-60h], rsi
 * 000000014028E37D: mov     [r11-68h], rdx
 * 000000014028E381: lea     rdx, [rbp+17h+arg_50]
 * 000000014028E385: mov     [r11-70h], r14
 * 000000014028E389: mov     [r11-78h], rdx
 * 000000014028E38D: lea     rdx, [rbp+17h+arg_48]
 * 000000014028E391: mov     [r11-80h], r14
 * 000000014028E395: mov     [rsp+0B0h+var_80], rdx
 * 000000014028E39A: lea     rdx, [rbp+17h+arg_40]
 * 000000014028E39E: mov     [rsp+0B0h+var_88], rsi
 * 000000014028E3A3: mov     [rsp+0B0h+var_90], rdx
 * 000000014028E3A8: lea     edx, [rsi+27h]
 * 000000014028E3AB: call    _guard_dispatch_icall
 * 000000014028E3B0: test    bl, bl
 * 000000014028E3B2: jz      loc_14028E45A
 * 000000014028E3B8: and     qword ptr [rsp+0B0h+var_18], 0
 * 000000014028E3C1: lea     rax, [rbp+17h+arg_70]
 * 000000014028E3C8: mov     [rsp+0B0h+var_20], rsi
 * 000000014028E3D0: lea     r9, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028E3D7: mov     [rsp+0B0h+var_28], rax
 * 000000014028E3DF: mov     edx, 5
 * 000000014028E3E4: mov     [rsp+0B0h+var_30], rsi
 * 000000014028E3EC: lea     rax, [rbp+17h+arg_68]
 * 000000014028E3F3: mov     [rsp+0B0h+var_38], rax
 * 000000014028E3F8: mov     rcx, rdi
 * 000000014028E3FB: mov     [rsp+0B0h+var_40], rsi
 * 000000014028E400: lea     rax, [rbp+17h+arg_60]
 * 000000014028E407: mov     [rsp+0B0h+var_48], rax
 * 000000014028E40C: lea     r8d, [rdx+5]
 * 000000014028E410: mov     [rsp+0B0h+var_50], rsi
 * 000000014028E415: lea     rax, [rbp+17h+arg_58]
 * 000000014028E419: mov     [rsp+0B0h+var_58], rax
 * 000000014028E41E: lea     rax, [rbp+17h+arg_50]
 * 000000014028E422: mov     [rsp+0B0h+var_60], r14
 * 000000014028E427: mov     [rsp+0B0h+var_68], rax
 * 000000014028E42C: lea     rax, [rbp+17h+arg_48]
 * 000000014028E430: mov     [rsp+0B0h+var_70], r14
 * 000000014028E435: mov     [rsp+0B0h+var_78], rax
 * 000000014028E43A: lea     rax, [rbp+17h+arg_40]
 * 000000014028E43E: mov     [rsp+0B0h+var_80], rsi
 * 000000014028E443: mov     [rsp+0B0h+var_88], rax
 * 000000014028E448: mov     word ptr [rsp+0B0h+var_90], r15w
 * 000000014028E44E: call    cs:__imp_WppAutoLogTrace
 * 000000014028E455: nop     dword ptr [rax+rax+00h]
 * 000000014028E45A: lea     r11, [rsp+0B0h+var_10]
 * 000000014028E462: mov     rbx, [r11+20h]
 * 000000014028E466: mov     rsi, [r11+28h]
 * 000000014028E46A: mov     rdi, [r11+30h]
 * 000000014028E46E: mov     rsp, r11
 * 000000014028E471: pop     r15
 * 000000014028E473: pop     r14
 * 000000014028E475: pop     rbp
 * 000000014028E476: retn
 */
