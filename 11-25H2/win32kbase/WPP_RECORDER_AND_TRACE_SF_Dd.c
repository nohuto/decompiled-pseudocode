/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400B4C14
 * Callers:
 *     rimProcessMissingPointerDeviceContacts @ 0x1400320D4 (rimProcessMissingPointerDeviceContacts.c)
 *     tracePointerInfo @ 0x1400B4190 (tracePointerInfo.c)
 *     ?ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400C0B80 (-ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 *     ?SetPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400C0FB0 (-SetPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 *     ForegroundBoost::_anonymous_namespace_::CanAdjustPriority @ 0x140129B94 (ForegroundBoost--_anonymous_namespace_--CanAdjustPriority.c)
 *     RIMAllocateHidConfigDesc @ 0x14012A498 (RIMAllocateHidConfigDesc.c)
 *     ?ComputeAndTestForegroundActivate@tagTHREADINFO@@QEAA_NXZ @ 0x140161BA0 (-ComputeAndTestForegroundActivate@tagTHREADINFO@@QEAA_NXZ.c)
 *     ?SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z @ 0x140162110 (-SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z.c)
 *     xxxInitProcessInfo @ 0x140165DD4 (xxxInitProcessInfo.c)
 *     xxxUserProcessCallout @ 0x14016B6A0 (xxxUserProcessCallout.c)
 *     ?UpdateCapabilities@tagPROCESSINFO@@QEAA?AW4Win32ProcessCapabilities@@W42@0@Z @ 0x1401A9320 (-UpdateCapabilities@tagPROCESSINFO@@QEAA-AW4Win32ProcessCapabilities@@W42@0@Z.c)
 *     RIMAllocateHidDesc @ 0x1401DE298 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1401DF458 (RIMCreateHidDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1401F4828 (rimObsStartStopDeviceRead.c)
 *     InitCreateSharedSection @ 0x1402EA988 (InitCreateSharedSection.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400B4C14
 * Reason: Hex-Rays returned no pseudocode for 0x1400B4C14
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400B4C14: mov     [rsp+arg_0], rbx
 * 00000001400B4C19: mov     [rsp+arg_8], rbp
 * 00000001400B4C1E: mov     [rsp+arg_10], rsi
 * 00000001400B4C23: push    rdi
 * 00000001400B4C24: sub     rsp, 50h
 * 00000001400B4C28: movzx   ebx, [rsp+58h+arg_30]
 * 00000001400B4C30: mov     rsi, r9
 * 00000001400B4C33: mov     dil, r8b
 * 00000001400B4C36: mov     ebp, 4
 * 00000001400B4C3B: test    dl, dl
 * 00000001400B4C3D: jnz     short loc_1400B4CB0
 * 00000001400B4C3F: test    dil, dil
 * 00000001400B4C42: jz      short loc_1400B4C9A
 * 00000001400B4C44: and     [rsp+58h+var_10], 0
 * 00000001400B4C4A: lea     rax, [rsp+58h+arg_48]
 * 00000001400B4C52: mov     r9, [rsp+58h+arg_38]
 * 00000001400B4C5A: mov     rcx, rsi
 * 00000001400B4C5D: mov     r8d, [rsp+58h+arg_28]
 * 00000001400B4C65: movzx   edx, [rsp+58h+arg_20]
 * 00000001400B4C6D: mov     [rsp+58h+var_18], rbp
 * 00000001400B4C72: mov     [rsp+58h+var_20], rax
 * 00000001400B4C77: lea     rax, [rsp+58h+arg_40]
 * 00000001400B4C7F: mov     [rsp+58h+var_28], rbp
 * 00000001400B4C84: mov     [rsp+58h+var_30], rax
 * 00000001400B4C89: mov     word ptr [rsp+58h+var_38], bx
 * 00000001400B4C8E: call    cs:__imp_WppAutoLogTrace
 * 00000001400B4C95: nop     dword ptr [rax+rax+00h]
 * 00000001400B4C9A: mov     rbx, [rsp+58h+arg_0]
 * 00000001400B4C9F: mov     rbp, [rsp+58h+arg_8]
 * 00000001400B4CA4: mov     rsi, [rsp+58h+arg_10]
 * 00000001400B4CA9: add     rsp, 50h
 * 00000001400B4CAD: pop     rdi
 * 00000001400B4CAE: retn
 * 00000001400B4CB0: and     [rsp+58h+var_18], 0
 * 00000001400B4CB6: lea     rdx, [rsp+58h+arg_48]
 * 00000001400B4CBE: mov     rax, cs:pfnWppTraceMessage
 * 00000001400B4CC5: mov     r9d, ebx
 * 00000001400B4CC8: mov     r8, [rsp+58h+arg_38]
 * 00000001400B4CD0: mov     [rsp+58h+var_20], rbp
 * 00000001400B4CD5: mov     [rsp+58h+var_28], rdx
 * 00000001400B4CDA: lea     rdx, [rsp+58h+arg_40]
 * 00000001400B4CE2: mov     [rsp+58h+var_30], rbp
 * 00000001400B4CE7: mov     [rsp+58h+var_38], rdx
 * 00000001400B4CEC: mov     edx, 2Bh ; '+'
 * 00000001400B4CF1: call    _guard_dispatch_icall
 * 00000001400B4CF6: jmp     loc_1400B4C3F
 */
