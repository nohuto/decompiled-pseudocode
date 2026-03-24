/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DdD @ 0x14030FCA0
 * Callers:
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z @ 0x1400BE658 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_DdD @ 0x14030FCA0
 * Reason: Hex-Rays returned no pseudocode for 0x14030FCA0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014030FCA0: mov     r11, rsp
 * 000000014030FCA3: mov     [r11+8], rbx
 * 000000014030FCA7: mov     [r11+10h], rbp
 * 000000014030FCAB: mov     [r11+18h], rsi
 * 000000014030FCAF: push    rdi
 * 000000014030FCB0: sub     rsp, 60h
 * 000000014030FCB4: mov     ebp, 0Dh
 * 000000014030FCB9: mov     rdi, r9
 * 000000014030FCBC: mov     bl, r8b
 * 000000014030FCBF: lea     esi, [rbp-9]
 * 000000014030FCC2: test    dl, dl
 * 000000014030FCC4: jz      short loc_14030FD08
 * 000000014030FCC6: and     qword ptr [r11-18h], 0
 * 000000014030FCCB: lea     rdx, [r11+58h]
 * 000000014030FCCF: mov     rax, cs:pfnWppTraceMessage
 * 000000014030FCD6: lea     r8, WPP_52461a3f25fd3dd377e6cb1560123594_Traceguids
 * 000000014030FCDD: mov     [r11-20h], rsi
 * 000000014030FCE1: mov     r9d, ebp
 * 000000014030FCE4: mov     [r11-28h], rdx
 * 000000014030FCE8: lea     rdx, [r11+50h]
 * 000000014030FCEC: mov     [r11-30h], rsi
 * 000000014030FCF0: mov     [r11-38h], rdx
 * 000000014030FCF4: lea     rdx, [r11+48h]
 * 000000014030FCF8: mov     [r11-40h], rsi
 * 000000014030FCFC: mov     [r11-48h], rdx
 * 000000014030FD00: lea     edx, [rbp+1Eh]
 * 000000014030FD03: call    _guard_dispatch_icall
 * 000000014030FD08: test    bl, bl
 * 000000014030FD0A: jz      short loc_14030FD6B
 * 000000014030FD0C: and     [rsp+68h+var_10], 0
 * 000000014030FD12: lea     rax, [rsp+68h+arg_50]
 * 000000014030FD1A: mov     [rsp+68h+var_18], rsi
 * 000000014030FD1F: lea     r9, WPP_52461a3f25fd3dd377e6cb1560123594_Traceguids
 * 000000014030FD26: mov     [rsp+68h+var_20], rax
 * 000000014030FD2B: xor     edx, edx
 * 000000014030FD2D: mov     [rsp+68h+var_28], rsi
 * 000000014030FD32: lea     rax, [rsp+68h+arg_48]
 * 000000014030FD3A: mov     [rsp+68h+var_30], rax
 * 000000014030FD3F: mov     r8d, 10001h
 * 000000014030FD45: lea     rax, [rsp+68h+arg_40]
 * 000000014030FD4D: mov     [rsp+68h+var_38], rsi
 * 000000014030FD52: mov     [rsp+68h+var_40], rax
 * 000000014030FD57: mov     rcx, rdi
 * 000000014030FD5A: mov     [rsp+68h+var_48], bp
 * 000000014030FD5F: call    cs:__imp_WppAutoLogTrace
 * 000000014030FD66: nop     dword ptr [rax+rax+00h]
 * 000000014030FD6B: lea     r11, [rsp+68h+var_8]
 * 000000014030FD70: mov     rbx, [r11+10h]
 * 000000014030FD74: mov     rbp, [r11+18h]
 * 000000014030FD78: mov     rsi, [r11+20h]
 * 000000014030FD7C: mov     rsp, r11
 * 000000014030FD7F: pop     rdi
 * 000000014030FD80: retn
 */
