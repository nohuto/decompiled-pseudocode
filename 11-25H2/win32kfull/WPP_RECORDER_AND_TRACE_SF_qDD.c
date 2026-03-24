/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140217DC8
 * Callers:
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x14013677C (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x140184C84 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1401E2130 (-EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x140211020 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8868 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 *     ?PostAsyncWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402D5058 (-PostAsyncWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402E3890 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E3E2C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140217DC8
 * Reason: Hex-Rays returned no pseudocode for 0x140217DC8
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140217DC8: mov     r11, rsp
 * 0000000140217DCB: mov     [r11+8], rbx
 * 0000000140217DCF: mov     [r11+10h], rbp
 * 0000000140217DD3: mov     [r11+18h], rsi
 * 0000000140217DD7: push    rdi
 * 0000000140217DD8: sub     rsp, 60h
 * 0000000140217DDC: movzx   edi, [rsp+68h+arg_30]
 * 0000000140217DE4: mov     rsi, r9
 * 0000000140217DE7: mov     bl, r8b
 * 0000000140217DEA: mov     ebp, 4
 * 0000000140217DEF: test    dl, dl
 * 0000000140217DF1: jz      short loc_140217E3A
 * 0000000140217DF3: and     qword ptr [r11-18h], 0
 * 0000000140217DF8: lea     rdx, [r11+58h]
 * 0000000140217DFC: mov     rax, cs:pfnWppTraceMessage
 * 0000000140217E03: mov     r9d, edi
 * 0000000140217E06: mov     r8, [rsp+68h+arg_38]
 * 0000000140217E0E: mov     [r11-20h], rbp
 * 0000000140217E12: mov     [r11-28h], rdx
 * 0000000140217E16: lea     rdx, [r11+50h]
 * 0000000140217E1A: mov     [r11-30h], rbp
 * 0000000140217E1E: mov     [r11-38h], rdx
 * 0000000140217E22: lea     rdx, [r11+48h]
 * 0000000140217E26: mov     qword ptr [r11-40h], 8
 * 0000000140217E2E: mov     [r11-48h], rdx
 * 0000000140217E32: lea     edx, [rbp+27h]
 * 0000000140217E35: call    _guard_dispatch_icall
 * 0000000140217E3A: test    bl, bl
 * 0000000140217E3C: jz      short loc_140217EAA
 * 0000000140217E3E: and     [rsp+68h+var_10], 0
 * 0000000140217E44: lea     rax, [rsp+68h+arg_50]
 * 0000000140217E4C: mov     r9, [rsp+68h+arg_38]
 * 0000000140217E54: mov     rcx, rsi
 * 0000000140217E57: mov     r8d, [rsp+68h+arg_28]
 * 0000000140217E5F: movzx   edx, [rsp+68h+arg_20]
 * 0000000140217E67: mov     [rsp+68h+var_18], rbp
 * 0000000140217E6C: mov     [rsp+68h+var_20], rax
 * 0000000140217E71: lea     rax, [rsp+68h+arg_48]
 * 0000000140217E79: mov     [rsp+68h+var_28], rbp
 * 0000000140217E7E: mov     [rsp+68h+var_30], rax
 * 0000000140217E83: lea     rax, [rsp+68h+arg_40]
 * 0000000140217E8B: mov     [rsp+68h+var_38], 8
 * 0000000140217E94: mov     [rsp+68h+var_40], rax
 * 0000000140217E99: mov     [rsp+68h+var_48], di
 * 0000000140217E9E: call    cs:__imp_WppAutoLogTrace
 * 0000000140217EA5: nop     dword ptr [rax+rax+00h]
 * 0000000140217EAA: lea     r11, [rsp+68h+var_8]
 * 0000000140217EAF: mov     rbx, [r11+10h]
 * 0000000140217EB3: mov     rbp, [r11+18h]
 * 0000000140217EB7: mov     rsi, [r11+20h]
 * 0000000140217EBB: mov     rsp, r11
 * 0000000140217EBE: pop     rdi
 * 0000000140217EBF: retn
 */
