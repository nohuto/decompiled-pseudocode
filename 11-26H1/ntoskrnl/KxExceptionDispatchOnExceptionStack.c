/*
 * XREFs of KxExceptionDispatchOnExceptionStack @ 0x140727FB0
 * Callers:
 *     KiExceptionDispatchOnExceptionStack @ 0x140727F70 (KiExceptionDispatchOnExceptionStack.c)
 * Callees:
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 */

/*
 * Hex-Rays decompilation failed for KxExceptionDispatchOnExceptionStack @ 0x140727FB0
 * Reason: Hex-Rays returned no pseudocode for 0x140727FB0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140727FB0: test    dword ptr [rbp+0F8h], 200h
 * 0000000140727FBA: jz      short loc_140727FBD
 * 0000000140727FBC: sti
 * 0000000140727FBD: call    KiDispatchException
 * 0000000140727FC2: cli
 * 0000000140727FC3: mov     rsp, [rsp+arg_38]
 * 0000000140727FC8: jmp     short KiExceptionDispatchOnExceptionStackContinue
 */
