/*
 * XREFs of HamConnectForExtendedExecution @ 0x180003790
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
 * Hex-Rays decompilation failed for HamConnectForExtendedExecution @ 0x180003790
 * Reason: Hex-Rays returned no pseudocode for 0x180003790
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180003790: mov     rax, rsp
 * 0000000180003793: mov     [rax+8], rbx
 * 0000000180003797: mov     [rax+10h], rsi
 * 000000018000379B: mov     [rax+18h], rdi
 * 000000018000379F: push    r14
 * 00000001800037A1: sub     rsp, 30h
 * 00000001800037A5: xor     ebx, ebx
 * 00000001800037A7: mov     r14, rdx
 * 00000001800037AA: test    rcx, rcx
 * 00000001800037AD: jz      loc_180003882
 * 00000001800037B3: mov     [rax-18h], rcx
 * 00000001800037B7: mov     esi, 0A0h
 * 00000001800037BC: mov     rcx, gs:60h
 * 00000001800037C5: mov     r8d, esi; Size
 * 00000001800037C8: xor     edx, edx; Flags
 * 00000001800037CA: mov     [rax-10h], rbx
 * 00000001800037CE: mov     rcx, [rcx+30h]; HeapHandle
 * 00000001800037D2: call    cs:__imp_RtlAllocateHeap
 * 00000001800037D9: nop     dword ptr [rax+rax+00h]
 * 00000001800037DE: mov     rdi, rax
 * 00000001800037E1: test    rax, rax
 * 00000001800037E4: jz      loc_180003889
 * 00000001800037EA: mov     r8d, esi; Size
 * 00000001800037ED: xor     edx, edx; Val
 * 00000001800037EF: mov     rcx, rax; void *
 * 00000001800037F2: call    memset_0
 * 00000001800037F7: lea     rcx, [rdi+78h]
 * 00000001800037FB: call    CempLockInitialize
 * 0000000180003800: movups  xmm0, [rsp+38h+var_18]
 * 0000000180003805: lea     rsi, unk_18001D1F0
 * 000000018000380C: lea     rax, unk_18001DC80
 * 0000000180003813: lea     r9, [rdi+18h]
 * 0000000180003817: movdqu  xmmword ptr [rdi+68h], xmm0
 * 000000018000381C: cmp     rsi, rax
 * 000000018000381F: jnz     short loc_18000386D
 * 0000000180003821: mov     [rdi+9Ch], bl
 * 0000000180003827: call    HamIpcChannelInitialize
 * 000000018000382C: xor     r9d, r9d
 * 000000018000382F: xor     r8d, r8d
 * 0000000180003832: mov     rdx, rsi
 * 0000000180003835: mov     rcx, rdi
 * 0000000180003838: call    HampConnectionAllocateState
 * 000000018000383D: mov     esi, eax
 * 000000018000383F: test    eax, eax
 * 0000000180003841: js      short loc_180003876
 * 0000000180003843: mov     rcx, rdi
 * 0000000180003846: call    HampConnectionStart
 * 000000018000384B: mov     esi, eax
 * 000000018000384D: test    eax, eax
 * 000000018000384F: js      short loc_180003876
 * 0000000180003851: mov     [r14], rdi
 * 0000000180003854: mov     rsi, [rsp+38h+arg_8]
 * 0000000180003859: mov     eax, ebx
 * 000000018000385B: mov     rbx, [rsp+38h+arg_0]
 * 0000000180003860: mov     rdi, [rsp+38h+arg_10]
 * 0000000180003865: add     rsp, 30h
 * 0000000180003869: pop     r14
 * 000000018000386B: retn
 * 000000018000386D: mov     byte ptr [rdi+9Ch], 2
 * 0000000180003874: jmp     short loc_180003827
 * 0000000180003876: mov     rcx, rdi
 * 0000000180003879: call    HampConnectionDestroy
 * 000000018000387E: mov     ebx, esi
 * 0000000180003880: jmp     short loc_180003854
 * 0000000180003882: mov     ebx, 0C00000EFh
 * 0000000180003887: jmp     short loc_180003854
 * 0000000180003889: mov     ebx, 0C0000017h
 * 000000018000388E: jmp     short loc_180003854
 */
