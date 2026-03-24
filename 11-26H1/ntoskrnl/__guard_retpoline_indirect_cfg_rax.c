/*
 * XREFs of __guard_retpoline_indirect_cfg_rax @ 0x140C5E3C0
 * Callers:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 * Callees:
 *     __guard_retpoline_indirect_cfg_rax @ 0x140C5E3C0 (__guard_retpoline_indirect_cfg_rax.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_indirect_cfg_rax @ 0x140C5E3C0
 * Reason: Hex-Rays returned no pseudocode for 0x140C5E3C0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140C5E3C0: mov     r11, offset _guard_icall_bitmap
 * 0000000140C5E3CA: mov     r11, [r11]
 * 0000000140C5E3CD: test    rax, rax
 * 0000000140C5E3D0: jge     loc_140C5E478
 * 0000000140C5E3D6: test    r11, r11
 * 0000000140C5E3D9: jz      short __guard_retpoline_indirect_rax
 * 0000000140C5E3DB: mov     r10, rax
 * 0000000140C5E3DE: shr     r10, 9
 * 0000000140C5E3E2: mov     r11, [r11+r10*8]
 * 0000000140C5E3E6: mov     r10, rax
 * 0000000140C5E3E9: shr     r10, 3
 * 0000000140C5E3ED: test    al, 0Fh
 * 0000000140C5E3EF: jnz     loc_140C5E461
 * 0000000140C5E3F5: bt      r11, r10
 * 0000000140C5E3F9: jnb     loc_140C5E478
 * 0000000140C5E3FF: nop
 * 0000000140C5E400: mov     r11, offset _retpoline_image_bitmap
 * 0000000140C5E40A: mov     r11, [r11]
 * 0000000140C5E40D: test    r11, r11
 * 0000000140C5E410: jz      short loc_140C5E45B
 * 0000000140C5E412: mov     r10, rax
 * 0000000140C5E415: shr     r10, 10h
 * 0000000140C5E419: bt      [r11], r10
 * 0000000140C5E41D: jnb     short loc_140C5E445
 * 0000000140C5E41F: call    loc_140C5E440
 * 0000000140C5E424: int     3; Trap to Debugger
 * 0000000140C5E440: mov     [rsp+0], rax
 * 0000000140C5E444: retn
 * 0000000140C5E445: or      byte ptr gs:89Eh, 1
 * 0000000140C5E44E: test    byte ptr gs:89Eh, 2
 * 0000000140C5E457: jnz     short loc_140C5E45B
 * 0000000140C5E459: jmp     short __guard_retpoline_exit_indirect_rax
 * 0000000140C5E45B: lfence
 * 0000000140C5E45E: jmp     rax
 * 0000000140C5E461: btr     r10, 0
 * 0000000140C5E466: bt      r11, r10
 * 0000000140C5E46A: jnb     short loc_140C5E478
 * 0000000140C5E46C: or      r10, 1
 * 0000000140C5E470: bt      r11, r10
 * 0000000140C5E474: jnb     short loc_140C5E478
 * 0000000140C5E476: jmp     short __guard_retpoline_indirect_rax
 * 0000000140C5E478: jmp     KscpCfgDispatchHandleInvalidCallTarget
 */
