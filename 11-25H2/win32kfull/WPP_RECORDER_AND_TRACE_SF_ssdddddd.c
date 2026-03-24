/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ssdddddd @ 0x1401E16DC
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14022B230 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ssdddddd @ 0x1401E16DC
 * Reason: Hex-Rays returned no pseudocode for 0x1401E16DC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401E16DC: mov     rax, rsp
 * 00000001401E16DF: mov     [rax+8], rbx
 * 00000001401E16E3: mov     [rax+10h], rsi
 * 00000001401E16E7: mov     [rax+18h], rdi
 * 00000001401E16EB: mov     [rax+20h], r13
 * 00000001401E16EF: push    rbp
 * 00000001401E16F0: push    r14
 * 00000001401E16F2: push    r15
 * 00000001401E16F4: lea     rbp, [rax-1Fh]
 * 00000001401E16F8: sub     rsp, 0B0h
 * 00000001401E16FF: mov     rsi, [rbp+17h+arg_40]
 * 00000001401E1703: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001401E1707: mov     rdi, [rbp+17h+arg_48]
 * 00000001401E170B: mov     r15, r9
 * 00000001401E170E: lea     r9, aNull; "NULL"
 * 00000001401E1715: mov     r14b, r8b
 * 00000001401E1718: mov     r11, rcx
 * 00000001401E171B: lea     ecx, [rbx+6]
 * 00000001401E171E: lea     r8d, [rbx+29h]
 * 00000001401E1722: lea     r13d, [rbx+5]
 * 00000001401E1726: test    dl, dl
 * 00000001401E1728: jnz     loc_1401E1852
 * 00000001401E172E: test    r14b, r14b
 * 00000001401E1731: jz      loc_1401E1820
 * 00000001401E1737: test    rdi, rdi
 * 00000001401E173A: jz      loc_1401E1842
 * 00000001401E1740: mov     rax, rbx
 * 00000001401E1743: inc     rax
 * 00000001401E1746: cmp     byte ptr [rdi+rax], 0
 * 00000001401E174A: jnz     short loc_1401E1743
 * 00000001401E174C: inc     rax
 * 00000001401E174F: test    rdi, rdi
 * 00000001401E1752: cmovz   rdi, r9
 * 00000001401E1756: test    rsi, rsi
 * 00000001401E1759: jz      loc_1401E184A
 * 00000001401E175F: inc     rbx
 * 00000001401E1762: cmp     byte ptr [rsi+rbx], 0
 * 00000001401E1766: jnz     short loc_1401E175F
 * 00000001401E1768: inc     rbx
 * 00000001401E176B: test    rsi, rsi
 * 00000001401E176E: lea     rcx, [rbp+17h+arg_78]
 * 00000001401E1775: mov     edx, r13d
 * 00000001401E1778: cmovz   rsi, r9
 * 00000001401E177C: and     qword ptr [rsp+0C0h+var_18], 0
 * 00000001401E1785: mov     [rsp+0C0h+var_20], r13
 * 00000001401E178D: lea     r9, WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids
 * 00000001401E1794: mov     [rsp+0C0h+var_28], rcx
 * 00000001401E179C: lea     rcx, [rbp+17h+arg_70]
 * 00000001401E17A3: mov     [rsp+0C0h+var_30], r13
 * 00000001401E17AB: mov     [rsp+0C0h+var_38], rcx
 * 00000001401E17B3: lea     rcx, [rbp+17h+arg_68]
 * 00000001401E17BA: mov     [rsp+0C0h+var_40], r13
 * 00000001401E17C2: mov     [rsp+0C0h+var_48], rcx
 * 00000001401E17C7: lea     rcx, [rbp+17h+arg_60]
 * 00000001401E17CE: mov     [rsp+0C0h+var_50], r13
 * 00000001401E17D3: mov     [rsp+0C0h+var_58], rcx
 * 00000001401E17D8: lea     rcx, [rbp+17h+arg_58]
 * 00000001401E17DC: mov     [rsp+0C0h+var_60], r13
 * 00000001401E17E1: mov     [rsp+0C0h+var_68], rcx
 * 00000001401E17E6: lea     rcx, [rbp+17h+arg_50]
 * 00000001401E17EA: mov     [rsp+0C0h+var_70], r13
 * 00000001401E17EF: mov     [rsp+0C0h+var_78], rcx
 * 00000001401E17F4: mov     rcx, r15
 * 00000001401E17F7: mov     [rsp+0C0h+var_80], rax
 * 00000001401E17FC: mov     [rsp+0C0h+var_88], rdi
 * 00000001401E1801: mov     [rsp+0C0h+var_90], rbx
 * 00000001401E1806: mov     [rsp+0C0h+var_98], rsi
 * 00000001401E180B: mov     word ptr [rsp+0C0h+var_A0], r8w
 * 00000001401E1811: mov     r8d, r13d
 * 00000001401E1814: call    cs:__imp_WppAutoLogTrace
 * 00000001401E181B: nop     dword ptr [rax+rax+00h]
 * 00000001401E1820: lea     r11, [rsp+0C0h+var_10]
 * 00000001401E1828: mov     rbx, [r11+20h]
 * 00000001401E182C: mov     rsi, [r11+28h]
 * 00000001401E1830: mov     rdi, [r11+30h]
 * 00000001401E1834: mov     r13, [r11+38h]
 * 00000001401E1838: mov     rsp, r11
 * 00000001401E183B: pop     r15
 * 00000001401E183D: pop     r14
 * 00000001401E183F: pop     rbp
 * 00000001401E1840: retn
 * 00000001401E1842: mov     rax, rcx
 * 00000001401E1845: jmp     loc_1401E174F
 * 00000001401E184A: mov     rbx, rcx
 * 00000001401E184D: jmp     loc_1401E176B
 * 00000001401E1852: mov     r10, cs:pfnWppTraceMessage
 * 00000001401E1859: test    rdi, rdi
 * 00000001401E185C: jz      short loc_1401E186F
 * 00000001401E185E: mov     rdx, rbx
 * 00000001401E1861: inc     rdx
 * 00000001401E1864: cmp     byte ptr [rdi+rdx], 0
 * 00000001401E1868: jnz     short loc_1401E1861
 * 00000001401E186A: inc     rdx
 * 00000001401E186D: jmp     short loc_1401E1872
 * 00000001401E186F: mov     rdx, rcx
 * 00000001401E1872: test    rdi, rdi
 * 00000001401E1875: mov     r8, rdi
 * 00000001401E1878: cmovz   r8, r9
 * 00000001401E187C: test    rsi, rsi
 * 00000001401E187F: jz      short loc_1401E1892
 * 00000001401E1881: mov     rax, rbx
 * 00000001401E1884: inc     rax
 * 00000001401E1887: cmp     byte ptr [rsi+rax], 0
 * 00000001401E188B: jnz     short loc_1401E1884
 * 00000001401E188D: inc     rax
 * 00000001401E1890: jmp     short loc_1401E1895
 * 00000001401E1892: mov     rax, rcx
 * 00000001401E1895: test    rsi, rsi
 * 00000001401E1898: mov     rcx, rsi
 * 00000001401E189B: cmovz   rcx, r9
 * 00000001401E189F: and     [rsp+0C0h+var_20], 0
 * 00000001401E18A8: mov     [rsp+0C0h+var_28], r13
 * 00000001401E18B0: lea     r9, [rbp+17h+arg_78]
 * 00000001401E18B7: mov     [rsp+0C0h+var_30], r9
 * 00000001401E18BF: lea     r9, [rbp+17h+arg_70]
 * 00000001401E18C6: mov     [rsp+0C0h+var_38], r13
 * 00000001401E18CE: mov     [rsp+0C0h+var_40], r9
 * 00000001401E18D6: lea     r9, [rbp+17h+arg_68]
 * 00000001401E18DD: mov     [rsp+0C0h+var_48], r13
 * 00000001401E18E2: mov     [rsp+0C0h+var_50], r9
 * 00000001401E18E7: lea     r9, [rbp+17h+arg_60]
 * 00000001401E18EE: mov     [rsp+0C0h+var_58], r13
 * 00000001401E18F3: mov     [rsp+0C0h+var_60], r9
 * 00000001401E18F8: lea     r9, [rbp+17h+arg_58]
 * 00000001401E18FC: mov     [rsp+0C0h+var_68], r13
 * 00000001401E1901: mov     [rsp+0C0h+var_70], r9
 * 00000001401E1906: lea     r9, [rbp+17h+arg_50]
 * 00000001401E190A: mov     [rsp+0C0h+var_78], r13
 * 00000001401E190F: mov     [rsp+0C0h+var_80], r9
 * 00000001401E1914: mov     r9d, 28h ; '('
 * 00000001401E191A: mov     [rsp+0C0h+var_88], rdx
 * 00000001401E191F: mov     [rsp+0C0h+var_90], r8
 * 00000001401E1924: lea     r8, WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids
 * 00000001401E192B: mov     [rsp+0C0h+var_98], rax
 * 00000001401E1930: mov     rax, r10
 * 00000001401E1933: mov     [rsp+0C0h+var_A0], rcx
 * 00000001401E1938: lea     edx, [r9+3]
 * 00000001401E193C: mov     rcx, r11
 * 00000001401E193F: call    _guard_dispatch_icall
 * 00000001401E1944: mov     ecx, 5
 * 00000001401E1949: lea     r9, aNull; "NULL"
 * 00000001401E1950: lea     r8d, [rcx+23h]
 * 00000001401E1954: jmp     loc_1401E172E
 */
