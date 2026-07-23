/*
 * XREFs of __guard_retpoline_import_r10 @ 0x140C64520
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_import_r10_log_event @ 0x140C64600 (__guard_retpoline_import_r10_log_event.c)
 *     __guard_retpoline_exit @ 0x140C64680 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_import_r10 @ 0x140C64520
 * Reason: Hex-Rays returned no pseudocode for 0x140C64520
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140C64520: sub     rsp, 18h
 * 0000000140C64524: mov     [rsp+18h+var_18], rax
 * 0000000140C64528: mov     [rsp+18h+var_10], r11
 * 0000000140C6452D: mov     r11, offset _retpoline_image_bitmap
 * 0000000140C64537: mov     r11, [r11]
 * 0000000140C6453A: test    r11, r11
 * 0000000140C6453D: jz      short loc_140C6458F
 * 0000000140C6453F: mov     rax, r10
 * 0000000140C64542: shr     rax, 10h
 * 0000000140C64546: bt      [r11], rax
 * 0000000140C6454A: jnb     short loc_140C6455B
 * 0000000140C6454C: mov     rax, [rsp+18h+var_18]
 * 0000000140C64550: mov     r11, [rsp+18h+var_10]
 * 0000000140C64555: add     rsp, 18h
 * 0000000140C64559: jmp     short __guard_retpoline_import_r10_do_retpoline
 * 0000000140C6455B: or      byte ptr gs:89Eh, 1
 * 0000000140C64564: test    byte ptr gs:89Eh, 2
 * 0000000140C6456D: jnz     short loc_140C6458F
 * 0000000140C6456F: call    __guard_retpoline_exit
 * 0000000140C64574: mov     r11, (offset xmmword_140FC0C10+4)
 * 0000000140C6457E: mov     r11d, [r11]
 * 0000000140C64581: test    r11d, 2
 * 0000000140C64588: jz      short loc_140C6458F
 * 0000000140C6458A: call    __guard_retpoline_import_r10_log_event
 * 0000000140C6458F: lfence
 * 0000000140C64592: mov     rax, [rsp+18h+var_18]
 * 0000000140C64596: mov     r11, [rsp+18h+var_10]
 * 0000000140C6459B: add     rsp, 18h
 * 0000000140C6459F: jmp     r10
 */
