/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x1800FF470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for RtlGetCompressionWorkSpaceSize @ 0x1800FF470
 * Reason: Hex-Rays returned no pseudocode for 0x1800FF470
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800FF470: mov     r9d, 0FFh
 * 00000001800FF476: movzx   eax, cx
 * 00000001800FF479: and     ax, r9w
 * 00000001800FF47D: jz      short loc_1800FF4A8
 * 00000001800FF47F: cmp     ax, 1
 * 00000001800FF483: jz      short loc_1800FF4A8
 * 00000001800FF485: cmp     ax, 8; switch with an invalid jump table
 * 00000001800FF489: ja      short def_1800FF4A3; jumptable 00000001800FF4A3 default case
 * 00000001800FF48B: mov     r9d, 0FF00h
 * 00000001800FF491: movzx   eax, ax
 * 00000001800FF494: and     cx, r9w
 * 00000001800FF498: lea     r9, RtlWorkSpaceProcs
 * 00000001800FF49F: mov     rax, ds:(RtlWorkSpaceProcs - 180172190h)[r9+rax*8]
 * 00000001800FF4A3: jmp     _guard_dispatch_icall$thunk$10345483385596137414; switch jump
 * 00000001800FF4A8: mov     eax, 0C000000Dh
 * 00000001800FF4AD: retn
 * 00000001800FF4AF: mov     eax, 0C000025Fh; jumptable 00000001800FF4A3 default case
 * 00000001800FF4B4: retn
 */
