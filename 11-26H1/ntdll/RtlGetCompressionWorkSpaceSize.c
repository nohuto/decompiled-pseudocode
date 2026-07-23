/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x1800FEBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for RtlGetCompressionWorkSpaceSize @ 0x1800FEBC0
 * Reason: Hex-Rays returned no pseudocode for 0x1800FEBC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800FEBC0: mov     r9d, 0FFh
 * 00000001800FEBC6: movzx   eax, cx
 * 00000001800FEBC9: and     ax, r9w
 * 00000001800FEBCD: jz      short loc_1800FEBF8
 * 00000001800FEBCF: cmp     ax, 1
 * 00000001800FEBD3: jz      short loc_1800FEBF8
 * 00000001800FEBD5: cmp     ax, 8; switch with an invalid jump table
 * 00000001800FEBD9: ja      short def_1800FEBF3; jumptable 00000001800FEBF3 default case
 * 00000001800FEBDB: mov     r9d, 0FF00h
 * 00000001800FEBE1: movzx   eax, ax
 * 00000001800FEBE4: and     cx, r9w
 * 00000001800FEBE8: lea     r9, RtlWorkSpaceProcs
 * 00000001800FEBEF: mov     rax, ds:(RtlWorkSpaceProcs - 180171190h)[r9+rax*8]
 * 00000001800FEBF3: jmp     _guard_dispatch_icall$thunk$10345483385596137414; switch jump
 * 00000001800FEBF8: mov     eax, 0C000000Dh
 * 00000001800FEBFD: retn
 * 00000001800FEBFF: mov     eax, 0C000025Fh; jumptable 00000001800FEBF3 default case
 * 00000001800FEC04: retn
 */
