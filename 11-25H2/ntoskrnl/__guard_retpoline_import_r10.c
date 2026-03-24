/*
 * XREFs of __guard_retpoline_import_r10 @ 0x140BAD440
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_import_r10_log_event @ 0x140BAD520 (__guard_retpoline_import_r10_log_event.c)
 *     __guard_retpoline_exit @ 0x140BAD5A0 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_import_r10 @ 0x140BAD440
 * Reason: Hex-Rays returned no pseudocode for 0x140BAD440
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BAD440: sub     rsp, 18h
 * 0000000140BAD444: mov     [rsp+18h+var_18], rax
 * 0000000140BAD448: mov     [rsp+18h+var_10], r11
 * 0000000140BAD44D: mov     r11, offset _retpoline_image_bitmap
 * 0000000140BAD457: mov     r11, [r11]
 * 0000000140BAD45A: test    r11, r11
 * 0000000140BAD45D: jz      short loc_140BAD4AF
 * 0000000140BAD45F: mov     rax, r10
 * 0000000140BAD462: shr     rax, 10h
 * 0000000140BAD466: bt      [r11], rax
 * 0000000140BAD46A: jnb     short loc_140BAD47B
 * 0000000140BAD46C: mov     rax, [rsp+18h+var_18]
 * 0000000140BAD470: mov     r11, [rsp+18h+var_10]
 * 0000000140BAD475: add     rsp, 18h
 * 0000000140BAD479: jmp     short __guard_retpoline_import_r10_do_retpoline
 * 0000000140BAD47B: or      byte ptr gs:85Eh, 1
 * 0000000140BAD484: test    byte ptr gs:85Eh, 2
 * 0000000140BAD48D: jnz     short loc_140BAD4AF
 * 0000000140BAD48F: call    __guard_retpoline_exit
 * 0000000140BAD494: mov     r11, (offset xmmword_140FC5B10+4)
 * 0000000140BAD49E: mov     r11d, [r11]
 * 0000000140BAD4A1: test    r11d, 2
 * 0000000140BAD4A8: jz      short loc_140BAD4AF
 * 0000000140BAD4AA: call    __guard_retpoline_import_r10_log_event
 * 0000000140BAD4AF: lfence
 * 0000000140BAD4B2: mov     rax, [rsp+18h+var_18]
 * 0000000140BAD4B6: mov     r11, [rsp+18h+var_10]
 * 0000000140BAD4BB: add     rsp, 18h
 * 0000000140BAD4BF: jmp     r10
 */
