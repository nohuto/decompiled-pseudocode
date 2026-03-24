/*
 * XREFs of WPP_RECORDER_SF__guid_ @ 0x1400384B8
 * Callers:
 *     Controller_UcxEvtQueryUsbCapability @ 0x14003A000 (Controller_UcxEvtQueryUsbCapability.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF__guid_ @ 0x1400384B8
 * Reason: Hex-Rays returned no pseudocode for 0x1400384B8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400384B8: mov     r11, rsp
 * 00000001400384BB: mov     [r11+8], rbx
 * 00000001400384BF: mov     [r11+10h], rsi
 * 00000001400384C3: push    rdi
 * 00000001400384C4: sub     rsp, 40h
 * 00000001400384C8: mov     rdi, [rsp+48h+arg_28]
 * 00000001400384CD: mov     rsi, rcx
 * 00000001400384D0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001400384D7: movzx   ebx, r9w
 * 00000001400384DB: mov     eax, [rcx+2Ch]
 * 00000001400384DE: test    al, 8
 * 00000001400384E0: jz      short loc_14003851B
 * 00000001400384E2: cmp     byte ptr [rcx+29h], 4
 * 00000001400384E6: jb      short loc_14003851B
 * 00000001400384E8: mov     rax, cs:pfnWppTraceMessage
 * 00000001400384EF: lea     r8, WPP_aa3f12a561783a7e2659a97375f632db_Traceguids
 * 00000001400384F6: mov     rcx, [rcx+18h]
 * 00000001400384FA: mov     r9d, ebx
 * 00000001400384FD: mov     qword ptr [r11-18h], 0
 * 0000000140038505: mov     edx, 2Bh ; '+'
 * 000000014003850A: mov     qword ptr [r11-20h], 10h
 * 0000000140038512: mov     [r11-28h], rdi
 * 0000000140038516: call    _guard_dispatch_icall
 * 000000014003851B: mov     [rsp+48h+var_10], 0
 * 0000000140038524: lea     r9, WPP_aa3f12a561783a7e2659a97375f632db_Traceguids
 * 000000014003852B: mov     edx, 4
 * 0000000140038530: mov     [rsp+48h+var_18], 10h
 * 0000000140038539: mov     [rsp+48h+var_20], rdi
 * 000000014003853E: mov     r8d, edx
 * 0000000140038541: mov     rcx, rsi
 * 0000000140038544: mov     [rsp+48h+var_28], bx
 * 0000000140038549: call    cs:__imp_WppAutoLogTrace
 * 0000000140038550: nop     dword ptr [rax+rax+00h]
 * 0000000140038555: mov     rbx, [rsp+48h+arg_0]
 * 000000014003855A: mov     rsi, [rsp+48h+arg_8]
 * 000000014003855F: add     rsp, 40h
 * 0000000140038563: pop     rdi
 * 0000000140038564: retn
 */
