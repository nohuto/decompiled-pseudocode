/*
 * XREFs of KiGeneralProtectionFault @ 0x14073B8C0
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140C5F7C0 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x14073B8C0 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x14073B8C0
 * Reason: Hex-Rays returned no pseudocode for 0x14073B8C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073B8C0: push    rbp
 * 000000014073B8C1: sub     rsp, 158h
 * 000000014073B8C8: lea     rbp, [rsp+80h]
 * 000000014073B8D0: mov     [rbp+0D8h+var_128], rax
 * 000000014073B8D4: mov     [rbp+0D8h+var_120], rcx
 * 000000014073B8D8: mov     [rbp+0D8h+var_118], rdx
 * 000000014073B8DC: mov     [rbp+0D8h+var_110], r8
 * 000000014073B8E0: mov     [rbp+0D8h+var_108], r9
 * 000000014073B8E4: mov     [rbp+0D8h+var_100], r10
 * 000000014073B8E8: mov     [rbp+0D8h+var_F8], r11
 * 000000014073B8EC: test    [rbp+0D8h+arg_8], 1
 * 000000014073B8F3: jnz     short loc_14073B92D
 * 000000014073B8F5: xor     edx, edx
 * 000000014073B8F7: rdsspq  rdx
 * 000000014073B8FC: mov     [rbp+0D8h+var_80], rdx
 * 000000014073B900: lfence
 * 000000014073B903: test    byte ptr gs:898h, 1
 * 000000014073B90C: jnz     short loc_14073B916
 * 000000014073B90E: lfence
 * 000000014073B911: jmp     loc_14073BB9E
 * 000000014073B916: movzx   eax, word ptr gs:8A6h
 * 000000014073B91F: mov     ecx, 48h ; 'H'
 * 000000014073B924: xor     edx, edx
 * 000000014073B926: wrmsr
 * 000000014073B928: jmp     loc_14073BB9E
 * 000000014073B92D: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073B934: jnz     short loc_14073B939
 * 000000014073B936: swapgs
 * 000000014073B939: lfence
 * 000000014073B93C: mov     rcx, gs:9D68h
 * 000000014073B945: test    rcx, rcx
 * 000000014073B948: jz      short loc_14073B969
 * 000000014073B94A: rdsspq  rdx
 * 000000014073B94F: mov     r10, gs:9D60h
 * 000000014073B958: add     r10, 8
 * 000000014073B95C: cmp     rdx, r10
 * 000000014073B95F: jnz     short loc_14073B969
 * 000000014073B961: rstorssp qword ptr [rcx]
 * 000000014073B965: saveprevssp
 * 000000014073B969: mov     r10, gs:188h
 * 000000014073B972: mov     rcx, gs:188h
 * 000000014073B97B: mov     rcx, [rcx+220h]
 * 000000014073B982: mov     rcx, [rcx+760h]
 * 000000014073B989: mov     gs:890h, rcx
 * 000000014073B992: mov     cx, gs:8A2h
 * 000000014073B99B: mov     gs:8A4h, cx
 * 000000014073B9A4: mov     cl, gs:898h
 * 000000014073B9AC: mov     gs:89Ah, cl
 * 000000014073B9B4: movzx   eax, word ptr gs:8A8h
 * 000000014073B9BD: cmp     gs:8A6h, ax
 * 000000014073B9C6: jz      short loc_14073B9DA
 * 000000014073B9C8: mov     gs:8A6h, ax
 * 000000014073B9D1: mov     ecx, 48h ; 'H'
 * 000000014073B9D6: xor     edx, edx
 * 000000014073B9D8: wrmsr
 * 000000014073B9DA: movzx   edx, byte ptr gs:898h
 * 000000014073B9E3: test    edx, 8
 * 000000014073B9E9: jz      short loc_14073BA02
 * 000000014073B9EB: mov     eax, 1
 * 000000014073B9F0: xor     edx, edx
 * 000000014073B9F2: mov     ecx, 49h ; 'I'
 * 000000014073B9F7: wrmsr
 * 000000014073B9F9: movzx   edx, byte ptr gs:898h
 * 000000014073BA02: test    edx, 2
 * 000000014073BA08: jz      loc_14073BB45
 * 000000014073BA0E: call    loc_14073BB21
 * 000000014073BA13: add     rsp, 8
 * 000000014073BA17: call    loc_14073BB2A
 * 000000014073BA1C: add     rsp, 8
 * 000000014073BA20: call    loc_14073BA13
 * 000000014073BA25: add     rsp, 8
 * 000000014073BA29: call    loc_14073BA1C
 * 000000014073BA2E: add     rsp, 8
 * 000000014073BA32: call    loc_14073BA25
 * 000000014073BA37: add     rsp, 8
 * 000000014073BA3B: call    loc_14073BA2E
 * 000000014073BA40: add     rsp, 8
 * 000000014073BA44: call    loc_14073BA37
 * 000000014073BA49: add     rsp, 8
 * 000000014073BA4D: call    loc_14073BA40
 * 000000014073BA52: add     rsp, 8
 * 000000014073BA56: call    loc_14073BA49
 * 000000014073BA5B: add     rsp, 8
 * 000000014073BA5F: call    loc_14073BA52
 * 000000014073BA64: add     rsp, 8
 * 000000014073BA68: call    loc_14073BA5B
 * 000000014073BA6D: add     rsp, 8
 * 000000014073BA71: call    loc_14073BA64
 * 000000014073BA76: add     rsp, 8
 * 000000014073BA7A: call    loc_14073BA6D
 * 000000014073BA7F: add     rsp, 8
 * 000000014073BA83: call    loc_14073BA76
 * 000000014073BA88: add     rsp, 8
 * 000000014073BA8C: call    loc_14073BA7F
 * 000000014073BA91: add     rsp, 8
 * 000000014073BA95: call    loc_14073BA88
 * 000000014073BA9A: add     rsp, 8
 * 000000014073BA9E: call    loc_14073BA91
 * 000000014073BAA3: add     rsp, 8
 * 000000014073BAA7: call    loc_14073BA9A
 * 000000014073BAAC: add     rsp, 8
 * 000000014073BAB0: call    loc_14073BAA3
 * 000000014073BAB5: add     rsp, 8
 * 000000014073BAB9: call    loc_14073BAAC
 * 000000014073BABE: add     rsp, 8
 * 000000014073BAC2: call    loc_14073BAB5
 * 000000014073BAC7: add     rsp, 8
 * 000000014073BACB: call    loc_14073BABE
 * 000000014073BAD0: add     rsp, 8
 * 000000014073BAD4: call    loc_14073BAC7
 * 000000014073BAD9: add     rsp, 8
 * 000000014073BADD: call    loc_14073BAD0
 * 000000014073BAE2: add     rsp, 8
 * 000000014073BAE6: call    loc_14073BAD9
 * 000000014073BAEB: add     rsp, 8
 * 000000014073BAEF: call    loc_14073BAE2
 * 000000014073BAF4: add     rsp, 8
 * 000000014073BAF8: call    loc_14073BAEB
 * 000000014073BAFD: add     rsp, 8
 * 000000014073BB01: call    loc_14073BAF4
 * 000000014073BB06: add     rsp, 8
 * 000000014073BB0A: call    loc_14073BAFD
 * 000000014073BB0F: add     rsp, 8
 * 000000014073BB13: call    loc_14073BB06
 * 000000014073BB18: add     rsp, 8
 * 000000014073BB1C: call    loc_14073BB0F
 * 000000014073BB21: add     rsp, 8
 * 000000014073BB25: call    loc_14073BB18
 * 000000014073BB2A: add     rsp, 8
 * 000000014073BB2E: mov     eax, 0DADAh
 * 000000014073BB33: test    byte ptr gs:89Ch, 8
 * 000000014073BB3C: jz      short loc_14073BB45
 * 000000014073BB3E: mov     al, 20h ; ' '
 * 000000014073BB40: incsspq rax
 * 000000014073BB45: test    edx, 80h
 * 000000014073BB4B: jz      short loc_14073BB55
 * 000000014073BB4D: lfence
 * 000000014073BB50: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073BB55: lfence
 * 000000014073BB58: mov     byte ptr gs:89Eh, 0
 * 000000014073BB61: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073BB68: jz      short loc_14073BB89
 * 000000014073BB6A: mov     ecx, 6A7h
 * 000000014073BB6F: rdmsr
 * 000000014073BB71: cmp     edx, 0
 * 000000014073BB74: jz      short loc_14073BB89
 * 000000014073BB76: mov     ecx, edx
 * 000000014073BB78: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073BB7E: cmp     edx, ecx
 * 000000014073BB80: jz      short loc_14073BB89
 * 000000014073BB82: mov     ecx, 6A7h
 * 000000014073BB87: wrmsr
 * 000000014073BB89: test    byte ptr [r10+3], 3
 * 000000014073BB8E: mov     [rbp+0D8h+var_58], 0
 * 000000014073BB97: jz      short loc_14073BB9E
 * 000000014073BB99: call    KiSaveDebugRegisterState
 * 000000014073BB9E: cld
 * 000000014073BB9F: stmxcsr [rbp+0D8h+var_12C]
 * 000000014073BBA3: ldmxcsr dword ptr gs:180h
 * 000000014073BBAC: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014073BBB0: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014073BBB4: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014073BBB8: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014073BBBC: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014073BBC0: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014073BBC4: test    [rbp+0D8h+arg_8], 1
 * 000000014073BBCB: jz      short KiGeneralProtectionFaultDispatchTrap
 * 000000014073BBCD: mov     r10, gs:188h
 * 000000014073BBD6: test    byte ptr [r10+3], 80h
 * 000000014073BBDB: jz      short KiGeneralProtectionFaultDispatchTrap
 * 000000014073BBDD: call    KiSynchronizeUserIsolationDomainExit
 * 000000014073BBE2: mov     [rbp+0D8h+var_12D], 1
 * 000000014073BBE6: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073BBED: jz      short loc_14073BC10
 * 000000014073BBEF: test    [rbp+0D8h+arg_8], 1
 * 000000014073BBF6: jnz     short loc_14073BC0D
 * 000000014073BBF8: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073BBFF: jz      short loc_14073BC10
 * 000000014073BC01: test    [rbp+0D8h+arg_10], 40000h
 * 000000014073BC0B: jz      short loc_14073BC10
 * 000000014073BC0D: stac
 * 000000014073BC10: mov     eax, [rbp+0E0h]
 * 000000014073BC16: test    [rbp+0D8h+arg_10], 200h
 * 000000014073BC20: jz      short loc_14073BC23
 * 000000014073BC22: sti
 * 000000014073BC23: mov     ecx, 10000001h
 * 000000014073BC28: mov     edx, 2
 * 000000014073BC2D: mov     r9d, [rbp+0E0h]
 * 000000014073BC34: and     r9d, 0FFFFh
 * 000000014073BC3B: xor     r10, r10
 * 000000014073BC3E: mov     r8, [rbp+0D8h+arg_0]
 * 000000014073BC45: call    KiExceptionDispatch
 * 000000014073BC4A: nop
 * 000000014073BC4B: retn
 */
