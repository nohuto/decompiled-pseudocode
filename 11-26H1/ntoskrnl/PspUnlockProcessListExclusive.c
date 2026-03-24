/*
 * XREFs of PspUnlockProcessListExclusive @ 0x140215F5C
 * Callers:
 *     PsGetSessionObjectById @ 0x140215CF4 (PsGetSessionObjectById.c)
 *     PsIsSessionInCurrentServerSilo @ 0x140435678 (PsIsSessionInCurrentServerSilo.c)
 *     PspDetachSession @ 0x1404B6D7C (PspDetachSession.c)
 *     PsAttachSession @ 0x140616D80 (PsAttachSession.c)
 *     PspMarkSessionDeletePending @ 0x14077A3B8 (PspMarkSessionDeletePending.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     PspFreeSessionId @ 0x1407FF230 (PspFreeSessionId.c)
 *     PspGetNewSessionId @ 0x1407FF284 (PspGetNewSessionId.c)
 *     PspMarkSessionReferenceProcess @ 0x1407FF39C (PspMarkSessionReferenceProcess.c)
 *     PspSessionUnlinkProcess @ 0x1407FF424 (PspSessionUnlinkProcess.c)
 *     PspUnlinkSessionId @ 0x1407FF484 (PspUnlinkSessionId.c)
 *     PspInsertProcess @ 0x140983A9C (PspInsertProcess.c)
 *     PsGetNextSession @ 0x140A7D980 (PsGetNextSession.c)
 *     PsJoinSession @ 0x140ABD728 (PsJoinSession.c)
 *     PsUnlinkProcessFromSession @ 0x140AF6EB4 (PsUnlinkProcessFromSession.c)
 *     PspAttachSession @ 0x140B216C8 (PspAttachSession.c)
 *     ExpInitializeSessionDriver @ 0x140B35F98 (ExpInitializeSessionDriver.c)
 *     PspMakeSessionVisible @ 0x140B550DC (PspMakeSessionVisible.c)
 *     PspInitializeSessionGlobals @ 0x140B6AFFC (PspInitializeSessionGlobals.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

/*
 * Hex-Rays decompilation failed for PspUnlockProcessListExclusive @ 0x140215F5C
 * Reason: Hex-Rays returned no pseudocode for 0x140215F5C
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140215F5C: push    rbx
 * 0000000140215F5E: sub     rsp, 20h
 * 0000000140215F62: mov     rbx, rcx
 * 0000000140215F65: or      rax, 0FFFFFFFFFFFFFFFFh
 * 0000000140215F69: lock xadd cs:PspActiveProcessLock, rax
 * 0000000140215F72: and     al, 6
 * 0000000140215F74: cmp     al, 2
 * 0000000140215F76: jnz     short loc_140215F84
 * 0000000140215F78: lea     rcx, PspActiveProcessLock
 * 0000000140215F7F: call    ExfTryToWakePushLock
 * 0000000140215F84: lea     rcx, PspActiveProcessLock; struct _KTHREAD *
 * 0000000140215F8B: call    KeAbPostRelease
 * 0000000140215F90: nop
 * 0000000140215F91: add     word ptr [rbx+1E6h], 1
 * 0000000140215F99: jnz     short loc_140215FAD
 * 0000000140215F9B: lea     rax, [rbx+98h]
 * 0000000140215FA2: nop
 * 0000000140215FA3: cmp     [rax], rax
 * 0000000140215FA6: jz      short loc_140215FAD
 * 0000000140215FA8: call    KiCheckForKernelApcDelivery
 * 0000000140215FAD: add     rsp, 20h
 * 0000000140215FB1: pop     rbx
 * 0000000140215FB2: retn
 */
