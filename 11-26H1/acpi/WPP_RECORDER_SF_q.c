/*
 * XREFs of WPP_RECORDER_SF_q @ 0x14002EC00
 * Callers:
 *     ACPIAsyncAcquireGlobalLock @ 0x14002E660 (ACPIAsyncAcquireGlobalLock.c)
 *     ACPIReleaseGlobalLock @ 0x14002E900 (ACPIReleaseGlobalLock.c)
 *     OSNotifyDeviceWakeCallBack @ 0x140033C00 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIMapNamedTable @ 0x14003D2D0 (ACPIMapNamedTable.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x14004A9C0 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     LinkNodepRunSrsWorker @ 0x1400719F0 (LinkNodepRunSrsWorker.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1400BE450 (IrqArbpAssignIrqFromLinkNode.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1400C3308 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1400D15F0 (IrqArbpFindSuitableRangeMsi.c)
 *     ACPIGlobalInitialize @ 0x1400D8740 (ACPIGlobalInitialize.c)
 *     ACPILoadProcessDSDT @ 0x1400DB740 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFACS @ 0x1400DB880 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessRSDT @ 0x1400DDE64 (ACPILoadProcessRSDT.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x14002EC00
 * Reason: Hex-Rays returned no pseudocode for 0x14002EC00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014002EC00: mov     [rsp+arg_0], rbx
 * 000000014002EC05: mov     [rsp+arg_8], rsi
 * 000000014002EC0A: mov     [rsp+arg_10], rdi
 * 000000014002EC0F: push    r14
 * 000000014002EC11: sub     rsp, 40h
 * 000000014002EC15: mov     ebx, r8d
 * 000000014002EC18: mov     r14, rcx
 * 000000014002EC1B: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000014002EC22: mov     r11d, r8d
 * 000000014002EC25: shr     r11, 10h
 * 000000014002EC29: lea     r10d, [rbx-1]
 * 000000014002EC2D: movzx   esi, r9w
 * 000000014002EC31: mov     r8d, r10d
 * 000000014002EC34: movzx   edi, dl
 * 000000014002EC37: shr     r8, 5
 * 000000014002EC3B: and     r10d, 1Fh
 * 000000014002EC3F: and     r8d, 7FFh
 * 000000014002EC46: lea     rax, [r11+r11*4]
 * 000000014002EC4A: lea     rax, [r8+rax*4]
 * 000000014002EC4E: mov     eax, [rcx+rax*4+2Ch]
 * 000000014002EC52: bt      eax, r10d
 * 000000014002EC56: jb      short loc_14002ECA9
 * 000000014002EC58: mov     r9, [rsp+48h+arg_20]
 * 000000014002EC5D: lea     rax, [rsp+48h+arg_28]
 * 000000014002EC62: mov     [rsp+48h+var_10], 0
 * 000000014002EC6B: mov     r8d, ebx
 * 000000014002EC6E: mov     [rsp+48h+var_18], 8
 * 000000014002EC77: mov     edx, edi
 * 000000014002EC79: mov     [rsp+48h+var_20], rax
 * 000000014002EC7E: mov     rcx, r14
 * 000000014002EC81: mov     word ptr [rsp+48h+var_28], si
 * 000000014002EC86: call    cs:__imp_WppAutoLogTrace
 * 000000014002EC8D: nop     dword ptr [rax+rax+00h]
 * 000000014002EC92: mov     rbx, [rsp+48h+arg_0]
 * 000000014002EC97: mov     rsi, [rsp+48h+arg_8]
 * 000000014002EC9C: mov     rdi, [rsp+48h+arg_10]
 * 000000014002ECA1: add     rsp, 40h
 * 000000014002ECA5: pop     r14
 * 000000014002ECA7: retn
 * 000000014002ECA9: lea     rax, [r11+r11*4]
 * 000000014002ECAD: shl     rax, 4
 * 000000014002ECB1: add     rcx, rax
 * 000000014002ECB4: cmp     [rcx+29h], dil
 * 000000014002ECB8: jb      short loc_14002EC58
 * 000000014002ECBA: mov     rax, cs:pfnWppTraceMessage
 * 000000014002ECC1: lea     rdx, [rsp+48h+arg_28]
 * 000000014002ECC6: mov     r8, [rsp+48h+arg_20]
 * 000000014002ECCB: mov     r9d, esi
 * 000000014002ECCE: mov     rcx, [rcx+18h]
 * 000000014002ECD2: mov     [rsp+48h+var_18], 0
 * 000000014002ECDB: mov     [rsp+48h+var_20], 8
 * 000000014002ECE4: mov     [rsp+48h+var_28], rdx
 * 000000014002ECE9: mov     edx, 2Bh ; '+'
 * 000000014002ECEE: call    _guard_dispatch_icall
 * 000000014002ECF3: jmp     loc_14002EC58
 */
