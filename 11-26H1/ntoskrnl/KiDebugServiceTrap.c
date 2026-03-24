/*
 * XREFs of KiDebugServiceTrap @ 0x14073AA80
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140C59E40 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x14073AA80 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x14073AA80
 * Reason: Hex-Rays returned no pseudocode for 0x14073AA80
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073AA80: sub     rsp, 8
 * 000000014073AA84: push    rbp
 * 000000014073AA85: sub     rsp, 158h
 * 000000014073AA8C: lea     rbp, [rsp+80h]
 * 000000014073AA94: mov     [rbp+0E8h+var_138], rax
 * 000000014073AA98: mov     [rbp+0E8h+var_130], rcx
 * 000000014073AA9C: mov     [rbp+0E8h+var_128], rdx
 * 000000014073AAA0: mov     [rbp+0E8h+var_120], r8
 * 000000014073AAA4: mov     [rbp+0E8h+var_118], r9
 * 000000014073AAA8: mov     [rbp+0E8h+var_110], r10
 * 000000014073AAAC: mov     [rbp+0E8h+var_108], r11
 * 000000014073AAB0: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073AAB7: jnz     short loc_14073AAF1
 * 000000014073AAB9: xor     edx, edx
 * 000000014073AABB: rdsspq  rdx
 * 000000014073AAC0: mov     [rbp+0E8h+var_90], rdx
 * 000000014073AAC4: lfence
 * 000000014073AAC7: test    byte ptr gs:898h, 1
 * 000000014073AAD0: jnz     short loc_14073AADA
 * 000000014073AAD2: lfence
 * 000000014073AAD5: jmp     loc_14073AD62
 * 000000014073AADA: movzx   eax, word ptr gs:8A6h
 * 000000014073AAE3: mov     ecx, 48h ; 'H'
 * 000000014073AAE8: xor     edx, edx
 * 000000014073AAEA: wrmsr
 * 000000014073AAEC: jmp     loc_14073AD62
 * 000000014073AAF1: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073AAF8: jnz     short loc_14073AAFD
 * 000000014073AAFA: swapgs
 * 000000014073AAFD: lfence
 * 000000014073AB00: mov     rcx, gs:9D68h
 * 000000014073AB09: test    rcx, rcx
 * 000000014073AB0C: jz      short loc_14073AB2D
 * 000000014073AB0E: rdsspq  rdx
 * 000000014073AB13: mov     r10, gs:9D60h
 * 000000014073AB1C: add     r10, 8
 * 000000014073AB20: cmp     rdx, r10
 * 000000014073AB23: jnz     short loc_14073AB2D
 * 000000014073AB25: rstorssp qword ptr [rcx]
 * 000000014073AB29: saveprevssp
 * 000000014073AB2D: mov     r10, gs:188h
 * 000000014073AB36: mov     rcx, gs:188h
 * 000000014073AB3F: mov     rcx, [rcx+220h]
 * 000000014073AB46: mov     rcx, [rcx+760h]
 * 000000014073AB4D: mov     gs:890h, rcx
 * 000000014073AB56: mov     cx, gs:8A2h
 * 000000014073AB5F: mov     gs:8A4h, cx
 * 000000014073AB68: mov     cl, gs:898h
 * 000000014073AB70: mov     gs:89Ah, cl
 * 000000014073AB78: movzx   eax, word ptr gs:8A8h
 * 000000014073AB81: cmp     gs:8A6h, ax
 * 000000014073AB8A: jz      short loc_14073AB9E
 * 000000014073AB8C: mov     gs:8A6h, ax
 * 000000014073AB95: mov     ecx, 48h ; 'H'
 * 000000014073AB9A: xor     edx, edx
 * 000000014073AB9C: wrmsr
 * 000000014073AB9E: movzx   edx, byte ptr gs:898h
 * 000000014073ABA7: test    edx, 8
 * 000000014073ABAD: jz      short loc_14073ABC6
 * 000000014073ABAF: mov     eax, 1
 * 000000014073ABB4: xor     edx, edx
 * 000000014073ABB6: mov     ecx, 49h ; 'I'
 * 000000014073ABBB: wrmsr
 * 000000014073ABBD: movzx   edx, byte ptr gs:898h
 * 000000014073ABC6: test    edx, 2
 * 000000014073ABCC: jz      loc_14073AD09
 * 000000014073ABD2: call    loc_14073ACE5
 * 000000014073ABD7: add     rsp, 8
 * 000000014073ABDB: call    loc_14073ACEE
 * 000000014073ABE0: add     rsp, 8
 * 000000014073ABE4: call    loc_14073ABD7
 * 000000014073ABE9: add     rsp, 8
 * 000000014073ABED: call    loc_14073ABE0
 * 000000014073ABF2: add     rsp, 8
 * 000000014073ABF6: call    loc_14073ABE9
 * 000000014073ABFB: add     rsp, 8
 * 000000014073ABFF: call    loc_14073ABF2
 * 000000014073AC04: add     rsp, 8
 * 000000014073AC08: call    loc_14073ABFB
 * 000000014073AC0D: add     rsp, 8
 * 000000014073AC11: call    loc_14073AC04
 * 000000014073AC16: add     rsp, 8
 * 000000014073AC1A: call    loc_14073AC0D
 * 000000014073AC1F: add     rsp, 8
 * 000000014073AC23: call    loc_14073AC16
 * 000000014073AC28: add     rsp, 8
 * 000000014073AC2C: call    loc_14073AC1F
 * 000000014073AC31: add     rsp, 8
 * 000000014073AC35: call    loc_14073AC28
 * 000000014073AC3A: add     rsp, 8
 * 000000014073AC3E: call    loc_14073AC31
 * 000000014073AC43: add     rsp, 8
 * 000000014073AC47: call    loc_14073AC3A
 * 000000014073AC4C: add     rsp, 8
 * 000000014073AC50: call    loc_14073AC43
 * 000000014073AC55: add     rsp, 8
 * 000000014073AC59: call    loc_14073AC4C
 * 000000014073AC5E: add     rsp, 8
 * 000000014073AC62: call    loc_14073AC55
 * 000000014073AC67: add     rsp, 8
 * 000000014073AC6B: call    loc_14073AC5E
 * 000000014073AC70: add     rsp, 8
 * 000000014073AC74: call    loc_14073AC67
 * 000000014073AC79: add     rsp, 8
 * 000000014073AC7D: call    loc_14073AC70
 * 000000014073AC82: add     rsp, 8
 * 000000014073AC86: call    loc_14073AC79
 * 000000014073AC8B: add     rsp, 8
 * 000000014073AC8F: call    loc_14073AC82
 * 000000014073AC94: add     rsp, 8
 * 000000014073AC98: call    loc_14073AC8B
 * 000000014073AC9D: add     rsp, 8
 * 000000014073ACA1: call    loc_14073AC94
 * 000000014073ACA6: add     rsp, 8
 * 000000014073ACAA: call    loc_14073AC9D
 * 000000014073ACAF: add     rsp, 8
 * 000000014073ACB3: call    loc_14073ACA6
 * 000000014073ACB8: add     rsp, 8
 * 000000014073ACBC: call    loc_14073ACAF
 * 000000014073ACC1: add     rsp, 8
 * 000000014073ACC5: call    loc_14073ACB8
 * 000000014073ACCA: add     rsp, 8
 * 000000014073ACCE: call    loc_14073ACC1
 * 000000014073ACD3: add     rsp, 8
 * 000000014073ACD7: call    loc_14073ACCA
 * 000000014073ACDC: add     rsp, 8
 * 000000014073ACE0: call    loc_14073ACD3
 * 000000014073ACE5: add     rsp, 8
 * 000000014073ACE9: call    loc_14073ACDC
 * 000000014073ACEE: add     rsp, 8
 * 000000014073ACF2: mov     eax, 0DADAh
 * 000000014073ACF7: test    byte ptr gs:89Ch, 8
 * 000000014073AD00: jz      short loc_14073AD09
 * 000000014073AD02: mov     al, 20h ; ' '
 * 000000014073AD04: incsspq rax
 * 000000014073AD09: test    edx, 80h
 * 000000014073AD0F: jz      short loc_14073AD19
 * 000000014073AD11: lfence
 * 000000014073AD14: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073AD19: lfence
 * 000000014073AD1C: mov     byte ptr gs:89Eh, 0
 * 000000014073AD25: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073AD2C: jz      short loc_14073AD4D
 * 000000014073AD2E: mov     ecx, 6A7h
 * 000000014073AD33: rdmsr
 * 000000014073AD35: cmp     edx, 0
 * 000000014073AD38: jz      short loc_14073AD4D
 * 000000014073AD3A: mov     ecx, edx
 * 000000014073AD3C: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073AD42: cmp     edx, ecx
 * 000000014073AD44: jz      short loc_14073AD4D
 * 000000014073AD46: mov     ecx, 6A7h
 * 000000014073AD4B: wrmsr
 * 000000014073AD4D: test    byte ptr [r10+3], 3
 * 000000014073AD52: mov     [rbp+0E8h+var_68], 0
 * 000000014073AD5B: jz      short loc_14073AD62
 * 000000014073AD5D: call    KiSaveDebugRegisterState
 * 000000014073AD62: cld
 * 000000014073AD63: stmxcsr [rbp+0E8h+var_13C]
 * 000000014073AD67: ldmxcsr dword ptr gs:180h
 * 000000014073AD70: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014073AD74: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014073AD78: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014073AD7C: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014073AD80: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014073AD84: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014073AD88: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073AD8F: jz      short KiDebugServiceTrapDispatchTrap
 * 000000014073AD91: mov     r10, gs:188h
 * 000000014073AD9A: test    byte ptr [r10+3], 80h
 * 000000014073AD9F: jz      short KiDebugServiceTrapDispatchTrap
 * 000000014073ADA1: call    KiSynchronizeUserIsolationDomainExit
 * 000000014073ADA6: mov     [rbp+0E8h+var_13D], 1
 * 000000014073ADAA: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073ADB1: jz      short loc_14073ADD4
 * 000000014073ADB3: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073ADBA: jnz     short loc_14073ADD1
 * 000000014073ADBC: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073ADC3: jz      short loc_14073ADD4
 * 000000014073ADC5: test    [rbp+0E8h+arg_8], 40000h
 * 000000014073ADCF: jz      short loc_14073ADD4
 * 000000014073ADD1: stac
 * 000000014073ADD4: inc     qword ptr [rbp+0E8h]
 * 000000014073ADDB: cmp     [rbp+0E8h+arg_0], 23h ; '#'
 * 000000014073ADE3: jnz     short loc_14073ADEC
 * 000000014073ADE5: and     dword ptr [rbp+0ECh], 0
 * 000000014073ADEC: mov     eax, [rbp+0E8h+var_8]
 * 000000014073ADF2: test    [rbp+0E8h+arg_8], 200h
 * 000000014073ADFC: jz      short loc_14073ADFF
 * 000000014073ADFE: sti
 * 000000014073ADFF: mov     ecx, 80000003h
 * 000000014073AE04: mov     edx, 1
 * 000000014073AE09: mov     r9, [rbp+0E8h+var_138]
 * 000000014073AE0D: mov     r8, [rbp+0E8h]
 * 000000014073AE14: call    KiExceptionDispatch
 * 000000014073AE19: nop
 * 000000014073AE1A: retn
 */
