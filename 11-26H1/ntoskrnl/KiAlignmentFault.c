/*
 * XREFs of KiAlignmentFault @ 0x140737D00
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140C59940 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x140737D00 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x140737D00
 * Reason: Hex-Rays returned no pseudocode for 0x140737D00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140737D00: push    rbp
 * 0000000140737D01: sub     rsp, 158h
 * 0000000140737D08: lea     rbp, [rsp+80h]
 * 0000000140737D10: mov     [rbp+0D8h+var_128], rax
 * 0000000140737D14: mov     [rbp+0D8h+var_120], rcx
 * 0000000140737D18: mov     [rbp+0D8h+var_118], rdx
 * 0000000140737D1C: mov     [rbp+0D8h+var_110], r8
 * 0000000140737D20: mov     [rbp+0D8h+var_108], r9
 * 0000000140737D24: mov     [rbp+0D8h+var_100], r10
 * 0000000140737D28: mov     [rbp+0D8h+var_F8], r11
 * 0000000140737D2C: test    [rbp+0D8h+arg_8], 1
 * 0000000140737D33: jnz     short loc_140737D6D
 * 0000000140737D35: xor     edx, edx
 * 0000000140737D37: rdsspq  rdx
 * 0000000140737D3C: mov     [rbp+0D8h+var_80], rdx
 * 0000000140737D40: lfence
 * 0000000140737D43: test    byte ptr gs:898h, 1
 * 0000000140737D4C: jnz     short loc_140737D56
 * 0000000140737D4E: lfence
 * 0000000140737D51: jmp     loc_140737FDE
 * 0000000140737D56: movzx   eax, word ptr gs:8A6h
 * 0000000140737D5F: mov     ecx, 48h ; 'H'
 * 0000000140737D64: xor     edx, edx
 * 0000000140737D66: wrmsr
 * 0000000140737D68: jmp     loc_140737FDE
 * 0000000140737D6D: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140737D74: jnz     short loc_140737D79
 * 0000000140737D76: swapgs
 * 0000000140737D79: lfence
 * 0000000140737D7C: mov     rcx, gs:9D68h
 * 0000000140737D85: test    rcx, rcx
 * 0000000140737D88: jz      short loc_140737DA9
 * 0000000140737D8A: rdsspq  rdx
 * 0000000140737D8F: mov     r10, gs:9D60h
 * 0000000140737D98: add     r10, 8
 * 0000000140737D9C: cmp     rdx, r10
 * 0000000140737D9F: jnz     short loc_140737DA9
 * 0000000140737DA1: rstorssp qword ptr [rcx]
 * 0000000140737DA5: saveprevssp
 * 0000000140737DA9: mov     r10, gs:188h
 * 0000000140737DB2: mov     rcx, gs:188h
 * 0000000140737DBB: mov     rcx, [rcx+220h]
 * 0000000140737DC2: mov     rcx, [rcx+760h]
 * 0000000140737DC9: mov     gs:890h, rcx
 * 0000000140737DD2: mov     cx, gs:8A2h
 * 0000000140737DDB: mov     gs:8A4h, cx
 * 0000000140737DE4: mov     cl, gs:898h
 * 0000000140737DEC: mov     gs:89Ah, cl
 * 0000000140737DF4: movzx   eax, word ptr gs:8A8h
 * 0000000140737DFD: cmp     gs:8A6h, ax
 * 0000000140737E06: jz      short loc_140737E1A
 * 0000000140737E08: mov     gs:8A6h, ax
 * 0000000140737E11: mov     ecx, 48h ; 'H'
 * 0000000140737E16: xor     edx, edx
 * 0000000140737E18: wrmsr
 * 0000000140737E1A: movzx   edx, byte ptr gs:898h
 * 0000000140737E23: test    edx, 8
 * 0000000140737E29: jz      short loc_140737E42
 * 0000000140737E2B: mov     eax, 1
 * 0000000140737E30: xor     edx, edx
 * 0000000140737E32: mov     ecx, 49h ; 'I'
 * 0000000140737E37: wrmsr
 * 0000000140737E39: movzx   edx, byte ptr gs:898h
 * 0000000140737E42: test    edx, 2
 * 0000000140737E48: jz      loc_140737F85
 * 0000000140737E4E: call    loc_140737F61
 * 0000000140737E53: add     rsp, 8
 * 0000000140737E57: call    loc_140737F6A
 * 0000000140737E5C: add     rsp, 8
 * 0000000140737E60: call    loc_140737E53
 * 0000000140737E65: add     rsp, 8
 * 0000000140737E69: call    loc_140737E5C
 * 0000000140737E6E: add     rsp, 8
 * 0000000140737E72: call    loc_140737E65
 * 0000000140737E77: add     rsp, 8
 * 0000000140737E7B: call    loc_140737E6E
 * 0000000140737E80: add     rsp, 8
 * 0000000140737E84: call    loc_140737E77
 * 0000000140737E89: add     rsp, 8
 * 0000000140737E8D: call    loc_140737E80
 * 0000000140737E92: add     rsp, 8
 * 0000000140737E96: call    loc_140737E89
 * 0000000140737E9B: add     rsp, 8
 * 0000000140737E9F: call    loc_140737E92
 * 0000000140737EA4: add     rsp, 8
 * 0000000140737EA8: call    loc_140737E9B
 * 0000000140737EAD: add     rsp, 8
 * 0000000140737EB1: call    loc_140737EA4
 * 0000000140737EB6: add     rsp, 8
 * 0000000140737EBA: call    loc_140737EAD
 * 0000000140737EBF: add     rsp, 8
 * 0000000140737EC3: call    loc_140737EB6
 * 0000000140737EC8: add     rsp, 8
 * 0000000140737ECC: call    loc_140737EBF
 * 0000000140737ED1: add     rsp, 8
 * 0000000140737ED5: call    loc_140737EC8
 * 0000000140737EDA: add     rsp, 8
 * 0000000140737EDE: call    loc_140737ED1
 * 0000000140737EE3: add     rsp, 8
 * 0000000140737EE7: call    loc_140737EDA
 * 0000000140737EEC: add     rsp, 8
 * 0000000140737EF0: call    loc_140737EE3
 * 0000000140737EF5: add     rsp, 8
 * 0000000140737EF9: call    loc_140737EEC
 * 0000000140737EFE: add     rsp, 8
 * 0000000140737F02: call    loc_140737EF5
 * 0000000140737F07: add     rsp, 8
 * 0000000140737F0B: call    loc_140737EFE
 * 0000000140737F10: add     rsp, 8
 * 0000000140737F14: call    loc_140737F07
 * 0000000140737F19: add     rsp, 8
 * 0000000140737F1D: call    loc_140737F10
 * 0000000140737F22: add     rsp, 8
 * 0000000140737F26: call    loc_140737F19
 * 0000000140737F2B: add     rsp, 8
 * 0000000140737F2F: call    loc_140737F22
 * 0000000140737F34: add     rsp, 8
 * 0000000140737F38: call    loc_140737F2B
 * 0000000140737F3D: add     rsp, 8
 * 0000000140737F41: call    loc_140737F34
 * 0000000140737F46: add     rsp, 8
 * 0000000140737F4A: call    loc_140737F3D
 * 0000000140737F4F: add     rsp, 8
 * 0000000140737F53: call    loc_140737F46
 * 0000000140737F58: add     rsp, 8
 * 0000000140737F5C: call    loc_140737F4F
 * 0000000140737F61: add     rsp, 8
 * 0000000140737F65: call    loc_140737F58
 * 0000000140737F6A: add     rsp, 8
 * 0000000140737F6E: mov     eax, 0DADAh
 * 0000000140737F73: test    byte ptr gs:89Ch, 8
 * 0000000140737F7C: jz      short loc_140737F85
 * 0000000140737F7E: mov     al, 20h ; ' '
 * 0000000140737F80: incsspq rax
 * 0000000140737F85: test    edx, 80h
 * 0000000140737F8B: jz      short loc_140737F95
 * 0000000140737F8D: lfence
 * 0000000140737F90: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140737F95: lfence
 * 0000000140737F98: mov     byte ptr gs:89Eh, 0
 * 0000000140737FA1: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140737FA8: jz      short loc_140737FC9
 * 0000000140737FAA: mov     ecx, 6A7h
 * 0000000140737FAF: rdmsr
 * 0000000140737FB1: cmp     edx, 0
 * 0000000140737FB4: jz      short loc_140737FC9
 * 0000000140737FB6: mov     ecx, edx
 * 0000000140737FB8: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140737FBE: cmp     edx, ecx
 * 0000000140737FC0: jz      short loc_140737FC9
 * 0000000140737FC2: mov     ecx, 6A7h
 * 0000000140737FC7: wrmsr
 * 0000000140737FC9: test    byte ptr [r10+3], 3
 * 0000000140737FCE: mov     [rbp+0D8h+var_58], 0
 * 0000000140737FD7: jz      short loc_140737FDE
 * 0000000140737FD9: call    KiSaveDebugRegisterState
 * 0000000140737FDE: cld
 * 0000000140737FDF: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140737FE3: ldmxcsr dword ptr gs:180h
 * 0000000140737FEC: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140737FF0: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140737FF4: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140737FF8: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140737FFC: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140738000: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140738004: test    [rbp+0D8h+arg_8], 1
 * 000000014073800B: jz      short KiAlignmentFaultDispatchTrap
 * 000000014073800D: mov     r10, gs:188h
 * 0000000140738016: test    byte ptr [r10+3], 80h
 * 000000014073801B: jz      short KiAlignmentFaultDispatchTrap
 * 000000014073801D: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140738022: mov     [rbp+0D8h+var_12D], 1
 * 0000000140738026: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073802D: jz      short loc_140738050
 * 000000014073802F: test    [rbp+0D8h+arg_8], 1
 * 0000000140738036: jnz     short loc_14073804D
 * 0000000140738038: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073803F: jz      short loc_140738050
 * 0000000140738041: test    [rbp+0D8h+arg_10], 40000h
 * 000000014073804B: jz      short loc_140738050
 * 000000014073804D: stac
 * 0000000140738050: mov     eax, [rbp+0E0h]
 * 0000000140738056: test    [rbp+0D8h+arg_10], 200h
 * 0000000140738060: jz      short loc_140738063
 * 0000000140738062: sti
 * 0000000140738063: mov     ecx, 80000002h
 * 0000000140738068: xor     edx, edx
 * 000000014073806A: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140738071: call    KiExceptionDispatch
 * 0000000140738076: nop
 * 0000000140738077: retn
 */
