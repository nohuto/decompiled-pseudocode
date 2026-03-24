/*
 * XREFs of MiChangePagesPartitionId @ 0x140708664
 * Callers:
 *     MiActOnPartitionNodePages @ 0x140707C4C (MiActOnPartitionNodePages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiGetPfnPageSizeIndex @ 0x14028B290 (MiGetPfnPageSizeIndex.c)
 *     MiUpdateLargePageBitMap @ 0x1403C5418 (MiUpdateLargePageBitMap.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiSetHugeRangePartitionId @ 0x1406EDA40 (MiSetHugeRangePartitionId.c)
 *     MiUpdatePartitionChildPageCounts @ 0x140709E5C (MiUpdatePartitionChildPageCounts.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x14070D17C (MiMoveBadPageChargesCrossPartition.c)
 */

/*
 * Hex-Rays decompilation failed for MiChangePagesPartitionId @ 0x140708664
 * Reason: Hex-Rays returned no pseudocode for 0x140708664
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140708664: mov     [rsp+arg_0], rbx
 * 0000000140708669: mov     [rsp+arg_8], rbp
 * 000000014070866E: mov     [rsp+arg_10], rsi
 * 0000000140708673: push    rdi
 * 0000000140708674: push    r12
 * 0000000140708676: push    r13
 * 0000000140708678: push    r14
 * 000000014070867A: push    r15
 * 000000014070867C: sub     rsp, 30h
 * 0000000140708680: mov     r14, r8
 * 0000000140708683: mov     r15, rdx
 * 0000000140708686: mov     rbx, rcx
 * 0000000140708689: test    r9d, r9d
 * 000000014070868C: jz      short loc_1407086A5
 * 000000014070868E: mov     r9, r8
 * 0000000140708691: mov     r8, rdx
 * 0000000140708694: mov     rdx, [rcx+8]
 * 0000000140708698: mov     rcx, [rcx]
 * 000000014070869B: call    MiSetHugeRangePartitionId
 * 00000001407086A0: jmp     loc_1407087E3
 * 00000001407086A5: mov     rcx, [rcx+8]
 * 00000001407086A9: lea     rax, MiSystemPartition
 * 00000001407086B0: cmp     rcx, rax
 * 00000001407086B3: jz      short loc_1407086BD
 * 00000001407086B5: xor     r9d, r9d
 * 00000001407086B8: call    MiUpdateLargePageBitMap
 * 00000001407086BD: mov     rax, [rbx]
 * 00000001407086C0: lea     rsi, [r15+r15*2]
 * 00000001407086C4: xor     ebp, ebp
 * 00000001407086C6: shl     rsi, 4
 * 00000001407086CA: movzx   edi, word ptr [rax]
 * 00000001407086CD: mov     rax, 0FFFFDE0000000000h
 * 00000001407086D7: add     rsi, rax
 * 00000001407086DA: lea     rax, [r14+r14*2]
 * 00000001407086DE: shl     rax, 4
 * 00000001407086E2: add     rax, rsi
 * 00000001407086E5: mov     [rsp+58h+var_38], rax
 * 00000001407086EA: mov     r12, cr8
 * 00000001407086EE: lea     edx, [rbp+2]
 * 00000001407086F1: cmp     r12b, dl
 * 00000001407086F4: jz      short loc_1407086FA
 * 00000001407086F6: mov     cr8, rdx
 * 00000001407086FA: cmp     cs:KiIrqlFlags, ebp
 * 0000000140708700: jz      short loc_14070870A
 * 0000000140708702: mov     cl, r12b
 * 0000000140708705: call    KiRaiseIrqlProcessIrqlFlags
 * 000000014070870A: mov     r13, rdi
 * 000000014070870D: lea     rdi, [rsi+18h]
 * 0000000140708711: shl     r13, 2Bh
 * 0000000140708715: mov     [rsp+58h+arg_18], 0
 * 000000014070871D: lock bts qword ptr [rdi], 3Fh ; '?'
 * 0000000140708723: jnb     short loc_140708739
 * 0000000140708725: lea     rcx, [rsp+58h+arg_18]
 * 000000014070872A: call    KeYieldProcessorEx
 * 000000014070872F: mov     rax, [rdi]
 * 0000000140708732: test    rax, rax
 * 0000000140708735: js      short loc_140708725
 * 0000000140708737: jmp     short loc_14070871D
 * 0000000140708739: test    rbp, rbp
 * 000000014070873C: jnz     short loc_140708759
 * 000000014070873E: mov     rcx, rsi
 * 0000000140708741: call    MiGetPfnPageSizeIndex
 * 0000000140708746: cmp     eax, 3
 * 0000000140708749: jz      short loc_14070875C
 * 000000014070874B: mov     eax, eax
 * 000000014070874D: lea     rbp, MiPageSizes
 * 0000000140708754: mov     rbp, [rbp+rax*8+0]
 * 0000000140708759: dec     rbp
 * 000000014070875C: mov     eax, [rdi+8]
 * 000000014070875F: shr     eax, 1Eh
 * 0000000140708762: test    al, 1
 * 0000000140708764: jz      short loc_140708775
 * 0000000140708766: mov     r8, [rbx]
 * 0000000140708769: mov     rcx, rsi
 * 000000014070876C: mov     rdx, [rbx+8]
 * 0000000140708770: call    MiMoveBadPageChargesCrossPartition
 * 0000000140708775: mov     rax, [rdi+10h]
 * 0000000140708779: mov     rcx, r13
 * 000000014070877C: xor     rcx, rax
 * 000000014070877F: mov     rax, 0FFE007FFFFFFFFFFh
 * 0000000140708789: and     rcx, rax
 * 000000014070878C: mov     rax, 7FFFFFFFFFFFFFFFh
 * 0000000140708796: xor     rcx, r13
 * 0000000140708799: mov     [rdi+10h], rcx
 * 000000014070879D: lock and [rdi], rax
 * 00000001407087A1: add     rsi, 30h ; '0'
 * 00000001407087A5: add     rdi, 30h ; '0'
 * 00000001407087A9: cmp     rsi, [rsp+58h+var_38]
 * 00000001407087AE: jnz     loc_140708715
 * 00000001407087B4: cmp     cs:KiIrqlFlags, 0
 * 00000001407087BB: jz      short loc_1407087C9
 * 00000001407087BD: mov     rcx, cr8
 * 00000001407087C1: mov     dl, r12b
 * 00000001407087C4: call    KiLowerIrqlProcessIrqlFlags
 * 00000001407087C9: movzx   eax, r12b
 * 00000001407087CD: mov     cr8, rax
 * 00000001407087D1: mov     rdx, [rbx+8]
 * 00000001407087D5: mov     r9, r14
 * 00000001407087D8: mov     rcx, [rbx]
 * 00000001407087DB: mov     r8, r15
 * 00000001407087DE: call    MiUpdatePartitionChildPageCounts
 * 00000001407087E3: mov     rbx, [rsp+58h+arg_0]
 * 00000001407087E8: mov     rbp, [rsp+58h+arg_8]
 * 00000001407087ED: mov     rsi, [rsp+58h+arg_10]
 * 00000001407087F2: add     rsp, 30h
 * 00000001407087F6: pop     r15
 * 00000001407087F8: pop     r14
 * 00000001407087FA: pop     r13
 * 00000001407087FC: pop     r12
 * 00000001407087FE: pop     rdi
 * 00000001407087FF: retn
 */
