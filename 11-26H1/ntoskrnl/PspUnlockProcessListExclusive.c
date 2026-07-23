/*
 * XREFs of PspUnlockProcessListExclusive @ 0x14021628C
 * Callers:
 *     PsGetSessionObjectById @ 0x140216024 (PsGetSessionObjectById.c)
 *     PsIsSessionInCurrentServerSilo @ 0x140424C54 (PsIsSessionInCurrentServerSilo.c)
 *     PspDetachSession @ 0x1404B05B0 (PspDetachSession.c)
 *     PsAttachSession @ 0x140619D70 (PsAttachSession.c)
 *     PspMarkSessionDeletePending @ 0x14077D2E8 (PspMarkSessionDeletePending.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     PspFreeSessionId @ 0x140804C60 (PspFreeSessionId.c)
 *     PspGetNewSessionId @ 0x140804CB4 (PspGetNewSessionId.c)
 *     PspMarkSessionReferenceProcess @ 0x140804DCC (PspMarkSessionReferenceProcess.c)
 *     PspSessionUnlinkProcess @ 0x140804E54 (PspSessionUnlinkProcess.c)
 *     PspUnlinkSessionId @ 0x140804EB4 (PspUnlinkSessionId.c)
 *     PspInsertProcess @ 0x140945AAC (PspInsertProcess.c)
 *     PspInitializeSessionGlobals @ 0x140A098DC (PspInitializeSessionGlobals.c)
 *     PsGetNextSession @ 0x140A837F0 (PsGetNextSession.c)
 *     PsJoinSession @ 0x140ABFD18 (PsJoinSession.c)
 *     PsUnlinkProcessFromSession @ 0x140AF9554 (PsUnlinkProcessFromSession.c)
 *     PspAttachSession @ 0x140B23AC8 (PspAttachSession.c)
 *     ExpInitializeSessionDriver @ 0x140B381A8 (ExpInitializeSessionDriver.c)
 *     PspMakeSessionVisible @ 0x140B57978 (PspMakeSessionVisible.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

/*
 * Hex-Rays decompilation failed for PspUnlockProcessListExclusive @ 0x14021628C
 * Reason: Hex-Rays returned no pseudocode for 0x14021628C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014021628C: push    rbx
 * 000000014021628E: sub     rsp, 20h
 * 0000000140216292: mov     rbx, rcx
 * 0000000140216295: or      rax, 0FFFFFFFFFFFFFFFFh
 * 0000000140216299: lock xadd cs:PspActiveProcessLock, rax
 * 00000001402162A2: and     al, 6
 * 00000001402162A4: cmp     al, 2
 * 00000001402162A6: jnz     short loc_1402162B4
 * 00000001402162A8: lea     rcx, PspActiveProcessLock
 * 00000001402162AF: call    ExfTryToWakePushLock
 * 00000001402162B4: lea     rcx, PspActiveProcessLock; struct _KTHREAD *
 * 00000001402162BB: call    KeAbPostRelease
 * 00000001402162C0: nop
 * 00000001402162C1: add     word ptr [rbx+1E6h], 1
 * 00000001402162C9: jnz     short loc_1402162DD
 * 00000001402162CB: lea     rax, [rbx+98h]
 * 00000001402162D2: nop
 * 00000001402162D3: cmp     [rax], rax
 * 00000001402162D6: jz      short loc_1402162DD
 * 00000001402162D8: call    KiCheckForKernelApcDelivery
 * 00000001402162DD: add     rsp, 20h
 * 00000001402162E1: pop     rbx
 * 00000001402162E2: retn
 */
