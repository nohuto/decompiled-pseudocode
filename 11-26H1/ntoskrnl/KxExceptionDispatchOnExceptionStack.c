/*
 * XREFs of KxExceptionDispatchOnExceptionStack @ 0x14072CB80
 * Callers:
 *     KiExceptionDispatchOnExceptionStack @ 0x14072CB40 (KiExceptionDispatchOnExceptionStack.c)
 * Callees:
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 */

/*
 * Hex-Rays decompilation failed for KxExceptionDispatchOnExceptionStack @ 0x14072CB80
 * Reason: Hex-Rays returned no pseudocode for 0x14072CB80
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072CB80: test    dword ptr [rbp+0F8h], 200h
 * 000000014072CB8A: jz      short loc_14072CB8D
 * 000000014072CB8C: sti
 * 000000014072CB8D: call    KiDispatchException
 * 000000014072CB92: cli
 * 000000014072CB93: mov     rsp, [rsp+arg_38]
 * 000000014072CB98: jmp     short KiExceptionDispatchOnExceptionStackContinue
 */
