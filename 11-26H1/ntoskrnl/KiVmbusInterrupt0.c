/*
 * XREFs of KiVmbusInterrupt0 @ 0x140731C30
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140C60040 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140419940 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405F3900 (KeWakeProcessor.c)
 *     KiVmbusInterrupt0 @ 0x140731C30 (KiVmbusInterrupt0.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x140731C30
 * Reason: Hex-Rays returned no pseudocode for 0x140731C30
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140731C30: push    1
 * 0000000140731C32: push    rbp
 * 0000000140731C33: sub     rsp, 158h
 * 0000000140731C3A: lea     rbp, [rsp+168h+var_E8]
 * 0000000140731C42: mov     [rbp+0D0h], rsi
 * 0000000140731C49: mov     [rbp-50h], rax
 * 0000000140731C4D: mov     [rbp-48h], rcx
 * 0000000140731C51: mov     [rbp-40h], rdx
 * 0000000140731C55: mov     [rbp-38h], r8
 * 0000000140731C59: mov     [rbp-30h], r9
 * 0000000140731C5D: mov     [rbp-28h], r10
 * 0000000140731C61: mov     [rbp-20h], r11
 * 0000000140731C65: test    byte ptr [rbp+0F0h], 1
 * 0000000140731C6C: jnz     short loc_140731CA6
 * 0000000140731C6E: xor     edx, edx
 * 0000000140731C70: rdsspq  rdx
 * 0000000140731C75: mov     [rbp+58h], rdx
 * 0000000140731C79: lfence
 * 0000000140731C7C: test    byte ptr gs:898h, 1
 * 0000000140731C85: jnz     short loc_140731C8F
 * 0000000140731C87: lfence
 * 0000000140731C8A: jmp     loc_140731F17
 * 0000000140731C8F: movzx   eax, word ptr gs:8A6h
 * 0000000140731C98: mov     ecx, 48h ; 'H'
 * 0000000140731C9D: xor     edx, edx
 * 0000000140731C9F: wrmsr
 * 0000000140731CA1: jmp     loc_140731F17
 * 0000000140731CA6: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140731CAD: jnz     short loc_140731CB2
 * 0000000140731CAF: swapgs
 * 0000000140731CB2: lfence
 * 0000000140731CB5: mov     rcx, gs:9D68h
 * 0000000140731CBE: test    rcx, rcx
 * 0000000140731CC1: jz      short loc_140731CE2
 * 0000000140731CC3: rdsspq  rdx
 * 0000000140731CC8: mov     r10, gs:9D60h
 * 0000000140731CD1: add     r10, 8
 * 0000000140731CD5: cmp     rdx, r10
 * 0000000140731CD8: jnz     short loc_140731CE2
 * 0000000140731CDA: rstorssp qword ptr [rcx]
 * 0000000140731CDE: saveprevssp
 * 0000000140731CE2: mov     r10, gs:188h
 * 0000000140731CEB: mov     rcx, gs:188h
 * 0000000140731CF4: mov     rcx, [rcx+220h]
 * 0000000140731CFB: mov     rcx, [rcx+760h]
 * 0000000140731D02: mov     gs:890h, rcx
 * 0000000140731D0B: mov     cx, gs:8A2h
 * 0000000140731D14: mov     gs:8A4h, cx
 * 0000000140731D1D: mov     cl, gs:898h
 * 0000000140731D25: mov     gs:89Ah, cl
 * 0000000140731D2D: movzx   eax, word ptr gs:8A8h
 * 0000000140731D36: cmp     gs:8A6h, ax
 * 0000000140731D3F: jz      short loc_140731D53
 * 0000000140731D41: mov     gs:8A6h, ax
 * 0000000140731D4A: mov     ecx, 48h ; 'H'
 * 0000000140731D4F: xor     edx, edx
 * 0000000140731D51: wrmsr
 * 0000000140731D53: movzx   edx, byte ptr gs:898h
 * 0000000140731D5C: test    edx, 8
 * 0000000140731D62: jz      short loc_140731D7B
 * 0000000140731D64: mov     eax, 1
 * 0000000140731D69: xor     edx, edx
 * 0000000140731D6B: mov     ecx, 49h ; 'I'
 * 0000000140731D70: wrmsr
 * 0000000140731D72: movzx   edx, byte ptr gs:898h
 * 0000000140731D7B: test    edx, 2
 * 0000000140731D81: jz      loc_140731EBE
 * 0000000140731D87: call    loc_140731E9A
 * 0000000140731D8C: add     rsp, 8
 * 0000000140731D90: call    loc_140731EA3
 * 0000000140731D95: add     rsp, 8
 * 0000000140731D99: call    loc_140731D8C
 * 0000000140731D9E: add     rsp, 8
 * 0000000140731DA2: call    loc_140731D95
 * 0000000140731DA7: add     rsp, 8
 * 0000000140731DAB: call    loc_140731D9E
 * 0000000140731DB0: add     rsp, 8
 * 0000000140731DB4: call    loc_140731DA7
 * 0000000140731DB9: add     rsp, 8
 * 0000000140731DBD: call    loc_140731DB0
 * 0000000140731DC2: add     rsp, 8
 * 0000000140731DC6: call    loc_140731DB9
 * 0000000140731DCB: add     rsp, 8
 * 0000000140731DCF: call    loc_140731DC2
 * 0000000140731DD4: add     rsp, 8
 * 0000000140731DD8: call    loc_140731DCB
 * 0000000140731DDD: add     rsp, 8
 * 0000000140731DE1: call    loc_140731DD4
 * 0000000140731DE6: add     rsp, 8
 * 0000000140731DEA: call    loc_140731DDD
 * 0000000140731DEF: add     rsp, 8
 * 0000000140731DF3: call    loc_140731DE6
 * 0000000140731DF8: add     rsp, 8
 * 0000000140731DFC: call    loc_140731DEF
 * 0000000140731E01: add     rsp, 8
 * 0000000140731E05: call    loc_140731DF8
 * 0000000140731E0A: add     rsp, 8
 * 0000000140731E0E: call    loc_140731E01
 * 0000000140731E13: add     rsp, 8
 * 0000000140731E17: call    loc_140731E0A
 * 0000000140731E1C: add     rsp, 8
 * 0000000140731E20: call    loc_140731E13
 * 0000000140731E25: add     rsp, 8
 * 0000000140731E29: call    loc_140731E1C
 * 0000000140731E2E: add     rsp, 8
 * 0000000140731E32: call    loc_140731E25
 * 0000000140731E37: add     rsp, 8
 * 0000000140731E3B: call    loc_140731E2E
 * 0000000140731E40: add     rsp, 8
 * 0000000140731E44: call    loc_140731E37
 * 0000000140731E49: add     rsp, 8
 * 0000000140731E4D: call    loc_140731E40
 * 0000000140731E52: add     rsp, 8
 * 0000000140731E56: call    loc_140731E49
 * 0000000140731E5B: add     rsp, 8
 * 0000000140731E5F: call    loc_140731E52
 * 0000000140731E64: add     rsp, 8
 * 0000000140731E68: call    loc_140731E5B
 * 0000000140731E6D: add     rsp, 8
 * 0000000140731E71: call    loc_140731E64
 * 0000000140731E76: add     rsp, 8
 * 0000000140731E7A: call    loc_140731E6D
 * 0000000140731E7F: add     rsp, 8
 * 0000000140731E83: call    loc_140731E76
 * 0000000140731E88: add     rsp, 8
 * 0000000140731E8C: call    loc_140731E7F
 * 0000000140731E91: add     rsp, 8
 * 0000000140731E95: call    loc_140731E88
 * 0000000140731E9A: add     rsp, 8
 * 0000000140731E9E: call    loc_140731E91
 * 0000000140731EA3: add     rsp, 8
 * 0000000140731EA7: mov     eax, 0DADAh
 * 0000000140731EAC: test    byte ptr gs:89Ch, 8
 * 0000000140731EB5: jz      short loc_140731EBE
 * 0000000140731EB7: mov     al, 20h ; ' '
 * 0000000140731EB9: incsspq rax
 * 0000000140731EBE: test    edx, 80h
 * 0000000140731EC4: jz      short loc_140731ECE
 * 0000000140731EC6: lfence
 * 0000000140731EC9: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140731ECE: lfence
 * 0000000140731ED1: mov     byte ptr gs:89Eh, 0
 * 0000000140731EDA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140731EE1: jz      short loc_140731F02
 * 0000000140731EE3: mov     ecx, 6A7h
 * 0000000140731EE8: rdmsr
 * 0000000140731EEA: cmp     edx, 0
 * 0000000140731EED: jz      short loc_140731F02
 * 0000000140731EEF: mov     ecx, edx
 * 0000000140731EF1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140731EF7: cmp     edx, ecx
 * 0000000140731EF9: jz      short loc_140731F02
 * 0000000140731EFB: mov     ecx, 6A7h
 * 0000000140731F00: wrmsr
 * 0000000140731F02: test    byte ptr [r10+3], 3
 * 0000000140731F07: mov     word ptr [rbp+80h], 0
 * 0000000140731F10: jz      short loc_140731F17
 * 0000000140731F12: call    KiSaveDebugRegisterState
 * 0000000140731F17: cld
 * 0000000140731F18: stmxcsr dword ptr [rbp-54h]
 * 0000000140731F1C: ldmxcsr dword ptr gs:180h
 * 0000000140731F25: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140731F29: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140731F2D: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140731F31: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140731F35: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140731F39: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140731F3D: test    byte ptr [rbp+0F0h], 1
 * 0000000140731F44: jz      short KiVmbusInterrupt0DispatchTrap
 * 0000000140731F46: mov     r10, gs:188h
 * 0000000140731F4F: test    byte ptr [r10+3], 80h
 * 0000000140731F54: jz      short KiVmbusInterrupt0DispatchTrap
 * 0000000140731F56: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140731F5B: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140731F62: jz      short loc_140731F6B
 * 0000000140731F64: mov     [rbp+0D0h], rsi
 * 0000000140731F6B: mov     byte ptr [rbp-55h], 0
 * 0000000140731F6F: cmp     byte ptr gs:87DAh, 0
 * 0000000140731F78: jz      short loc_140731F7F
 * 0000000140731F7A: call    KeWakeProcessor
 * 0000000140731F7F: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140731F86: cmp     rax, [rbp+0E8h]
 * 0000000140731F8D: jnb     short loc_140731FA8
 * 0000000140731F8F: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140731F96: cmp     rax, [rbp+0E8h]
 * 0000000140731F9D: jb      short loc_140731FA8
 * 0000000140731F9F: lea     rcx, [rbp-80h]
 * 0000000140731FA3: call    KiCheckForSListAddress
 * 0000000140731FA8: xor     esi, esi
 * 0000000140731FAA: inc     dword ptr gs:87C0h
 * 0000000140731FB2: jmp     KiVmbusInterruptDispatch
 */
