/*
 * XREFs of KiVmbusInterrupt3 @ 0x1407326E0
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140C601C0 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140419940 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405F3900 (KeWakeProcessor.c)
 *     KiVmbusInterrupt3 @ 0x1407326E0 (KiVmbusInterrupt3.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x1407326E0
 * Reason: Hex-Rays returned no pseudocode for 0x1407326E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407326E0: push    4
 * 00000001407326E2: push    rbp
 * 00000001407326E3: sub     rsp, 158h
 * 00000001407326EA: lea     rbp, [rsp+168h+var_E8]
 * 00000001407326F2: mov     [rbp+0D0h], rsi
 * 00000001407326F9: mov     [rbp-50h], rax
 * 00000001407326FD: mov     [rbp-48h], rcx
 * 0000000140732701: mov     [rbp-40h], rdx
 * 0000000140732705: mov     [rbp-38h], r8
 * 0000000140732709: mov     [rbp-30h], r9
 * 000000014073270D: mov     [rbp-28h], r10
 * 0000000140732711: mov     [rbp-20h], r11
 * 0000000140732715: test    byte ptr [rbp+0F0h], 1
 * 000000014073271C: jnz     short loc_140732756
 * 000000014073271E: xor     edx, edx
 * 0000000140732720: rdsspq  rdx
 * 0000000140732725: mov     [rbp+58h], rdx
 * 0000000140732729: lfence
 * 000000014073272C: test    byte ptr gs:898h, 1
 * 0000000140732735: jnz     short loc_14073273F
 * 0000000140732737: lfence
 * 000000014073273A: jmp     loc_1407329C7
 * 000000014073273F: movzx   eax, word ptr gs:8A6h
 * 0000000140732748: mov     ecx, 48h ; 'H'
 * 000000014073274D: xor     edx, edx
 * 000000014073274F: wrmsr
 * 0000000140732751: jmp     loc_1407329C7
 * 0000000140732756: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073275D: jnz     short loc_140732762
 * 000000014073275F: swapgs
 * 0000000140732762: lfence
 * 0000000140732765: mov     rcx, gs:9D68h
 * 000000014073276E: test    rcx, rcx
 * 0000000140732771: jz      short loc_140732792
 * 0000000140732773: rdsspq  rdx
 * 0000000140732778: mov     r10, gs:9D60h
 * 0000000140732781: add     r10, 8
 * 0000000140732785: cmp     rdx, r10
 * 0000000140732788: jnz     short loc_140732792
 * 000000014073278A: rstorssp qword ptr [rcx]
 * 000000014073278E: saveprevssp
 * 0000000140732792: mov     r10, gs:188h
 * 000000014073279B: mov     rcx, gs:188h
 * 00000001407327A4: mov     rcx, [rcx+220h]
 * 00000001407327AB: mov     rcx, [rcx+760h]
 * 00000001407327B2: mov     gs:890h, rcx
 * 00000001407327BB: mov     cx, gs:8A2h
 * 00000001407327C4: mov     gs:8A4h, cx
 * 00000001407327CD: mov     cl, gs:898h
 * 00000001407327D5: mov     gs:89Ah, cl
 * 00000001407327DD: movzx   eax, word ptr gs:8A8h
 * 00000001407327E6: cmp     gs:8A6h, ax
 * 00000001407327EF: jz      short loc_140732803
 * 00000001407327F1: mov     gs:8A6h, ax
 * 00000001407327FA: mov     ecx, 48h ; 'H'
 * 00000001407327FF: xor     edx, edx
 * 0000000140732801: wrmsr
 * 0000000140732803: movzx   edx, byte ptr gs:898h
 * 000000014073280C: test    edx, 8
 * 0000000140732812: jz      short loc_14073282B
 * 0000000140732814: mov     eax, 1
 * 0000000140732819: xor     edx, edx
 * 000000014073281B: mov     ecx, 49h ; 'I'
 * 0000000140732820: wrmsr
 * 0000000140732822: movzx   edx, byte ptr gs:898h
 * 000000014073282B: test    edx, 2
 * 0000000140732831: jz      loc_14073296E
 * 0000000140732837: call    loc_14073294A
 * 000000014073283C: add     rsp, 8
 * 0000000140732840: call    loc_140732953
 * 0000000140732845: add     rsp, 8
 * 0000000140732849: call    loc_14073283C
 * 000000014073284E: add     rsp, 8
 * 0000000140732852: call    loc_140732845
 * 0000000140732857: add     rsp, 8
 * 000000014073285B: call    loc_14073284E
 * 0000000140732860: add     rsp, 8
 * 0000000140732864: call    loc_140732857
 * 0000000140732869: add     rsp, 8
 * 000000014073286D: call    loc_140732860
 * 0000000140732872: add     rsp, 8
 * 0000000140732876: call    loc_140732869
 * 000000014073287B: add     rsp, 8
 * 000000014073287F: call    loc_140732872
 * 0000000140732884: add     rsp, 8
 * 0000000140732888: call    loc_14073287B
 * 000000014073288D: add     rsp, 8
 * 0000000140732891: call    loc_140732884
 * 0000000140732896: add     rsp, 8
 * 000000014073289A: call    loc_14073288D
 * 000000014073289F: add     rsp, 8
 * 00000001407328A3: call    loc_140732896
 * 00000001407328A8: add     rsp, 8
 * 00000001407328AC: call    loc_14073289F
 * 00000001407328B1: add     rsp, 8
 * 00000001407328B5: call    loc_1407328A8
 * 00000001407328BA: add     rsp, 8
 * 00000001407328BE: call    loc_1407328B1
 * 00000001407328C3: add     rsp, 8
 * 00000001407328C7: call    loc_1407328BA
 * 00000001407328CC: add     rsp, 8
 * 00000001407328D0: call    loc_1407328C3
 * 00000001407328D5: add     rsp, 8
 * 00000001407328D9: call    loc_1407328CC
 * 00000001407328DE: add     rsp, 8
 * 00000001407328E2: call    loc_1407328D5
 * 00000001407328E7: add     rsp, 8
 * 00000001407328EB: call    loc_1407328DE
 * 00000001407328F0: add     rsp, 8
 * 00000001407328F4: call    loc_1407328E7
 * 00000001407328F9: add     rsp, 8
 * 00000001407328FD: call    loc_1407328F0
 * 0000000140732902: add     rsp, 8
 * 0000000140732906: call    loc_1407328F9
 * 000000014073290B: add     rsp, 8
 * 000000014073290F: call    loc_140732902
 * 0000000140732914: add     rsp, 8
 * 0000000140732918: call    loc_14073290B
 * 000000014073291D: add     rsp, 8
 * 0000000140732921: call    loc_140732914
 * 0000000140732926: add     rsp, 8
 * 000000014073292A: call    loc_14073291D
 * 000000014073292F: add     rsp, 8
 * 0000000140732933: call    loc_140732926
 * 0000000140732938: add     rsp, 8
 * 000000014073293C: call    loc_14073292F
 * 0000000140732941: add     rsp, 8
 * 0000000140732945: call    loc_140732938
 * 000000014073294A: add     rsp, 8
 * 000000014073294E: call    loc_140732941
 * 0000000140732953: add     rsp, 8
 * 0000000140732957: mov     eax, 0DADAh
 * 000000014073295C: test    byte ptr gs:89Ch, 8
 * 0000000140732965: jz      short loc_14073296E
 * 0000000140732967: mov     al, 20h ; ' '
 * 0000000140732969: incsspq rax
 * 000000014073296E: test    edx, 80h
 * 0000000140732974: jz      short loc_14073297E
 * 0000000140732976: lfence
 * 0000000140732979: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073297E: lfence
 * 0000000140732981: mov     byte ptr gs:89Eh, 0
 * 000000014073298A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140732991: jz      short loc_1407329B2
 * 0000000140732993: mov     ecx, 6A7h
 * 0000000140732998: rdmsr
 * 000000014073299A: cmp     edx, 0
 * 000000014073299D: jz      short loc_1407329B2
 * 000000014073299F: mov     ecx, edx
 * 00000001407329A1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001407329A7: cmp     edx, ecx
 * 00000001407329A9: jz      short loc_1407329B2
 * 00000001407329AB: mov     ecx, 6A7h
 * 00000001407329B0: wrmsr
 * 00000001407329B2: test    byte ptr [r10+3], 3
 * 00000001407329B7: mov     word ptr [rbp+80h], 0
 * 00000001407329C0: jz      short loc_1407329C7
 * 00000001407329C2: call    KiSaveDebugRegisterState
 * 00000001407329C7: cld
 * 00000001407329C8: stmxcsr dword ptr [rbp-54h]
 * 00000001407329CC: ldmxcsr dword ptr gs:180h
 * 00000001407329D5: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001407329D9: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001407329DD: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001407329E1: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001407329E5: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001407329E9: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001407329ED: test    byte ptr [rbp+0F0h], 1
 * 00000001407329F4: jz      short KiVmbusInterrupt3DispatchTrap
 * 00000001407329F6: mov     r10, gs:188h
 * 00000001407329FF: test    byte ptr [r10+3], 80h
 * 0000000140732A04: jz      short KiVmbusInterrupt3DispatchTrap
 * 0000000140732A06: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140732A0B: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140732A12: jz      short loc_140732A1B
 * 0000000140732A14: mov     [rbp+0D0h], rsi
 * 0000000140732A1B: mov     byte ptr [rbp-55h], 0
 * 0000000140732A1F: cmp     byte ptr gs:87DAh, 0
 * 0000000140732A28: jz      short loc_140732A2F
 * 0000000140732A2A: call    KeWakeProcessor
 * 0000000140732A2F: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140732A36: cmp     rax, [rbp+0E8h]
 * 0000000140732A3D: jnb     short loc_140732A58
 * 0000000140732A3F: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140732A46: cmp     rax, [rbp+0E8h]
 * 0000000140732A4D: jb      short loc_140732A58
 * 0000000140732A4F: lea     rcx, [rbp-80h]
 * 0000000140732A53: call    KiCheckForSListAddress
 * 0000000140732A58: xor     esi, esi
 * 0000000140732A5A: inc     dword ptr gs:87C0h
 * 0000000140732A62: jmp     KiVmbusInterruptDispatch
 */
