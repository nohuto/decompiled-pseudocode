/*
 * XREFs of __guard_retpoline_exit @ 0x140BAD5A0
 * Callers:
 *     KeExitRetpoline @ 0x14046112C (KeExitRetpoline.c)
 *     __guard_retpoline_exit_indirect_rax @ 0x140BAD3C0 (__guard_retpoline_exit_indirect_rax.c)
 *     __guard_retpoline_import_r10 @ 0x140BAD440 (__guard_retpoline_import_r10.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140BAD5A0 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit @ 0x140BAD5A0
 * Reason: Hex-Rays returned no pseudocode for 0x140BAD5A0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BAD5A0: pushfq
 * 0000000140BAD5A2: sub     rsp, 18h
 * 0000000140BAD5A6: mov     [rsp+20h+var_20], rax
 * 0000000140BAD5AA: mov     [rsp+20h+var_18], rcx
 * 0000000140BAD5AF: mov     [rsp+20h+var_10], rdx
 * 0000000140BAD5B4: cli
 * 0000000140BAD5B5: movzx   eax, word ptr gs:864h
 * 0000000140BAD5BE: cmp     gs:866h, ax
 * 0000000140BAD5C7: jz      short loc_140BAD5DB
 * 0000000140BAD5C9: mov     gs:866h, ax
 * 0000000140BAD5D2: mov     ecx, 48h ; 'H'
 * 0000000140BAD5D7: xor     edx, edx
 * 0000000140BAD5D9: wrmsr
 * 0000000140BAD5DB: movzx   edx, byte ptr gs:85Ah
 * 0000000140BAD5E4: test    edx, 10h
 * 0000000140BAD5EA: jz      short loc_140BAD603
 * 0000000140BAD5EC: mov     eax, 1
 * 0000000140BAD5F1: xor     edx, edx
 * 0000000140BAD5F3: mov     ecx, 49h ; 'I'
 * 0000000140BAD5F8: wrmsr
 * 0000000140BAD5FA: movzx   edx, byte ptr gs:85Ah
 * 0000000140BAD603: test    edx, 40h
 * 0000000140BAD609: jz      loc_140BAD746
 * 0000000140BAD60F: call    loc_140BAD722
 * 0000000140BAD614: add     rsp, 8
 * 0000000140BAD618: call    loc_140BAD72B
 * 0000000140BAD61D: add     rsp, 8
 * 0000000140BAD621: call    loc_140BAD614
 * 0000000140BAD626: add     rsp, 8
 * 0000000140BAD62A: call    loc_140BAD61D
 * 0000000140BAD62F: add     rsp, 8
 * 0000000140BAD633: call    loc_140BAD626
 * 0000000140BAD638: add     rsp, 8
 * 0000000140BAD63C: call    loc_140BAD62F
 * 0000000140BAD641: add     rsp, 8
 * 0000000140BAD645: call    loc_140BAD638
 * 0000000140BAD64A: add     rsp, 8
 * 0000000140BAD64E: call    loc_140BAD641
 * 0000000140BAD653: add     rsp, 8
 * 0000000140BAD657: call    loc_140BAD64A
 * 0000000140BAD65C: add     rsp, 8
 * 0000000140BAD660: call    loc_140BAD653
 * 0000000140BAD665: add     rsp, 8
 * 0000000140BAD669: call    loc_140BAD65C
 * 0000000140BAD66E: add     rsp, 8
 * 0000000140BAD672: call    loc_140BAD665
 * 0000000140BAD677: add     rsp, 8
 * 0000000140BAD67B: call    loc_140BAD66E
 * 0000000140BAD680: add     rsp, 8
 * 0000000140BAD684: call    loc_140BAD677
 * 0000000140BAD689: add     rsp, 8
 * 0000000140BAD68D: call    loc_140BAD680
 * 0000000140BAD692: add     rsp, 8
 * 0000000140BAD696: call    loc_140BAD689
 * 0000000140BAD69B: add     rsp, 8
 * 0000000140BAD69F: call    loc_140BAD692
 * 0000000140BAD6A4: add     rsp, 8
 * 0000000140BAD6A8: call    loc_140BAD69B
 * 0000000140BAD6AD: add     rsp, 8
 * 0000000140BAD6B1: call    loc_140BAD6A4
 * 0000000140BAD6B6: add     rsp, 8
 * 0000000140BAD6BA: call    loc_140BAD6AD
 * 0000000140BAD6BF: add     rsp, 8
 * 0000000140BAD6C3: call    loc_140BAD6B6
 * 0000000140BAD6C8: add     rsp, 8
 * 0000000140BAD6CC: call    loc_140BAD6BF
 * 0000000140BAD6D1: add     rsp, 8
 * 0000000140BAD6D5: call    loc_140BAD6C8
 * 0000000140BAD6DA: add     rsp, 8
 * 0000000140BAD6DE: call    loc_140BAD6D1
 * 0000000140BAD6E3: add     rsp, 8
 * 0000000140BAD6E7: call    loc_140BAD6DA
 * 0000000140BAD6EC: add     rsp, 8
 * 0000000140BAD6F0: call    loc_140BAD6E3
 * 0000000140BAD6F5: add     rsp, 8
 * 0000000140BAD6F9: call    loc_140BAD6EC
 * 0000000140BAD6FE: add     rsp, 8
 * 0000000140BAD702: call    loc_140BAD6F5
 * 0000000140BAD707: add     rsp, 8
 * 0000000140BAD70B: call    loc_140BAD6FE
 * 0000000140BAD710: add     rsp, 8
 * 0000000140BAD714: call    loc_140BAD707
 * 0000000140BAD719: add     rsp, 8
 * 0000000140BAD71D: call    loc_140BAD710
 * 0000000140BAD722: add     rsp, 8
 * 0000000140BAD726: call    loc_140BAD719
 * 0000000140BAD72B: add     rsp, 8
 * 0000000140BAD72F: mov     eax, 0DADAh
 * 0000000140BAD734: test    byte ptr gs:85Ch, 8
 * 0000000140BAD73D: jz      short loc_140BAD746
 * 0000000140BAD73F: mov     al, 20h ; ' '
 * 0000000140BAD741: incsspq rax
 * 0000000140BAD746: lfence
 * 0000000140BAD749: or      byte ptr gs:85Eh, 2
 * 0000000140BAD752: bt      [rsp-0E0h+arg_F0], 9
 * 0000000140BAD759: jnb     short loc_140BAD75C
 * 0000000140BAD75B: sti
 * 0000000140BAD75C: mov     rax, [rsp-0E0h+arg_D8]
 * 0000000140BAD760: mov     rcx, [rsp-0E0h+arg_E0]
 * 0000000140BAD765: mov     rdx, [rsp-0E0h+arg_E8]
 * 0000000140BAD76A: add     rsp, 20h
 * 0000000140BAD76E: retn
 */
