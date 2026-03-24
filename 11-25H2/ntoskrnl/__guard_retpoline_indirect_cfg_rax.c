/*
 * XREFs of __guard_retpoline_indirect_cfg_rax @ 0x140BAD2C0
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_indirect_cfg_rax @ 0x140BAD2C0 (__guard_retpoline_indirect_cfg_rax.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_indirect_cfg_rax @ 0x140BAD2C0
 * Reason: Hex-Rays returned no pseudocode for 0x140BAD2C0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BAD2C0: mov     r11, offset _guard_icall_bitmap
 * 0000000140BAD2CA: mov     r11, [r11]
 * 0000000140BAD2CD: test    rax, rax
 * 0000000140BAD2D0: jge     loc_140BAD378
 * 0000000140BAD2D6: test    r11, r11
 * 0000000140BAD2D9: jz      short __guard_retpoline_indirect_rax
 * 0000000140BAD2DB: mov     r10, rax
 * 0000000140BAD2DE: shr     r10, 9
 * 0000000140BAD2E2: mov     r11, [r11+r10*8]
 * 0000000140BAD2E6: mov     r10, rax
 * 0000000140BAD2E9: shr     r10, 3
 * 0000000140BAD2ED: test    al, 0Fh
 * 0000000140BAD2EF: jnz     loc_140BAD361
 * 0000000140BAD2F5: bt      r11, r10
 * 0000000140BAD2F9: jnb     loc_140BAD378
 * 0000000140BAD2FF: nop
 * 0000000140BAD300: mov     r11, offset _retpoline_image_bitmap
 * 0000000140BAD30A: mov     r11, [r11]
 * 0000000140BAD30D: test    r11, r11
 * 0000000140BAD310: jz      short loc_140BAD35B
 * 0000000140BAD312: mov     r10, rax
 * 0000000140BAD315: shr     r10, 10h
 * 0000000140BAD319: bt      [r11], r10
 * 0000000140BAD31D: jnb     short loc_140BAD345
 * 0000000140BAD31F: call    loc_140BAD340
 * 0000000140BAD324: int     3; Trap to Debugger
 * 0000000140BAD340: mov     [rsp+0], rax
 * 0000000140BAD344: retn
 * 0000000140BAD345: or      byte ptr gs:85Eh, 1
 * 0000000140BAD34E: test    byte ptr gs:85Eh, 2
 * 0000000140BAD357: jnz     short loc_140BAD35B
 * 0000000140BAD359: jmp     short __guard_retpoline_exit_indirect_rax
 * 0000000140BAD35B: lfence
 * 0000000140BAD35E: jmp     rax
 * 0000000140BAD361: btr     r10, 0
 * 0000000140BAD366: bt      r11, r10
 * 0000000140BAD36A: jnb     short loc_140BAD378
 * 0000000140BAD36C: or      r10, 1
 * 0000000140BAD370: bt      r11, r10
 * 0000000140BAD374: jnb     short loc_140BAD378
 * 0000000140BAD376: jmp     short __guard_retpoline_indirect_rax
 * 0000000140BAD378: mov     rcx, rax
 * 0000000140BAD37B: mov     rax, offset _guard_icall_bugcheck
 * 0000000140BAD385: call    loc_140BAD3A0
 * 0000000140BAD38A: int     3; Trap to Debugger
 * 0000000140BAD3A0: mov     [rsp+0], rax
 * 0000000140BAD3A4: retn
 */
