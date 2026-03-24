/*
 * XREFs of KiStackFault @ 0x140736900
 * Callers:
 *     KiStackFaultShadow @ 0x140C59740 (KiStackFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x140736900 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x140736900
 * Reason: Hex-Rays returned no pseudocode for 0x140736900
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140736900: push    rbp
 * 0000000140736901: sub     rsp, 158h
 * 0000000140736908: lea     rbp, [rsp+80h]
 * 0000000140736910: mov     [rbp+0D8h+var_128], rax
 * 0000000140736914: mov     [rbp+0D8h+var_120], rcx
 * 0000000140736918: mov     [rbp+0D8h+var_118], rdx
 * 000000014073691C: mov     [rbp+0D8h+var_110], r8
 * 0000000140736920: mov     [rbp+0D8h+var_108], r9
 * 0000000140736924: mov     [rbp+0D8h+var_100], r10
 * 0000000140736928: mov     [rbp+0D8h+var_F8], r11
 * 000000014073692C: test    [rbp+0D8h+arg_8], 1
 * 0000000140736933: jnz     short loc_14073696D
 * 0000000140736935: xor     edx, edx
 * 0000000140736937: rdsspq  rdx
 * 000000014073693C: mov     [rbp+0D8h+var_80], rdx
 * 0000000140736940: lfence
 * 0000000140736943: test    byte ptr gs:898h, 1
 * 000000014073694C: jnz     short loc_140736956
 * 000000014073694E: lfence
 * 0000000140736951: jmp     loc_140736BDE
 * 0000000140736956: movzx   eax, word ptr gs:8A6h
 * 000000014073695F: mov     ecx, 48h ; 'H'
 * 0000000140736964: xor     edx, edx
 * 0000000140736966: wrmsr
 * 0000000140736968: jmp     loc_140736BDE
 * 000000014073696D: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140736974: jnz     short loc_140736979
 * 0000000140736976: swapgs
 * 0000000140736979: lfence
 * 000000014073697C: mov     rcx, gs:9D68h
 * 0000000140736985: test    rcx, rcx
 * 0000000140736988: jz      short loc_1407369A9
 * 000000014073698A: rdsspq  rdx
 * 000000014073698F: mov     r10, gs:9D60h
 * 0000000140736998: add     r10, 8
 * 000000014073699C: cmp     rdx, r10
 * 000000014073699F: jnz     short loc_1407369A9
 * 00000001407369A1: rstorssp qword ptr [rcx]
 * 00000001407369A5: saveprevssp
 * 00000001407369A9: mov     r10, gs:188h
 * 00000001407369B2: mov     rcx, gs:188h
 * 00000001407369BB: mov     rcx, [rcx+220h]
 * 00000001407369C2: mov     rcx, [rcx+760h]
 * 00000001407369C9: mov     gs:890h, rcx
 * 00000001407369D2: mov     cx, gs:8A2h
 * 00000001407369DB: mov     gs:8A4h, cx
 * 00000001407369E4: mov     cl, gs:898h
 * 00000001407369EC: mov     gs:89Ah, cl
 * 00000001407369F4: movzx   eax, word ptr gs:8A8h
 * 00000001407369FD: cmp     gs:8A6h, ax
 * 0000000140736A06: jz      short loc_140736A1A
 * 0000000140736A08: mov     gs:8A6h, ax
 * 0000000140736A11: mov     ecx, 48h ; 'H'
 * 0000000140736A16: xor     edx, edx
 * 0000000140736A18: wrmsr
 * 0000000140736A1A: movzx   edx, byte ptr gs:898h
 * 0000000140736A23: test    edx, 8
 * 0000000140736A29: jz      short loc_140736A42
 * 0000000140736A2B: mov     eax, 1
 * 0000000140736A30: xor     edx, edx
 * 0000000140736A32: mov     ecx, 49h ; 'I'
 * 0000000140736A37: wrmsr
 * 0000000140736A39: movzx   edx, byte ptr gs:898h
 * 0000000140736A42: test    edx, 2
 * 0000000140736A48: jz      loc_140736B85
 * 0000000140736A4E: call    loc_140736B61
 * 0000000140736A53: add     rsp, 8
 * 0000000140736A57: call    loc_140736B6A
 * 0000000140736A5C: add     rsp, 8
 * 0000000140736A60: call    loc_140736A53
 * 0000000140736A65: add     rsp, 8
 * 0000000140736A69: call    loc_140736A5C
 * 0000000140736A6E: add     rsp, 8
 * 0000000140736A72: call    loc_140736A65
 * 0000000140736A77: add     rsp, 8
 * 0000000140736A7B: call    loc_140736A6E
 * 0000000140736A80: add     rsp, 8
 * 0000000140736A84: call    loc_140736A77
 * 0000000140736A89: add     rsp, 8
 * 0000000140736A8D: call    loc_140736A80
 * 0000000140736A92: add     rsp, 8
 * 0000000140736A96: call    loc_140736A89
 * 0000000140736A9B: add     rsp, 8
 * 0000000140736A9F: call    loc_140736A92
 * 0000000140736AA4: add     rsp, 8
 * 0000000140736AA8: call    loc_140736A9B
 * 0000000140736AAD: add     rsp, 8
 * 0000000140736AB1: call    loc_140736AA4
 * 0000000140736AB6: add     rsp, 8
 * 0000000140736ABA: call    loc_140736AAD
 * 0000000140736ABF: add     rsp, 8
 * 0000000140736AC3: call    loc_140736AB6
 * 0000000140736AC8: add     rsp, 8
 * 0000000140736ACC: call    loc_140736ABF
 * 0000000140736AD1: add     rsp, 8
 * 0000000140736AD5: call    loc_140736AC8
 * 0000000140736ADA: add     rsp, 8
 * 0000000140736ADE: call    loc_140736AD1
 * 0000000140736AE3: add     rsp, 8
 * 0000000140736AE7: call    loc_140736ADA
 * 0000000140736AEC: add     rsp, 8
 * 0000000140736AF0: call    loc_140736AE3
 * 0000000140736AF5: add     rsp, 8
 * 0000000140736AF9: call    loc_140736AEC
 * 0000000140736AFE: add     rsp, 8
 * 0000000140736B02: call    loc_140736AF5
 * 0000000140736B07: add     rsp, 8
 * 0000000140736B0B: call    loc_140736AFE
 * 0000000140736B10: add     rsp, 8
 * 0000000140736B14: call    loc_140736B07
 * 0000000140736B19: add     rsp, 8
 * 0000000140736B1D: call    loc_140736B10
 * 0000000140736B22: add     rsp, 8
 * 0000000140736B26: call    loc_140736B19
 * 0000000140736B2B: add     rsp, 8
 * 0000000140736B2F: call    loc_140736B22
 * 0000000140736B34: add     rsp, 8
 * 0000000140736B38: call    loc_140736B2B
 * 0000000140736B3D: add     rsp, 8
 * 0000000140736B41: call    loc_140736B34
 * 0000000140736B46: add     rsp, 8
 * 0000000140736B4A: call    loc_140736B3D
 * 0000000140736B4F: add     rsp, 8
 * 0000000140736B53: call    loc_140736B46
 * 0000000140736B58: add     rsp, 8
 * 0000000140736B5C: call    loc_140736B4F
 * 0000000140736B61: add     rsp, 8
 * 0000000140736B65: call    loc_140736B58
 * 0000000140736B6A: add     rsp, 8
 * 0000000140736B6E: mov     eax, 0DADAh
 * 0000000140736B73: test    byte ptr gs:89Ch, 8
 * 0000000140736B7C: jz      short loc_140736B85
 * 0000000140736B7E: mov     al, 20h ; ' '
 * 0000000140736B80: incsspq rax
 * 0000000140736B85: test    edx, 80h
 * 0000000140736B8B: jz      short loc_140736B95
 * 0000000140736B8D: lfence
 * 0000000140736B90: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140736B95: lfence
 * 0000000140736B98: mov     byte ptr gs:89Eh, 0
 * 0000000140736BA1: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140736BA8: jz      short loc_140736BC9
 * 0000000140736BAA: mov     ecx, 6A7h
 * 0000000140736BAF: rdmsr
 * 0000000140736BB1: cmp     edx, 0
 * 0000000140736BB4: jz      short loc_140736BC9
 * 0000000140736BB6: mov     ecx, edx
 * 0000000140736BB8: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140736BBE: cmp     edx, ecx
 * 0000000140736BC0: jz      short loc_140736BC9
 * 0000000140736BC2: mov     ecx, 6A7h
 * 0000000140736BC7: wrmsr
 * 0000000140736BC9: test    byte ptr [r10+3], 3
 * 0000000140736BCE: mov     [rbp+0D8h+var_58], 0
 * 0000000140736BD7: jz      short loc_140736BDE
 * 0000000140736BD9: call    KiSaveDebugRegisterState
 * 0000000140736BDE: cld
 * 0000000140736BDF: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140736BE3: ldmxcsr dword ptr gs:180h
 * 0000000140736BEC: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140736BF0: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140736BF4: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140736BF8: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140736BFC: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140736C00: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140736C04: test    [rbp+0D8h+arg_8], 1
 * 0000000140736C0B: jz      short KiStackFaultDispatchTrap
 * 0000000140736C0D: mov     r10, gs:188h
 * 0000000140736C16: test    byte ptr [r10+3], 80h
 * 0000000140736C1B: jz      short KiStackFaultDispatchTrap
 * 0000000140736C1D: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140736C22: mov     [rbp+0D8h+var_12D], 1
 * 0000000140736C26: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140736C2D: jz      short loc_140736C50
 * 0000000140736C2F: test    [rbp+0D8h+arg_8], 1
 * 0000000140736C36: jnz     short loc_140736C4D
 * 0000000140736C38: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140736C3F: jz      short loc_140736C50
 * 0000000140736C41: test    [rbp+0D8h+arg_10], 40000h
 * 0000000140736C4B: jz      short loc_140736C50
 * 0000000140736C4D: stac
 * 0000000140736C50: mov     eax, [rbp+0E0h]
 * 0000000140736C56: test    [rbp+0D8h+arg_10], 200h
 * 0000000140736C60: jz      short loc_140736C63
 * 0000000140736C62: sti
 * 0000000140736C63: mov     ecx, 0C0000005h
 * 0000000140736C68: mov     edx, 2
 * 0000000140736C6D: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140736C74: mov     r9d, [rbp+0E0h]
 * 0000000140736C7B: or      r9d, 3
 * 0000000140736C7F: and     r9d, 0FFFFh
 * 0000000140736C86: test    [rbp+0D8h+arg_8], 1
 * 0000000140736C8D: jnz     short loc_140736C93
 * 0000000140736C8F: or      r9, 0FFFFFFFFFFFFFFFFh
 * 0000000140736C93: xor     r10, r10
 * 0000000140736C96: call    KiExceptionDispatch
 * 0000000140736C9B: nop
 * 0000000140736C9C: retn
 */
