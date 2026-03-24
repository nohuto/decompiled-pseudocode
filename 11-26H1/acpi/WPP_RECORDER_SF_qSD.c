/*
 * XREFs of WPP_RECORDER_SF_qsD @ 0x1400604E0
 * Callers:
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1400AFD98 (ExternalRequestBiosNameDeviceAssociation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qsD @ 0x1400604E0
 * Reason: Hex-Rays returned no pseudocode for 0x1400604E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400604E0: mov     rax, rsp
 * 00000001400604E3: mov     [rax+8], rbx
 * 00000001400604E7: mov     [rax+10h], rbp
 * 00000001400604EB: mov     [rax+18h], rsi
 * 00000001400604EF: mov     [rax+20h], rdi
 * 00000001400604F3: push    r13
 * 00000001400604F5: sub     rsp, 60h
 * 00000001400604F9: mov     rdx, cs:WPP_GLOBAL_Control
 * 0000000140060500: lea     r13, aNull; "NULL"
 * 0000000140060507: mov     rbx, [rsp+68h+arg_30]
 * 000000014006050F: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 0000000140060513: mov     rbp, rcx
 * 0000000140060516: test    dword ptr [rdx+2Ch], 100000h
 * 000000014006051D: lea     esi, [rdi+6]
 * 0000000140060520: lea     r9d, [rdi+0Eh]
 * 0000000140060524: jz      loc_1400605C0
 * 000000014006052A: cmp     byte ptr [rdx+29h], 2
 * 000000014006052E: jb      loc_1400605C0
 * 0000000140060534: test    rbx, rbx
 * 0000000140060537: jz      short loc_14006054B
 * 0000000140060539: mov     rax, rdi
 * 000000014006053C: inc     rax
 * 000000014006053F: cmp     byte ptr [rbx+rax], 0
 * 0000000140060543: jnz     short loc_14006053C
 * 0000000140060545: lea     rdx, [rax+1]
 * 0000000140060549: jmp     short loc_14006054E
 * 000000014006054B: mov     rdx, rsi
 * 000000014006054E: mov     rax, cs:pfnWppTraceMessage
 * 0000000140060555: lea     r8, [rsp+68h+arg_38]
 * 000000014006055D: mov     [rsp+68h+var_18], 0
 * 0000000140060566: test    rbx, rbx
 * 0000000140060569: mov     [rsp+68h+var_20], 4
 * 0000000140060572: mov     rcx, rbx
 * 0000000140060575: mov     [rsp+68h+var_28], r8
 * 000000014006057A: cmovz   rcx, r13
 * 000000014006057E: mov     [rsp+68h+var_30], rdx
 * 0000000140060583: lea     r8, WPP_8cd4999731163fb3621cd0c511e30926_Traceguids
 * 000000014006058A: mov     [rsp+68h+var_38], rcx
 * 000000014006058F: mov     edx, 2Bh ; '+'
 * 0000000140060594: lea     rcx, [rsp+68h+arg_28]
 * 000000014006059C: mov     [rsp+68h+var_40], 8
 * 00000001400605A5: mov     [rsp+68h+var_48], rcx
 * 00000001400605AA: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001400605B1: mov     rcx, [rcx+18h]
 * 00000001400605B5: call    _guard_dispatch_icall
 * 00000001400605BA: mov     r9d, 0Dh
 * 00000001400605C0: test    rbx, rbx
 * 00000001400605C3: jz      short loc_1400605D5
 * 00000001400605C5: inc     rdi
 * 00000001400605C8: cmp     byte ptr [rbx+rdi], 0
 * 00000001400605CC: jnz     short loc_1400605C5
 * 00000001400605CE: lea     rsi, [rdi+1]
 * 00000001400605D2: test    rbx, rbx
 * 00000001400605D5: mov     [rsp+68h+var_10], 0
 * 00000001400605DE: lea     rax, [rsp+68h+arg_38]
 * 00000001400605E6: mov     [rsp+68h+var_18], 4
 * 00000001400605EF: cmovz   rbx, r13
 * 00000001400605F3: mov     [rsp+68h+var_20], rax
 * 00000001400605F8: mov     edx, 2
 * 00000001400605FD: mov     [rsp+68h+var_28], rsi
 * 0000000140060602: lea     rax, [rsp+68h+arg_28]
 * 000000014006060A: mov     [rsp+68h+var_30], rbx
 * 000000014006060F: mov     rcx, rbp
 * 0000000140060612: mov     [rsp+68h+var_38], 8
 * 000000014006061B: mov     [rsp+68h+var_40], rax
 * 0000000140060620: lea     r8d, [rdx+13h]
 * 0000000140060624: mov     word ptr [rsp+68h+var_48], r9w
 * 000000014006062A: lea     r9, WPP_8cd4999731163fb3621cd0c511e30926_Traceguids
 * 0000000140060631: call    cs:__imp_WppAutoLogTrace
 * 0000000140060638: nop     dword ptr [rax+rax+00h]
 * 000000014006063D: lea     r11, [rsp+68h+var_8]
 * 0000000140060642: mov     rbx, [r11+10h]
 * 0000000140060646: mov     rbp, [r11+18h]
 * 000000014006064A: mov     rsi, [r11+20h]
 * 000000014006064E: mov     rdi, [r11+28h]
 * 0000000140060652: mov     rsp, r11
 * 0000000140060655: pop     r13
 * 0000000140060657: retn
 */
