/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ddddd @ 0x1402C150C
 * Callers:
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x14014EFC4 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ddddd @ 0x1402C150C
 * Reason: Hex-Rays returned no pseudocode for 0x1402C150C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402C150C: mov     r11, rsp
 * 00000001402C150F: mov     [r11+8], rbx
 * 00000001402C1513: mov     [r11+10h], rbp
 * 00000001402C1517: mov     [r11+18h], rsi
 * 00000001402C151B: push    rdi
 * 00000001402C151C: sub     rsp, 80h
 * 00000001402C1523: mov     ebp, 10h
 * 00000001402C1528: mov     rdi, r9
 * 00000001402C152B: mov     bl, r8b
 * 00000001402C152E: lea     esi, [rbp-0Ch]
 * 00000001402C1531: test    dl, dl
 * 00000001402C1533: jz      short loc_1402C158F
 * 00000001402C1535: and     qword ptr [r11-18h], 0
 * 00000001402C153A: lea     rdx, [r11+68h]
 * 00000001402C153E: mov     rax, cs:pfnWppTraceMessage
 * 00000001402C1545: lea     r8, WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids
 * 00000001402C154C: mov     [r11-20h], rsi
 * 00000001402C1550: mov     r9d, ebp
 * 00000001402C1553: mov     [r11-28h], rdx
 * 00000001402C1557: lea     rdx, [r11+60h]
 * 00000001402C155B: mov     [r11-30h], rsi
 * 00000001402C155F: mov     [r11-38h], rdx
 * 00000001402C1563: lea     rdx, [r11+58h]
 * 00000001402C1567: mov     [r11-40h], rsi
 * 00000001402C156B: mov     [r11-48h], rdx
 * 00000001402C156F: lea     rdx, [r11+50h]
 * 00000001402C1573: mov     [r11-50h], rsi
 * 00000001402C1577: mov     [r11-58h], rdx
 * 00000001402C157B: lea     rdx, [r11+48h]
 * 00000001402C157F: mov     [r11-60h], rsi
 * 00000001402C1583: mov     [r11-68h], rdx
 * 00000001402C1587: lea     edx, [rbp+1Bh]
 * 00000001402C158A: call    _guard_dispatch_icall
 * 00000001402C158F: test    bl, bl
 * 00000001402C1591: jz      loc_1402C161B
 * 00000001402C1597: and     [rsp+88h+var_10], 0
 * 00000001402C159D: lea     rax, [rsp+88h+arg_60]
 * 00000001402C15A5: mov     [rsp+88h+var_18], rsi
 * 00000001402C15AA: lea     r9, WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids
 * 00000001402C15B1: mov     [rsp+88h+var_20], rax
 * 00000001402C15B6: mov     edx, 5
 * 00000001402C15BB: mov     [rsp+88h+var_28], rsi
 * 00000001402C15C0: lea     rax, [rsp+88h+arg_58]
 * 00000001402C15C8: mov     [rsp+88h+var_30], rax
 * 00000001402C15CD: mov     rcx, rdi
 * 00000001402C15D0: mov     [rsp+88h+var_38], rsi
 * 00000001402C15D5: lea     rax, [rsp+88h+arg_50]
 * 00000001402C15DD: mov     [rsp+88h+var_40], rax
 * 00000001402C15E2: lea     r8d, [rdx+10h]
 * 00000001402C15E6: mov     [rsp+88h+var_48], rsi
 * 00000001402C15EB: lea     rax, [rsp+88h+arg_48]
 * 00000001402C15F3: mov     [rsp+88h+var_50], rax
 * 00000001402C15F8: lea     rax, [rsp+88h+arg_40]
 * 00000001402C1600: mov     [rsp+88h+var_58], rsi
 * 00000001402C1605: mov     [rsp+88h+var_60], rax
 * 00000001402C160A: mov     [rsp+88h+var_68], bp
 * 00000001402C160F: call    cs:__imp_WppAutoLogTrace
 * 00000001402C1616: nop     dword ptr [rax+rax+00h]
 * 00000001402C161B: lea     r11, [rsp+88h+var_8]
 * 00000001402C1623: mov     rbx, [r11+10h]
 * 00000001402C1627: mov     rbp, [r11+18h]
 * 00000001402C162B: mov     rsi, [r11+20h]
 * 00000001402C162F: mov     rsp, r11
 * 00000001402C1632: pop     rdi
 * 00000001402C1633: retn
 */
