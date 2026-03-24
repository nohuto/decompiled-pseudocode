/*
 * XREFs of __guard_retpoline_exit @ 0x140C5E680
 * Callers:
 *     KeExitRetpoline @ 0x14048D73C (KeExitRetpoline.c)
 *     __guard_retpoline_exit_indirect_rax @ 0x140C5E4A0 (__guard_retpoline_exit_indirect_rax.c)
 *     __guard_retpoline_import_r10 @ 0x140C5E520 (__guard_retpoline_import_r10.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140C5E680 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit @ 0x140C5E680
 * Reason: Hex-Rays returned no pseudocode for 0x140C5E680
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140C5E680: pushfq
 * 0000000140C5E682: sub     rsp, 18h
 * 0000000140C5E686: mov     [rsp+20h+var_20], rax
 * 0000000140C5E68A: mov     [rsp+20h+var_18], rcx
 * 0000000140C5E68F: mov     [rsp+20h+var_10], rdx
 * 0000000140C5E694: cli
 * 0000000140C5E695: movzx   eax, word ptr gs:8A4h
 * 0000000140C5E69E: cmp     gs:8A6h, ax
 * 0000000140C5E6A7: jz      short loc_140C5E6BB
 * 0000000140C5E6A9: mov     gs:8A6h, ax
 * 0000000140C5E6B2: mov     ecx, 48h ; 'H'
 * 0000000140C5E6B7: xor     edx, edx
 * 0000000140C5E6B9: wrmsr
 * 0000000140C5E6BB: movzx   edx, byte ptr gs:89Ah
 * 0000000140C5E6C4: test    edx, 10h
 * 0000000140C5E6CA: jz      short loc_140C5E6E3
 * 0000000140C5E6CC: mov     eax, 1
 * 0000000140C5E6D1: xor     edx, edx
 * 0000000140C5E6D3: mov     ecx, 49h ; 'I'
 * 0000000140C5E6D8: wrmsr
 * 0000000140C5E6DA: movzx   edx, byte ptr gs:89Ah
 * 0000000140C5E6E3: test    edx, 40h
 * 0000000140C5E6E9: jz      loc_140C5E826
 * 0000000140C5E6EF: call    loc_140C5E802
 * 0000000140C5E6F4: add     rsp, 8
 * 0000000140C5E6F8: call    loc_140C5E80B
 * 0000000140C5E6FD: add     rsp, 8
 * 0000000140C5E701: call    loc_140C5E6F4
 * 0000000140C5E706: add     rsp, 8
 * 0000000140C5E70A: call    loc_140C5E6FD
 * 0000000140C5E70F: add     rsp, 8
 * 0000000140C5E713: call    loc_140C5E706
 * 0000000140C5E718: add     rsp, 8
 * 0000000140C5E71C: call    loc_140C5E70F
 * 0000000140C5E721: add     rsp, 8
 * 0000000140C5E725: call    loc_140C5E718
 * 0000000140C5E72A: add     rsp, 8
 * 0000000140C5E72E: call    loc_140C5E721
 * 0000000140C5E733: add     rsp, 8
 * 0000000140C5E737: call    loc_140C5E72A
 * 0000000140C5E73C: add     rsp, 8
 * 0000000140C5E740: call    loc_140C5E733
 * 0000000140C5E745: add     rsp, 8
 * 0000000140C5E749: call    loc_140C5E73C
 * 0000000140C5E74E: add     rsp, 8
 * 0000000140C5E752: call    loc_140C5E745
 * 0000000140C5E757: add     rsp, 8
 * 0000000140C5E75B: call    loc_140C5E74E
 * 0000000140C5E760: add     rsp, 8
 * 0000000140C5E764: call    loc_140C5E757
 * 0000000140C5E769: add     rsp, 8
 * 0000000140C5E76D: call    loc_140C5E760
 * 0000000140C5E772: add     rsp, 8
 * 0000000140C5E776: call    loc_140C5E769
 * 0000000140C5E77B: add     rsp, 8
 * 0000000140C5E77F: call    loc_140C5E772
 * 0000000140C5E784: add     rsp, 8
 * 0000000140C5E788: call    loc_140C5E77B
 * 0000000140C5E78D: add     rsp, 8
 * 0000000140C5E791: call    loc_140C5E784
 * 0000000140C5E796: add     rsp, 8
 * 0000000140C5E79A: call    loc_140C5E78D
 * 0000000140C5E79F: add     rsp, 8
 * 0000000140C5E7A3: call    loc_140C5E796
 * 0000000140C5E7A8: add     rsp, 8
 * 0000000140C5E7AC: call    loc_140C5E79F
 * 0000000140C5E7B1: add     rsp, 8
 * 0000000140C5E7B5: call    loc_140C5E7A8
 * 0000000140C5E7BA: add     rsp, 8
 * 0000000140C5E7BE: call    loc_140C5E7B1
 * 0000000140C5E7C3: add     rsp, 8
 * 0000000140C5E7C7: call    loc_140C5E7BA
 * 0000000140C5E7CC: add     rsp, 8
 * 0000000140C5E7D0: call    loc_140C5E7C3
 * 0000000140C5E7D5: add     rsp, 8
 * 0000000140C5E7D9: call    loc_140C5E7CC
 * 0000000140C5E7DE: add     rsp, 8
 * 0000000140C5E7E2: call    loc_140C5E7D5
 * 0000000140C5E7E7: add     rsp, 8
 * 0000000140C5E7EB: call    loc_140C5E7DE
 * 0000000140C5E7F0: add     rsp, 8
 * 0000000140C5E7F4: call    loc_140C5E7E7
 * 0000000140C5E7F9: add     rsp, 8
 * 0000000140C5E7FD: call    loc_140C5E7F0
 * 0000000140C5E802: add     rsp, 8
 * 0000000140C5E806: call    loc_140C5E7F9
 * 0000000140C5E80B: add     rsp, 8
 * 0000000140C5E80F: mov     eax, 0DADAh
 * 0000000140C5E814: test    byte ptr gs:89Ch, 8
 * 0000000140C5E81D: jz      short loc_140C5E826
 * 0000000140C5E81F: mov     al, 20h ; ' '
 * 0000000140C5E821: incsspq rax
 * 0000000140C5E826: lfence
 * 0000000140C5E829: or      byte ptr gs:89Eh, 2
 * 0000000140C5E832: bt      [rsp-0E0h+arg_F0], 9
 * 0000000140C5E839: jnb     short loc_140C5E83C
 * 0000000140C5E83B: sti
 * 0000000140C5E83C: mov     rax, [rsp-0E0h+arg_D8]
 * 0000000140C5E840: mov     rcx, [rsp-0E0h+arg_E0]
 * 0000000140C5E845: mov     rdx, [rsp-0E0h+arg_E8]
 * 0000000140C5E84A: add     rsp, 20h
 * 0000000140C5E84E: retn
 */
