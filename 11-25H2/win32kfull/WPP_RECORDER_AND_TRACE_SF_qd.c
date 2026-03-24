/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC
 * Callers:
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x14002237C (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x140024CF0 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14002538C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 *     ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x14002677C (-xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x140027A5C (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x140027E84 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x140029818 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 *     ?UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1400341EC (-UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z @ 0x14004DD24 (-xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z.c)
 *     xxxBroadcastMessageEx @ 0x1401293EC (xxxBroadcastMessageEx.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z @ 0x140229FA4 (-xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140237040 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x14025C310 (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     NtUserConvertToInterceptWindow @ 0x140294EB0 (NtUserConvertToInterceptWindow.c)
 *     NtUserEnterMoveSizeLoop @ 0x140296290 (NtUserEnterMoveSizeLoop.c)
 *     NtUserInjectTouchpadAction @ 0x14029A600 (NtUserInjectTouchpadAction.c)
 *     ?ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z @ 0x1402C24A8 (-ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z.c)
 *     ?ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C26F0 (-ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDO.c)
 *     ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402C4160 (-EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z.c)
 *     ?ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1402C54CC (-ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1402C6C34 (-s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402C7E98 (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1402C8BC0 (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?PostWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z @ 0x1402CBA38 (-PostWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z.c)
 *     ?xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z @ 0x1402D0B40 (-xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402E3890 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC
 * Reason: Hex-Rays returned no pseudocode for 0x140127EFC
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140127EFC: mov     r11, rsp
 * 0000000140127EFF: mov     [r11+8], rbx
 * 0000000140127F03: mov     [r11+10h], rsi
 * 0000000140127F07: push    rdi
 * 0000000140127F08: sub     rsp, 50h
 * 0000000140127F0C: movzx   ebx, [rsp+58h+arg_30]
 * 0000000140127F14: mov     rsi, r9
 * 0000000140127F17: mov     dil, r8b
 * 0000000140127F1A: test    dl, dl
 * 0000000140127F1C: jz      short loc_140127F5F
 * 0000000140127F1E: and     qword ptr [r11-18h], 0
 * 0000000140127F23: lea     rdx, [r11+50h]
 * 0000000140127F27: mov     rax, cs:pfnWppTraceMessage
 * 0000000140127F2E: mov     r9d, ebx
 * 0000000140127F31: mov     r8, [rsp+58h+arg_38]
 * 0000000140127F39: mov     qword ptr [r11-20h], 4
 * 0000000140127F41: mov     [r11-28h], rdx
 * 0000000140127F45: lea     rdx, [r11+48h]
 * 0000000140127F49: mov     qword ptr [r11-30h], 8
 * 0000000140127F51: mov     [r11-38h], rdx
 * 0000000140127F55: mov     edx, 2Bh ; '+'
 * 0000000140127F5A: call    _guard_dispatch_icall
 * 0000000140127F5F: test    dil, dil
 * 0000000140127F62: jz      short loc_140127FC2
 * 0000000140127F64: and     [rsp+58h+var_10], 0
 * 0000000140127F6A: lea     rax, [rsp+58h+arg_48]
 * 0000000140127F72: mov     r9, [rsp+58h+arg_38]
 * 0000000140127F7A: mov     rcx, rsi
 * 0000000140127F7D: mov     r8d, [rsp+58h+arg_28]
 * 0000000140127F85: movzx   edx, [rsp+58h+arg_20]
 * 0000000140127F8D: mov     [rsp+58h+var_18], 4
 * 0000000140127F96: mov     [rsp+58h+var_20], rax
 * 0000000140127F9B: lea     rax, [rsp+58h+arg_40]
 * 0000000140127FA3: mov     [rsp+58h+var_28], 8
 * 0000000140127FAC: mov     [rsp+58h+var_30], rax
 * 0000000140127FB1: mov     [rsp+58h+var_38], bx
 * 0000000140127FB6: call    cs:__imp_WppAutoLogTrace
 * 0000000140127FBD: nop     dword ptr [rax+rax+00h]
 * 0000000140127FC2: mov     rbx, [rsp+58h+arg_0]
 * 0000000140127FC7: mov     rsi, [rsp+58h+arg_8]
 * 0000000140127FCC: add     rsp, 50h
 * 0000000140127FD0: pop     rdi
 * 0000000140127FD1: retn
 */
