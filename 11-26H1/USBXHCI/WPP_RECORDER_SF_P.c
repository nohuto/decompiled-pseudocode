/*
 * XREFs of WPP_RECORDER_SF_P @ 0x140045580
 * Callers:
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x140033900 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x140040894 (Controller_AllocateIrqlTrackingArray.c)
 *     Controller_RetrieveUrsData @ 0x140077694 (Controller_RetrieveUrsData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_P @ 0x140045580
 * Reason: Hex-Rays returned no pseudocode for 0x140045580
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140045580: mov     r11, rsp
 * 0000000140045583: mov     [r11+8], rbx
 * 0000000140045587: push    rdi
 * 0000000140045588: sub     rsp, 40h
 * 000000014004558C: mov     rdi, rcx
 * 000000014004558F: movzx   ebx, r9w
 * 0000000140045593: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000014004559A: mov     eax, [rcx+2Ch]
 * 000000014004559D: test    al, 8
 * 000000014004559F: jz      short loc_1400455DE
 * 00000001400455A1: cmp     byte ptr [rcx+29h], 2
 * 00000001400455A5: jb      short loc_1400455DE
 * 00000001400455A7: mov     rax, cs:pfnWppTraceMessage
 * 00000001400455AE: lea     rdx, [r11+30h]
 * 00000001400455B2: mov     rcx, [rcx+18h]
 * 00000001400455B6: lea     r8, WPP_aa3f12a561783a7e2659a97375f632db_Traceguids
 * 00000001400455BD: mov     qword ptr [r11-18h], 0
 * 00000001400455C5: mov     r9d, ebx
 * 00000001400455C8: mov     qword ptr [r11-20h], 8
 * 00000001400455D0: mov     [r11-28h], rdx
 * 00000001400455D4: mov     edx, 2Bh ; '+'
 * 00000001400455D9: call    _guard_dispatch_icall
 * 00000001400455DE: mov     [rsp+48h+var_10], 0
 * 00000001400455E7: lea     rax, [rsp+48h+arg_28]
 * 00000001400455EC: mov     edx, 2
 * 00000001400455F1: mov     [rsp+48h+var_18], 8
 * 00000001400455FA: mov     [rsp+48h+var_20], rax
 * 00000001400455FF: lea     r9, WPP_aa3f12a561783a7e2659a97375f632db_Traceguids
 * 0000000140045606: mov     rcx, rdi
 * 0000000140045609: mov     [rsp+48h+var_28], bx
 * 000000014004560E: lea     r8d, [rdx+2]
 * 0000000140045612: call    cs:__imp_WppAutoLogTrace
 * 0000000140045619: nop     dword ptr [rax+rax+00h]
 * 000000014004561E: mov     rbx, [rsp+48h+arg_0]
 * 0000000140045623: add     rsp, 40h
 * 0000000140045627: pop     rdi
 * 0000000140045628: retn
 */
