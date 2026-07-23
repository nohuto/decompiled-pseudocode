/*
 * XREFs of PopCoalescingNotify @ 0x1407D2370
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     PopCoalescingSetTimer @ 0x1404BCB98 (PopCoalescingSetTimer.c)
 *     PopPrintEx @ 0x1404BCBF8 (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1404E94F0 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopCoalescingNotify @ 0x1407D2370
 * Reason: Hex-Rays returned no pseudocode for 0x1407D2370
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407D2370: sub     rsp, 28h
 * 00000001407D2374: call    PopAcquirePolicyLock
 * 00000001407D2379: test    cs:PopCoalescingState, 2
 * 00000001407D2380: jz      short loc_1407D23D0
 * 00000001407D2382: lea     rcx, PopCoalescingTimer; PKTIMER
 * 00000001407D2389: call    KeCancelTimer
 * 00000001407D238E: or      cs:PopCoalescingState, 4
 * 00000001407D2395: call    PopEnsureCoalescingWorkerWillRun
 * 00000001407D239A: lea     rdx, aPopcoalescingF; "PopCoalescing: FLUSH notification sent."...
 * 00000001407D23A1: mov     ecx, 3
 * 00000001407D23A6: call    PopPrintEx
 * 00000001407D23AB: lea     rcx, POP_ETW_IO_COALESCING_FLUSH; EventDescriptor
 * 00000001407D23B2: call    PopDiagTraceEventNoPayload
 * 00000001407D23B7: mov     rax, 0FFFFF78000000008h
 * 00000001407D23C1: mov     rax, [rax]
 * 00000001407D23C4: mov     cs:PopCoalescingLastFlushTime, rax
 * 00000001407D23CB: call    PopCoalescingSetTimer
 * 00000001407D23D0: call    PopReleasePolicyLock
 * 00000001407D23D5: mov     rax, gs:188h
 * 00000001407D23DE: cmp     dword ptr [rax+1E4h], 0
 * 00000001407D23E5: jz      short loc_1407D23EE
 * 00000001407D23E7: mov     ecx, 20h ; ' '
 * 00000001407D23EC: int     29h; Win8: RtlFailFast(ecx)
 * 00000001407D23EE: xor     eax, eax
 * 00000001407D23F0: add     rsp, 28h
 * 00000001407D23F4: retn
 */
