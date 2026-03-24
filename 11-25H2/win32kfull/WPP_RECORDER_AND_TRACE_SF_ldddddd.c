/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ldddddd @ 0x1402E54D0
 * Callers:
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1402E2C74 (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ldddddd @ 0x1402E54D0
 * Reason: Hex-Rays returned no pseudocode for 0x1402E54D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402E54D0: mov     r11, rsp
 * 00000001402E54D3: mov     [r11+8], rbx
 * 00000001402E54D7: mov     [r11+10h], rsi
 * 00000001402E54DB: mov     [r11+18h], rdi
 * 00000001402E54DF: mov     [r11+20h], r14
 * 00000001402E54E3: push    rbp
 * 00000001402E54E4: lea     rbp, [r11-0Fh]
 * 00000001402E54E8: sub     rsp, 0A0h
 * 00000001402E54EF: mov     esi, 4
 * 00000001402E54F4: mov     rdi, r9
 * 00000001402E54F7: mov     bl, r8b
 * 00000001402E54FA: lea     r14d, [rsi+0Dh]
 * 00000001402E54FE: test    dl, dl
 * 00000001402E5500: jz      short loc_1402E5578
 * 00000001402E5502: and     qword ptr [r11-18h], 0
 * 00000001402E5507: lea     rdx, [rbp+7+arg_70]
 * 00000001402E550E: mov     rax, cs:pfnWppTraceMessage
 * 00000001402E5515: lea     r8, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E551C: mov     [r11-20h], rsi
 * 00000001402E5520: mov     r9d, r14d
 * 00000001402E5523: mov     [r11-28h], rdx
 * 00000001402E5527: lea     rdx, [rbp+7+arg_68]
 * 00000001402E552B: mov     [r11-30h], rsi
 * 00000001402E552F: mov     [r11-38h], rdx
 * 00000001402E5533: lea     rdx, [rbp+7+arg_60]
 * 00000001402E5537: mov     [r11-40h], rsi
 * 00000001402E553B: mov     [r11-48h], rdx
 * 00000001402E553F: lea     rdx, [rbp+7+arg_58]
 * 00000001402E5543: mov     [r11-50h], rsi
 * 00000001402E5547: mov     [r11-58h], rdx
 * 00000001402E554B: lea     rdx, [rbp+7+arg_50]
 * 00000001402E554F: mov     [r11-60h], rsi
 * 00000001402E5553: mov     [r11-68h], rdx
 * 00000001402E5557: lea     rdx, [rbp+7+arg_48]
 * 00000001402E555B: mov     [r11-70h], rsi
 * 00000001402E555F: mov     [r11-78h], rdx
 * 00000001402E5563: lea     rdx, [rbp+7+arg_40]
 * 00000001402E5567: mov     [r11-80h], rsi
 * 00000001402E556B: mov     [rsp+0A0h+var_80], rdx
 * 00000001402E5570: lea     edx, [rsi+27h]
 * 00000001402E5573: call    _guard_dispatch_icall
 * 00000001402E5578: test    bl, bl
 * 00000001402E557A: jz      loc_1402E561C
 * 00000001402E5580: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001402E5589: lea     rax, [rbp+7+arg_70]
 * 00000001402E5590: mov     [rsp+0A0h+var_10], rsi
 * 00000001402E5598: lea     r9, WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids
 * 00000001402E559F: mov     [rsp+0A0h+var_18], rax
 * 00000001402E55A7: mov     edx, 5
 * 00000001402E55AC: mov     [rsp+0A0h+var_20], rsi
 * 00000001402E55B4: lea     rax, [rbp+7+arg_68]
 * 00000001402E55B8: mov     [rsp+0A0h+var_28], rax
 * 00000001402E55BD: mov     rcx, rdi
 * 00000001402E55C0: mov     [rsp+0A0h+var_30], rsi
 * 00000001402E55C5: lea     rax, [rbp+7+arg_60]
 * 00000001402E55C9: mov     [rsp+0A0h+var_38], rax
 * 00000001402E55CE: lea     r8d, [rdx+4]
 * 00000001402E55D2: mov     [rsp+0A0h+var_40], rsi
 * 00000001402E55D7: lea     rax, [rbp+7+arg_58]
 * 00000001402E55DB: mov     [rsp+0A0h+var_48], rax
 * 00000001402E55E0: lea     rax, [rbp+7+arg_50]
 * 00000001402E55E4: mov     [rsp+0A0h+var_50], rsi
 * 00000001402E55E9: mov     [rsp+0A0h+var_58], rax
 * 00000001402E55EE: lea     rax, [rbp+7+arg_48]
 * 00000001402E55F2: mov     [rsp+0A0h+var_60], rsi
 * 00000001402E55F7: mov     [rsp+0A0h+var_68], rax
 * 00000001402E55FC: lea     rax, [rbp+7+arg_40]
 * 00000001402E5600: mov     [rsp+0A0h+var_70], rsi
 * 00000001402E5605: mov     [rsp+0A0h+var_78], rax
 * 00000001402E560A: mov     word ptr [rsp+0A0h+var_80], r14w
 * 00000001402E5610: call    cs:__imp_WppAutoLogTrace
 * 00000001402E5617: nop     dword ptr [rax+rax+00h]
 * 00000001402E561C: lea     r11, [rsp+0A0h+var_s0]
 * 00000001402E5624: mov     rbx, [r11+10h]
 * 00000001402E5628: mov     rsi, [r11+18h]
 * 00000001402E562C: mov     rdi, [r11+20h]
 * 00000001402E5630: mov     r14, [r11+28h]
 * 00000001402E5634: mov     rsp, r11
 * 00000001402E5637: pop     rbp
 * 00000001402E5638: retn
 */
