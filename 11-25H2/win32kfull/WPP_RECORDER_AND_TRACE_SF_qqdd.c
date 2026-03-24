/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqdd @ 0x1401198D0
 * Callers:
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1401196C0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qqdd @ 0x1401198D0
 * Reason: Hex-Rays returned no pseudocode for 0x1401198D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401198D0: mov     [rsp+arg_0], rbx
 * 00000001401198D5: mov     [rsp+arg_8], rbp
 * 00000001401198DA: push    rdi
 * 00000001401198DB: sub     rsp, 70h
 * 00000001401198DF: mov     rdi, r9
 * 00000001401198E2: movzx   ebx, r8b
 * 00000001401198E6: mov     ebp, 1Dh
 * 00000001401198EB: test    dl, dl
 * 00000001401198ED: jnz     loc_140119993
 * 00000001401198F3: test    bl, bl
 * 00000001401198F5: jz      loc_140119980
 * 00000001401198FB: mov     [rsp+78h+var_10], 0
 * 0000000140119904: lea     rax, [rsp+78h+arg_58]
 * 000000014011990C: mov     [rsp+78h+var_18], 4
 * 0000000140119915: lea     r9, WPP_d0e2125136443b0a982403d5cb665113_Traceguids
 * 000000014011991C: mov     [rsp+78h+var_20], rax
 * 0000000140119921: mov     edx, 4
 * 0000000140119926: mov     [rsp+78h+var_28], 4
 * 000000014011992F: lea     rax, [rsp+78h+arg_50]
 * 0000000140119937: mov     [rsp+78h+var_30], rax
 * 000000014011993C: mov     rcx, rdi
 * 000000014011993F: mov     [rsp+78h+var_38], 8
 * 0000000140119948: lea     rax, [rsp+78h+arg_48]
 * 0000000140119950: mov     [rsp+78h+var_40], rax
 * 0000000140119955: lea     r8d, [rdx+0Eh]
 * 0000000140119959: lea     rax, [rsp+78h+arg_40]
 * 0000000140119961: mov     [rsp+78h+var_48], 8
 * 000000014011996A: mov     [rsp+78h+var_50], rax
 * 000000014011996F: mov     word ptr [rsp+78h+var_58], bp
 * 0000000140119974: call    cs:__imp_WppAutoLogTrace
 * 000000014011997B: nop     dword ptr [rax+rax+00h]
 * 0000000140119980: lea     r11, [rsp+78h+var_8]
 * 0000000140119985: mov     rbx, [r11+10h]
 * 0000000140119989: mov     rbp, [r11+18h]
 * 000000014011998D: mov     rsp, r11
 * 0000000140119990: pop     rdi
 * 0000000140119991: retn
 * 0000000140119993: mov     rax, cs:pfnWppTraceMessage
 * 000000014011999A: lea     rdx, [rsp+78h+arg_58]
 * 00000001401199A2: mov     [rsp+78h+var_18], 0
 * 00000001401199AB: lea     r8, WPP_d0e2125136443b0a982403d5cb665113_Traceguids
 * 00000001401199B2: mov     [rsp+78h+var_20], 4
 * 00000001401199BB: mov     r9d, ebp
 * 00000001401199BE: mov     [rsp+78h+var_28], rdx
 * 00000001401199C3: lea     rdx, [rsp+78h+arg_50]
 * 00000001401199CB: mov     [rsp+78h+var_30], 4
 * 00000001401199D4: mov     [rsp+78h+var_38], rdx
 * 00000001401199D9: lea     rdx, [rsp+78h+arg_48]
 * 00000001401199E1: mov     [rsp+78h+var_40], 8
 * 00000001401199EA: mov     [rsp+78h+var_48], rdx
 * 00000001401199EF: lea     rdx, [rsp+78h+arg_40]
 * 00000001401199F7: mov     [rsp+78h+var_50], 8
 * 0000000140119A00: mov     [rsp+78h+var_58], rdx
 * 0000000140119A05: mov     edx, 2Bh ; '+'
 * 0000000140119A0A: call    _guard_dispatch_icall
 * 0000000140119A0F: jmp     loc_1401198F3
 */
