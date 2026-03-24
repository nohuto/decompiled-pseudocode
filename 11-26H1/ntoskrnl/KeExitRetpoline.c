/*
 * XREFs of KeExitRetpoline @ 0x14048D73C
 * Callers:
 *     KiDispatchCallout @ 0x14048D530 (KiDispatchCallout.c)
 *     FsRtlTruncateSmallMcb @ 0x1405249E0 (FsRtlTruncateSmallMcb.c)
 *     CcBcbProfiler @ 0x140540030 (CcBcbProfiler.c)
 *     sub_140540BD0 @ 0x140540BD0 (sub_140540BD0.c)
 *     KiSwInterruptDispatch @ 0x140540C30 (KiSwInterruptDispatch.c)
 *     sub_140542430 @ 0x140542430 (sub_140542430.c)
 *     sub_140551620 @ 0x140551620 (sub_140551620.c)
 *     RtlpComputeEpilogueOffset @ 0x1405531C8 (RtlpComputeEpilogueOffset.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F2470 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     sub_140713090 @ 0x140713090 (sub_140713090.c)
 *     KiLockServiceTable @ 0x1407134A4 (KiLockServiceTable.c)
 *     sub_14077F830 @ 0x14077F830 (sub_14077F830.c)
 *     KeUserModeCallback @ 0x140A59280 (KeUserModeCallback.c)
 * Callees:
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     __guard_retpoline_exit @ 0x140C5E680 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for KeExitRetpoline @ 0x14048D73C
 * Reason: Hex-Rays returned no pseudocode for 0x14048D73C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014048D73C: push    rbx
 * 000000014048D73E: sub     rsp, 20h
 * 000000014048D742: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014048D749: bt      rax, 29h ; ')'
 * 000000014048D74E: jnb     short loc_14048D779
 * 000000014048D750: call    KeDisableInterrupts
 * 000000014048D755: mov     rcx, gs:20h
 * 000000014048D75E: mov     bl, al
 * 000000014048D760: or      byte ptr [rcx+71Eh], 1
 * 000000014048D767: test    byte ptr [rcx+71Eh], 2
 * 000000014048D76E: jnz     short loc_14048D775
 * 000000014048D770: call    __guard_retpoline_exit
 * 000000014048D775: test    bl, bl
 * 000000014048D777: jnz     short loc_14048D783
 * 000000014048D779: lfence
 * 000000014048D77C: add     rsp, 20h
 * 000000014048D780: pop     rbx
 * 000000014048D781: retn
 * 000000014048D783: mov     rcx, gs:20h
 * 000000014048D78C: mov     r8, [rcx+8EF8h]
 * 000000014048D793: test    r8, r8
 * 000000014048D796: jnz     short loc_14048D79B
 * 000000014048D798: sti
 * 000000014048D799: jmp     short loc_14048D779
 * 000000014048D79B: prefetchw byte ptr [r8]
 * 000000014048D79F: mov     eax, [r8]
 * 000000014048D7A2: mov     edx, eax
 * 000000014048D7A4: btr     edx, 15h
 * 000000014048D7A8: lock cmpxchg [r8], edx
 * 000000014048D7AD: jnz     short loc_14048D7A2
 * 000000014048D7AF: bt      eax, 15h
 * 000000014048D7B3: jnb     short loc_14048D798
 * 000000014048D7B5: call    KiRemoveSystemWorkPriorityKick
 * 000000014048D7BA: jmp     short loc_14048D798
 */
