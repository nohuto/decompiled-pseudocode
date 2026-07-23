/*
 * XREFs of PsSuspendProcess @ 0x1408029A0
 * Callers:
 *     PspFreezeProcessWorker @ 0x140800CA0 (PspFreezeProcessWorker.c)
 *     NtSuspendProcess @ 0x140B3E200 (NtSuspendProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     PspSuspendThread @ 0x140949620 (PspSuspendThread.c)
 *     PsGetNextProcessThread @ 0x14094ADD0 (PsGetNextProcessThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140AF3F18 (EtwTiLogSuspendResumeProcess.c)
 */

/*
 * Hex-Rays decompilation failed for PsSuspendProcess @ 0x1408029A0
 * Reason: Hex-Rays returned no pseudocode for 0x1408029A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408029A0: mov     rax, rsp
 * 00000001408029A3: mov     [rax+8], rbx
 * 00000001408029A7: mov     [rax+10h], rbp
 * 00000001408029AB: mov     [rax+18h], rsi
 * 00000001408029AF: mov     [rax+20h], rdi
 * 00000001408029B3: push    r14
 * 00000001408029B5: sub     rsp, 20h
 * 00000001408029B9: mov     rbp, gs:188h
 * 00000001408029C2: lea     r14, [rcx+1E8h]
 * 00000001408029C9: mov     rsi, rcx
 * 00000001408029CC: mov     rcx, r14; RunRef
 * 00000001408029CF: dec     word ptr [rbp+1E4h]
 * 00000001408029D6: nop
 * 00000001408029D7: call    ExAcquireRundownProtection_0
 * 00000001408029DC: cmp     al, 1
 * 00000001408029DE: jnz     short loc_140802A24
 * 00000001408029E0: xor     edx, edx
 * 00000001408029E2: mov     rcx, rsi
 * 00000001408029E5: call    PsGetNextProcessThread
 * 00000001408029EA: xor     ebx, ebx
 * 00000001408029EC: jmp     short loc_140802A12
 * 00000001408029EE: test    dword ptr [rdi+74h], 200000h
 * 00000001408029F5: jnz     short loc_140802A07
 * 00000001408029F7: xor     r9d, r9d
 * 00000001408029FA: xor     r8d, r8d
 * 00000001408029FD: xor     edx, edx
 * 00000001408029FF: mov     rcx, rdi
 * 0000000140802A02: call    PspSuspendThread
 * 0000000140802A07: mov     rdx, rdi
 * 0000000140802A0A: mov     rcx, rsi
 * 0000000140802A0D: call    PsGetNextProcessThread
 * 0000000140802A12: mov     rdi, rax
 * 0000000140802A15: test    rax, rax
 * 0000000140802A18: jnz     short loc_1408029EE
 * 0000000140802A1A: mov     rcx, r14; RunRef
 * 0000000140802A1D: call    ExReleaseRundownProtection_0
 * 0000000140802A22: jmp     short loc_140802A29
 * 0000000140802A24: mov     ebx, 0C000010Ah
 * 0000000140802A29: mov     edx, [rsi+5FCh]
 * 0000000140802A2F: bt      edx, 13h
 * 0000000140802A33: jnb     short loc_140802A45
 * 0000000140802A35: xor     r9d, r9d
 * 0000000140802A38: mov     r8, rsi
 * 0000000140802A3B: mov     rdx, rbp
 * 0000000140802A3E: mov     ecx, ebx
 * 0000000140802A40: call    EtwTiLogSuspendResumeProcess
 * 0000000140802A45: mov     rcx, rbp
 * 0000000140802A48: call    KiLeaveCriticalRegionUnsafe
 * 0000000140802A4D: mov     rbp, [rsp+28h+arg_8]
 * 0000000140802A52: mov     eax, ebx
 * 0000000140802A54: mov     rbx, [rsp+28h+arg_0]
 * 0000000140802A59: mov     rsi, [rsp+28h+arg_10]
 * 0000000140802A5E: mov     rdi, [rsp+28h+arg_18]
 * 0000000140802A63: add     rsp, 20h
 * 0000000140802A67: pop     r14
 * 0000000140802A69: retn
 */
