/*
 * XREFs of KiRestoreSetContextState @ 0x140728090
 * Callers:
 *     NtContinueEx @ 0x1407273F0 (NtContinueEx.c)
 *     NtRaiseException @ 0x1407278B0 (NtRaiseException.c)
 *     KxStartUserThread @ 0x140729310 (KxStartUserThread.c)
 *     KiChainedDispatch @ 0x140729970 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x14072A050 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14072A440 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14072A830 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x14072AC20 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x14072B010 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x14072BC20 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x14072C480 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x14072DEA0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x14072E2A0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x14072E7F0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x14072EF70 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x14072F700 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x140731220 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1407347C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140734F00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140737080 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140738800 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140739380 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140739B00 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x14073B680 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x14073CA80 (KiFastFailDispatch.c)
 *     KiDispatchUserModeEvent @ 0x140C5D200 (KiDispatchUserModeEvent.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KeContextToKframes @ 0x140533AE0 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 */

/*
 * Hex-Rays decompilation failed for KiRestoreSetContextState @ 0x140728090
 * Reason: Hex-Rays returned no pseudocode for 0x140728090
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140728090: sub     rsp, 138h
 * 0000000140728097: lea     rax, [rsp+138h+var_38]
 * 000000014072809F: movaps  [rsp+138h+var_108], xmm6
 * 00000001407280A4: movaps  [rsp+138h+var_F8], xmm7
 * 00000001407280A9: movaps  [rsp+138h+var_E8], xmm8
 * 00000001407280AF: movaps  [rsp+138h+var_D8], xmm9
 * 00000001407280B5: movaps  [rsp+138h+var_C8], xmm10
 * 00000001407280BB: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001407280C0: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001407280C5: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001407280CA: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001407280CF: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001407280D4: mov     [rax], rbx
 * 00000001407280D7: mov     [rax+8], rdi
 * 00000001407280DB: mov     [rax+10h], rsi
 * 00000001407280DF: mov     [rax+18h], r12
 * 00000001407280E3: mov     [rax+20h], r13
 * 00000001407280E7: mov     [rax+28h], r14
 * 00000001407280EB: mov     [rax+30h], r15
 * 00000001407280EF: mov     ecx, 1
 * 00000001407280F4: mov     cr8, rcx
 * 00000001407280F8: sti
 * 00000001407280F9: mov     rcx, gs:188h
 * 0000000140728102: mov     rcx, [rcx+6A8h]
 * 0000000140728109: mov     [rsp+138h+var_118], 1
 * 0000000140728112: mov     r9d, [rcx+30h]
 * 0000000140728116: mov     r8, rcx
 * 0000000140728119: mov     rdx, rsp
 * 000000014072811C: lea     rcx, [rbp-80h]
 * 0000000140728120: call    KeContextToKframes
 * 0000000140728125: cli
 * 0000000140728126: mov     ecx, 0
 * 000000014072812B: mov     cr8, rcx
 * 000000014072812F: mov     rcx, gs:188h
 * 0000000140728138: lock btr dword ptr [rcx], 1Bh
 * 000000014072813D: lea     rcx, [rsp+138h+var_38]
 * 0000000140728145: movaps  xmm6, [rsp+138h+var_108]
 * 000000014072814A: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014072814F: movaps  xmm8, [rsp+138h+var_E8]
 * 0000000140728155: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014072815B: movaps  xmm10, [rsp+138h+var_C8]
 * 0000000140728161: movaps  xmm11, xmmword ptr [rcx-80h]
 * 0000000140728166: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014072816B: movaps  xmm13, xmmword ptr [rcx-60h]
 * 0000000140728170: movaps  xmm14, xmmword ptr [rcx-50h]
 * 0000000140728175: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014072817A: mov     rbx, [rcx]
 * 000000014072817D: mov     rdi, [rcx+8]
 * 0000000140728181: mov     rsi, [rcx+10h]
 * 0000000140728185: mov     r12, [rcx+18h]
 * 0000000140728189: mov     r13, [rcx+20h]
 * 000000014072818D: mov     r14, [rcx+28h]
 * 0000000140728191: mov     r15, [rcx+30h]
 * 0000000140728195: test    byte ptr gs:8A0h, 2
 * 000000014072819E: jz      short loc_1407281A7
 * 00000001407281A0: xor     ecx, ecx
 * 00000001407281A2: call    KiUpdateStibpPairing
 * 00000001407281A7: xor     ecx, ecx
 * 00000001407281A9: rdsspq  rcx
 * 00000001407281AE: test    rcx, rcx
 * 00000001407281B1: jz      short loc_1407281BD
 * 00000001407281B3: mov     ecx, 1
 * 00000001407281B8: incsspq rcx
 * 00000001407281BD: test    byte ptr cs:KiTrapFeatures, 2
 * 00000001407281C4: jz      short loc_1407281CE
 * 00000001407281C6: lea     rsp, [rbp-88h]
 * 00000001407281CD: retn
 * 00000001407281CE: test    byte ptr [rbp+0F0h], 1
 * 00000001407281D5: jz      loc_14072846E
 * 00000001407281DB: test    byte ptr cs:KiTrapFeatures, 8
 * 00000001407281E2: jz      short loc_1407281E7
 * 00000001407281E4: stac
 * 00000001407281E7: mov     rcx, gs:188h
 * 00000001407281F0: test    dword ptr [rcx], 10000h
 * 00000001407281F6: jz      short loc_14072820C
 * 00000001407281F8: test    byte ptr [rcx+2], 1
 * 00000001407281FC: jz      short loc_14072820C
 * 00000001407281FE: call    KiCopyCounters
 * 0000000140728203: mov     rcx, gs:188h
 * 000000014072820C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140728210: cmp     word ptr [rbp+80h], 0
 * 0000000140728218: jz      short loc_14072821F
 * 000000014072821A: call    KiRestoreDebugRegisterState
 * 000000014072821F: mov     rcx, gs:188h
 * 0000000140728228: bt      dword ptr [rcx+74h], 16h
 * 000000014072822D: jnb     short loc_140728259
 * 000000014072822F: xor     ecx, ecx
 * 0000000140728231: rdsspq  rcx
 * 0000000140728236: mov     r8, gs:9D68h
 * 000000014072823F: add     r8, 8
 * 0000000140728243: cmp     rcx, r8
 * 0000000140728246: jnz     short loc_140728259
 * 0000000140728248: mov     rcx, gs:9D60h
 * 0000000140728251: rstorssp qword ptr [rcx]
 * 0000000140728255: saveprevssp
 * 0000000140728259: mov     byte ptr gs:89Eh, 0
 * 0000000140728262: movzx   eax, word ptr gs:8ACh
 * 000000014072826B: cmp     gs:8A6h, ax
 * 0000000140728274: jz      short loc_140728288
 * 0000000140728276: mov     gs:8A6h, ax
 * 000000014072827F: mov     ecx, 48h ; 'H'
 * 0000000140728284: xor     edx, edx
 * 0000000140728286: wrmsr
 * 0000000140728288: btr     word ptr gs:898h, 2
 * 0000000140728293: jnb     short loc_1407282A3
 * 0000000140728295: mov     eax, 1
 * 000000014072829A: xor     edx, edx
 * 000000014072829C: mov     ecx, 49h ; 'I'
 * 00000001407282A1: wrmsr
 * 00000001407282A3: btr     word ptr gs:898h, 5
 * 00000001407282AE: jnb     loc_1407283EB
 * 00000001407282B4: call    loc_1407283C7
 * 00000001407282B9: add     rsp, 8
 * 00000001407282BD: call    loc_1407283D0
 * 00000001407282C2: add     rsp, 8
 * 00000001407282C6: call    loc_1407282B9
 * 00000001407282CB: add     rsp, 8
 * 00000001407282CF: call    loc_1407282C2
 * 00000001407282D4: add     rsp, 8
 * 00000001407282D8: call    loc_1407282CB
 * 00000001407282DD: add     rsp, 8
 * 00000001407282E1: call    loc_1407282D4
 * 00000001407282E6: add     rsp, 8
 * 00000001407282EA: call    loc_1407282DD
 * 00000001407282EF: add     rsp, 8
 * 00000001407282F3: call    loc_1407282E6
 * 00000001407282F8: add     rsp, 8
 * 00000001407282FC: call    loc_1407282EF
 * 0000000140728301: add     rsp, 8
 * 0000000140728305: call    loc_1407282F8
 * 000000014072830A: add     rsp, 8
 * 000000014072830E: call    loc_140728301
 * 0000000140728313: add     rsp, 8
 * 0000000140728317: call    loc_14072830A
 * 000000014072831C: add     rsp, 8
 * 0000000140728320: call    loc_140728313
 * 0000000140728325: add     rsp, 8
 * 0000000140728329: call    loc_14072831C
 * 000000014072832E: add     rsp, 8
 * 0000000140728332: call    loc_140728325
 * 0000000140728337: add     rsp, 8
 * 000000014072833B: call    loc_14072832E
 * 0000000140728340: add     rsp, 8
 * 0000000140728344: call    loc_140728337
 * 0000000140728349: add     rsp, 8
 * 000000014072834D: call    loc_140728340
 * 0000000140728352: add     rsp, 8
 * 0000000140728356: call    loc_140728349
 * 000000014072835B: add     rsp, 8
 * 000000014072835F: call    loc_140728352
 * 0000000140728364: add     rsp, 8
 * 0000000140728368: call    loc_14072835B
 * 000000014072836D: add     rsp, 8
 * 0000000140728371: call    loc_140728364
 * 0000000140728376: add     rsp, 8
 * 000000014072837A: call    loc_14072836D
 * 000000014072837F: add     rsp, 8
 * 0000000140728383: call    loc_140728376
 * 0000000140728388: add     rsp, 8
 * 000000014072838C: call    loc_14072837F
 * 0000000140728391: add     rsp, 8
 * 0000000140728395: call    loc_140728388
 * 000000014072839A: add     rsp, 8
 * 000000014072839E: call    loc_140728391
 * 00000001407283A3: add     rsp, 8
 * 00000001407283A7: call    loc_14072839A
 * 00000001407283AC: add     rsp, 8
 * 00000001407283B0: call    loc_1407283A3
 * 00000001407283B5: add     rsp, 8
 * 00000001407283B9: call    loc_1407283AC
 * 00000001407283BE: add     rsp, 8
 * 00000001407283C2: call    loc_1407283B5
 * 00000001407283C7: add     rsp, 8
 * 00000001407283CB: call    loc_1407283BE
 * 00000001407283D0: add     rsp, 8
 * 00000001407283D4: mov     eax, 0DADAh
 * 00000001407283D9: test    byte ptr gs:89Ch, 8
 * 00000001407283E2: jz      short loc_1407283EB
 * 00000001407283E4: mov     al, 20h ; ' '
 * 00000001407283E6: incsspq rax
 * 00000001407283EB: test    word ptr gs:898h, 100h
 * 00000001407283F6: jz      short loc_140728404
 * 00000001407283F8: xor     eax, eax
 * 00000001407283FA: xor     edx, edx
 * 00000001407283FC: mov     ecx, 1
 * 0000000140728401: div     rcx
 * 0000000140728404: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140728408: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072840C: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140728410: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140728414: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140728418: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072841C: mov     r11, [rbp-20h]
 * 0000000140728420: mov     r10, [rbp-28h]
 * 0000000140728424: mov     r9, [rbp-30h]
 * 0000000140728428: mov     r8, [rbp-38h]
 * 000000014072842C: mov     rdx, [rbp-40h]
 * 0000000140728430: mov     rcx, [rbp-48h]
 * 0000000140728434: mov     rax, [rbp-50h]
 * 0000000140728438: mov     rsp, rbp
 * 000000014072843B: mov     rbp, [rbp+0D8h]
 * 0000000140728442: add     rsp, 0E8h
 * 0000000140728449: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140728450: jz      short loc_140728457
 * 0000000140728452: jmp     KiKernelExit
 * 0000000140728457: test    word ptr gs:898h, 200h
 * 0000000140728462: jz      short loc_140728469
 * 0000000140728464: verw    [rsp-1E8h+arg_200]
 * 0000000140728469: swapgs
 * 000000014072846C: iretq
 * 000000014072846E: ldmxcsr dword ptr [rbp-54h]
 * 0000000140728472: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140728476: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072847A: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072847E: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140728482: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140728486: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072848A: mov     r11, [rbp-20h]
 * 000000014072848E: mov     r10, [rbp-28h]
 * 0000000140728492: mov     r9, [rbp-30h]
 * 0000000140728496: mov     r8, [rbp-38h]
 * 000000014072849A: mov     rdx, [rbp-40h]
 * 000000014072849E: mov     rcx, [rbp-48h]
 * 00000001407284A2: mov     rax, [rbp-50h]
 * 00000001407284A6: mov     rsp, rbp
 * 00000001407284A9: mov     rbp, [rbp+0D8h]
 * 00000001407284B0: add     rsp, 0E8h
 * 00000001407284B7: iretq
 * 00000001407284B9: retn
 */
