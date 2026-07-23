/*
 * XREFs of KeExitRetpoline @ 0x14048727C
 * Callers:
 *     KiDispatchCallout @ 0x140487070 (KiDispatchCallout.c)
 *     FsRtlTruncateSmallMcb @ 0x140527050 (FsRtlTruncateSmallMcb.c)
 *     CcBcbProfiler @ 0x1405424B0 (CcBcbProfiler.c)
 *     sub_140543050 @ 0x140543050 (sub_140543050.c)
 *     KiSwInterruptDispatch @ 0x1405430B0 (KiSwInterruptDispatch.c)
 *     sub_1405448B0 @ 0x1405448B0 (sub_1405448B0.c)
 *     sub_140553AA0 @ 0x140553AA0 (sub_140553AA0.c)
 *     RtlpComputeEpilogueOffset @ 0x140555648 (RtlpComputeEpilogueOffset.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F4E30 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     sub_140717D80 @ 0x140717D80 (sub_140717D80.c)
 *     KiLockServiceTable @ 0x140718194 (KiLockServiceTable.c)
 *     sub_140782330 @ 0x140782330 (sub_140782330.c)
 *     KeUserModeCallback @ 0x140923D90 (KeUserModeCallback.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __guard_retpoline_exit @ 0x140C64680 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for KeExitRetpoline @ 0x14048727C
 * Reason: Hex-Rays returned no pseudocode for 0x14048727C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014048727C: push    rbx
 * 000000014048727E: sub     rsp, 20h
 * 0000000140487282: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140487289: bt      rax, 29h ; ')'
 * 000000014048728E: jnb     short loc_1404872B9
 * 0000000140487290: call    KeDisableInterrupts
 * 0000000140487295: mov     rcx, gs:20h
 * 000000014048729E: mov     bl, al
 * 00000001404872A0: or      byte ptr [rcx+71Eh], 1
 * 00000001404872A7: test    byte ptr [rcx+71Eh], 2
 * 00000001404872AE: jnz     short loc_1404872B5
 * 00000001404872B0: call    __guard_retpoline_exit
 * 00000001404872B5: test    bl, bl
 * 00000001404872B7: jnz     short loc_1404872C3
 * 00000001404872B9: lfence
 * 00000001404872BC: add     rsp, 20h
 * 00000001404872C0: pop     rbx
 * 00000001404872C1: retn
 * 00000001404872C3: mov     rcx, gs:20h
 * 00000001404872CC: mov     r8, [rcx+8EF8h]
 * 00000001404872D3: test    r8, r8
 * 00000001404872D6: jnz     short loc_1404872DB
 * 00000001404872D8: sti
 * 00000001404872D9: jmp     short loc_1404872B9
 * 00000001404872DB: prefetchw byte ptr [r8]
 * 00000001404872DF: mov     eax, [r8]
 * 00000001404872E2: mov     edx, eax
 * 00000001404872E4: btr     edx, 15h
 * 00000001404872E8: lock cmpxchg [r8], edx
 * 00000001404872ED: jnz     short loc_1404872E2
 * 00000001404872EF: bt      eax, 15h
 * 00000001404872F3: jnb     short loc_1404872D8
 * 00000001404872F5: call    KiRemoveSystemWorkPriorityKick
 * 00000001404872FA: jmp     short loc_1404872D8
 */
