/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402C163C
 * Callers:
 *     ?SetRestoreToArrangeRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x140026328 (-SetRestoreToArrangeRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x14014DEF4 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     ?SetOverrideMargins@CWindowMarginProp@WindowMargins@@SAJPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1402C11E0 (-SetOverrideMargins@CWindowMarginProp@WindowMargins@@SAJPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     ?SetLastMoveRect@CRecalcProp@@AEAAXXZ @ 0x1402C59A4 (-SetLastMoveRect@CRecalcProp@@AEAAXXZ.c)
 *     ?ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ @ 0x1402C5E5C (-ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402D9920 (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DCC18 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402C163C
 * Reason: Hex-Rays returned no pseudocode for 0x1402C163C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402C163C: mov     r11, rsp
 * 00000001402C163F: mov     [r11+8], rbx
 * 00000001402C1643: mov     [r11+10h], rsi
 * 00000001402C1647: mov     [r11+18h], rdi
 * 00000001402C164B: mov     [r11+20h], r14
 * 00000001402C164F: push    rbp
 * 00000001402C1650: lea     rbp, [r11-0Fh]
 * 00000001402C1654: sub     rsp, 0A0h
 * 00000001402C165B: movzx   edi, [rbp+7+arg_30]
 * 00000001402C165F: mov     rsi, r9
 * 00000001402C1662: mov     bl, r8b
 * 00000001402C1665: mov     r14d, 4
 * 00000001402C166B: test    dl, dl
 * 00000001402C166D: jz      short loc_1402C16E7
 * 00000001402C166F: and     qword ptr [r11-18h], 0
 * 00000001402C1674: lea     rdx, [rbp+7+arg_70]
 * 00000001402C167B: mov     rax, cs:pfnWppTraceMessage
 * 00000001402C1682: mov     r9d, edi
 * 00000001402C1685: mov     r8, [rbp+7+arg_38]
 * 00000001402C1689: mov     [r11-20h], r14
 * 00000001402C168D: mov     [r11-28h], rdx
 * 00000001402C1691: lea     rdx, [rbp+7+arg_68]
 * 00000001402C1695: mov     [r11-30h], r14
 * 00000001402C1699: mov     [r11-38h], rdx
 * 00000001402C169D: lea     rdx, [rbp+7+arg_60]
 * 00000001402C16A1: mov     [r11-40h], r14
 * 00000001402C16A5: mov     [r11-48h], rdx
 * 00000001402C16A9: lea     rdx, [rbp+7+arg_58]
 * 00000001402C16AD: mov     [r11-50h], r14
 * 00000001402C16B1: mov     [r11-58h], rdx
 * 00000001402C16B5: lea     rdx, [rbp+7+arg_50]
 * 00000001402C16B9: mov     [r11-60h], r14
 * 00000001402C16BD: mov     [r11-68h], rdx
 * 00000001402C16C1: lea     rdx, [rbp+7+arg_48]
 * 00000001402C16C5: mov     [r11-70h], r14
 * 00000001402C16C9: mov     [r11-78h], rdx
 * 00000001402C16CD: lea     rdx, [rbp+7+arg_40]
 * 00000001402C16D1: mov     qword ptr [r11-80h], 8
 * 00000001402C16D9: mov     [rsp+0A0h+var_80], rdx
 * 00000001402C16DE: lea     edx, [r14+27h]
 * 00000001402C16E2: call    _guard_dispatch_icall
 * 00000001402C16E7: test    bl, bl
 * 00000001402C16E9: jz      loc_1402C178B
 * 00000001402C16EF: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001402C16F8: lea     rax, [rbp+7+arg_70]
 * 00000001402C16FF: mov     r9, [rbp+7+arg_38]
 * 00000001402C1703: mov     edx, 5
 * 00000001402C1708: mov     r8d, [rbp+7+arg_28]
 * 00000001402C170C: mov     rcx, rsi
 * 00000001402C170F: mov     [rsp+0A0h+var_10], r14
 * 00000001402C1717: mov     [rsp+0A0h+var_18], rax
 * 00000001402C171F: lea     rax, [rbp+7+arg_68]
 * 00000001402C1723: mov     [rsp+0A0h+var_20], r14
 * 00000001402C172B: mov     [rsp+0A0h+var_28], rax
 * 00000001402C1730: lea     rax, [rbp+7+arg_60]
 * 00000001402C1734: mov     [rsp+0A0h+var_30], r14
 * 00000001402C1739: mov     [rsp+0A0h+var_38], rax
 * 00000001402C173E: lea     rax, [rbp+7+arg_58]
 * 00000001402C1742: mov     [rsp+0A0h+var_40], r14
 * 00000001402C1747: mov     [rsp+0A0h+var_48], rax
 * 00000001402C174C: lea     rax, [rbp+7+arg_50]
 * 00000001402C1750: mov     [rsp+0A0h+var_50], r14
 * 00000001402C1755: mov     [rsp+0A0h+var_58], rax
 * 00000001402C175A: lea     rax, [rbp+7+arg_48]
 * 00000001402C175E: mov     [rsp+0A0h+var_60], r14
 * 00000001402C1763: mov     [rsp+0A0h+var_68], rax
 * 00000001402C1768: lea     rax, [rbp+7+arg_40]
 * 00000001402C176C: mov     [rsp+0A0h+var_70], 8
 * 00000001402C1775: mov     [rsp+0A0h+var_78], rax
 * 00000001402C177A: mov     word ptr [rsp+0A0h+var_80], di
 * 00000001402C177F: call    cs:__imp_WppAutoLogTrace
 * 00000001402C1786: nop     dword ptr [rax+rax+00h]
 * 00000001402C178B: lea     r11, [rsp+0A0h+var_s0]
 * 00000001402C1793: mov     rbx, [r11+10h]
 * 00000001402C1797: mov     rsi, [r11+18h]
 * 00000001402C179B: mov     rdi, [r11+20h]
 * 00000001402C179F: mov     r14, [r11+28h]
 * 00000001402C17A3: mov     rsp, r11
 * 00000001402C17A6: pop     rbp
 * 00000001402C17A7: retn
 */
