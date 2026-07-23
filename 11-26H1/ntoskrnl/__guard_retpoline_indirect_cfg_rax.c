/*
 * XREFs of __guard_retpoline_indirect_cfg_rax @ 0x140C643C0
 * Callers:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 * Callees:
 *     __guard_retpoline_indirect_cfg_rax @ 0x140C643C0 (__guard_retpoline_indirect_cfg_rax.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_indirect_cfg_rax @ 0x140C643C0
 * Reason: Hex-Rays returned no pseudocode for 0x140C643C0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140C643C0: mov     r11, offset _guard_icall_bitmap
 * 0000000140C643CA: mov     r11, [r11]
 * 0000000140C643CD: test    rax, rax
 * 0000000140C643D0: jge     loc_140C64478
 * 0000000140C643D6: test    r11, r11
 * 0000000140C643D9: jz      short __guard_retpoline_indirect_rax
 * 0000000140C643DB: mov     r10, rax
 * 0000000140C643DE: shr     r10, 9
 * 0000000140C643E2: mov     r11, [r11+r10*8]
 * 0000000140C643E6: mov     r10, rax
 * 0000000140C643E9: shr     r10, 3
 * 0000000140C643ED: test    al, 0Fh
 * 0000000140C643EF: jnz     loc_140C64461
 * 0000000140C643F5: bt      r11, r10
 * 0000000140C643F9: jnb     loc_140C64478
 * 0000000140C643FF: nop
 * 0000000140C64400: mov     r11, offset _retpoline_image_bitmap
 * 0000000140C6440A: mov     r11, [r11]
 * 0000000140C6440D: test    r11, r11
 * 0000000140C64410: jz      short loc_140C6445B
 * 0000000140C64412: mov     r10, rax
 * 0000000140C64415: shr     r10, 10h
 * 0000000140C64419: bt      [r11], r10
 * 0000000140C6441D: jnb     short loc_140C64445
 * 0000000140C6441F: call    loc_140C64440
 * 0000000140C64424: int     3; Trap to Debugger
 * 0000000140C64440: mov     [rsp+0], rax
 * 0000000140C64444: retn
 * 0000000140C64445: or      byte ptr gs:89Eh, 1
 * 0000000140C6444E: test    byte ptr gs:89Eh, 2
 * 0000000140C64457: jnz     short loc_140C6445B
 * 0000000140C64459: jmp     short __guard_retpoline_exit_indirect_rax
 * 0000000140C6445B: lfence
 * 0000000140C6445E: jmp     rax
 * 0000000140C64461: btr     r10, 0
 * 0000000140C64466: bt      r11, r10
 * 0000000140C6446A: jnb     short loc_140C64478
 * 0000000140C6446C: or      r10, 1
 * 0000000140C64470: bt      r11, r10
 * 0000000140C64474: jnb     short loc_140C64478
 * 0000000140C64476: jmp     short __guard_retpoline_indirect_rax
 * 0000000140C64478: jmp     KscpCfgDispatchHandleInvalidCallTarget
 */
