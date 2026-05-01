/*
 * XREFs of HamConnectForServicing @ 0x1800036A0
 * Callers:
 *     <none>
 * Callees:
 *     HamIpcChannelInitialize @ 0x180003898 (HamIpcChannelInitialize.c)
 *     CempLockInitialize @ 0x180003900 (CempLockInitialize.c)
 *     HampConnectionAllocateState @ 0x180003B00 (HampConnectionAllocateState.c)
 *     HampConnectionStart @ 0x1800040B4 (HampConnectionStart.c)
 *     HampConnectionDestroy @ 0x1800041CC (HampConnectionDestroy.c)
 *     memset_0 @ 0x18001A5BE (memset_0.c)
 */

/*
 * Hex-Rays decompilation failed for HamConnectForServicing @ 0x1800036A0
 * Reason: Hex-Rays returned no pseudocode for 0x1800036A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800036A0: mov     [rsp+arg_0], rbx
 * 00000001800036A5: mov     [rsp+arg_8], rsi
 * 00000001800036AA: mov     [rsp+arg_10], rdi
 * 00000001800036AF: push    r14
 * 00000001800036B1: sub     rsp, 20h
 * 00000001800036B5: mov     r14, rcx
 * 00000001800036B8: mov     esi, 0A0h
 * 00000001800036BD: mov     rcx, gs:60h
 * 00000001800036C6: mov     r8d, esi; Size
 * 00000001800036C9: xor     edx, edx; Flags
 * 00000001800036CB: mov     rcx, [rcx+30h]; HeapHandle
 * 00000001800036CF: call    cs:__imp_RtlAllocateHeap
 * 00000001800036D6: nop     dword ptr [rax+rax+00h]
 * 00000001800036DB: xor     edi, edi
 * 00000001800036DD: mov     rbx, rax
 * 00000001800036E0: test    rax, rax
 * 00000001800036E3: jz      loc_180003778
 * 00000001800036E9: mov     r8d, esi; Size
 * 00000001800036EC: xor     edx, edx; Val
 * 00000001800036EE: mov     rcx, rax; void *
 * 00000001800036F1: call    memset_0
 * 00000001800036F6: lea     rcx, [rbx+78h]
 * 00000001800036FA: call    CempLockInitialize
 * 00000001800036FF: lea     rax, unk_18001DC80
 * 0000000180003706: lea     rsi, unk_18001D250
 * 000000018000370D: cmp     rsi, rax
 * 0000000180003710: jnz     short loc_180003763
 * 0000000180003712: lea     r9, [rbx+18h]
 * 0000000180003716: mov     [rbx+9Ch], dil
 * 000000018000371D: call    HamIpcChannelInitialize
 * 0000000180003722: xor     r9d, r9d
 * 0000000180003725: xor     r8d, r8d
 * 0000000180003728: mov     rdx, rsi
 * 000000018000372B: mov     rcx, rbx
 * 000000018000372E: call    HampConnectionAllocateState
 * 0000000180003733: mov     esi, eax
 * 0000000180003735: test    eax, eax
 * 0000000180003737: js      short loc_18000376C
 * 0000000180003739: mov     rcx, rbx
 * 000000018000373C: call    HampConnectionStart
 * 0000000180003741: mov     esi, eax
 * 0000000180003743: test    eax, eax
 * 0000000180003745: js      short loc_18000376C
 * 0000000180003747: mov     [r14], rbx
 * 000000018000374A: mov     rbx, [rsp+28h+arg_0]
 * 000000018000374F: mov     eax, edi
 * 0000000180003751: mov     rdi, [rsp+28h+arg_10]
 * 0000000180003756: mov     rsi, [rsp+28h+arg_8]
 * 000000018000375B: add     rsp, 20h
 * 000000018000375F: pop     r14
 * 0000000180003761: retn
 * 0000000180003763: mov     byte ptr [rbx+9Ch], 4
 * 000000018000376A: jmp     short loc_180003722
 * 000000018000376C: mov     rcx, rbx
 * 000000018000376F: call    HampConnectionDestroy
 * 0000000180003774: mov     edi, esi
 * 0000000180003776: jmp     short loc_18000374A
 * 0000000180003778: mov     edi, 0C0000017h
 * 000000018000377D: jmp     short loc_18000374A
 */
