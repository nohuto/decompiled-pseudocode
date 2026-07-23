/*
 * XREFs of KiAlignmentFault @ 0x14073C900
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140C5F940 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x14073C900 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x14073C900
 * Reason: Hex-Rays returned no pseudocode for 0x14073C900
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073C900: push    rbp
 * 000000014073C901: sub     rsp, 158h
 * 000000014073C908: lea     rbp, [rsp+80h]
 * 000000014073C910: mov     [rbp+0D8h+var_128], rax
 * 000000014073C914: mov     [rbp+0D8h+var_120], rcx
 * 000000014073C918: mov     [rbp+0D8h+var_118], rdx
 * 000000014073C91C: mov     [rbp+0D8h+var_110], r8
 * 000000014073C920: mov     [rbp+0D8h+var_108], r9
 * 000000014073C924: mov     [rbp+0D8h+var_100], r10
 * 000000014073C928: mov     [rbp+0D8h+var_F8], r11
 * 000000014073C92C: test    [rbp+0D8h+arg_8], 1
 * 000000014073C933: jnz     short loc_14073C96D
 * 000000014073C935: xor     edx, edx
 * 000000014073C937: rdsspq  rdx
 * 000000014073C93C: mov     [rbp+0D8h+var_80], rdx
 * 000000014073C940: lfence
 * 000000014073C943: test    byte ptr gs:898h, 1
 * 000000014073C94C: jnz     short loc_14073C956
 * 000000014073C94E: lfence
 * 000000014073C951: jmp     loc_14073CBDE
 * 000000014073C956: movzx   eax, word ptr gs:8A6h
 * 000000014073C95F: mov     ecx, 48h ; 'H'
 * 000000014073C964: xor     edx, edx
 * 000000014073C966: wrmsr
 * 000000014073C968: jmp     loc_14073CBDE
 * 000000014073C96D: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073C974: jnz     short loc_14073C979
 * 000000014073C976: swapgs
 * 000000014073C979: lfence
 * 000000014073C97C: mov     rcx, gs:9D68h
 * 000000014073C985: test    rcx, rcx
 * 000000014073C988: jz      short loc_14073C9A9
 * 000000014073C98A: rdsspq  rdx
 * 000000014073C98F: mov     r10, gs:9D60h
 * 000000014073C998: add     r10, 8
 * 000000014073C99C: cmp     rdx, r10
 * 000000014073C99F: jnz     short loc_14073C9A9
 * 000000014073C9A1: rstorssp qword ptr [rcx]
 * 000000014073C9A5: saveprevssp
 * 000000014073C9A9: mov     r10, gs:188h
 * 000000014073C9B2: mov     rcx, gs:188h
 * 000000014073C9BB: mov     rcx, [rcx+220h]
 * 000000014073C9C2: mov     rcx, [rcx+760h]
 * 000000014073C9C9: mov     gs:890h, rcx
 * 000000014073C9D2: mov     cx, gs:8A2h
 * 000000014073C9DB: mov     gs:8A4h, cx
 * 000000014073C9E4: mov     cl, gs:898h
 * 000000014073C9EC: mov     gs:89Ah, cl
 * 000000014073C9F4: movzx   eax, word ptr gs:8A8h
 * 000000014073C9FD: cmp     gs:8A6h, ax
 * 000000014073CA06: jz      short loc_14073CA1A
 * 000000014073CA08: mov     gs:8A6h, ax
 * 000000014073CA11: mov     ecx, 48h ; 'H'
 * 000000014073CA16: xor     edx, edx
 * 000000014073CA18: wrmsr
 * 000000014073CA1A: movzx   edx, byte ptr gs:898h
 * 000000014073CA23: test    edx, 8
 * 000000014073CA29: jz      short loc_14073CA42
 * 000000014073CA2B: mov     eax, 1
 * 000000014073CA30: xor     edx, edx
 * 000000014073CA32: mov     ecx, 49h ; 'I'
 * 000000014073CA37: wrmsr
 * 000000014073CA39: movzx   edx, byte ptr gs:898h
 * 000000014073CA42: test    edx, 2
 * 000000014073CA48: jz      loc_14073CB85
 * 000000014073CA4E: call    loc_14073CB61
 * 000000014073CA53: add     rsp, 8
 * 000000014073CA57: call    loc_14073CB6A
 * 000000014073CA5C: add     rsp, 8
 * 000000014073CA60: call    loc_14073CA53
 * 000000014073CA65: add     rsp, 8
 * 000000014073CA69: call    loc_14073CA5C
 * 000000014073CA6E: add     rsp, 8
 * 000000014073CA72: call    loc_14073CA65
 * 000000014073CA77: add     rsp, 8
 * 000000014073CA7B: call    loc_14073CA6E
 * 000000014073CA80: add     rsp, 8
 * 000000014073CA84: call    loc_14073CA77
 * 000000014073CA89: add     rsp, 8
 * 000000014073CA8D: call    loc_14073CA80
 * 000000014073CA92: add     rsp, 8
 * 000000014073CA96: call    loc_14073CA89
 * 000000014073CA9B: add     rsp, 8
 * 000000014073CA9F: call    loc_14073CA92
 * 000000014073CAA4: add     rsp, 8
 * 000000014073CAA8: call    loc_14073CA9B
 * 000000014073CAAD: add     rsp, 8
 * 000000014073CAB1: call    loc_14073CAA4
 * 000000014073CAB6: add     rsp, 8
 * 000000014073CABA: call    loc_14073CAAD
 * 000000014073CABF: add     rsp, 8
 * 000000014073CAC3: call    loc_14073CAB6
 * 000000014073CAC8: add     rsp, 8
 * 000000014073CACC: call    loc_14073CABF
 * 000000014073CAD1: add     rsp, 8
 * 000000014073CAD5: call    loc_14073CAC8
 * 000000014073CADA: add     rsp, 8
 * 000000014073CADE: call    loc_14073CAD1
 * 000000014073CAE3: add     rsp, 8
 * 000000014073CAE7: call    loc_14073CADA
 * 000000014073CAEC: add     rsp, 8
 * 000000014073CAF0: call    loc_14073CAE3
 * 000000014073CAF5: add     rsp, 8
 * 000000014073CAF9: call    loc_14073CAEC
 * 000000014073CAFE: add     rsp, 8
 * 000000014073CB02: call    loc_14073CAF5
 * 000000014073CB07: add     rsp, 8
 * 000000014073CB0B: call    loc_14073CAFE
 * 000000014073CB10: add     rsp, 8
 * 000000014073CB14: call    loc_14073CB07
 * 000000014073CB19: add     rsp, 8
 * 000000014073CB1D: call    loc_14073CB10
 * 000000014073CB22: add     rsp, 8
 * 000000014073CB26: call    loc_14073CB19
 * 000000014073CB2B: add     rsp, 8
 * 000000014073CB2F: call    loc_14073CB22
 * 000000014073CB34: add     rsp, 8
 * 000000014073CB38: call    loc_14073CB2B
 * 000000014073CB3D: add     rsp, 8
 * 000000014073CB41: call    loc_14073CB34
 * 000000014073CB46: add     rsp, 8
 * 000000014073CB4A: call    loc_14073CB3D
 * 000000014073CB4F: add     rsp, 8
 * 000000014073CB53: call    loc_14073CB46
 * 000000014073CB58: add     rsp, 8
 * 000000014073CB5C: call    loc_14073CB4F
 * 000000014073CB61: add     rsp, 8
 * 000000014073CB65: call    loc_14073CB58
 * 000000014073CB6A: add     rsp, 8
 * 000000014073CB6E: mov     eax, 0DADAh
 * 000000014073CB73: test    byte ptr gs:89Ch, 8
 * 000000014073CB7C: jz      short loc_14073CB85
 * 000000014073CB7E: mov     al, 20h ; ' '
 * 000000014073CB80: incsspq rax
 * 000000014073CB85: test    edx, 80h
 * 000000014073CB8B: jz      short loc_14073CB95
 * 000000014073CB8D: lfence
 * 000000014073CB90: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073CB95: lfence
 * 000000014073CB98: mov     byte ptr gs:89Eh, 0
 * 000000014073CBA1: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073CBA8: jz      short loc_14073CBC9
 * 000000014073CBAA: mov     ecx, 6A7h
 * 000000014073CBAF: rdmsr
 * 000000014073CBB1: cmp     edx, 0
 * 000000014073CBB4: jz      short loc_14073CBC9
 * 000000014073CBB6: mov     ecx, edx
 * 000000014073CBB8: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073CBBE: cmp     edx, ecx
 * 000000014073CBC0: jz      short loc_14073CBC9
 * 000000014073CBC2: mov     ecx, 6A7h
 * 000000014073CBC7: wrmsr
 * 000000014073CBC9: test    byte ptr [r10+3], 3
 * 000000014073CBCE: mov     [rbp+0D8h+var_58], 0
 * 000000014073CBD7: jz      short loc_14073CBDE
 * 000000014073CBD9: call    KiSaveDebugRegisterState
 * 000000014073CBDE: cld
 * 000000014073CBDF: stmxcsr [rbp+0D8h+var_12C]
 * 000000014073CBE3: ldmxcsr dword ptr gs:180h
 * 000000014073CBEC: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014073CBF0: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014073CBF4: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014073CBF8: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014073CBFC: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014073CC00: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014073CC04: test    [rbp+0D8h+arg_8], 1
 * 000000014073CC0B: jz      short KiAlignmentFaultDispatchTrap
 * 000000014073CC0D: mov     r10, gs:188h
 * 000000014073CC16: test    byte ptr [r10+3], 80h
 * 000000014073CC1B: jz      short KiAlignmentFaultDispatchTrap
 * 000000014073CC1D: call    KiSynchronizeUserIsolationDomainExit
 * 000000014073CC22: mov     [rbp+0D8h+var_12D], 1
 * 000000014073CC26: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073CC2D: jz      short loc_14073CC50
 * 000000014073CC2F: test    [rbp+0D8h+arg_8], 1
 * 000000014073CC36: jnz     short loc_14073CC4D
 * 000000014073CC38: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073CC3F: jz      short loc_14073CC50
 * 000000014073CC41: test    [rbp+0D8h+arg_10], 40000h
 * 000000014073CC4B: jz      short loc_14073CC50
 * 000000014073CC4D: stac
 * 000000014073CC50: mov     eax, [rbp+0E0h]
 * 000000014073CC56: test    [rbp+0D8h+arg_10], 200h
 * 000000014073CC60: jz      short loc_14073CC63
 * 000000014073CC62: sti
 * 000000014073CC63: mov     ecx, 80000002h
 * 000000014073CC68: xor     edx, edx
 * 000000014073CC6A: mov     r8, [rbp+0D8h+arg_0]
 * 000000014073CC71: call    KiExceptionDispatch
 * 000000014073CC76: nop
 * 000000014073CC77: retn
 */
