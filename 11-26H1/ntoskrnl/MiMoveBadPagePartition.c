/*
 * XREFs of MiMoveBadPagePartition @ 0x14070E088
 * Callers:
 *     MiTransferPartitionPageRun @ 0x14070E734 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiUnlinkPageFromBadList @ 0x1402A9E2C (MiUnlinkPageFromBadList.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14070EB10 (MiUpdatePartitionChildPageCounts.c)
 *     MiUpdatePhysicalPages @ 0x14070EC74 (MiUpdatePhysicalPages.c)
 */

/*
 * Hex-Rays decompilation failed for MiMoveBadPagePartition @ 0x14070E088
 * Reason: Hex-Rays returned no pseudocode for 0x14070E088
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014070E088: mov     [rsp+arg_0], rbx
 * 000000014070E08D: mov     [rsp+arg_8], rbp
 * 000000014070E092: mov     [rsp+arg_10], rsi
 * 000000014070E097: push    rdi
 * 000000014070E098: sub     rsp, 20h
 * 000000014070E09C: mov     rdi, rdx
 * 000000014070E09F: mov     rsi, rcx
 * 000000014070E0A2: xor     edx, edx
 * 000000014070E0A4: mov     rcx, r8
 * 000000014070E0A7: mov     rbx, r8
 * 000000014070E0AA: call    MiUnlinkPageFromBadList
 * 000000014070E0AF: mov     ebp, 1
 * 000000014070E0B4: xor     r8d, r8d
 * 000000014070E0B7: mov     r9d, ebp
 * 000000014070E0BA: mov     edx, ebp
 * 000000014070E0BC: mov     rcx, rdi
 * 000000014070E0BF: call    MiAcquireNonPagedResources
 * 000000014070E0C4: mov     edx, ebp
 * 000000014070E0C6: mov     rcx, rsi
 * 000000014070E0C9: call    MiReleaseNonPagedResources
 * 000000014070E0CE: mov     rax, [rbx+28h]
 * 000000014070E0D2: movzx   r8d, word ptr [rdi]
 * 000000014070E0D6: shl     r8, 2Bh
 * 000000014070E0DA: mov     rcx, r8
 * 000000014070E0DD: xor     rcx, rax
 * 000000014070E0E0: mov     rax, 0FFE007FFFFFFFFFFh
 * 000000014070E0EA: and     rcx, rax
 * 000000014070E0ED: lea     rax, MiSystemPartition
 * 000000014070E0F4: xor     rcx, r8
 * 000000014070E0F7: mov     [rbx+28h], rcx
 * 000000014070E0FB: and     qword ptr [rbx+10h], 0FFFFFFFFEFFFF3FFh
 * 000000014070E103: cmp     rdi, rax
 * 000000014070E106: jz      short loc_14070E115
 * 000000014070E108: xor     r8d, r8d
 * 000000014070E10B: mov     edx, ebp
 * 000000014070E10D: mov     rcx, rdi
 * 000000014070E110: call    MiUpdatePhysicalPages
 * 000000014070E115: xor     r8d, r8d
 * 000000014070E118: or      rdx, 0FFFFFFFFFFFFFFFFh
 * 000000014070E11C: mov     rcx, rsi
 * 000000014070E11F: call    MiUpdatePhysicalPages
 * 000000014070E124: mov     edx, 20h ; ' '
 * 000000014070E129: mov     rcx, rbx
 * 000000014070E12C: call    MiInsertPageInList
 * 000000014070E131: mov     rax, 7FFFFFFFFFFFFFFFh
 * 000000014070E13B: lock and [rbx+18h], rax
 * 000000014070E140: mov     rax, 0FFFFDE0000000000h
 * 000000014070E14A: sub     rbx, rax
 * 000000014070E14D: mov     r9, rbp
 * 000000014070E150: mov     rax, 2AAAAAAAAAAAAAABh
 * 000000014070E15A: mov     rcx, rdi
 * 000000014070E15D: imul    rbx
 * 000000014070E160: sar     rdx, 3
 * 000000014070E164: mov     r8, rdx
 * 000000014070E167: shr     r8, 3Fh
 * 000000014070E16B: add     r8, rdx
 * 000000014070E16E: mov     rdx, rsi
 * 000000014070E171: call    MiUpdatePartitionChildPageCounts
 * 000000014070E176: mov     rbx, [rsp+28h+arg_0]
 * 000000014070E17B: mov     rbp, [rsp+28h+arg_8]
 * 000000014070E180: mov     rsi, [rsp+28h+arg_10]
 * 000000014070E185: add     rsp, 20h
 * 000000014070E189: pop     rdi
 * 000000014070E18A: retn
 */
