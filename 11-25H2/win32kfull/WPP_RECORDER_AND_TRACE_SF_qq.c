/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C
 * Callers:
 *     xxxProcessHidInput @ 0x1400388A0 (xxxProcessHidInput.c)
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1400636D0 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140063928 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140065FC8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14006667C (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1400677E0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1400D7FB4 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     UserJobCallout @ 0x1400D8250 (UserJobCallout.c)
 *     EditionUpdateInputTransformFromHitTest @ 0x140119B20 (EditionUpdateInputTransformFromHitTest.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x140138088 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ @ 0x14014CEB0 (-SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x14018B600 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14019612C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1401A77E4 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     DestroyThreadsMessages @ 0x1401AC220 (DestroyThreadsMessages.c)
 *     RemoveProcessFromJob @ 0x1401C3830 (RemoveProcessFromJob.c)
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1402009E0 (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x140225308 (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x140233760 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     _anonymous_namespace_::OnForegroundWindowChanged @ 0x14023A23C (_anonymous_namespace_--OnForegroundWindowChanged.c)
 *     ?SetNewForegroundQueue@@YAXPEAUtagQ@@@Z @ 0x14023A398 (-SetNewForegroundQueue@@YAXPEAUtagQ@@@Z.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x140256508 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x14025D994 (-InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z @ 0x1402746D8 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z.c)
 *     ?PostHidInput_old@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z @ 0x140274A2C (-PostHidInput_old@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserConvertToInterceptWindow @ 0x140294EB0 (NtUserConvertToInterceptWindow.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C2E94 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxInterceptInsertAfter@WindowActions@@YAXPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402D02DC (-xxxInterceptInsertAfter@WindowActions@@YAXPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     xxxDoScrollMenu @ 0x1402E8138 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1402E8980 (xxxSBTrackInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C
 * Reason: Hex-Rays returned no pseudocode for 0x1400D897C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400D897C: mov     [rsp+arg_0], rbx
 * 00000001400D8981: mov     [rsp+arg_8], rbp
 * 00000001400D8986: mov     [rsp+arg_10], rsi
 * 00000001400D898B: push    rdi
 * 00000001400D898C: sub     rsp, 50h
 * 00000001400D8990: movzx   ebx, [rsp+58h+arg_30]
 * 00000001400D8998: mov     rsi, r9
 * 00000001400D899B: mov     dil, r8b
 * 00000001400D899E: mov     ebp, 8
 * 00000001400D89A3: test    dl, dl
 * 00000001400D89A5: jnz     short loc_1400D8A18
 * 00000001400D89A7: test    dil, dil
 * 00000001400D89AA: jz      short loc_1400D8A02
 * 00000001400D89AC: and     [rsp+58h+var_10], 0
 * 00000001400D89B2: lea     rax, [rsp+58h+arg_48]
 * 00000001400D89BA: mov     r9, [rsp+58h+arg_38]
 * 00000001400D89C2: mov     rcx, rsi
 * 00000001400D89C5: mov     r8d, [rsp+58h+arg_28]
 * 00000001400D89CD: movzx   edx, [rsp+58h+arg_20]
 * 00000001400D89D5: mov     [rsp+58h+var_18], rbp
 * 00000001400D89DA: mov     [rsp+58h+var_20], rax
 * 00000001400D89DF: lea     rax, [rsp+58h+arg_40]
 * 00000001400D89E7: mov     [rsp+58h+var_28], rbp
 * 00000001400D89EC: mov     [rsp+58h+var_30], rax
 * 00000001400D89F1: mov     word ptr [rsp+58h+var_38], bx
 * 00000001400D89F6: call    cs:__imp_WppAutoLogTrace
 * 00000001400D89FD: nop     dword ptr [rax+rax+00h]
 * 00000001400D8A02: mov     rbx, [rsp+58h+arg_0]
 * 00000001400D8A07: mov     rbp, [rsp+58h+arg_8]
 * 00000001400D8A0C: mov     rsi, [rsp+58h+arg_10]
 * 00000001400D8A11: add     rsp, 50h
 * 00000001400D8A15: pop     rdi
 * 00000001400D8A16: retn
 * 00000001400D8A18: and     [rsp+58h+var_18], 0
 * 00000001400D8A1E: lea     rdx, [rsp+58h+arg_48]
 * 00000001400D8A26: mov     rax, cs:pfnWppTraceMessage
 * 00000001400D8A2D: mov     r9d, ebx
 * 00000001400D8A30: mov     r8, [rsp+58h+arg_38]
 * 00000001400D8A38: mov     [rsp+58h+var_20], rbp
 * 00000001400D8A3D: mov     [rsp+58h+var_28], rdx
 * 00000001400D8A42: lea     rdx, [rsp+58h+arg_40]
 * 00000001400D8A4A: mov     [rsp+58h+var_30], rbp
 * 00000001400D8A4F: mov     [rsp+58h+var_38], rdx
 * 00000001400D8A54: mov     edx, 2Bh ; '+'
 * 00000001400D8A59: call    _guard_dispatch_icall
 * 00000001400D8A5E: jmp     loc_1400D89A7
 */
