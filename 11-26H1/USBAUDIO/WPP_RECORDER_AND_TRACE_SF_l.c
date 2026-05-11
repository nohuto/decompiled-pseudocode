/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_l @ 0x14000C530
 * Callers:
 *     DeviceStart @ 0x14002E790 (DeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_l @ 0x14000C530
 * Reason: Hex-Rays returned no pseudocode for 0x14000C530
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000C530: mov     r11, rsp
 * 000000014000C533: mov     [r11+8], rbx
 * 000000014000C537: mov     [r11+10h], rbp
 * 000000014000C53B: push    rdi
 * 000000014000C53C: sub     rsp, 40h
 * 000000014000C540: mov     rdi, r9
 * 000000014000C543: mov     bl, r8b
 * 000000014000C546: mov     ebp, 19h
 * 000000014000C54B: test    dl, dl
 * 000000014000C54D: jz      short loc_14000C580
 * 000000014000C54F: mov     rax, cs:pfnWppTraceMessage
 * 000000014000C556: lea     rdx, [r11+48h]
 * 000000014000C55A: mov     qword ptr [r11-18h], 0
 * 000000014000C562: lea     r8, WPP_9385499e5bb03f2485fcdf1eb6a96ba7_Traceguids
 * 000000014000C569: mov     qword ptr [r11-20h], 4
 * 000000014000C571: mov     r9d, ebp
 * 000000014000C574: mov     [r11-28h], rdx
 * 000000014000C578: lea     edx, [rbp+12h]
 * 000000014000C57B: call    _guard_dispatch_icall
 * 000000014000C580: test    bl, bl
 * 000000014000C582: jz      short loc_14000C5C4
 * 000000014000C584: mov     [rsp+48h+var_10], 0
 * 000000014000C58D: lea     rax, [rsp+48h+arg_40]
 * 000000014000C595: xor     edx, edx
 * 000000014000C597: mov     [rsp+48h+var_18], 4
 * 000000014000C5A0: mov     [rsp+48h+var_20], rax
 * 000000014000C5A5: lea     r9, WPP_9385499e5bb03f2485fcdf1eb6a96ba7_Traceguids
 * 000000014000C5AC: mov     rcx, rdi
 * 000000014000C5AF: mov     [rsp+48h+var_28], bp
 * 000000014000C5B4: lea     r8d, [rdx+9]
 * 000000014000C5B8: call    cs:__imp_WppAutoLogTrace
 * 000000014000C5BF: nop     dword ptr [rax+rax+00h]
 * 000000014000C5C4: mov     rbx, [rsp+48h+arg_0]
 * 000000014000C5C9: mov     rbp, [rsp+48h+arg_8]
 * 000000014000C5CE: add     rsp, 40h
 * 000000014000C5D2: pop     rdi
 * 000000014000C5D3: retn
 */
