/*
 * XREFs of KiGeneralProtectionFault @ 0x140736CC0
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140C597C0 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x140736CC0 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x140736CC0
 * Reason: Hex-Rays returned no pseudocode for 0x140736CC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140736CC0: push    rbp
 * 0000000140736CC1: sub     rsp, 158h
 * 0000000140736CC8: lea     rbp, [rsp+80h]
 * 0000000140736CD0: mov     [rbp+0D8h+var_128], rax
 * 0000000140736CD4: mov     [rbp+0D8h+var_120], rcx
 * 0000000140736CD8: mov     [rbp+0D8h+var_118], rdx
 * 0000000140736CDC: mov     [rbp+0D8h+var_110], r8
 * 0000000140736CE0: mov     [rbp+0D8h+var_108], r9
 * 0000000140736CE4: mov     [rbp+0D8h+var_100], r10
 * 0000000140736CE8: mov     [rbp+0D8h+var_F8], r11
 * 0000000140736CEC: test    [rbp+0D8h+arg_8], 1
 * 0000000140736CF3: jnz     short loc_140736D2D
 * 0000000140736CF5: xor     edx, edx
 * 0000000140736CF7: rdsspq  rdx
 * 0000000140736CFC: mov     [rbp+0D8h+var_80], rdx
 * 0000000140736D00: lfence
 * 0000000140736D03: test    byte ptr gs:898h, 1
 * 0000000140736D0C: jnz     short loc_140736D16
 * 0000000140736D0E: lfence
 * 0000000140736D11: jmp     loc_140736F9E
 * 0000000140736D16: movzx   eax, word ptr gs:8A6h
 * 0000000140736D1F: mov     ecx, 48h ; 'H'
 * 0000000140736D24: xor     edx, edx
 * 0000000140736D26: wrmsr
 * 0000000140736D28: jmp     loc_140736F9E
 * 0000000140736D2D: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140736D34: jnz     short loc_140736D39
 * 0000000140736D36: swapgs
 * 0000000140736D39: lfence
 * 0000000140736D3C: mov     rcx, gs:9D68h
 * 0000000140736D45: test    rcx, rcx
 * 0000000140736D48: jz      short loc_140736D69
 * 0000000140736D4A: rdsspq  rdx
 * 0000000140736D4F: mov     r10, gs:9D60h
 * 0000000140736D58: add     r10, 8
 * 0000000140736D5C: cmp     rdx, r10
 * 0000000140736D5F: jnz     short loc_140736D69
 * 0000000140736D61: rstorssp qword ptr [rcx]
 * 0000000140736D65: saveprevssp
 * 0000000140736D69: mov     r10, gs:188h
 * 0000000140736D72: mov     rcx, gs:188h
 * 0000000140736D7B: mov     rcx, [rcx+220h]
 * 0000000140736D82: mov     rcx, [rcx+760h]
 * 0000000140736D89: mov     gs:890h, rcx
 * 0000000140736D92: mov     cx, gs:8A2h
 * 0000000140736D9B: mov     gs:8A4h, cx
 * 0000000140736DA4: mov     cl, gs:898h
 * 0000000140736DAC: mov     gs:89Ah, cl
 * 0000000140736DB4: movzx   eax, word ptr gs:8A8h
 * 0000000140736DBD: cmp     gs:8A6h, ax
 * 0000000140736DC6: jz      short loc_140736DDA
 * 0000000140736DC8: mov     gs:8A6h, ax
 * 0000000140736DD1: mov     ecx, 48h ; 'H'
 * 0000000140736DD6: xor     edx, edx
 * 0000000140736DD8: wrmsr
 * 0000000140736DDA: movzx   edx, byte ptr gs:898h
 * 0000000140736DE3: test    edx, 8
 * 0000000140736DE9: jz      short loc_140736E02
 * 0000000140736DEB: mov     eax, 1
 * 0000000140736DF0: xor     edx, edx
 * 0000000140736DF2: mov     ecx, 49h ; 'I'
 * 0000000140736DF7: wrmsr
 * 0000000140736DF9: movzx   edx, byte ptr gs:898h
 * 0000000140736E02: test    edx, 2
 * 0000000140736E08: jz      loc_140736F45
 * 0000000140736E0E: call    loc_140736F21
 * 0000000140736E13: add     rsp, 8
 * 0000000140736E17: call    loc_140736F2A
 * 0000000140736E1C: add     rsp, 8
 * 0000000140736E20: call    loc_140736E13
 * 0000000140736E25: add     rsp, 8
 * 0000000140736E29: call    loc_140736E1C
 * 0000000140736E2E: add     rsp, 8
 * 0000000140736E32: call    loc_140736E25
 * 0000000140736E37: add     rsp, 8
 * 0000000140736E3B: call    loc_140736E2E
 * 0000000140736E40: add     rsp, 8
 * 0000000140736E44: call    loc_140736E37
 * 0000000140736E49: add     rsp, 8
 * 0000000140736E4D: call    loc_140736E40
 * 0000000140736E52: add     rsp, 8
 * 0000000140736E56: call    loc_140736E49
 * 0000000140736E5B: add     rsp, 8
 * 0000000140736E5F: call    loc_140736E52
 * 0000000140736E64: add     rsp, 8
 * 0000000140736E68: call    loc_140736E5B
 * 0000000140736E6D: add     rsp, 8
 * 0000000140736E71: call    loc_140736E64
 * 0000000140736E76: add     rsp, 8
 * 0000000140736E7A: call    loc_140736E6D
 * 0000000140736E7F: add     rsp, 8
 * 0000000140736E83: call    loc_140736E76
 * 0000000140736E88: add     rsp, 8
 * 0000000140736E8C: call    loc_140736E7F
 * 0000000140736E91: add     rsp, 8
 * 0000000140736E95: call    loc_140736E88
 * 0000000140736E9A: add     rsp, 8
 * 0000000140736E9E: call    loc_140736E91
 * 0000000140736EA3: add     rsp, 8
 * 0000000140736EA7: call    loc_140736E9A
 * 0000000140736EAC: add     rsp, 8
 * 0000000140736EB0: call    loc_140736EA3
 * 0000000140736EB5: add     rsp, 8
 * 0000000140736EB9: call    loc_140736EAC
 * 0000000140736EBE: add     rsp, 8
 * 0000000140736EC2: call    loc_140736EB5
 * 0000000140736EC7: add     rsp, 8
 * 0000000140736ECB: call    loc_140736EBE
 * 0000000140736ED0: add     rsp, 8
 * 0000000140736ED4: call    loc_140736EC7
 * 0000000140736ED9: add     rsp, 8
 * 0000000140736EDD: call    loc_140736ED0
 * 0000000140736EE2: add     rsp, 8
 * 0000000140736EE6: call    loc_140736ED9
 * 0000000140736EEB: add     rsp, 8
 * 0000000140736EEF: call    loc_140736EE2
 * 0000000140736EF4: add     rsp, 8
 * 0000000140736EF8: call    loc_140736EEB
 * 0000000140736EFD: add     rsp, 8
 * 0000000140736F01: call    loc_140736EF4
 * 0000000140736F06: add     rsp, 8
 * 0000000140736F0A: call    loc_140736EFD
 * 0000000140736F0F: add     rsp, 8
 * 0000000140736F13: call    loc_140736F06
 * 0000000140736F18: add     rsp, 8
 * 0000000140736F1C: call    loc_140736F0F
 * 0000000140736F21: add     rsp, 8
 * 0000000140736F25: call    loc_140736F18
 * 0000000140736F2A: add     rsp, 8
 * 0000000140736F2E: mov     eax, 0DADAh
 * 0000000140736F33: test    byte ptr gs:89Ch, 8
 * 0000000140736F3C: jz      short loc_140736F45
 * 0000000140736F3E: mov     al, 20h ; ' '
 * 0000000140736F40: incsspq rax
 * 0000000140736F45: test    edx, 80h
 * 0000000140736F4B: jz      short loc_140736F55
 * 0000000140736F4D: lfence
 * 0000000140736F50: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140736F55: lfence
 * 0000000140736F58: mov     byte ptr gs:89Eh, 0
 * 0000000140736F61: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140736F68: jz      short loc_140736F89
 * 0000000140736F6A: mov     ecx, 6A7h
 * 0000000140736F6F: rdmsr
 * 0000000140736F71: cmp     edx, 0
 * 0000000140736F74: jz      short loc_140736F89
 * 0000000140736F76: mov     ecx, edx
 * 0000000140736F78: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140736F7E: cmp     edx, ecx
 * 0000000140736F80: jz      short loc_140736F89
 * 0000000140736F82: mov     ecx, 6A7h
 * 0000000140736F87: wrmsr
 * 0000000140736F89: test    byte ptr [r10+3], 3
 * 0000000140736F8E: mov     [rbp+0D8h+var_58], 0
 * 0000000140736F97: jz      short loc_140736F9E
 * 0000000140736F99: call    KiSaveDebugRegisterState
 * 0000000140736F9E: cld
 * 0000000140736F9F: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140736FA3: ldmxcsr dword ptr gs:180h
 * 0000000140736FAC: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140736FB0: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140736FB4: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140736FB8: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140736FBC: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140736FC0: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140736FC4: test    [rbp+0D8h+arg_8], 1
 * 0000000140736FCB: jz      short KiGeneralProtectionFaultDispatchTrap
 * 0000000140736FCD: mov     r10, gs:188h
 * 0000000140736FD6: test    byte ptr [r10+3], 80h
 * 0000000140736FDB: jz      short KiGeneralProtectionFaultDispatchTrap
 * 0000000140736FDD: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140736FE2: mov     [rbp+0D8h+var_12D], 1
 * 0000000140736FE6: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140736FED: jz      short loc_140737010
 * 0000000140736FEF: test    [rbp+0D8h+arg_8], 1
 * 0000000140736FF6: jnz     short loc_14073700D
 * 0000000140736FF8: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140736FFF: jz      short loc_140737010
 * 0000000140737001: test    [rbp+0D8h+arg_10], 40000h
 * 000000014073700B: jz      short loc_140737010
 * 000000014073700D: stac
 * 0000000140737010: mov     eax, [rbp+0E0h]
 * 0000000140737016: test    [rbp+0D8h+arg_10], 200h
 * 0000000140737020: jz      short loc_140737023
 * 0000000140737022: sti
 * 0000000140737023: mov     ecx, 10000001h
 * 0000000140737028: mov     edx, 2
 * 000000014073702D: mov     r9d, [rbp+0E0h]
 * 0000000140737034: and     r9d, 0FFFFh
 * 000000014073703B: xor     r10, r10
 * 000000014073703E: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140737045: call    KiExceptionDispatch
 * 000000014073704A: nop
 * 000000014073704B: retn
 */
