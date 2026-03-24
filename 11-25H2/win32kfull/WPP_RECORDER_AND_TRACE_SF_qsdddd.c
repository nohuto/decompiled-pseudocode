/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qsdddd @ 0x1402C17B0
 * Callers:
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x14014EFC4 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qsdddd @ 0x1402C17B0
 * Reason: Hex-Rays returned no pseudocode for 0x1402C17B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402C17B0: mov     rax, rsp
 * 00000001402C17B3: mov     [rax+8], rbx
 * 00000001402C17B7: mov     [rax+10h], rbp
 * 00000001402C17BB: mov     [rax+18h], rsi
 * 00000001402C17BF: mov     [rax+20h], rdi
 * 00000001402C17C3: push    r15
 * 00000001402C17C5: sub     rsp, 90h
 * 00000001402C17CC: mov     rdi, [rsp+98h+arg_48]
 * 00000001402C17D4: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001402C17D8: mov     rbp, r9
 * 00000001402C17DB: mov     sil, r8b
 * 00000001402C17DE: lea     r8, aNull; "NULL"
 * 00000001402C17E5: mov     r11, rcx
 * 00000001402C17E8: lea     r9d, [rbx+12h]
 * 00000001402C17EC: lea     r15d, [rbx+5]
 * 00000001402C17F0: test    dl, dl
 * 00000001402C17F2: jz      loc_1402C18B9
 * 00000001402C17F8: mov     r10, cs:pfnWppTraceMessage
 * 00000001402C17FF: test    rdi, rdi
 * 00000001402C1802: jz      short loc_1402C1815
 * 00000001402C1804: mov     rax, rbx
 * 00000001402C1807: inc     rax
 * 00000001402C180A: cmp     byte ptr [rdi+rax], 0
 * 00000001402C180E: jnz     short loc_1402C1807
 * 00000001402C1810: inc     rax
 * 00000001402C1813: jmp     short loc_1402C181A
 * 00000001402C1815: mov     eax, 5
 * 00000001402C181A: test    rdi, rdi
 * 00000001402C181D: lea     rdx, [rsp+98h+arg_68]
 * 00000001402C1825: mov     rcx, rdi
 * 00000001402C1828: cmovz   rcx, r8
 * 00000001402C182C: and     [rsp+98h+var_18], 0
 * 00000001402C1835: mov     [rsp+98h+var_20], r15
 * 00000001402C183A: lea     r8, WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids
 * 00000001402C1841: mov     [rsp+98h+var_28], rdx
 * 00000001402C1846: lea     rdx, [rsp+98h+arg_60]
 * 00000001402C184E: mov     [rsp+98h+var_30], r15
 * 00000001402C1853: mov     [rsp+98h+var_38], rdx
 * 00000001402C1858: lea     rdx, [rsp+98h+arg_58]
 * 00000001402C1860: mov     [rsp+98h+var_40], r15
 * 00000001402C1865: mov     [rsp+98h+var_48], rdx
 * 00000001402C186A: lea     rdx, [rsp+98h+arg_50]
 * 00000001402C1872: mov     [rsp+98h+var_50], r15
 * 00000001402C1877: mov     [rsp+98h+var_58], rdx
 * 00000001402C187C: mov     edx, 2Bh ; '+'
 * 00000001402C1881: mov     [rsp+98h+var_60], rax
 * 00000001402C1886: lea     rax, [rsp+98h+arg_40]
 * 00000001402C188E: mov     [rsp+98h+var_68], rcx
 * 00000001402C1893: mov     rcx, r11
 * 00000001402C1896: mov     [rsp+98h+var_70], 8
 * 00000001402C189F: mov     [rsp+98h+var_78], rax
 * 00000001402C18A4: mov     rax, r10
 * 00000001402C18A7: call    _guard_dispatch_icall
 * 00000001402C18AC: lea     r8, aNull; "NULL"
 * 00000001402C18B3: mov     r9d, 11h
 * 00000001402C18B9: test    sil, sil
 * 00000001402C18BC: jz      loc_1402C197A
 * 00000001402C18C2: test    rdi, rdi
 * 00000001402C18C5: jz      short loc_1402C18D5
 * 00000001402C18C7: inc     rbx
 * 00000001402C18CA: cmp     byte ptr [rdi+rbx], 0
 * 00000001402C18CE: jnz     short loc_1402C18C7
 * 00000001402C18D0: inc     rbx
 * 00000001402C18D3: jmp     short loc_1402C18DA
 * 00000001402C18D5: mov     ebx, 5
 * 00000001402C18DA: test    rdi, rdi
 * 00000001402C18DD: lea     rax, [rsp+98h+arg_68]
 * 00000001402C18E5: mov     edx, 5
 * 00000001402C18EA: mov     rcx, rbp
 * 00000001402C18ED: cmovz   rdi, r8
 * 00000001402C18F1: and     [rsp+98h+var_10], 0
 * 00000001402C18FA: mov     [rsp+98h+var_18], r15
 * 00000001402C1902: mov     [rsp+98h+var_20], rax
 * 00000001402C1907: lea     rax, [rsp+98h+arg_60]
 * 00000001402C190F: mov     [rsp+98h+var_28], r15
 * 00000001402C1914: lea     r8d, [rdx+10h]
 * 00000001402C1918: mov     [rsp+98h+var_30], rax
 * 00000001402C191D: lea     rax, [rsp+98h+arg_58]
 * 00000001402C1925: mov     [rsp+98h+var_38], r15
 * 00000001402C192A: mov     [rsp+98h+var_40], rax
 * 00000001402C192F: lea     rax, [rsp+98h+arg_50]
 * 00000001402C1937: mov     [rsp+98h+var_48], r15
 * 00000001402C193C: mov     [rsp+98h+var_50], rax
 * 00000001402C1941: lea     rax, [rsp+98h+arg_40]
 * 00000001402C1949: mov     [rsp+98h+var_58], rbx
 * 00000001402C194E: mov     [rsp+98h+var_60], rdi
 * 00000001402C1953: mov     [rsp+98h+var_68], 8
 * 00000001402C195C: mov     [rsp+98h+var_70], rax
 * 00000001402C1961: mov     word ptr [rsp+98h+var_78], r9w
 * 00000001402C1967: lea     r9, WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids
 * 00000001402C196E: call    cs:__imp_WppAutoLogTrace
 * 00000001402C1975: nop     dword ptr [rax+rax+00h]
 * 00000001402C197A: lea     r11, [rsp+98h+var_8]
 * 00000001402C1982: mov     rbx, [r11+10h]
 * 00000001402C1986: mov     rbp, [r11+18h]
 * 00000001402C198A: mov     rsi, [r11+20h]
 * 00000001402C198E: mov     rdi, [r11+28h]
 * 00000001402C1992: mov     rsp, r11
 * 00000001402C1995: pop     r15
 * 00000001402C1997: retn
 */
