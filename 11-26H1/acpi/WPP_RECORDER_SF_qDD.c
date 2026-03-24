/*
 * XREFs of WPP_RECORDER_SF_qDD @ 0x140066B70
 * Callers:
 *     AcpiConvertPackageArgumentToPackageObj @ 0x140051A14 (AcpiConvertPackageArgumentToPackageObj.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qDD @ 0x140066B70
 * Reason: Hex-Rays returned no pseudocode for 0x140066B70
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140066B70: mov     r11, rsp
 * 0000000140066B73: mov     [r11+8], rbx
 * 0000000140066B77: mov     [r11+10h], rbp
 * 0000000140066B7B: push    rdi
 * 0000000140066B7C: sub     rsp, 60h
 * 0000000140066B80: mov     rbx, rcx
 * 0000000140066B83: mov     ebp, 1Dh
 * 0000000140066B88: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140066B8F: lea     edi, [rbp-19h]
 * 0000000140066B92: test    dword ptr [rcx+2Ch], 100000h
 * 0000000140066B99: jz      short loc_140066BEE
 * 0000000140066B9B: cmp     byte ptr [rcx+29h], 2
 * 0000000140066B9F: jb      short loc_140066BEE
 * 0000000140066BA1: mov     rax, cs:pfnWppTraceMessage
 * 0000000140066BA8: lea     rdx, [r11+40h]
 * 0000000140066BAC: mov     rcx, [rcx+18h]
 * 0000000140066BB0: lea     r8, WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids
 * 0000000140066BB7: mov     qword ptr [r11-18h], 0
 * 0000000140066BBF: mov     r9d, ebp
 * 0000000140066BC2: mov     [r11-20h], rdi
 * 0000000140066BC6: mov     [r11-28h], rdx
 * 0000000140066BCA: lea     rdx, [r11+38h]
 * 0000000140066BCE: mov     [r11-30h], rdi
 * 0000000140066BD2: mov     [r11-38h], rdx
 * 0000000140066BD6: lea     rdx, [r11+30h]
 * 0000000140066BDA: mov     qword ptr [r11-40h], 8
 * 0000000140066BE2: mov     [r11-48h], rdx
 * 0000000140066BE6: lea     edx, [rbp+0Eh]
 * 0000000140066BE9: call    _guard_dispatch_icall
 * 0000000140066BEE: mov     [rsp+68h+var_10], 0
 * 0000000140066BF7: lea     rax, [rsp+68h+arg_38]
 * 0000000140066BFF: mov     [rsp+68h+var_18], rdi
 * 0000000140066C04: lea     r9, WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids
 * 0000000140066C0B: mov     [rsp+68h+var_20], rax
 * 0000000140066C10: mov     edx, 2
 * 0000000140066C15: mov     [rsp+68h+var_28], rdi
 * 0000000140066C1A: lea     rax, [rsp+68h+arg_30]
 * 0000000140066C22: mov     [rsp+68h+var_30], rax
 * 0000000140066C27: mov     rcx, rbx
 * 0000000140066C2A: lea     rax, [rsp+68h+arg_28]
 * 0000000140066C32: mov     [rsp+68h+var_38], 8
 * 0000000140066C3B: mov     [rsp+68h+var_40], rax
 * 0000000140066C40: lea     r8d, [rdx+13h]
 * 0000000140066C44: mov     [rsp+68h+var_48], bp
 * 0000000140066C49: call    cs:__imp_WppAutoLogTrace
 * 0000000140066C50: nop     dword ptr [rax+rax+00h]
 * 0000000140066C55: mov     rbx, [rsp+68h+arg_0]
 * 0000000140066C5A: mov     rbp, [rsp+68h+arg_8]
 * 0000000140066C5F: add     rsp, 60h
 * 0000000140066C63: pop     rdi
 * 0000000140066C64: retn
 */
