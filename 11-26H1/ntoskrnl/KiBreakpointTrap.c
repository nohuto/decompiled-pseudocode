/*
 * XREFs of KiBreakpointTrap @ 0x140738C80
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140C5F2C0 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x140738C80 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x140738C80
 * Reason: Hex-Rays returned no pseudocode for 0x140738C80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140738C80: sub     rsp, 8
 * 0000000140738C84: push    rbp
 * 0000000140738C85: sub     rsp, 158h
 * 0000000140738C8C: lea     rbp, [rsp+80h]
 * 0000000140738C94: mov     [rbp+0E8h+var_138], rax
 * 0000000140738C98: mov     [rbp+0E8h+var_130], rcx
 * 0000000140738C9C: mov     [rbp+0E8h+var_128], rdx
 * 0000000140738CA0: mov     [rbp+0E8h+var_120], r8
 * 0000000140738CA4: mov     [rbp+0E8h+var_118], r9
 * 0000000140738CA8: mov     [rbp+0E8h+var_110], r10
 * 0000000140738CAC: mov     [rbp+0E8h+var_108], r11
 * 0000000140738CB0: test    [rbp+0E8h+arg_0], 1
 * 0000000140738CB7: jnz     short loc_140738CF1
 * 0000000140738CB9: xor     edx, edx
 * 0000000140738CBB: rdsspq  rdx
 * 0000000140738CC0: mov     [rbp+0E8h+var_90], rdx
 * 0000000140738CC4: lfence
 * 0000000140738CC7: test    byte ptr gs:898h, 1
 * 0000000140738CD0: jnz     short loc_140738CDA
 * 0000000140738CD2: lfence
 * 0000000140738CD5: jmp     loc_140738F62
 * 0000000140738CDA: movzx   eax, word ptr gs:8A6h
 * 0000000140738CE3: mov     ecx, 48h ; 'H'
 * 0000000140738CE8: xor     edx, edx
 * 0000000140738CEA: wrmsr
 * 0000000140738CEC: jmp     loc_140738F62
 * 0000000140738CF1: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140738CF8: jnz     short loc_140738CFD
 * 0000000140738CFA: swapgs
 * 0000000140738CFD: lfence
 * 0000000140738D00: mov     rcx, gs:9D68h
 * 0000000140738D09: test    rcx, rcx
 * 0000000140738D0C: jz      short loc_140738D2D
 * 0000000140738D0E: rdsspq  rdx
 * 0000000140738D13: mov     r10, gs:9D60h
 * 0000000140738D1C: add     r10, 8
 * 0000000140738D20: cmp     rdx, r10
 * 0000000140738D23: jnz     short loc_140738D2D
 * 0000000140738D25: rstorssp qword ptr [rcx]
 * 0000000140738D29: saveprevssp
 * 0000000140738D2D: mov     r10, gs:188h
 * 0000000140738D36: mov     rcx, gs:188h
 * 0000000140738D3F: mov     rcx, [rcx+220h]
 * 0000000140738D46: mov     rcx, [rcx+760h]
 * 0000000140738D4D: mov     gs:890h, rcx
 * 0000000140738D56: mov     cx, gs:8A2h
 * 0000000140738D5F: mov     gs:8A4h, cx
 * 0000000140738D68: mov     cl, gs:898h
 * 0000000140738D70: mov     gs:89Ah, cl
 * 0000000140738D78: movzx   eax, word ptr gs:8A8h
 * 0000000140738D81: cmp     gs:8A6h, ax
 * 0000000140738D8A: jz      short loc_140738D9E
 * 0000000140738D8C: mov     gs:8A6h, ax
 * 0000000140738D95: mov     ecx, 48h ; 'H'
 * 0000000140738D9A: xor     edx, edx
 * 0000000140738D9C: wrmsr
 * 0000000140738D9E: movzx   edx, byte ptr gs:898h
 * 0000000140738DA7: test    edx, 8
 * 0000000140738DAD: jz      short loc_140738DC6
 * 0000000140738DAF: mov     eax, 1
 * 0000000140738DB4: xor     edx, edx
 * 0000000140738DB6: mov     ecx, 49h ; 'I'
 * 0000000140738DBB: wrmsr
 * 0000000140738DBD: movzx   edx, byte ptr gs:898h
 * 0000000140738DC6: test    edx, 2
 * 0000000140738DCC: jz      loc_140738F09
 * 0000000140738DD2: call    loc_140738EE5
 * 0000000140738DD7: add     rsp, 8
 * 0000000140738DDB: call    loc_140738EEE
 * 0000000140738DE0: add     rsp, 8
 * 0000000140738DE4: call    loc_140738DD7
 * 0000000140738DE9: add     rsp, 8
 * 0000000140738DED: call    loc_140738DE0
 * 0000000140738DF2: add     rsp, 8
 * 0000000140738DF6: call    loc_140738DE9
 * 0000000140738DFB: add     rsp, 8
 * 0000000140738DFF: call    loc_140738DF2
 * 0000000140738E04: add     rsp, 8
 * 0000000140738E08: call    loc_140738DFB
 * 0000000140738E0D: add     rsp, 8
 * 0000000140738E11: call    loc_140738E04
 * 0000000140738E16: add     rsp, 8
 * 0000000140738E1A: call    loc_140738E0D
 * 0000000140738E1F: add     rsp, 8
 * 0000000140738E23: call    loc_140738E16
 * 0000000140738E28: add     rsp, 8
 * 0000000140738E2C: call    loc_140738E1F
 * 0000000140738E31: add     rsp, 8
 * 0000000140738E35: call    loc_140738E28
 * 0000000140738E3A: add     rsp, 8
 * 0000000140738E3E: call    loc_140738E31
 * 0000000140738E43: add     rsp, 8
 * 0000000140738E47: call    loc_140738E3A
 * 0000000140738E4C: add     rsp, 8
 * 0000000140738E50: call    loc_140738E43
 * 0000000140738E55: add     rsp, 8
 * 0000000140738E59: call    loc_140738E4C
 * 0000000140738E5E: add     rsp, 8
 * 0000000140738E62: call    loc_140738E55
 * 0000000140738E67: add     rsp, 8
 * 0000000140738E6B: call    loc_140738E5E
 * 0000000140738E70: add     rsp, 8
 * 0000000140738E74: call    loc_140738E67
 * 0000000140738E79: add     rsp, 8
 * 0000000140738E7D: call    loc_140738E70
 * 0000000140738E82: add     rsp, 8
 * 0000000140738E86: call    loc_140738E79
 * 0000000140738E8B: add     rsp, 8
 * 0000000140738E8F: call    loc_140738E82
 * 0000000140738E94: add     rsp, 8
 * 0000000140738E98: call    loc_140738E8B
 * 0000000140738E9D: add     rsp, 8
 * 0000000140738EA1: call    loc_140738E94
 * 0000000140738EA6: add     rsp, 8
 * 0000000140738EAA: call    loc_140738E9D
 * 0000000140738EAF: add     rsp, 8
 * 0000000140738EB3: call    loc_140738EA6
 * 0000000140738EB8: add     rsp, 8
 * 0000000140738EBC: call    loc_140738EAF
 * 0000000140738EC1: add     rsp, 8
 * 0000000140738EC5: call    loc_140738EB8
 * 0000000140738ECA: add     rsp, 8
 * 0000000140738ECE: call    loc_140738EC1
 * 0000000140738ED3: add     rsp, 8
 * 0000000140738ED7: call    loc_140738ECA
 * 0000000140738EDC: add     rsp, 8
 * 0000000140738EE0: call    loc_140738ED3
 * 0000000140738EE5: add     rsp, 8
 * 0000000140738EE9: call    loc_140738EDC
 * 0000000140738EEE: add     rsp, 8
 * 0000000140738EF2: mov     eax, 0DADAh
 * 0000000140738EF7: test    byte ptr gs:89Ch, 8
 * 0000000140738F00: jz      short loc_140738F09
 * 0000000140738F02: mov     al, 20h ; ' '
 * 0000000140738F04: incsspq rax
 * 0000000140738F09: test    edx, 80h
 * 0000000140738F0F: jz      short loc_140738F19
 * 0000000140738F11: lfence
 * 0000000140738F14: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140738F19: lfence
 * 0000000140738F1C: mov     byte ptr gs:89Eh, 0
 * 0000000140738F25: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140738F2C: jz      short loc_140738F4D
 * 0000000140738F2E: mov     ecx, 6A7h
 * 0000000140738F33: rdmsr
 * 0000000140738F35: cmp     edx, 0
 * 0000000140738F38: jz      short loc_140738F4D
 * 0000000140738F3A: mov     ecx, edx
 * 0000000140738F3C: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140738F42: cmp     edx, ecx
 * 0000000140738F44: jz      short loc_140738F4D
 * 0000000140738F46: mov     ecx, 6A7h
 * 0000000140738F4B: wrmsr
 * 0000000140738F4D: test    byte ptr [r10+3], 3
 * 0000000140738F52: mov     [rbp+0E8h+var_68], 0
 * 0000000140738F5B: jz      short loc_140738F62
 * 0000000140738F5D: call    KiSaveDebugRegisterState
 * 0000000140738F62: cld
 * 0000000140738F63: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140738F67: ldmxcsr dword ptr gs:180h
 * 0000000140738F70: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140738F74: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140738F78: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140738F7C: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140738F80: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140738F84: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140738F88: test    [rbp+0E8h+arg_0], 1
 * 0000000140738F8F: jz      short KiBreakpointTrapDispatchTrap
 * 0000000140738F91: mov     r10, gs:188h
 * 0000000140738F9A: test    byte ptr [r10+3], 80h
 * 0000000140738F9F: jz      short KiBreakpointTrapDispatchTrap
 * 0000000140738FA1: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140738FA6: mov     [rbp+0E8h+var_13D], 1
 * 0000000140738FAA: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140738FB1: jz      short loc_140738FD4
 * 0000000140738FB3: test    [rbp+0E8h+arg_0], 1
 * 0000000140738FBA: jnz     short loc_140738FD1
 * 0000000140738FBC: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140738FC3: jz      short loc_140738FD4
 * 0000000140738FC5: test    [rbp+0E8h+arg_8], 40000h
 * 0000000140738FCF: jz      short loc_140738FD4
 * 0000000140738FD1: stac
 * 0000000140738FD4: test    [rbp+0E8h+arg_8], 200h
 * 0000000140738FDE: jz      short loc_140738FE1
 * 0000000140738FE0: sti
 * 0000000140738FE1: mov     ecx, 80000003h
 * 0000000140738FE6: mov     edx, 1
 * 0000000140738FEB: mov     r8, [rbp+0E8h]
 * 0000000140738FF2: dec     r8
 * 0000000140738FF5: mov     r9d, 0
 * 0000000140738FFB: call    KiExceptionDispatch
 * 0000000140739000: nop
 * 0000000140739001: retn
 */
