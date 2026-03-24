/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1400670A0
 * Callers:
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140063928 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140065FC8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x140066E80 (DelQEntry.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1400677E0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x14014B1A0 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x14023EDC0 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1400670A0
 * Reason: Hex-Rays returned no pseudocode for 0x1400670A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400670A0: mov     [rsp+arg_0], rbx
 * 00000001400670A5: mov     [rsp+arg_8], rbp
 * 00000001400670AA: push    rsi
 * 00000001400670AB: sub     rsp, 80h
 * 00000001400670B2: movzx   esi, [rsp+88h+arg_30]
 * 00000001400670BA: mov     rbp, r9
 * 00000001400670BD: movzx   ebx, r8b
 * 00000001400670C1: test    dl, dl
 * 00000001400670C3: jnz     loc_140067183
 * 00000001400670C9: test    bl, bl
 * 00000001400670CB: jz      loc_14006716D
 * 00000001400670D1: mov     r9, [rsp+88h+arg_38]
 * 00000001400670D9: lea     rax, [rsp+88h+arg_60]
 * 00000001400670E1: mov     [rsp+88h+var_10], 0
 * 00000001400670EA: mov     edx, 4
 * 00000001400670EF: mov     [rsp+88h+var_18], 4
 * 00000001400670F8: mov     rcx, rbp
 * 00000001400670FB: mov     [rsp+88h+var_20], rax
 * 0000000140067100: lea     rax, [rsp+88h+arg_58]
 * 0000000140067108: mov     [rsp+88h+var_28], 4
 * 0000000140067111: mov     [rsp+88h+var_30], rax
 * 0000000140067116: lea     r8d, [rdx+0Eh]
 * 000000014006711A: mov     [rsp+88h+var_38], 8
 * 0000000140067123: lea     rax, [rsp+88h+arg_50]
 * 000000014006712B: mov     [rsp+88h+var_40], rax
 * 0000000140067130: lea     rax, [rsp+88h+arg_48]
 * 0000000140067138: mov     [rsp+88h+var_48], 8
 * 0000000140067141: mov     [rsp+88h+var_50], rax
 * 0000000140067146: lea     rax, [rsp+88h+arg_40]
 * 000000014006714E: mov     [rsp+88h+var_58], 8
 * 0000000140067157: mov     [rsp+88h+var_60], rax
 * 000000014006715C: mov     word ptr [rsp+88h+var_68], si
 * 0000000140067161: call    cs:__imp_WppAutoLogTrace
 * 0000000140067168: nop     dword ptr [rax+rax+00h]
 * 000000014006716D: lea     r11, [rsp+88h+var_8]
 * 0000000140067175: mov     rbx, [r11+10h]
 * 0000000140067179: mov     rbp, [r11+18h]
 * 000000014006717D: mov     rsp, r11
 * 0000000140067180: pop     rsi
 * 0000000140067181: retn
 * 0000000140067183: mov     rax, cs:pfnWppTraceMessage
 * 000000014006718A: lea     rdx, [rsp+88h+arg_60]
 * 0000000140067192: mov     r8, [rsp+88h+arg_38]
 * 000000014006719A: mov     r9d, esi
 * 000000014006719D: mov     [rsp+88h+var_18], 0
 * 00000001400671A6: mov     [rsp+88h+var_20], 4
 * 00000001400671AF: mov     [rsp+88h+var_28], rdx
 * 00000001400671B4: lea     rdx, [rsp+88h+arg_58]
 * 00000001400671BC: mov     [rsp+88h+var_30], 4
 * 00000001400671C5: mov     [rsp+88h+var_38], rdx
 * 00000001400671CA: lea     rdx, [rsp+88h+arg_50]
 * 00000001400671D2: mov     [rsp+88h+var_40], 8
 * 00000001400671DB: mov     [rsp+88h+var_48], rdx
 * 00000001400671E0: lea     rdx, [rsp+88h+arg_48]
 * 00000001400671E8: mov     [rsp+88h+var_50], 8
 * 00000001400671F1: mov     [rsp+88h+var_58], rdx
 * 00000001400671F6: lea     rdx, [rsp+88h+arg_40]
 * 00000001400671FE: mov     [rsp+88h+var_60], 8
 * 0000000140067207: mov     [rsp+88h+var_68], rdx
 * 000000014006720C: mov     edx, 2Bh ; '+'
 * 0000000140067211: call    _guard_dispatch_icall
 * 0000000140067216: jmp     loc_1400670C9
 */
