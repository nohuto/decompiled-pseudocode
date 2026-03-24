/*
 * XREFs of MiMoveBadPagePartition @ 0x1407093D4
 * Callers:
 *     MiTransferPartitionPageRun @ 0x140709A80 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     MiUnlinkPageFromBadList @ 0x1402C8074 (MiUnlinkPageFromBadList.c)
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     MiAcquireNonPagedResources @ 0x1402F4A50 (MiAcquireNonPagedResources.c)
 *     MiUpdatePartitionChildPageCounts @ 0x140709E5C (MiUpdatePartitionChildPageCounts.c)
 *     MiUpdatePhysicalPages @ 0x140709FC0 (MiUpdatePhysicalPages.c)
 */

/*
 * Hex-Rays decompilation failed for MiMoveBadPagePartition @ 0x1407093D4
 * Reason: Hex-Rays returned no pseudocode for 0x1407093D4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407093D4: mov     [rsp+arg_0], rbx
 * 00000001407093D9: mov     [rsp+arg_8], rbp
 * 00000001407093DE: mov     [rsp+arg_10], rsi
 * 00000001407093E3: push    rdi
 * 00000001407093E4: sub     rsp, 20h
 * 00000001407093E8: mov     rdi, rdx
 * 00000001407093EB: mov     rsi, rcx
 * 00000001407093EE: xor     edx, edx
 * 00000001407093F0: mov     rcx, r8
 * 00000001407093F3: mov     rbx, r8
 * 00000001407093F6: call    MiUnlinkPageFromBadList
 * 00000001407093FB: mov     ebp, 1
 * 0000000140709400: xor     r8d, r8d
 * 0000000140709403: mov     r9d, ebp
 * 0000000140709406: mov     edx, ebp
 * 0000000140709408: mov     rcx, rdi
 * 000000014070940B: call    MiAcquireNonPagedResources
 * 0000000140709410: mov     edx, ebp
 * 0000000140709412: mov     rcx, rsi
 * 0000000140709415: call    MiReleaseNonPagedResources
 * 000000014070941A: mov     rax, [rbx+28h]
 * 000000014070941E: movzx   r8d, word ptr [rdi]
 * 0000000140709422: shl     r8, 2Bh
 * 0000000140709426: mov     rcx, r8
 * 0000000140709429: xor     rcx, rax
 * 000000014070942C: mov     rax, 0FFE007FFFFFFFFFFh
 * 0000000140709436: and     rcx, rax
 * 0000000140709439: lea     rax, MiSystemPartition
 * 0000000140709440: xor     rcx, r8
 * 0000000140709443: mov     [rbx+28h], rcx
 * 0000000140709447: and     qword ptr [rbx+10h], 0FFFFFFFFEFFFF3FFh
 * 000000014070944F: cmp     rdi, rax
 * 0000000140709452: jz      short loc_140709461
 * 0000000140709454: xor     r8d, r8d
 * 0000000140709457: mov     edx, ebp
 * 0000000140709459: mov     rcx, rdi
 * 000000014070945C: call    MiUpdatePhysicalPages
 * 0000000140709461: xor     r8d, r8d
 * 0000000140709464: or      rdx, 0FFFFFFFFFFFFFFFFh
 * 0000000140709468: mov     rcx, rsi
 * 000000014070946B: call    MiUpdatePhysicalPages
 * 0000000140709470: mov     edx, 20h ; ' '
 * 0000000140709475: mov     rcx, rbx
 * 0000000140709478: call    MiInsertPageInList
 * 000000014070947D: mov     rax, 7FFFFFFFFFFFFFFFh
 * 0000000140709487: lock and [rbx+18h], rax
 * 000000014070948C: mov     rax, 0FFFFDE0000000000h
 * 0000000140709496: sub     rbx, rax
 * 0000000140709499: mov     r9, rbp
 * 000000014070949C: mov     rax, 2AAAAAAAAAAAAAABh
 * 00000001407094A6: mov     rcx, rdi
 * 00000001407094A9: imul    rbx
 * 00000001407094AC: sar     rdx, 3
 * 00000001407094B0: mov     r8, rdx
 * 00000001407094B3: shr     r8, 3Fh
 * 00000001407094B7: add     r8, rdx
 * 00000001407094BA: mov     rdx, rsi
 * 00000001407094BD: call    MiUpdatePartitionChildPageCounts
 * 00000001407094C2: mov     rbx, [rsp+28h+arg_0]
 * 00000001407094C7: mov     rbp, [rsp+28h+arg_8]
 * 00000001407094CC: mov     rsi, [rsp+28h+arg_10]
 * 00000001407094D1: add     rsp, 20h
 * 00000001407094D5: pop     rdi
 * 00000001407094D6: retn
 */
