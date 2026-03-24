/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dq @ 0x14021DB3C
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018E544 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dq @ 0x14021DB3C
 * Reason: Hex-Rays returned no pseudocode for 0x14021DB3C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014021DB3C: mov     r11, rsp
 * 000000014021DB3F: mov     [r11+8], rbx
 * 000000014021DB43: mov     [r11+10h], rdi
 * 000000014021DB47: push    r14
 * 000000014021DB49: sub     rsp, 50h
 * 000000014021DB4D: mov     rdi, r9
 * 000000014021DB50: mov     bl, r8b
 * 000000014021DB53: mov     r14d, 1Fh
 * 000000014021DB59: test    dl, dl
 * 000000014021DB5B: jz      short loc_14021DB9C
 * 000000014021DB5D: and     qword ptr [r11-18h], 0
 * 000000014021DB62: lea     rdx, [r11+50h]
 * 000000014021DB66: mov     rax, cs:pfnWppTraceMessage
 * 000000014021DB6D: lea     r8, WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids
 * 000000014021DB74: mov     qword ptr [r11-20h], 8
 * 000000014021DB7C: mov     r9d, r14d
 * 000000014021DB7F: mov     [r11-28h], rdx
 * 000000014021DB83: lea     rdx, [r11+48h]
 * 000000014021DB87: mov     qword ptr [r11-30h], 4
 * 000000014021DB8F: mov     [r11-38h], rdx
 * 000000014021DB93: lea     edx, [r14+0Ch]
 * 000000014021DB97: call    _guard_dispatch_icall
 * 000000014021DB9C: test    bl, bl
 * 000000014021DB9E: jz      short loc_14021DBF6
 * 000000014021DBA0: and     [rsp+58h+var_10], 0
 * 000000014021DBA6: lea     rax, [rsp+58h+arg_48]
 * 000000014021DBAE: mov     [rsp+58h+var_18], 8
 * 000000014021DBB7: lea     r9, WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids
 * 000000014021DBBE: mov     [rsp+58h+var_20], rax
 * 000000014021DBC3: mov     edx, 2
 * 000000014021DBC8: lea     rax, [rsp+58h+arg_40]
 * 000000014021DBD0: mov     [rsp+58h+var_28], 4
 * 000000014021DBD9: mov     [rsp+58h+var_30], rax
 * 000000014021DBDE: mov     r8d, edx
 * 000000014021DBE1: mov     rcx, rdi
 * 000000014021DBE4: mov     [rsp+58h+var_38], r14w
 * 000000014021DBEA: call    cs:__imp_WppAutoLogTrace
 * 000000014021DBF1: nop     dword ptr [rax+rax+00h]
 * 000000014021DBF6: mov     rbx, [rsp+58h+arg_0]
 * 000000014021DBFB: mov     rdi, [rsp+58h+arg_8]
 * 000000014021DC00: add     rsp, 50h
 * 000000014021DC04: pop     r14
 * 000000014021DC06: retn
 */
