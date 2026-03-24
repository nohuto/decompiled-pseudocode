/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dq @ 0x1401D11CC
 * Callers:
 *     NtUserNotifyWinEvent @ 0x14002D250 (NtUserNotifyWinEvent.c)
 *     UserJobCallout @ 0x1400D8250 (UserJobCallout.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401BB244 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     NtUserInjectTouchInput @ 0x14024A8D0 (NtUserInjectTouchInput.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x140277D84 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z @ 0x1402C35B0 (-xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z.c)
 *     ?AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1402C3994 (-AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dq @ 0x1401D11CC
 * Reason: Hex-Rays returned no pseudocode for 0x1401D11CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D11CC: mov     [rsp+arg_0], rbx
 * 00000001401D11D1: mov     [rsp+arg_8], rsi
 * 00000001401D11D6: push    rdi
 * 00000001401D11D7: sub     rsp, 50h
 * 00000001401D11DB: movzx   ebx, [rsp+58h+arg_30]
 * 00000001401D11E3: mov     rsi, r9
 * 00000001401D11E6: mov     dil, r8b
 * 00000001401D11E9: test    dl, dl
 * 00000001401D11EB: jnz     short loc_1401D125E
 * 00000001401D11ED: test    dil, dil
 * 00000001401D11F0: jz      short loc_1401D124D
 * 00000001401D11F2: and     [rsp+58h+var_10], 0
 * 00000001401D11F8: lea     rax, [rsp+58h+arg_48]
 * 00000001401D1200: mov     r9, [rsp+58h+arg_38]
 * 00000001401D1208: mov     edx, 4
 * 00000001401D120D: mov     r8d, [rsp+58h+arg_28]
 * 00000001401D1215: mov     rcx, rsi
 * 00000001401D1218: mov     [rsp+58h+var_18], 8
 * 00000001401D1221: mov     [rsp+58h+var_20], rax
 * 00000001401D1226: lea     rax, [rsp+58h+arg_40]
 * 00000001401D122E: mov     [rsp+58h+var_28], 4
 * 00000001401D1237: mov     [rsp+58h+var_30], rax
 * 00000001401D123C: mov     word ptr [rsp+58h+var_38], bx
 * 00000001401D1241: call    cs:__imp_WppAutoLogTrace
 * 00000001401D1248: nop     dword ptr [rax+rax+00h]
 * 00000001401D124D: mov     rbx, [rsp+58h+arg_0]
 * 00000001401D1252: mov     rsi, [rsp+58h+arg_8]
 * 00000001401D1257: add     rsp, 50h
 * 00000001401D125B: pop     rdi
 * 00000001401D125C: retn
 * 00000001401D125E: and     [rsp+58h+var_18], 0
 * 00000001401D1264: lea     rdx, [rsp+58h+arg_48]
 * 00000001401D126C: mov     rax, cs:pfnWppTraceMessage
 * 00000001401D1273: mov     r9d, ebx
 * 00000001401D1276: mov     r8, [rsp+58h+arg_38]
 * 00000001401D127E: mov     [rsp+58h+var_20], 8
 * 00000001401D1287: mov     [rsp+58h+var_28], rdx
 * 00000001401D128C: lea     rdx, [rsp+58h+arg_40]
 * 00000001401D1294: mov     [rsp+58h+var_30], 4
 * 00000001401D129D: mov     [rsp+58h+var_38], rdx
 * 00000001401D12A2: mov     edx, 2Bh ; '+'
 * 00000001401D12A7: call    _guard_dispatch_icall
 * 00000001401D12AC: jmp     loc_1401D11ED
 */
