/*
 * XREFs of KiVmbusInterrupt0 @ 0x14072D060
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140C5A040 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140422100 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405F0F90 (KeWakeProcessor.c)
 *     KiVmbusInterrupt0 @ 0x14072D060 (KiVmbusInterrupt0.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x14072D060
 * Reason: Hex-Rays returned no pseudocode for 0x14072D060
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072D060: push    1
 * 000000014072D062: push    rbp
 * 000000014072D063: sub     rsp, 158h
 * 000000014072D06A: lea     rbp, [rsp+168h+var_E8]
 * 000000014072D072: mov     [rbp+0D0h], rsi
 * 000000014072D079: mov     [rbp-50h], rax
 * 000000014072D07D: mov     [rbp-48h], rcx
 * 000000014072D081: mov     [rbp-40h], rdx
 * 000000014072D085: mov     [rbp-38h], r8
 * 000000014072D089: mov     [rbp-30h], r9
 * 000000014072D08D: mov     [rbp-28h], r10
 * 000000014072D091: mov     [rbp-20h], r11
 * 000000014072D095: test    byte ptr [rbp+0F0h], 1
 * 000000014072D09C: jnz     short loc_14072D0D6
 * 000000014072D09E: xor     edx, edx
 * 000000014072D0A0: rdsspq  rdx
 * 000000014072D0A5: mov     [rbp+58h], rdx
 * 000000014072D0A9: lfence
 * 000000014072D0AC: test    byte ptr gs:898h, 1
 * 000000014072D0B5: jnz     short loc_14072D0BF
 * 000000014072D0B7: lfence
 * 000000014072D0BA: jmp     loc_14072D347
 * 000000014072D0BF: movzx   eax, word ptr gs:8A6h
 * 000000014072D0C8: mov     ecx, 48h ; 'H'
 * 000000014072D0CD: xor     edx, edx
 * 000000014072D0CF: wrmsr
 * 000000014072D0D1: jmp     loc_14072D347
 * 000000014072D0D6: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072D0DD: jnz     short loc_14072D0E2
 * 000000014072D0DF: swapgs
 * 000000014072D0E2: lfence
 * 000000014072D0E5: mov     rcx, gs:9D68h
 * 000000014072D0EE: test    rcx, rcx
 * 000000014072D0F1: jz      short loc_14072D112
 * 000000014072D0F3: rdsspq  rdx
 * 000000014072D0F8: mov     r10, gs:9D60h
 * 000000014072D101: add     r10, 8
 * 000000014072D105: cmp     rdx, r10
 * 000000014072D108: jnz     short loc_14072D112
 * 000000014072D10A: rstorssp qword ptr [rcx]
 * 000000014072D10E: saveprevssp
 * 000000014072D112: mov     r10, gs:188h
 * 000000014072D11B: mov     rcx, gs:188h
 * 000000014072D124: mov     rcx, [rcx+220h]
 * 000000014072D12B: mov     rcx, [rcx+760h]
 * 000000014072D132: mov     gs:890h, rcx
 * 000000014072D13B: mov     cx, gs:8A2h
 * 000000014072D144: mov     gs:8A4h, cx
 * 000000014072D14D: mov     cl, gs:898h
 * 000000014072D155: mov     gs:89Ah, cl
 * 000000014072D15D: movzx   eax, word ptr gs:8A8h
 * 000000014072D166: cmp     gs:8A6h, ax
 * 000000014072D16F: jz      short loc_14072D183
 * 000000014072D171: mov     gs:8A6h, ax
 * 000000014072D17A: mov     ecx, 48h ; 'H'
 * 000000014072D17F: xor     edx, edx
 * 000000014072D181: wrmsr
 * 000000014072D183: movzx   edx, byte ptr gs:898h
 * 000000014072D18C: test    edx, 8
 * 000000014072D192: jz      short loc_14072D1AB
 * 000000014072D194: mov     eax, 1
 * 000000014072D199: xor     edx, edx
 * 000000014072D19B: mov     ecx, 49h ; 'I'
 * 000000014072D1A0: wrmsr
 * 000000014072D1A2: movzx   edx, byte ptr gs:898h
 * 000000014072D1AB: test    edx, 2
 * 000000014072D1B1: jz      loc_14072D2EE
 * 000000014072D1B7: call    loc_14072D2CA
 * 000000014072D1BC: add     rsp, 8
 * 000000014072D1C0: call    loc_14072D2D3
 * 000000014072D1C5: add     rsp, 8
 * 000000014072D1C9: call    loc_14072D1BC
 * 000000014072D1CE: add     rsp, 8
 * 000000014072D1D2: call    loc_14072D1C5
 * 000000014072D1D7: add     rsp, 8
 * 000000014072D1DB: call    loc_14072D1CE
 * 000000014072D1E0: add     rsp, 8
 * 000000014072D1E4: call    loc_14072D1D7
 * 000000014072D1E9: add     rsp, 8
 * 000000014072D1ED: call    loc_14072D1E0
 * 000000014072D1F2: add     rsp, 8
 * 000000014072D1F6: call    loc_14072D1E9
 * 000000014072D1FB: add     rsp, 8
 * 000000014072D1FF: call    loc_14072D1F2
 * 000000014072D204: add     rsp, 8
 * 000000014072D208: call    loc_14072D1FB
 * 000000014072D20D: add     rsp, 8
 * 000000014072D211: call    loc_14072D204
 * 000000014072D216: add     rsp, 8
 * 000000014072D21A: call    loc_14072D20D
 * 000000014072D21F: add     rsp, 8
 * 000000014072D223: call    loc_14072D216
 * 000000014072D228: add     rsp, 8
 * 000000014072D22C: call    loc_14072D21F
 * 000000014072D231: add     rsp, 8
 * 000000014072D235: call    loc_14072D228
 * 000000014072D23A: add     rsp, 8
 * 000000014072D23E: call    loc_14072D231
 * 000000014072D243: add     rsp, 8
 * 000000014072D247: call    loc_14072D23A
 * 000000014072D24C: add     rsp, 8
 * 000000014072D250: call    loc_14072D243
 * 000000014072D255: add     rsp, 8
 * 000000014072D259: call    loc_14072D24C
 * 000000014072D25E: add     rsp, 8
 * 000000014072D262: call    loc_14072D255
 * 000000014072D267: add     rsp, 8
 * 000000014072D26B: call    loc_14072D25E
 * 000000014072D270: add     rsp, 8
 * 000000014072D274: call    loc_14072D267
 * 000000014072D279: add     rsp, 8
 * 000000014072D27D: call    loc_14072D270
 * 000000014072D282: add     rsp, 8
 * 000000014072D286: call    loc_14072D279
 * 000000014072D28B: add     rsp, 8
 * 000000014072D28F: call    loc_14072D282
 * 000000014072D294: add     rsp, 8
 * 000000014072D298: call    loc_14072D28B
 * 000000014072D29D: add     rsp, 8
 * 000000014072D2A1: call    loc_14072D294
 * 000000014072D2A6: add     rsp, 8
 * 000000014072D2AA: call    loc_14072D29D
 * 000000014072D2AF: add     rsp, 8
 * 000000014072D2B3: call    loc_14072D2A6
 * 000000014072D2B8: add     rsp, 8
 * 000000014072D2BC: call    loc_14072D2AF
 * 000000014072D2C1: add     rsp, 8
 * 000000014072D2C5: call    loc_14072D2B8
 * 000000014072D2CA: add     rsp, 8
 * 000000014072D2CE: call    loc_14072D2C1
 * 000000014072D2D3: add     rsp, 8
 * 000000014072D2D7: mov     eax, 0DADAh
 * 000000014072D2DC: test    byte ptr gs:89Ch, 8
 * 000000014072D2E5: jz      short loc_14072D2EE
 * 000000014072D2E7: mov     al, 20h ; ' '
 * 000000014072D2E9: incsspq rax
 * 000000014072D2EE: test    edx, 80h
 * 000000014072D2F4: jz      short loc_14072D2FE
 * 000000014072D2F6: lfence
 * 000000014072D2F9: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014072D2FE: lfence
 * 000000014072D301: mov     byte ptr gs:89Eh, 0
 * 000000014072D30A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014072D311: jz      short loc_14072D332
 * 000000014072D313: mov     ecx, 6A7h
 * 000000014072D318: rdmsr
 * 000000014072D31A: cmp     edx, 0
 * 000000014072D31D: jz      short loc_14072D332
 * 000000014072D31F: mov     ecx, edx
 * 000000014072D321: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014072D327: cmp     edx, ecx
 * 000000014072D329: jz      short loc_14072D332
 * 000000014072D32B: mov     ecx, 6A7h
 * 000000014072D330: wrmsr
 * 000000014072D332: test    byte ptr [r10+3], 3
 * 000000014072D337: mov     word ptr [rbp+80h], 0
 * 000000014072D340: jz      short loc_14072D347
 * 000000014072D342: call    KiSaveDebugRegisterState
 * 000000014072D347: cld
 * 000000014072D348: stmxcsr dword ptr [rbp-54h]
 * 000000014072D34C: ldmxcsr dword ptr gs:180h
 * 000000014072D355: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014072D359: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014072D35D: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014072D361: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014072D365: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014072D369: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014072D36D: test    byte ptr [rbp+0F0h], 1
 * 000000014072D374: jz      short KiVmbusInterrupt0DispatchTrap
 * 000000014072D376: mov     r10, gs:188h
 * 000000014072D37F: test    byte ptr [r10+3], 80h
 * 000000014072D384: jz      short KiVmbusInterrupt0DispatchTrap
 * 000000014072D386: call    KiSynchronizeUserIsolationDomainExit
 * 000000014072D38B: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072D392: jz      short loc_14072D39B
 * 000000014072D394: mov     [rbp+0D0h], rsi
 * 000000014072D39B: mov     byte ptr [rbp-55h], 0
 * 000000014072D39F: cmp     byte ptr gs:87DAh, 0
 * 000000014072D3A8: jz      short loc_14072D3AF
 * 000000014072D3AA: call    KeWakeProcessor
 * 000000014072D3AF: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014072D3B6: cmp     rax, [rbp+0E8h]
 * 000000014072D3BD: jnb     short loc_14072D3D8
 * 000000014072D3BF: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014072D3C6: cmp     rax, [rbp+0E8h]
 * 000000014072D3CD: jb      short loc_14072D3D8
 * 000000014072D3CF: lea     rcx, [rbp-80h]
 * 000000014072D3D3: call    KiCheckForSListAddress
 * 000000014072D3D8: xor     esi, esi
 * 000000014072D3DA: inc     dword ptr gs:87C0h
 * 000000014072D3E2: jmp     KiVmbusInterruptDispatch
 */
