/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qdddddddd @ 0x1402AF1AC
 * Callers:
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x140211020 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qdddddddd @ 0x1402AF1AC
 * Reason: Hex-Rays returned no pseudocode for 0x1402AF1AC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402AF1AC: mov     r11, rsp
 * 00000001402AF1AF: mov     [r11+8], rbx
 * 00000001402AF1B3: mov     [r11+10h], rsi
 * 00000001402AF1B7: mov     [r11+18h], rdi
 * 00000001402AF1BB: mov     [r11+20h], r15
 * 00000001402AF1BF: push    rbp
 * 00000001402AF1C0: lea     rbp, [r11-0Fh]
 * 00000001402AF1C4: sub     rsp, 0C0h
 * 00000001402AF1CB: mov     esi, 4
 * 00000001402AF1D0: mov     rdi, r9
 * 00000001402AF1D3: mov     bl, r8b
 * 00000001402AF1D6: lea     r15d, [rsi+13h]
 * 00000001402AF1DA: test    dl, dl
 * 00000001402AF1DC: jz      loc_1402AF27E
 * 00000001402AF1E2: and     qword ptr [r11-18h], 0
 * 00000001402AF1E7: lea     rdx, [rbp+7+arg_80]
 * 00000001402AF1EE: mov     rax, cs:pfnWppTraceMessage
 * 00000001402AF1F5: lea     r8, WPP_3ec08e089dee332c19828920b6c3c996_Traceguids
 * 00000001402AF1FC: mov     [r11-20h], rsi
 * 00000001402AF200: mov     r9d, r15d
 * 00000001402AF203: mov     [r11-28h], rdx
 * 00000001402AF207: lea     rdx, [rbp+7+arg_78]
 * 00000001402AF20E: mov     [r11-30h], rsi
 * 00000001402AF212: mov     [r11-38h], rdx
 * 00000001402AF216: lea     rdx, [rbp+7+arg_70]
 * 00000001402AF21D: mov     [r11-40h], rsi
 * 00000001402AF221: mov     [r11-48h], rdx
 * 00000001402AF225: lea     rdx, [rbp+7+arg_68]
 * 00000001402AF229: mov     [r11-50h], rsi
 * 00000001402AF22D: mov     [r11-58h], rdx
 * 00000001402AF231: lea     rdx, [rbp+7+arg_60]
 * 00000001402AF235: mov     [r11-60h], rsi
 * 00000001402AF239: mov     [r11-68h], rdx
 * 00000001402AF23D: lea     rdx, [rbp+7+arg_58]
 * 00000001402AF241: mov     [r11-70h], rsi
 * 00000001402AF245: mov     [r11-78h], rdx
 * 00000001402AF249: lea     rdx, [rbp+7+arg_50]
 * 00000001402AF24D: mov     [r11-80h], rsi
 * 00000001402AF251: mov     [rsp+0C0h+var_80], rdx
 * 00000001402AF256: lea     rdx, [rbp+7+arg_48]
 * 00000001402AF25A: mov     [rsp+0C0h+var_88], rsi
 * 00000001402AF25F: mov     [rsp+0C0h+var_90], rdx
 * 00000001402AF264: lea     rdx, [rbp+7+arg_40]
 * 00000001402AF268: mov     [rsp+0C0h+var_98], 8
 * 00000001402AF271: mov     [rsp+0C0h+var_A0], rdx
 * 00000001402AF276: lea     edx, [rsi+27h]
 * 00000001402AF279: call    _guard_dispatch_icall
 * 00000001402AF27E: test    bl, bl
 * 00000001402AF280: jz      loc_1402AF354
 * 00000001402AF286: and     qword ptr [rsp+0C0h+var_8], 0
 * 00000001402AF28F: lea     rax, [rbp+7+arg_80]
 * 00000001402AF296: mov     [rsp+0C0h+var_10], rsi
 * 00000001402AF29E: lea     r9, WPP_3ec08e089dee332c19828920b6c3c996_Traceguids
 * 00000001402AF2A5: mov     [rsp+0C0h+var_18], rax
 * 00000001402AF2AD: mov     edx, 3
 * 00000001402AF2B2: mov     [rsp+0C0h+var_20], rsi
 * 00000001402AF2BA: lea     rax, [rbp+7+arg_78]
 * 00000001402AF2C1: mov     [rsp+0C0h+var_28], rax
 * 00000001402AF2C9: mov     rcx, rdi
 * 00000001402AF2CC: mov     [rsp+0C0h+var_30], rsi
 * 00000001402AF2D4: lea     rax, [rbp+7+arg_70]
 * 00000001402AF2DB: mov     [rsp+0C0h+var_38], rax
 * 00000001402AF2E3: lea     r8d, [rdx+4]
 * 00000001402AF2E7: mov     [rsp+0C0h+var_40], rsi
 * 00000001402AF2EF: lea     rax, [rbp+7+arg_68]
 * 00000001402AF2F3: mov     [rsp+0C0h+var_48], rax
 * 00000001402AF2F8: lea     rax, [rbp+7+arg_60]
 * 00000001402AF2FC: mov     [rsp+0C0h+var_50], rsi
 * 00000001402AF301: mov     [rsp+0C0h+var_58], rax
 * 00000001402AF306: lea     rax, [rbp+7+arg_58]
 * 00000001402AF30A: mov     [rsp+0C0h+var_60], rsi
 * 00000001402AF30F: mov     [rsp+0C0h+var_68], rax
 * 00000001402AF314: lea     rax, [rbp+7+arg_50]
 * 00000001402AF318: mov     [rsp+0C0h+var_70], rsi
 * 00000001402AF31D: mov     [rsp+0C0h+var_78], rax
 * 00000001402AF322: lea     rax, [rbp+7+arg_48]
 * 00000001402AF326: mov     [rsp+0C0h+var_80], rsi
 * 00000001402AF32B: mov     [rsp+0C0h+var_88], rax
 * 00000001402AF330: lea     rax, [rbp+7+arg_40]
 * 00000001402AF334: mov     [rsp+0C0h+var_90], 8
 * 00000001402AF33D: mov     [rsp+0C0h+var_98], rax
 * 00000001402AF342: mov     word ptr [rsp+0C0h+var_A0], r15w
 * 00000001402AF348: call    cs:__imp_WppAutoLogTrace
 * 00000001402AF34F: nop     dword ptr [rax+rax+00h]
 * 00000001402AF354: lea     r11, [rsp+0C0h+var_s0]
 * 00000001402AF35C: mov     rbx, [r11+10h]
 * 00000001402AF360: mov     rsi, [r11+18h]
 * 00000001402AF364: mov     rdi, [r11+20h]
 * 00000001402AF368: mov     r15, [r11+28h]
 * 00000001402AF36C: mov     rsp, r11
 * 00000001402AF36F: pop     rbp
 * 00000001402AF370: retn
 */
