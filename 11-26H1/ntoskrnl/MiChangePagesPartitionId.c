/*
 * XREFs of MiChangePagesPartitionId @ 0x14070D318
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14070C91C (MiActOnPartitionNodePages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiSetHugeRangePartitionId @ 0x1406F26E0 (MiSetHugeRangePartitionId.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14070EB10 (MiUpdatePartitionChildPageCounts.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x140711E2C (MiMoveBadPageChargesCrossPartition.c)
 */

/*
 * Hex-Rays decompilation failed for MiChangePagesPartitionId @ 0x14070D318
 * Reason: Hex-Rays returned no pseudocode for 0x14070D318
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014070D318: mov     [rsp+arg_0], rbx
 * 000000014070D31D: mov     [rsp+arg_8], rbp
 * 000000014070D322: mov     [rsp+arg_10], rsi
 * 000000014070D327: push    rdi
 * 000000014070D328: push    r12
 * 000000014070D32A: push    r13
 * 000000014070D32C: push    r14
 * 000000014070D32E: push    r15
 * 000000014070D330: sub     rsp, 30h
 * 000000014070D334: mov     r14, r8
 * 000000014070D337: mov     r15, rdx
 * 000000014070D33A: mov     rbx, rcx
 * 000000014070D33D: test    r9d, r9d
 * 000000014070D340: jz      short loc_14070D359
 * 000000014070D342: mov     r9, r8
 * 000000014070D345: mov     r8, rdx
 * 000000014070D348: mov     rdx, [rcx+8]
 * 000000014070D34C: mov     rcx, [rcx]
 * 000000014070D34F: call    MiSetHugeRangePartitionId
 * 000000014070D354: jmp     loc_14070D497
 * 000000014070D359: mov     rcx, [rcx+8]
 * 000000014070D35D: lea     rax, MiSystemPartition
 * 000000014070D364: cmp     rcx, rax
 * 000000014070D367: jz      short loc_14070D371
 * 000000014070D369: xor     r9d, r9d
 * 000000014070D36C: call    MiUpdateLargePageBitMap
 * 000000014070D371: mov     rax, [rbx]
 * 000000014070D374: lea     rsi, [r15+r15*2]
 * 000000014070D378: xor     ebp, ebp
 * 000000014070D37A: shl     rsi, 4
 * 000000014070D37E: movzx   edi, word ptr [rax]
 * 000000014070D381: mov     rax, 0FFFFDE0000000000h
 * 000000014070D38B: add     rsi, rax
 * 000000014070D38E: lea     rax, [r14+r14*2]
 * 000000014070D392: shl     rax, 4
 * 000000014070D396: add     rax, rsi
 * 000000014070D399: mov     [rsp+58h+var_38], rax
 * 000000014070D39E: mov     r12, cr8
 * 000000014070D3A2: lea     edx, [rbp+2]
 * 000000014070D3A5: cmp     r12b, dl
 * 000000014070D3A8: jz      short loc_14070D3AE
 * 000000014070D3AA: mov     cr8, rdx
 * 000000014070D3AE: cmp     cs:KiIrqlFlags, ebp
 * 000000014070D3B4: jz      short loc_14070D3BE
 * 000000014070D3B6: mov     cl, r12b
 * 000000014070D3B9: call    KiRaiseIrqlProcessIrqlFlags
 * 000000014070D3BE: mov     r13, rdi
 * 000000014070D3C1: lea     rdi, [rsi+18h]
 * 000000014070D3C5: shl     r13, 2Bh
 * 000000014070D3C9: mov     [rsp+58h+arg_18], 0
 * 000000014070D3D1: lock bts qword ptr [rdi], 3Fh ; '?'
 * 000000014070D3D7: jnb     short loc_14070D3ED
 * 000000014070D3D9: lea     rcx, [rsp+58h+arg_18]
 * 000000014070D3DE: call    KeYieldProcessorEx
 * 000000014070D3E3: mov     rax, [rdi]
 * 000000014070D3E6: test    rax, rax
 * 000000014070D3E9: js      short loc_14070D3D9
 * 000000014070D3EB: jmp     short loc_14070D3D1
 * 000000014070D3ED: test    rbp, rbp
 * 000000014070D3F0: jnz     short loc_14070D40D
 * 000000014070D3F2: mov     rcx, rsi
 * 000000014070D3F5: call    MiGetPfnPageSizeIndex
 * 000000014070D3FA: cmp     eax, 3
 * 000000014070D3FD: jz      short loc_14070D410
 * 000000014070D3FF: mov     eax, eax
 * 000000014070D401: lea     rbp, MiPageSizes
 * 000000014070D408: mov     rbp, [rbp+rax*8+0]
 * 000000014070D40D: dec     rbp
 * 000000014070D410: mov     eax, [rdi+8]
 * 000000014070D413: shr     eax, 1Eh
 * 000000014070D416: test    al, 1
 * 000000014070D418: jz      short loc_14070D429
 * 000000014070D41A: mov     r8, [rbx]
 * 000000014070D41D: mov     rcx, rsi
 * 000000014070D420: mov     rdx, [rbx+8]
 * 000000014070D424: call    MiMoveBadPageChargesCrossPartition
 * 000000014070D429: mov     rax, [rdi+10h]
 * 000000014070D42D: mov     rcx, r13
 * 000000014070D430: xor     rcx, rax
 * 000000014070D433: mov     rax, 0FFE007FFFFFFFFFFh
 * 000000014070D43D: and     rcx, rax
 * 000000014070D440: mov     rax, 7FFFFFFFFFFFFFFFh
 * 000000014070D44A: xor     rcx, r13
 * 000000014070D44D: mov     [rdi+10h], rcx
 * 000000014070D451: lock and [rdi], rax
 * 000000014070D455: add     rsi, 30h ; '0'
 * 000000014070D459: add     rdi, 30h ; '0'
 * 000000014070D45D: cmp     rsi, [rsp+58h+var_38]
 * 000000014070D462: jnz     loc_14070D3C9
 * 000000014070D468: cmp     cs:KiIrqlFlags, 0
 * 000000014070D46F: jz      short loc_14070D47D
 * 000000014070D471: mov     rcx, cr8
 * 000000014070D475: mov     dl, r12b
 * 000000014070D478: call    KiLowerIrqlProcessIrqlFlags
 * 000000014070D47D: movzx   eax, r12b
 * 000000014070D481: mov     cr8, rax
 * 000000014070D485: mov     rdx, [rbx+8]
 * 000000014070D489: mov     r9, r14
 * 000000014070D48C: mov     rcx, [rbx]
 * 000000014070D48F: mov     r8, r15
 * 000000014070D492: call    MiUpdatePartitionChildPageCounts
 * 000000014070D497: mov     rbx, [rsp+58h+arg_0]
 * 000000014070D49C: mov     rbp, [rsp+58h+arg_8]
 * 000000014070D4A1: mov     rsi, [rsp+58h+arg_10]
 * 000000014070D4A6: add     rsp, 30h
 * 000000014070D4AA: pop     r15
 * 000000014070D4AC: pop     r14
 * 000000014070D4AE: pop     r13
 * 000000014070D4B0: pop     r12
 * 000000014070D4B2: pop     rdi
 * 000000014070D4B3: retn
 */
