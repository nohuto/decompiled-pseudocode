/*
 * XREFs of __guard_retpoline_exit_indirect_rax @ 0x140BAD3C0
 * Callers:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     __guard_retpoline_indirect_cfg_rax @ 0x140BAD2C0 (__guard_retpoline_indirect_cfg_rax.c)
 * Callees:
 *     EtwTraceRetpolineExit @ 0x140641E40 (EtwTraceRetpolineExit.c)
 *     __guard_retpoline_exit @ 0x140BAD5A0 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit_indirect_rax @ 0x140BAD3C0
 * Reason: Hex-Rays returned no pseudocode for 0x140BAD3C0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BAD3C0: sub     rsp, 48h
 * 0000000140BAD3C4: call    __guard_retpoline_exit
 * 0000000140BAD3C9: lfence
 * 0000000140BAD3CC: mov     r10, (offset xmmword_140FC5B10+4)
 * 0000000140BAD3D6: mov     r10d, [r10]
 * 0000000140BAD3D9: test    r10d, 2
 * 0000000140BAD3E0: jz      short loc_140BAD423
 * 0000000140BAD3E2: mov     [rsp+48h+var_28], rax
 * 0000000140BAD3E7: mov     [rsp+48h+var_20], rcx
 * 0000000140BAD3EC: mov     [rsp+48h+var_18], rdx
 * 0000000140BAD3F1: mov     [rsp+48h+var_10], r8
 * 0000000140BAD3F6: mov     [rsp+48h+var_8], r9
 * 0000000140BAD3FB: mov     rcx, rax
 * 0000000140BAD3FE: mov     rax, offset EtwTraceRetpolineExit
 * 0000000140BAD408: call    rax ; EtwTraceRetpolineExit
 * 0000000140BAD40A: mov     rax, [rsp+48h+var_28]
 * 0000000140BAD40F: mov     rcx, [rsp+48h+var_20]
 * 0000000140BAD414: mov     rdx, [rsp+48h+var_18]
 * 0000000140BAD419: mov     r8, [rsp+48h+var_10]
 * 0000000140BAD41E: mov     r9, [rsp+48h+var_8]
 * 0000000140BAD423: add     rsp, 48h
 * 0000000140BAD427: jmp     rax
 */
