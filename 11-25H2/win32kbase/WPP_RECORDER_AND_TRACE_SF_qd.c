/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qD @ 0x1401464B8
 * Callers:
 *     xxxInitProcessInfo @ 0x140165DD4 (xxxInitProcessInfo.c)
 *     ?JITThaw@tagPROCESSINFO@@AEAA_NXZ @ 0x1401A6820 (-JITThaw@tagPROCESSINFO@@AEAA_NXZ.c)
 *     ?DwsUnlinkAllProcesses@tagWND@@QEAAXW4DwsLinkSource@@@Z @ 0x1401A80D0 (-DwsUnlinkAllProcesses@tagWND@@QEAAXW4DwsLinkSource@@@Z.c)
 *     ?DwsUnlinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z @ 0x1401A82C0 (-DwsUnlinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1401F4CF0 (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qD @ 0x1401464B8
 * Reason: Hex-Rays returned no pseudocode for 0x1401464B8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401464B8: mov     [rsp+arg_0], rbx
 * 00000001401464BD: mov     [rsp+arg_8], rsi
 * 00000001401464C2: push    rdi
 * 00000001401464C3: sub     rsp, 50h
 * 00000001401464C7: movzx   ebx, [rsp+58h+arg_30]
 * 00000001401464CF: mov     rsi, r9
 * 00000001401464D2: mov     dil, r8b
 * 00000001401464D5: test    dl, dl
 * 00000001401464D7: jnz     short loc_14014654A
 * 00000001401464D9: test    dil, dil
 * 00000001401464DC: jz      short loc_140146539
 * 00000001401464DE: and     [rsp+58h+var_10], 0
 * 00000001401464E4: lea     rax, [rsp+58h+arg_48]
 * 00000001401464EC: mov     r9, [rsp+58h+arg_38]
 * 00000001401464F4: mov     edx, 4
 * 00000001401464F9: mov     r8d, [rsp+58h+arg_28]
 * 0000000140146501: mov     rcx, rsi
 * 0000000140146504: mov     [rsp+58h+var_18], 4
 * 000000014014650D: mov     [rsp+58h+var_20], rax
 * 0000000140146512: lea     rax, [rsp+58h+arg_40]
 * 000000014014651A: mov     [rsp+58h+var_28], 8
 * 0000000140146523: mov     [rsp+58h+var_30], rax
 * 0000000140146528: mov     word ptr [rsp+58h+var_38], bx
 * 000000014014652D: call    cs:__imp_WppAutoLogTrace
 * 0000000140146534: nop     dword ptr [rax+rax+00h]
 * 0000000140146539: mov     rbx, [rsp+58h+arg_0]
 * 000000014014653E: mov     rsi, [rsp+58h+arg_8]
 * 0000000140146543: add     rsp, 50h
 * 0000000140146547: pop     rdi
 * 0000000140146548: retn
 * 000000014014654A: and     [rsp+58h+var_18], 0
 * 0000000140146550: lea     rdx, [rsp+58h+arg_48]
 * 0000000140146558: mov     rax, cs:pfnWppTraceMessage
 * 000000014014655F: mov     r9d, ebx
 * 0000000140146562: mov     r8, [rsp+58h+arg_38]
 * 000000014014656A: mov     [rsp+58h+var_20], 4
 * 0000000140146573: mov     [rsp+58h+var_28], rdx
 * 0000000140146578: lea     rdx, [rsp+58h+arg_40]
 * 0000000140146580: mov     [rsp+58h+var_30], 8
 * 0000000140146589: mov     [rsp+58h+var_38], rdx
 * 000000014014658E: mov     edx, 2Bh ; '+'
 * 0000000140146593: call    _guard_dispatch_icall
 * 0000000140146598: jmp     loc_1401464D9
 */
