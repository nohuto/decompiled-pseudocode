/*
 * XREFs of __guard_retpoline_exit @ 0x140C64680
 * Callers:
 *     KeExitRetpoline @ 0x14048727C (KeExitRetpoline.c)
 *     __guard_retpoline_exit_indirect_rax @ 0x140C644A0 (__guard_retpoline_exit_indirect_rax.c)
 *     __guard_retpoline_import_r10 @ 0x140C64520 (__guard_retpoline_import_r10.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140C64680 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit @ 0x140C64680
 * Reason: Hex-Rays returned no pseudocode for 0x140C64680
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140C64680: pushfq
 * 0000000140C64682: sub     rsp, 18h
 * 0000000140C64686: mov     [rsp+20h+var_20], rax
 * 0000000140C6468A: mov     [rsp+20h+var_18], rcx
 * 0000000140C6468F: mov     [rsp+20h+var_10], rdx
 * 0000000140C64694: cli
 * 0000000140C64695: movzx   eax, word ptr gs:8A4h
 * 0000000140C6469E: cmp     gs:8A6h, ax
 * 0000000140C646A7: jz      short loc_140C646BB
 * 0000000140C646A9: mov     gs:8A6h, ax
 * 0000000140C646B2: mov     ecx, 48h ; 'H'
 * 0000000140C646B7: xor     edx, edx
 * 0000000140C646B9: wrmsr
 * 0000000140C646BB: movzx   edx, byte ptr gs:89Ah
 * 0000000140C646C4: test    edx, 10h
 * 0000000140C646CA: jz      short loc_140C646E3
 * 0000000140C646CC: mov     eax, 1
 * 0000000140C646D1: xor     edx, edx
 * 0000000140C646D3: mov     ecx, 49h ; 'I'
 * 0000000140C646D8: wrmsr
 * 0000000140C646DA: movzx   edx, byte ptr gs:89Ah
 * 0000000140C646E3: test    edx, 40h
 * 0000000140C646E9: jz      loc_140C64826
 * 0000000140C646EF: call    loc_140C64802
 * 0000000140C646F4: add     rsp, 8
 * 0000000140C646F8: call    loc_140C6480B
 * 0000000140C646FD: add     rsp, 8
 * 0000000140C64701: call    loc_140C646F4
 * 0000000140C64706: add     rsp, 8
 * 0000000140C6470A: call    loc_140C646FD
 * 0000000140C6470F: add     rsp, 8
 * 0000000140C64713: call    loc_140C64706
 * 0000000140C64718: add     rsp, 8
 * 0000000140C6471C: call    loc_140C6470F
 * 0000000140C64721: add     rsp, 8
 * 0000000140C64725: call    loc_140C64718
 * 0000000140C6472A: add     rsp, 8
 * 0000000140C6472E: call    loc_140C64721
 * 0000000140C64733: add     rsp, 8
 * 0000000140C64737: call    loc_140C6472A
 * 0000000140C6473C: add     rsp, 8
 * 0000000140C64740: call    loc_140C64733
 * 0000000140C64745: add     rsp, 8
 * 0000000140C64749: call    loc_140C6473C
 * 0000000140C6474E: add     rsp, 8
 * 0000000140C64752: call    loc_140C64745
 * 0000000140C64757: add     rsp, 8
 * 0000000140C6475B: call    loc_140C6474E
 * 0000000140C64760: add     rsp, 8
 * 0000000140C64764: call    loc_140C64757
 * 0000000140C64769: add     rsp, 8
 * 0000000140C6476D: call    loc_140C64760
 * 0000000140C64772: add     rsp, 8
 * 0000000140C64776: call    loc_140C64769
 * 0000000140C6477B: add     rsp, 8
 * 0000000140C6477F: call    loc_140C64772
 * 0000000140C64784: add     rsp, 8
 * 0000000140C64788: call    loc_140C6477B
 * 0000000140C6478D: add     rsp, 8
 * 0000000140C64791: call    loc_140C64784
 * 0000000140C64796: add     rsp, 8
 * 0000000140C6479A: call    loc_140C6478D
 * 0000000140C6479F: add     rsp, 8
 * 0000000140C647A3: call    loc_140C64796
 * 0000000140C647A8: add     rsp, 8
 * 0000000140C647AC: call    loc_140C6479F
 * 0000000140C647B1: add     rsp, 8
 * 0000000140C647B5: call    loc_140C647A8
 * 0000000140C647BA: add     rsp, 8
 * 0000000140C647BE: call    loc_140C647B1
 * 0000000140C647C3: add     rsp, 8
 * 0000000140C647C7: call    loc_140C647BA
 * 0000000140C647CC: add     rsp, 8
 * 0000000140C647D0: call    loc_140C647C3
 * 0000000140C647D5: add     rsp, 8
 * 0000000140C647D9: call    loc_140C647CC
 * 0000000140C647DE: add     rsp, 8
 * 0000000140C647E2: call    loc_140C647D5
 * 0000000140C647E7: add     rsp, 8
 * 0000000140C647EB: call    loc_140C647DE
 * 0000000140C647F0: add     rsp, 8
 * 0000000140C647F4: call    loc_140C647E7
 * 0000000140C647F9: add     rsp, 8
 * 0000000140C647FD: call    loc_140C647F0
 * 0000000140C64802: add     rsp, 8
 * 0000000140C64806: call    loc_140C647F9
 * 0000000140C6480B: add     rsp, 8
 * 0000000140C6480F: mov     eax, 0DADAh
 * 0000000140C64814: test    byte ptr gs:89Ch, 8
 * 0000000140C6481D: jz      short loc_140C64826
 * 0000000140C6481F: mov     al, 20h ; ' '
 * 0000000140C64821: incsspq rax
 * 0000000140C64826: lfence
 * 0000000140C64829: or      byte ptr gs:89Eh, 2
 * 0000000140C64832: bt      [rsp-0E0h+arg_F0], 9
 * 0000000140C64839: jnb     short loc_140C6483C
 * 0000000140C6483B: sti
 * 0000000140C6483C: mov     rax, [rsp-0E0h+arg_D8]
 * 0000000140C64840: mov     rcx, [rsp-0E0h+arg_E0]
 * 0000000140C64845: mov     rdx, [rsp-0E0h+arg_E8]
 * 0000000140C6484A: add     rsp, 20h
 * 0000000140C6484E: retn
 */
