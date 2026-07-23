/*
 * XREFs of KiVmbusInterrupt1 @ 0x140731FC0
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140C600C0 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140419940 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405F3900 (KeWakeProcessor.c)
 *     KiVmbusInterrupt1 @ 0x140731FC0 (KiVmbusInterrupt1.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x140731FC0
 * Reason: Hex-Rays returned no pseudocode for 0x140731FC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140731FC0: push    2
 * 0000000140731FC2: push    rbp
 * 0000000140731FC3: sub     rsp, 158h
 * 0000000140731FCA: lea     rbp, [rsp+168h+var_E8]
 * 0000000140731FD2: mov     [rbp+0D0h], rsi
 * 0000000140731FD9: mov     [rbp-50h], rax
 * 0000000140731FDD: mov     [rbp-48h], rcx
 * 0000000140731FE1: mov     [rbp-40h], rdx
 * 0000000140731FE5: mov     [rbp-38h], r8
 * 0000000140731FE9: mov     [rbp-30h], r9
 * 0000000140731FED: mov     [rbp-28h], r10
 * 0000000140731FF1: mov     [rbp-20h], r11
 * 0000000140731FF5: test    byte ptr [rbp+0F0h], 1
 * 0000000140731FFC: jnz     short loc_140732036
 * 0000000140731FFE: xor     edx, edx
 * 0000000140732000: rdsspq  rdx
 * 0000000140732005: mov     [rbp+58h], rdx
 * 0000000140732009: lfence
 * 000000014073200C: test    byte ptr gs:898h, 1
 * 0000000140732015: jnz     short loc_14073201F
 * 0000000140732017: lfence
 * 000000014073201A: jmp     loc_1407322A7
 * 000000014073201F: movzx   eax, word ptr gs:8A6h
 * 0000000140732028: mov     ecx, 48h ; 'H'
 * 000000014073202D: xor     edx, edx
 * 000000014073202F: wrmsr
 * 0000000140732031: jmp     loc_1407322A7
 * 0000000140732036: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073203D: jnz     short loc_140732042
 * 000000014073203F: swapgs
 * 0000000140732042: lfence
 * 0000000140732045: mov     rcx, gs:9D68h
 * 000000014073204E: test    rcx, rcx
 * 0000000140732051: jz      short loc_140732072
 * 0000000140732053: rdsspq  rdx
 * 0000000140732058: mov     r10, gs:9D60h
 * 0000000140732061: add     r10, 8
 * 0000000140732065: cmp     rdx, r10
 * 0000000140732068: jnz     short loc_140732072
 * 000000014073206A: rstorssp qword ptr [rcx]
 * 000000014073206E: saveprevssp
 * 0000000140732072: mov     r10, gs:188h
 * 000000014073207B: mov     rcx, gs:188h
 * 0000000140732084: mov     rcx, [rcx+220h]
 * 000000014073208B: mov     rcx, [rcx+760h]
 * 0000000140732092: mov     gs:890h, rcx
 * 000000014073209B: mov     cx, gs:8A2h
 * 00000001407320A4: mov     gs:8A4h, cx
 * 00000001407320AD: mov     cl, gs:898h
 * 00000001407320B5: mov     gs:89Ah, cl
 * 00000001407320BD: movzx   eax, word ptr gs:8A8h
 * 00000001407320C6: cmp     gs:8A6h, ax
 * 00000001407320CF: jz      short loc_1407320E3
 * 00000001407320D1: mov     gs:8A6h, ax
 * 00000001407320DA: mov     ecx, 48h ; 'H'
 * 00000001407320DF: xor     edx, edx
 * 00000001407320E1: wrmsr
 * 00000001407320E3: movzx   edx, byte ptr gs:898h
 * 00000001407320EC: test    edx, 8
 * 00000001407320F2: jz      short loc_14073210B
 * 00000001407320F4: mov     eax, 1
 * 00000001407320F9: xor     edx, edx
 * 00000001407320FB: mov     ecx, 49h ; 'I'
 * 0000000140732100: wrmsr
 * 0000000140732102: movzx   edx, byte ptr gs:898h
 * 000000014073210B: test    edx, 2
 * 0000000140732111: jz      loc_14073224E
 * 0000000140732117: call    loc_14073222A
 * 000000014073211C: add     rsp, 8
 * 0000000140732120: call    loc_140732233
 * 0000000140732125: add     rsp, 8
 * 0000000140732129: call    loc_14073211C
 * 000000014073212E: add     rsp, 8
 * 0000000140732132: call    loc_140732125
 * 0000000140732137: add     rsp, 8
 * 000000014073213B: call    loc_14073212E
 * 0000000140732140: add     rsp, 8
 * 0000000140732144: call    loc_140732137
 * 0000000140732149: add     rsp, 8
 * 000000014073214D: call    loc_140732140
 * 0000000140732152: add     rsp, 8
 * 0000000140732156: call    loc_140732149
 * 000000014073215B: add     rsp, 8
 * 000000014073215F: call    loc_140732152
 * 0000000140732164: add     rsp, 8
 * 0000000140732168: call    loc_14073215B
 * 000000014073216D: add     rsp, 8
 * 0000000140732171: call    loc_140732164
 * 0000000140732176: add     rsp, 8
 * 000000014073217A: call    loc_14073216D
 * 000000014073217F: add     rsp, 8
 * 0000000140732183: call    loc_140732176
 * 0000000140732188: add     rsp, 8
 * 000000014073218C: call    loc_14073217F
 * 0000000140732191: add     rsp, 8
 * 0000000140732195: call    loc_140732188
 * 000000014073219A: add     rsp, 8
 * 000000014073219E: call    loc_140732191
 * 00000001407321A3: add     rsp, 8
 * 00000001407321A7: call    loc_14073219A
 * 00000001407321AC: add     rsp, 8
 * 00000001407321B0: call    loc_1407321A3
 * 00000001407321B5: add     rsp, 8
 * 00000001407321B9: call    loc_1407321AC
 * 00000001407321BE: add     rsp, 8
 * 00000001407321C2: call    loc_1407321B5
 * 00000001407321C7: add     rsp, 8
 * 00000001407321CB: call    loc_1407321BE
 * 00000001407321D0: add     rsp, 8
 * 00000001407321D4: call    loc_1407321C7
 * 00000001407321D9: add     rsp, 8
 * 00000001407321DD: call    loc_1407321D0
 * 00000001407321E2: add     rsp, 8
 * 00000001407321E6: call    loc_1407321D9
 * 00000001407321EB: add     rsp, 8
 * 00000001407321EF: call    loc_1407321E2
 * 00000001407321F4: add     rsp, 8
 * 00000001407321F8: call    loc_1407321EB
 * 00000001407321FD: add     rsp, 8
 * 0000000140732201: call    loc_1407321F4
 * 0000000140732206: add     rsp, 8
 * 000000014073220A: call    loc_1407321FD
 * 000000014073220F: add     rsp, 8
 * 0000000140732213: call    loc_140732206
 * 0000000140732218: add     rsp, 8
 * 000000014073221C: call    loc_14073220F
 * 0000000140732221: add     rsp, 8
 * 0000000140732225: call    loc_140732218
 * 000000014073222A: add     rsp, 8
 * 000000014073222E: call    loc_140732221
 * 0000000140732233: add     rsp, 8
 * 0000000140732237: mov     eax, 0DADAh
 * 000000014073223C: test    byte ptr gs:89Ch, 8
 * 0000000140732245: jz      short loc_14073224E
 * 0000000140732247: mov     al, 20h ; ' '
 * 0000000140732249: incsspq rax
 * 000000014073224E: test    edx, 80h
 * 0000000140732254: jz      short loc_14073225E
 * 0000000140732256: lfence
 * 0000000140732259: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073225E: lfence
 * 0000000140732261: mov     byte ptr gs:89Eh, 0
 * 000000014073226A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140732271: jz      short loc_140732292
 * 0000000140732273: mov     ecx, 6A7h
 * 0000000140732278: rdmsr
 * 000000014073227A: cmp     edx, 0
 * 000000014073227D: jz      short loc_140732292
 * 000000014073227F: mov     ecx, edx
 * 0000000140732281: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140732287: cmp     edx, ecx
 * 0000000140732289: jz      short loc_140732292
 * 000000014073228B: mov     ecx, 6A7h
 * 0000000140732290: wrmsr
 * 0000000140732292: test    byte ptr [r10+3], 3
 * 0000000140732297: mov     word ptr [rbp+80h], 0
 * 00000001407322A0: jz      short loc_1407322A7
 * 00000001407322A2: call    KiSaveDebugRegisterState
 * 00000001407322A7: cld
 * 00000001407322A8: stmxcsr dword ptr [rbp-54h]
 * 00000001407322AC: ldmxcsr dword ptr gs:180h
 * 00000001407322B5: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001407322B9: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001407322BD: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001407322C1: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001407322C5: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001407322C9: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001407322CD: test    byte ptr [rbp+0F0h], 1
 * 00000001407322D4: jz      short KiVmbusInterrupt1DispatchTrap
 * 00000001407322D6: mov     r10, gs:188h
 * 00000001407322DF: test    byte ptr [r10+3], 80h
 * 00000001407322E4: jz      short KiVmbusInterrupt1DispatchTrap
 * 00000001407322E6: call    KiSynchronizeUserIsolationDomainExit
 * 00000001407322EB: test    byte ptr cs:KiTrapFeatures, 2
 * 00000001407322F2: jz      short loc_1407322FB
 * 00000001407322F4: mov     [rbp+0D0h], rsi
 * 00000001407322FB: mov     byte ptr [rbp-55h], 0
 * 00000001407322FF: cmp     byte ptr gs:87DAh, 0
 * 0000000140732308: jz      short loc_14073230F
 * 000000014073230A: call    KeWakeProcessor
 * 000000014073230F: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140732316: cmp     rax, [rbp+0E8h]
 * 000000014073231D: jnb     short loc_140732338
 * 000000014073231F: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140732326: cmp     rax, [rbp+0E8h]
 * 000000014073232D: jb      short loc_140732338
 * 000000014073232F: lea     rcx, [rbp-80h]
 * 0000000140732333: call    KiCheckForSListAddress
 * 0000000140732338: xor     esi, esi
 * 000000014073233A: inc     dword ptr gs:87C0h
 * 0000000140732342: jmp     KiVmbusInterruptDispatch
 */
