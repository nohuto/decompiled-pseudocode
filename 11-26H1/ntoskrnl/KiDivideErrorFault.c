/*
 * XREFs of KiDivideErrorFault @ 0x140737D00
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140C5F100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x140737D00 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x140737D00
 * Reason: Hex-Rays returned no pseudocode for 0x140737D00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140737D00: sub     rsp, 8
 * 0000000140737D04: push    rbp
 * 0000000140737D05: sub     rsp, 158h
 * 0000000140737D0C: lea     rbp, [rsp+80h]
 * 0000000140737D14: mov     [rbp+0E8h+var_138], rax
 * 0000000140737D18: mov     [rbp+0E8h+var_130], rcx
 * 0000000140737D1C: mov     [rbp+0E8h+var_128], rdx
 * 0000000140737D20: mov     [rbp+0E8h+var_120], r8
 * 0000000140737D24: mov     [rbp+0E8h+var_118], r9
 * 0000000140737D28: mov     [rbp+0E8h+var_110], r10
 * 0000000140737D2C: mov     [rbp+0E8h+var_108], r11
 * 0000000140737D30: test    [rbp+0E8h+arg_0], 1
 * 0000000140737D37: jnz     short loc_140737D71
 * 0000000140737D39: xor     edx, edx
 * 0000000140737D3B: rdsspq  rdx
 * 0000000140737D40: mov     [rbp+0E8h+var_90], rdx
 * 0000000140737D44: lfence
 * 0000000140737D47: test    byte ptr gs:898h, 1
 * 0000000140737D50: jnz     short loc_140737D5A
 * 0000000140737D52: lfence
 * 0000000140737D55: jmp     loc_140737FE2
 * 0000000140737D5A: movzx   eax, word ptr gs:8A6h
 * 0000000140737D63: mov     ecx, 48h ; 'H'
 * 0000000140737D68: xor     edx, edx
 * 0000000140737D6A: wrmsr
 * 0000000140737D6C: jmp     loc_140737FE2
 * 0000000140737D71: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140737D78: jnz     short loc_140737D7D
 * 0000000140737D7A: swapgs
 * 0000000140737D7D: lfence
 * 0000000140737D80: mov     rcx, gs:9D68h
 * 0000000140737D89: test    rcx, rcx
 * 0000000140737D8C: jz      short loc_140737DAD
 * 0000000140737D8E: rdsspq  rdx
 * 0000000140737D93: mov     r10, gs:9D60h
 * 0000000140737D9C: add     r10, 8
 * 0000000140737DA0: cmp     rdx, r10
 * 0000000140737DA3: jnz     short loc_140737DAD
 * 0000000140737DA5: rstorssp qword ptr [rcx]
 * 0000000140737DA9: saveprevssp
 * 0000000140737DAD: mov     r10, gs:188h
 * 0000000140737DB6: mov     rcx, gs:188h
 * 0000000140737DBF: mov     rcx, [rcx+220h]
 * 0000000140737DC6: mov     rcx, [rcx+760h]
 * 0000000140737DCD: mov     gs:890h, rcx
 * 0000000140737DD6: mov     cx, gs:8A2h
 * 0000000140737DDF: mov     gs:8A4h, cx
 * 0000000140737DE8: mov     cl, gs:898h
 * 0000000140737DF0: mov     gs:89Ah, cl
 * 0000000140737DF8: movzx   eax, word ptr gs:8A8h
 * 0000000140737E01: cmp     gs:8A6h, ax
 * 0000000140737E0A: jz      short loc_140737E1E
 * 0000000140737E0C: mov     gs:8A6h, ax
 * 0000000140737E15: mov     ecx, 48h ; 'H'
 * 0000000140737E1A: xor     edx, edx
 * 0000000140737E1C: wrmsr
 * 0000000140737E1E: movzx   edx, byte ptr gs:898h
 * 0000000140737E27: test    edx, 8
 * 0000000140737E2D: jz      short loc_140737E46
 * 0000000140737E2F: mov     eax, 1
 * 0000000140737E34: xor     edx, edx
 * 0000000140737E36: mov     ecx, 49h ; 'I'
 * 0000000140737E3B: wrmsr
 * 0000000140737E3D: movzx   edx, byte ptr gs:898h
 * 0000000140737E46: test    edx, 2
 * 0000000140737E4C: jz      loc_140737F89
 * 0000000140737E52: call    loc_140737F65
 * 0000000140737E57: add     rsp, 8
 * 0000000140737E5B: call    loc_140737F6E
 * 0000000140737E60: add     rsp, 8
 * 0000000140737E64: call    loc_140737E57
 * 0000000140737E69: add     rsp, 8
 * 0000000140737E6D: call    loc_140737E60
 * 0000000140737E72: add     rsp, 8
 * 0000000140737E76: call    loc_140737E69
 * 0000000140737E7B: add     rsp, 8
 * 0000000140737E7F: call    loc_140737E72
 * 0000000140737E84: add     rsp, 8
 * 0000000140737E88: call    loc_140737E7B
 * 0000000140737E8D: add     rsp, 8
 * 0000000140737E91: call    loc_140737E84
 * 0000000140737E96: add     rsp, 8
 * 0000000140737E9A: call    loc_140737E8D
 * 0000000140737E9F: add     rsp, 8
 * 0000000140737EA3: call    loc_140737E96
 * 0000000140737EA8: add     rsp, 8
 * 0000000140737EAC: call    loc_140737E9F
 * 0000000140737EB1: add     rsp, 8
 * 0000000140737EB5: call    loc_140737EA8
 * 0000000140737EBA: add     rsp, 8
 * 0000000140737EBE: call    loc_140737EB1
 * 0000000140737EC3: add     rsp, 8
 * 0000000140737EC7: call    loc_140737EBA
 * 0000000140737ECC: add     rsp, 8
 * 0000000140737ED0: call    loc_140737EC3
 * 0000000140737ED5: add     rsp, 8
 * 0000000140737ED9: call    loc_140737ECC
 * 0000000140737EDE: add     rsp, 8
 * 0000000140737EE2: call    loc_140737ED5
 * 0000000140737EE7: add     rsp, 8
 * 0000000140737EEB: call    loc_140737EDE
 * 0000000140737EF0: add     rsp, 8
 * 0000000140737EF4: call    loc_140737EE7
 * 0000000140737EF9: add     rsp, 8
 * 0000000140737EFD: call    loc_140737EF0
 * 0000000140737F02: add     rsp, 8
 * 0000000140737F06: call    loc_140737EF9
 * 0000000140737F0B: add     rsp, 8
 * 0000000140737F0F: call    loc_140737F02
 * 0000000140737F14: add     rsp, 8
 * 0000000140737F18: call    loc_140737F0B
 * 0000000140737F1D: add     rsp, 8
 * 0000000140737F21: call    loc_140737F14
 * 0000000140737F26: add     rsp, 8
 * 0000000140737F2A: call    loc_140737F1D
 * 0000000140737F2F: add     rsp, 8
 * 0000000140737F33: call    loc_140737F26
 * 0000000140737F38: add     rsp, 8
 * 0000000140737F3C: call    loc_140737F2F
 * 0000000140737F41: add     rsp, 8
 * 0000000140737F45: call    loc_140737F38
 * 0000000140737F4A: add     rsp, 8
 * 0000000140737F4E: call    loc_140737F41
 * 0000000140737F53: add     rsp, 8
 * 0000000140737F57: call    loc_140737F4A
 * 0000000140737F5C: add     rsp, 8
 * 0000000140737F60: call    loc_140737F53
 * 0000000140737F65: add     rsp, 8
 * 0000000140737F69: call    loc_140737F5C
 * 0000000140737F6E: add     rsp, 8
 * 0000000140737F72: mov     eax, 0DADAh
 * 0000000140737F77: test    byte ptr gs:89Ch, 8
 * 0000000140737F80: jz      short loc_140737F89
 * 0000000140737F82: mov     al, 20h ; ' '
 * 0000000140737F84: incsspq rax
 * 0000000140737F89: test    edx, 80h
 * 0000000140737F8F: jz      short loc_140737F99
 * 0000000140737F91: lfence
 * 0000000140737F94: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140737F99: lfence
 * 0000000140737F9C: mov     byte ptr gs:89Eh, 0
 * 0000000140737FA5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140737FAC: jz      short loc_140737FCD
 * 0000000140737FAE: mov     ecx, 6A7h
 * 0000000140737FB3: rdmsr
 * 0000000140737FB5: cmp     edx, 0
 * 0000000140737FB8: jz      short loc_140737FCD
 * 0000000140737FBA: mov     ecx, edx
 * 0000000140737FBC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140737FC2: cmp     edx, ecx
 * 0000000140737FC4: jz      short loc_140737FCD
 * 0000000140737FC6: mov     ecx, 6A7h
 * 0000000140737FCB: wrmsr
 * 0000000140737FCD: test    byte ptr [r10+3], 3
 * 0000000140737FD2: mov     [rbp+0E8h+var_68], 0
 * 0000000140737FDB: jz      short loc_140737FE2
 * 0000000140737FDD: call    KiSaveDebugRegisterState
 * 0000000140737FE2: cld
 * 0000000140737FE3: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140737FE7: ldmxcsr dword ptr gs:180h
 * 0000000140737FF0: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140737FF4: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140737FF8: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140737FFC: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140738000: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140738004: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140738008: test    [rbp+0E8h+arg_0], 1
 * 000000014073800F: jz      short KiDivideErrorFaultDispatchTrap
 * 0000000140738011: mov     r10, gs:188h
 * 000000014073801A: test    byte ptr [r10+3], 80h
 * 000000014073801F: jz      short KiDivideErrorFaultDispatchTrap
 * 0000000140738021: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140738026: mov     [rbp+0E8h+var_13D], 1
 * 000000014073802A: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140738031: jz      short loc_140738054
 * 0000000140738033: test    [rbp+0E8h+arg_0], 1
 * 000000014073803A: jnz     short loc_140738051
 * 000000014073803C: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140738043: jz      short loc_140738054
 * 0000000140738045: test    [rbp+0E8h+arg_8], 40000h
 * 000000014073804F: jz      short loc_140738054
 * 0000000140738051: stac
 * 0000000140738054: test    [rbp+0E8h+arg_8], 200h
 * 000000014073805E: jz      short loc_140738061
 * 0000000140738060: sti
 * 0000000140738061: mov     ecx, 10000003h
 * 0000000140738066: xor     edx, edx
 * 0000000140738068: mov     r8, [rbp+0E8h]
 * 000000014073806F: call    KiExceptionDispatch
 * 0000000140738074: nop
 * 0000000140738075: retn
 */
