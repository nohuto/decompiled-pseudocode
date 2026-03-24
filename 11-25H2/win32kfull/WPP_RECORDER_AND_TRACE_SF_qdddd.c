/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qDDDD @ 0x1402D3224
 * Callers:
 *     ?CoalesceWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z @ 0x1402CAB84 (-CoalesceWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qDDDD @ 0x1402D3224
 * Reason: Hex-Rays returned no pseudocode for 0x1402D3224
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402D3224: mov     r11, rsp
 * 00000001402D3227: mov     [r11+8], rbx
 * 00000001402D322B: mov     [r11+10h], rsi
 * 00000001402D322F: mov     [r11+18h], rdi
 * 00000001402D3233: push    r14
 * 00000001402D3235: sub     rsp, 80h
 * 00000001402D323C: mov     esi, 4
 * 00000001402D3241: mov     rdi, r9
 * 00000001402D3244: mov     bl, r8b
 * 00000001402D3247: lea     r14d, [rsi+79h]
 * 00000001402D324B: test    dl, dl
 * 00000001402D324D: jz      short loc_1402D32AD
 * 00000001402D324F: and     qword ptr [r11-18h], 0
 * 00000001402D3254: lea     rdx, [r11+68h]
 * 00000001402D3258: mov     rax, cs:pfnWppTraceMessage
 * 00000001402D325F: lea     r8, WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids
 * 00000001402D3266: mov     [r11-20h], rsi
 * 00000001402D326A: mov     r9d, r14d
 * 00000001402D326D: mov     [r11-28h], rdx
 * 00000001402D3271: lea     rdx, [r11+60h]
 * 00000001402D3275: mov     [r11-30h], rsi
 * 00000001402D3279: mov     [r11-38h], rdx
 * 00000001402D327D: lea     rdx, [r11+58h]
 * 00000001402D3281: mov     [r11-40h], rsi
 * 00000001402D3285: mov     [r11-48h], rdx
 * 00000001402D3289: lea     rdx, [r11+50h]
 * 00000001402D328D: mov     [r11-50h], rsi
 * 00000001402D3291: mov     [r11-58h], rdx
 * 00000001402D3295: lea     rdx, [r11+48h]
 * 00000001402D3299: mov     qword ptr [r11-60h], 8
 * 00000001402D32A1: mov     [r11-68h], rdx
 * 00000001402D32A5: lea     edx, [rsi+27h]
 * 00000001402D32A8: call    _guard_dispatch_icall
 * 00000001402D32AD: test    bl, bl
 * 00000001402D32AF: jz      loc_1402D333D
 * 00000001402D32B5: and     [rsp+88h+var_10], 0
 * 00000001402D32BB: lea     rax, [rsp+88h+arg_60]
 * 00000001402D32C3: mov     [rsp+88h+var_18], rsi
 * 00000001402D32C8: lea     r9, WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids
 * 00000001402D32CF: mov     [rsp+88h+var_20], rax
 * 00000001402D32D4: mov     r8d, esi
 * 00000001402D32D7: mov     [rsp+88h+var_28], rsi
 * 00000001402D32DC: lea     rax, [rsp+88h+arg_58]
 * 00000001402D32E4: mov     [rsp+88h+var_30], rax
 * 00000001402D32E9: mov     edx, 5
 * 00000001402D32EE: mov     [rsp+88h+var_38], rsi
 * 00000001402D32F3: lea     rax, [rsp+88h+arg_50]
 * 00000001402D32FB: mov     [rsp+88h+var_40], rax
 * 00000001402D3300: mov     rcx, rdi
 * 00000001402D3303: mov     [rsp+88h+var_48], rsi
 * 00000001402D3308: lea     rax, [rsp+88h+arg_48]
 * 00000001402D3310: mov     [rsp+88h+var_50], rax
 * 00000001402D3315: lea     rax, [rsp+88h+arg_40]
 * 00000001402D331D: mov     [rsp+88h+var_58], 8
 * 00000001402D3326: mov     [rsp+88h+var_60], rax
 * 00000001402D332B: mov     [rsp+88h+var_68], r14w
 * 00000001402D3331: call    cs:__imp_WppAutoLogTrace
 * 00000001402D3338: nop     dword ptr [rax+rax+00h]
 * 00000001402D333D: lea     r11, [rsp+88h+var_8]
 * 00000001402D3345: mov     rbx, [r11+10h]
 * 00000001402D3349: mov     rsi, [r11+18h]
 * 00000001402D334D: mov     rdi, [r11+20h]
 * 00000001402D3351: mov     rsp, r11
 * 00000001402D3354: pop     r14
 * 00000001402D3356: retn
 */
