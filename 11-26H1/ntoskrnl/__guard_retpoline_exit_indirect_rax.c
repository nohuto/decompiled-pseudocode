/*
 * XREFs of __guard_retpoline_exit_indirect_rax @ 0x140C644A0
 * Callers:
 *     __guard_retpoline_indirect_cfg_rax @ 0x140C643C0 (__guard_retpoline_indirect_cfg_rax.c)
 * Callees:
 *     EtwTraceRetpolineExit @ 0x1406C8930 (EtwTraceRetpolineExit.c)
 *     __guard_retpoline_exit @ 0x140C64680 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit_indirect_rax @ 0x140C644A0
 * Reason: Hex-Rays returned no pseudocode for 0x140C644A0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140C644A0: sub     rsp, 48h
 * 0000000140C644A4: call    __guard_retpoline_exit
 * 0000000140C644A9: lfence
 * 0000000140C644AC: mov     r10, (offset xmmword_140FC0C10+4)
 * 0000000140C644B6: mov     r10d, [r10]
 * 0000000140C644B9: test    r10d, 2
 * 0000000140C644C0: jz      short loc_140C64503
 * 0000000140C644C2: mov     [rsp+48h+var_28], rax
 * 0000000140C644C7: mov     [rsp+48h+var_20], rcx
 * 0000000140C644CC: mov     [rsp+48h+var_18], rdx
 * 0000000140C644D1: mov     [rsp+48h+var_10], r8
 * 0000000140C644D6: mov     [rsp+48h+var_8], r9
 * 0000000140C644DB: mov     rcx, rax
 * 0000000140C644DE: mov     rax, offset EtwTraceRetpolineExit
 * 0000000140C644E8: call    rax ; EtwTraceRetpolineExit
 * 0000000140C644EA: mov     rax, [rsp+48h+var_28]
 * 0000000140C644EF: mov     rcx, [rsp+48h+var_20]
 * 0000000140C644F4: mov     rdx, [rsp+48h+var_18]
 * 0000000140C644F9: mov     r8, [rsp+48h+var_10]
 * 0000000140C644FE: mov     r9, [rsp+48h+var_8]
 * 0000000140C64503: add     rsp, 48h
 * 0000000140C64507: jmp     rax
 */
