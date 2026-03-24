/*
 * XREFs of __guard_retpoline_exit_indirect_rax @ 0x140C5E4A0
 * Callers:
 *     __guard_retpoline_indirect_cfg_rax @ 0x140C5E3C0 (__guard_retpoline_indirect_cfg_rax.c)
 * Callees:
 *     EtwTraceRetpolineExit @ 0x1406C4CF0 (EtwTraceRetpolineExit.c)
 *     __guard_retpoline_exit @ 0x140C5E680 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit_indirect_rax @ 0x140C5E4A0
 * Reason: Hex-Rays returned no pseudocode for 0x140C5E4A0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140C5E4A0: sub     rsp, 48h
 * 0000000140C5E4A4: call    __guard_retpoline_exit
 * 0000000140C5E4A9: lfence
 * 0000000140C5E4AC: mov     r10, (offset xmmword_140FBFC10+4)
 * 0000000140C5E4B6: mov     r10d, [r10]
 * 0000000140C5E4B9: test    r10d, 2
 * 0000000140C5E4C0: jz      short loc_140C5E503
 * 0000000140C5E4C2: mov     [rsp+48h+var_28], rax
 * 0000000140C5E4C7: mov     [rsp+48h+var_20], rcx
 * 0000000140C5E4CC: mov     [rsp+48h+var_18], rdx
 * 0000000140C5E4D1: mov     [rsp+48h+var_10], r8
 * 0000000140C5E4D6: mov     [rsp+48h+var_8], r9
 * 0000000140C5E4DB: mov     rcx, rax
 * 0000000140C5E4DE: mov     rax, offset EtwTraceRetpolineExit
 * 0000000140C5E4E8: call    rax ; EtwTraceRetpolineExit
 * 0000000140C5E4EA: mov     rax, [rsp+48h+var_28]
 * 0000000140C5E4EF: mov     rcx, [rsp+48h+var_20]
 * 0000000140C5E4F4: mov     rdx, [rsp+48h+var_18]
 * 0000000140C5E4F9: mov     r8, [rsp+48h+var_10]
 * 0000000140C5E4FE: mov     r9, [rsp+48h+var_8]
 * 0000000140C5E503: add     rsp, 48h
 * 0000000140C5E507: jmp     rax
 */
