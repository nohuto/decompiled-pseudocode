/*
 * XREFs of PsSuspendProcess @ 0x1407FCF70
 * Callers:
 *     PspFreezeProcessWorker @ 0x1407FB270 (PspFreezeProcessWorker.c)
 *     NtSuspendProcess @ 0x140B3BF80 (NtSuspendProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     PsGetNextProcessThread @ 0x1409573A0 (PsGetNextProcessThread.c)
 *     PspSuspendThread @ 0x140AD5030 (PspSuspendThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x140AF12D8 (EtwTiLogSuspendResumeProcess.c)
 */

/*
 * Hex-Rays decompilation failed for PsSuspendProcess @ 0x1407FCF70
 * Reason: Hex-Rays returned no pseudocode for 0x1407FCF70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407FCF70: mov     rax, rsp
 * 00000001407FCF73: mov     [rax+8], rbx
 * 00000001407FCF77: mov     [rax+10h], rbp
 * 00000001407FCF7B: mov     [rax+18h], rsi
 * 00000001407FCF7F: mov     [rax+20h], rdi
 * 00000001407FCF83: push    r14
 * 00000001407FCF85: sub     rsp, 20h
 * 00000001407FCF89: mov     rbp, gs:188h
 * 00000001407FCF92: lea     r14, [rcx+1E8h]
 * 00000001407FCF99: mov     rsi, rcx
 * 00000001407FCF9C: mov     rcx, r14; RunRef
 * 00000001407FCF9F: dec     word ptr [rbp+1E4h]
 * 00000001407FCFA6: nop
 * 00000001407FCFA7: call    ExAcquireRundownProtection_0
 * 00000001407FCFAC: cmp     al, 1
 * 00000001407FCFAE: jnz     short loc_1407FCFF4
 * 00000001407FCFB0: xor     edx, edx
 * 00000001407FCFB2: mov     rcx, rsi
 * 00000001407FCFB5: call    PsGetNextProcessThread
 * 00000001407FCFBA: xor     ebx, ebx
 * 00000001407FCFBC: jmp     short loc_1407FCFE2
 * 00000001407FCFBE: test    dword ptr [rdi+74h], 200000h
 * 00000001407FCFC5: jnz     short loc_1407FCFD7
 * 00000001407FCFC7: xor     r9d, r9d
 * 00000001407FCFCA: xor     r8d, r8d
 * 00000001407FCFCD: xor     edx, edx
 * 00000001407FCFCF: mov     rcx, rdi
 * 00000001407FCFD2: call    PspSuspendThread
 * 00000001407FCFD7: mov     rdx, rdi
 * 00000001407FCFDA: mov     rcx, rsi
 * 00000001407FCFDD: call    PsGetNextProcessThread
 * 00000001407FCFE2: mov     rdi, rax
 * 00000001407FCFE5: test    rax, rax
 * 00000001407FCFE8: jnz     short loc_1407FCFBE
 * 00000001407FCFEA: mov     rcx, r14; RunRef
 * 00000001407FCFED: call    ExReleaseRundownProtection_0
 * 00000001407FCFF2: jmp     short loc_1407FCFF9
 * 00000001407FCFF4: mov     ebx, 0C000010Ah
 * 00000001407FCFF9: mov     edx, [rsi+5FCh]
 * 00000001407FCFFF: bt      edx, 13h
 * 00000001407FD003: jnb     short loc_1407FD015
 * 00000001407FD005: xor     r9d, r9d
 * 00000001407FD008: mov     r8, rsi
 * 00000001407FD00B: mov     rdx, rbp
 * 00000001407FD00E: mov     ecx, ebx
 * 00000001407FD010: call    EtwTiLogSuspendResumeProcess
 * 00000001407FD015: mov     rcx, rbp
 * 00000001407FD018: call    KiLeaveCriticalRegionUnsafe
 * 00000001407FD01D: mov     rbp, [rsp+28h+arg_8]
 * 00000001407FD022: mov     eax, ebx
 * 00000001407FD024: mov     rbx, [rsp+28h+arg_0]
 * 00000001407FD029: mov     rsi, [rsp+28h+arg_10]
 * 00000001407FD02E: mov     rdi, [rsp+28h+arg_18]
 * 00000001407FD033: add     rsp, 20h
 * 00000001407FD037: pop     r14
 * 00000001407FD039: retn
 */
