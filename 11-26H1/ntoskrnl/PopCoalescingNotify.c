/*
 * XREFs of PopCoalescingNotify @ 0x1407CF2D0
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     PopCoalescingSetTimer @ 0x1404C3348 (PopCoalescingSetTimer.c)
 *     PopPrintEx @ 0x1404C33A8 (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1404EFF10 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopCoalescingNotify @ 0x1407CF2D0
 * Reason: Hex-Rays returned no pseudocode for 0x1407CF2D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407CF2D0: sub     rsp, 28h
 * 00000001407CF2D4: call    PopAcquirePolicyLock
 * 00000001407CF2D9: test    byte ptr cs:stru_140F11D08.___u62, 2
 * 00000001407CF2E0: jz      short loc_1407CF330
 * 00000001407CF2E2: lea     rcx, stru_140F11D08.___u57; PKTIMER
 * 00000001407CF2E9: call    KeCancelTimer
 * 00000001407CF2EE: or      byte ptr cs:stru_140F11D08.___u62, 4
 * 00000001407CF2F5: call    PopEnsureCoalescingWorkerWillRun
 * 00000001407CF2FA: lea     rdx, aPopcoalescingF; "PopCoalescing: FLUSH notification sent."...
 * 00000001407CF301: mov     ecx, 3
 * 00000001407CF306: call    PopPrintEx
 * 00000001407CF30B: lea     rcx, POP_ETW_IO_COALESCING_FLUSH; EventDescriptor
 * 00000001407CF312: call    PopDiagTraceEventNoPayload
 * 00000001407CF317: mov     rax, 0FFFFF78000000008h
 * 00000001407CF321: mov     rax, [rax]
 * 00000001407CF324: mov     qword ptr cs:stru_140F11D08.___u58+10h, rax
 * 00000001407CF32B: call    PopCoalescingSetTimer
 * 00000001407CF330: call    PopReleasePolicyLock
 * 00000001407CF335: mov     rax, gs:188h
 * 00000001407CF33E: cmp     dword ptr [rax+1E4h], 0
 * 00000001407CF345: jz      short loc_1407CF34E
 * 00000001407CF347: mov     ecx, 20h ; ' '
 * 00000001407CF34C: int     29h; Win8: RtlFailFast(ecx)
 * 00000001407CF34E: xor     eax, eax
 * 00000001407CF350: add     rsp, 28h
 * 00000001407CF354: retn
 */
