/*
 * XREFs of __guard_retpoline_import_r10 @ 0x140C5E520
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_import_r10_log_event @ 0x140C5E600 (__guard_retpoline_import_r10_log_event.c)
 *     __guard_retpoline_exit @ 0x140C5E680 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_import_r10 @ 0x140C5E520
 * Reason: Hex-Rays returned no pseudocode for 0x140C5E520
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140C5E520: sub     rsp, 18h
 * 0000000140C5E524: mov     [rsp+18h+var_18], rax
 * 0000000140C5E528: mov     [rsp+18h+var_10], r11
 * 0000000140C5E52D: mov     r11, offset _retpoline_image_bitmap
 * 0000000140C5E537: mov     r11, [r11]
 * 0000000140C5E53A: test    r11, r11
 * 0000000140C5E53D: jz      short loc_140C5E58F
 * 0000000140C5E53F: mov     rax, r10
 * 0000000140C5E542: shr     rax, 10h
 * 0000000140C5E546: bt      [r11], rax
 * 0000000140C5E54A: jnb     short loc_140C5E55B
 * 0000000140C5E54C: mov     rax, [rsp+18h+var_18]
 * 0000000140C5E550: mov     r11, [rsp+18h+var_10]
 * 0000000140C5E555: add     rsp, 18h
 * 0000000140C5E559: jmp     short __guard_retpoline_import_r10_do_retpoline
 * 0000000140C5E55B: or      byte ptr gs:89Eh, 1
 * 0000000140C5E564: test    byte ptr gs:89Eh, 2
 * 0000000140C5E56D: jnz     short loc_140C5E58F
 * 0000000140C5E56F: call    __guard_retpoline_exit
 * 0000000140C5E574: mov     r11, (offset xmmword_140FBFC10+4)
 * 0000000140C5E57E: mov     r11d, [r11]
 * 0000000140C5E581: test    r11d, 2
 * 0000000140C5E588: jz      short loc_140C5E58F
 * 0000000140C5E58A: call    __guard_retpoline_import_r10_log_event
 * 0000000140C5E58F: lfence
 * 0000000140C5E592: mov     rax, [rsp+18h+var_18]
 * 0000000140C5E596: mov     r11, [rsp+18h+var_10]
 * 0000000140C5E59B: add     rsp, 18h
 * 0000000140C5E59F: jmp     r10
 */
