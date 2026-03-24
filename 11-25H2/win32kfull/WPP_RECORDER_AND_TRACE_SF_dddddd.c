/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4
 * Callers:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1400227A8 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x140022A24 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14014D338 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x14014DEF4 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x14018CF78 (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 *     ?EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1401E2130 (-EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x14020C498 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x140227550 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A2E8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14022B230 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     CheckFullScreen @ 0x140236038 (CheckFullScreen.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1402507C4 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEAUtagWND@@@Z @ 0x140258DC0 (-GetPhysicalFrameBounds@WindowMargins@@YA-AUtagRECT@@PEAUtagWND@@@Z.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14028373C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z @ 0x1402A81F8 (-UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A9840 (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x1402AA50C (-xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1402AB8B4 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 *     ?ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ @ 0x1402C5E5C (-ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ.c)
 *     ?ResolvePublicWindowAction@@YA_NPEAU_WINDOW_ACTION@@PEAVCWindowAction@AdvancedWindowPos@@PEAW4ApplyWindowActionError@3@@Z @ 0x1402CC004 (-ResolvePublicWindowAction@@YA_NPEAU_WINDOW_ACTION@@PEAVCWindowAction@AdvancedWindowPos@@PEAW4Ap.c)
 *     ?Validateaction@@YA_NAEBU_WINDOW_ACTION@@PEAUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CD3A8 (-Validateaction@@YA_NAEBU_WINDOW_ACTION@@PEAUWindowAction@AdvancedWindowPos@@@Z.c)
 *     ?xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPos@@@Z @ 0x1402CF388 (-xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPo.c)
 *     ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402CFAB0 (-xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402D042C (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     ?xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z @ 0x1402D0B40 (-xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z.c)
 *     ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402D0E60 (-xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@P.c)
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x1402D12FC (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 *     ?xxxInterceptSetWindowPlacement@WindowActions@@YAXPEAUtagWND@@_NIAEBUtagRECT@@@Z @ 0x1402D1C6C (-xxxInterceptSetWindowPlacement@WindowActions@@YAXPEAUtagWND@@_NIAEBUtagRECT@@@Z.c)
 *     ?xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAW4State@AdvancedWindowPos@@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x1402D27A4 (-xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_.c)
 *     ?LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z @ 0x1402D4838 (-LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z.c)
 *     ?TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D5F10 (-TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@PEAUtagRECT@@3PEAPEBUMonitorData@CMonitorTopology@@@Z @ 0x1402D6CAC (-xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@P.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D8AA4 (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402D9920 (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4
 * Reason: Hex-Rays returned no pseudocode for 0x14018C8D4
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018C8D4: mov     rax, rsp
 * 000000014018C8D7: mov     [rax+8], rbx
 * 000000014018C8DB: mov     [rax+10h], rsi
 * 000000014018C8DF: mov     [rax+18h], rdi
 * 000000014018C8E3: mov     [rax+20h], r14
 * 000000014018C8E7: push    rbp
 * 000000014018C8E8: lea     rbp, [rax-0Fh]
 * 000000014018C8EC: sub     rsp, 90h
 * 000000014018C8F3: movzx   edi, [rbp+7+arg_30]
 * 000000014018C8F7: mov     rsi, r9
 * 000000014018C8FA: mov     bl, r8b
 * 000000014018C8FD: mov     r14d, 4
 * 000000014018C903: test    dl, dl
 * 000000014018C905: jnz     loc_14018C9B1
 * 000000014018C90B: test    bl, bl
 * 000000014018C90D: jz      loc_14018C993
 * 000000014018C913: and     qword ptr [rsp+90h+var_8], 0
 * 000000014018C91C: lea     rax, [rbp+7+arg_68]
 * 000000014018C920: mov     r9, [rbp+7+arg_38]
 * 000000014018C924: mov     rcx, rsi
 * 000000014018C927: mov     r8d, [rbp+7+arg_28]
 * 000000014018C92B: movzx   edx, [rbp+7+arg_20]
 * 000000014018C92F: mov     [rsp+90h+var_10], r14
 * 000000014018C937: mov     [rsp+90h+var_18], rax
 * 000000014018C93C: lea     rax, [rbp+7+arg_60]
 * 000000014018C940: mov     [rsp+90h+var_20], r14
 * 000000014018C945: mov     [rsp+90h+var_28], rax
 * 000000014018C94A: lea     rax, [rbp+7+arg_58]
 * 000000014018C94E: mov     [rsp+90h+var_30], r14
 * 000000014018C953: mov     [rsp+90h+var_38], rax
 * 000000014018C958: lea     rax, [rbp+7+arg_50]
 * 000000014018C95C: mov     [rsp+90h+var_40], r14
 * 000000014018C961: mov     [rsp+90h+var_48], rax
 * 000000014018C966: lea     rax, [rbp+7+arg_48]
 * 000000014018C96A: mov     [rsp+90h+var_50], r14
 * 000000014018C96F: mov     [rsp+90h+var_58], rax
 * 000000014018C974: lea     rax, [rbp+7+arg_40]
 * 000000014018C978: mov     [rsp+90h+var_60], r14
 * 000000014018C97D: mov     [rsp+90h+var_68], rax
 * 000000014018C982: mov     word ptr [rsp+90h+var_70], di
 * 000000014018C987: call    cs:__imp_WppAutoLogTrace
 * 000000014018C98E: nop     dword ptr [rax+rax+00h]
 * 000000014018C993: lea     r11, [rsp+90h+var_s0]
 * 000000014018C99B: mov     rbx, [r11+10h]
 * 000000014018C99F: mov     rsi, [r11+18h]
 * 000000014018C9A3: mov     rdi, [r11+20h]
 * 000000014018C9A7: mov     r14, [r11+28h]
 * 000000014018C9AB: mov     rsp, r11
 * 000000014018C9AE: pop     rbp
 * 000000014018C9AF: retn
 * 000000014018C9B1: and     [rsp+90h+var_10], 0
 * 000000014018C9BA: lea     rdx, [rbp+7+arg_68]
 * 000000014018C9BE: mov     rax, cs:pfnWppTraceMessage
 * 000000014018C9C5: mov     r9d, edi
 * 000000014018C9C8: mov     r8, [rbp+7+arg_38]
 * 000000014018C9CC: mov     [rsp+90h+var_18], r14
 * 000000014018C9D1: mov     [rsp+90h+var_20], rdx
 * 000000014018C9D6: lea     rdx, [rbp+7+arg_60]
 * 000000014018C9DA: mov     [rsp+90h+var_28], r14
 * 000000014018C9DF: mov     [rsp+90h+var_30], rdx
 * 000000014018C9E4: lea     rdx, [rbp+7+arg_58]
 * 000000014018C9E8: mov     [rsp+90h+var_38], r14
 * 000000014018C9ED: mov     [rsp+90h+var_40], rdx
 * 000000014018C9F2: lea     rdx, [rbp+7+arg_50]
 * 000000014018C9F6: mov     [rsp+90h+var_48], r14
 * 000000014018C9FB: mov     [rsp+90h+var_50], rdx
 * 000000014018CA00: lea     rdx, [rbp+7+arg_48]
 * 000000014018CA04: mov     [rsp+90h+var_58], r14
 * 000000014018CA09: mov     [rsp+90h+var_60], rdx
 * 000000014018CA0E: lea     rdx, [rbp+7+arg_40]
 * 000000014018CA12: mov     [rsp+90h+var_68], r14
 * 000000014018CA17: mov     [rsp+90h+var_70], rdx
 * 000000014018CA1C: mov     edx, 2Bh ; '+'
 * 000000014018CA21: call    _guard_dispatch_icall
 * 000000014018CA26: jmp     loc_14018C90B
 */
