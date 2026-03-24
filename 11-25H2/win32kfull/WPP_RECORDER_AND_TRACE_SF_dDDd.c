/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14026BB14
 * Callers:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140037578 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x14014DEF4 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x140227550 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x140233760 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEAUtagWND@@@Z @ 0x140258DC0 (-GetPhysicalFrameBounds@WindowMargins@@YA-AUtagRECT@@PEAUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A9840 (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402AA91C (-xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z.c)
 *     ?DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402AFA24 (-DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitorData@CMonitorTopology@@@Z @ 0x1402C4458 (-GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitor.c)
 *     ?TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D5F10 (-TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402D9920 (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402DAD2C (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14026BB14
 * Reason: Hex-Rays returned no pseudocode for 0x14026BB14
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014026BB14: mov     r11, rsp
 * 000000014026BB17: mov     [r11+8], rbx
 * 000000014026BB1B: mov     [r11+10h], rbp
 * 000000014026BB1F: mov     [r11+18h], rsi
 * 000000014026BB23: push    rdi
 * 000000014026BB24: sub     rsp, 70h
 * 000000014026BB28: movzx   edi, [rsp+78h+arg_30]
 * 000000014026BB30: mov     rsi, r9
 * 000000014026BB33: mov     bl, r8b
 * 000000014026BB36: mov     ebp, 4
 * 000000014026BB3B: test    dl, dl
 * 000000014026BB3D: jz      short loc_14026BB8E
 * 000000014026BB3F: and     qword ptr [r11-18h], 0
 * 000000014026BB44: lea     rdx, [r11+60h]
 * 000000014026BB48: mov     rax, cs:pfnWppTraceMessage
 * 000000014026BB4F: mov     r9d, edi
 * 000000014026BB52: mov     r8, [rsp+78h+arg_38]
 * 000000014026BB5A: mov     [r11-20h], rbp
 * 000000014026BB5E: mov     [r11-28h], rdx
 * 000000014026BB62: lea     rdx, [r11+58h]
 * 000000014026BB66: mov     [r11-30h], rbp
 * 000000014026BB6A: mov     [r11-38h], rdx
 * 000000014026BB6E: lea     rdx, [r11+50h]
 * 000000014026BB72: mov     [r11-40h], rbp
 * 000000014026BB76: mov     [r11-48h], rdx
 * 000000014026BB7A: lea     rdx, [r11+48h]
 * 000000014026BB7E: mov     [r11-50h], rbp
 * 000000014026BB82: mov     [r11-58h], rdx
 * 000000014026BB86: lea     edx, [rbp+27h]
 * 000000014026BB89: call    _guard_dispatch_icall
 * 000000014026BB8E: test    bl, bl
 * 000000014026BB90: jz      short loc_14026BC0C
 * 000000014026BB92: and     [rsp+78h+var_10], 0
 * 000000014026BB98: lea     rax, [rsp+78h+arg_58]
 * 000000014026BBA0: mov     r9, [rsp+78h+arg_38]
 * 000000014026BBA8: mov     rcx, rsi
 * 000000014026BBAB: mov     r8d, [rsp+78h+arg_28]
 * 000000014026BBB3: movzx   edx, [rsp+78h+arg_20]
 * 000000014026BBBB: mov     [rsp+78h+var_18], rbp
 * 000000014026BBC0: mov     [rsp+78h+var_20], rax
 * 000000014026BBC5: lea     rax, [rsp+78h+arg_50]
 * 000000014026BBCD: mov     [rsp+78h+var_28], rbp
 * 000000014026BBD2: mov     [rsp+78h+var_30], rax
 * 000000014026BBD7: lea     rax, [rsp+78h+arg_48]
 * 000000014026BBDF: mov     [rsp+78h+var_38], rbp
 * 000000014026BBE4: mov     [rsp+78h+var_40], rax
 * 000000014026BBE9: lea     rax, [rsp+78h+arg_40]
 * 000000014026BBF1: mov     [rsp+78h+var_48], rbp
 * 000000014026BBF6: mov     [rsp+78h+var_50], rax
 * 000000014026BBFB: mov     [rsp+78h+var_58], di
 * 000000014026BC00: call    cs:__imp_WppAutoLogTrace
 * 000000014026BC07: nop     dword ptr [rax+rax+00h]
 * 000000014026BC0C: lea     r11, [rsp+78h+var_8]
 * 000000014026BC11: mov     rbx, [r11+10h]
 * 000000014026BC15: mov     rbp, [r11+18h]
 * 000000014026BC19: mov     rsi, [r11+20h]
 * 000000014026BC1D: mov     rsp, r11
 * 000000014026BC20: pop     rdi
 * 000000014026BC21: retn
 */
