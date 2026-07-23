/*
 * XREFs of KiVmbusInterrupt2 @ 0x140732350
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140C60140 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140419940 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405F3900 (KeWakeProcessor.c)
 *     KiVmbusInterrupt2 @ 0x140732350 (KiVmbusInterrupt2.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x140732350
 * Reason: Hex-Rays returned no pseudocode for 0x140732350
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140732350: push    3
 * 0000000140732352: push    rbp
 * 0000000140732353: sub     rsp, 158h
 * 000000014073235A: lea     rbp, [rsp+168h+var_E8]
 * 0000000140732362: mov     [rbp+0D0h], rsi
 * 0000000140732369: mov     [rbp-50h], rax
 * 000000014073236D: mov     [rbp-48h], rcx
 * 0000000140732371: mov     [rbp-40h], rdx
 * 0000000140732375: mov     [rbp-38h], r8
 * 0000000140732379: mov     [rbp-30h], r9
 * 000000014073237D: mov     [rbp-28h], r10
 * 0000000140732381: mov     [rbp-20h], r11
 * 0000000140732385: test    byte ptr [rbp+0F0h], 1
 * 000000014073238C: jnz     short loc_1407323C6
 * 000000014073238E: xor     edx, edx
 * 0000000140732390: rdsspq  rdx
 * 0000000140732395: mov     [rbp+58h], rdx
 * 0000000140732399: lfence
 * 000000014073239C: test    byte ptr gs:898h, 1
 * 00000001407323A5: jnz     short loc_1407323AF
 * 00000001407323A7: lfence
 * 00000001407323AA: jmp     loc_140732637
 * 00000001407323AF: movzx   eax, word ptr gs:8A6h
 * 00000001407323B8: mov     ecx, 48h ; 'H'
 * 00000001407323BD: xor     edx, edx
 * 00000001407323BF: wrmsr
 * 00000001407323C1: jmp     loc_140732637
 * 00000001407323C6: test    byte ptr cs:KiTrapFeatures, 1
 * 00000001407323CD: jnz     short loc_1407323D2
 * 00000001407323CF: swapgs
 * 00000001407323D2: lfence
 * 00000001407323D5: mov     rcx, gs:9D68h
 * 00000001407323DE: test    rcx, rcx
 * 00000001407323E1: jz      short loc_140732402
 * 00000001407323E3: rdsspq  rdx
 * 00000001407323E8: mov     r10, gs:9D60h
 * 00000001407323F1: add     r10, 8
 * 00000001407323F5: cmp     rdx, r10
 * 00000001407323F8: jnz     short loc_140732402
 * 00000001407323FA: rstorssp qword ptr [rcx]
 * 00000001407323FE: saveprevssp
 * 0000000140732402: mov     r10, gs:188h
 * 000000014073240B: mov     rcx, gs:188h
 * 0000000140732414: mov     rcx, [rcx+220h]
 * 000000014073241B: mov     rcx, [rcx+760h]
 * 0000000140732422: mov     gs:890h, rcx
 * 000000014073242B: mov     cx, gs:8A2h
 * 0000000140732434: mov     gs:8A4h, cx
 * 000000014073243D: mov     cl, gs:898h
 * 0000000140732445: mov     gs:89Ah, cl
 * 000000014073244D: movzx   eax, word ptr gs:8A8h
 * 0000000140732456: cmp     gs:8A6h, ax
 * 000000014073245F: jz      short loc_140732473
 * 0000000140732461: mov     gs:8A6h, ax
 * 000000014073246A: mov     ecx, 48h ; 'H'
 * 000000014073246F: xor     edx, edx
 * 0000000140732471: wrmsr
 * 0000000140732473: movzx   edx, byte ptr gs:898h
 * 000000014073247C: test    edx, 8
 * 0000000140732482: jz      short loc_14073249B
 * 0000000140732484: mov     eax, 1
 * 0000000140732489: xor     edx, edx
 * 000000014073248B: mov     ecx, 49h ; 'I'
 * 0000000140732490: wrmsr
 * 0000000140732492: movzx   edx, byte ptr gs:898h
 * 000000014073249B: test    edx, 2
 * 00000001407324A1: jz      loc_1407325DE
 * 00000001407324A7: call    loc_1407325BA
 * 00000001407324AC: add     rsp, 8
 * 00000001407324B0: call    loc_1407325C3
 * 00000001407324B5: add     rsp, 8
 * 00000001407324B9: call    loc_1407324AC
 * 00000001407324BE: add     rsp, 8
 * 00000001407324C2: call    loc_1407324B5
 * 00000001407324C7: add     rsp, 8
 * 00000001407324CB: call    loc_1407324BE
 * 00000001407324D0: add     rsp, 8
 * 00000001407324D4: call    loc_1407324C7
 * 00000001407324D9: add     rsp, 8
 * 00000001407324DD: call    loc_1407324D0
 * 00000001407324E2: add     rsp, 8
 * 00000001407324E6: call    loc_1407324D9
 * 00000001407324EB: add     rsp, 8
 * 00000001407324EF: call    loc_1407324E2
 * 00000001407324F4: add     rsp, 8
 * 00000001407324F8: call    loc_1407324EB
 * 00000001407324FD: add     rsp, 8
 * 0000000140732501: call    loc_1407324F4
 * 0000000140732506: add     rsp, 8
 * 000000014073250A: call    loc_1407324FD
 * 000000014073250F: add     rsp, 8
 * 0000000140732513: call    loc_140732506
 * 0000000140732518: add     rsp, 8
 * 000000014073251C: call    loc_14073250F
 * 0000000140732521: add     rsp, 8
 * 0000000140732525: call    loc_140732518
 * 000000014073252A: add     rsp, 8
 * 000000014073252E: call    loc_140732521
 * 0000000140732533: add     rsp, 8
 * 0000000140732537: call    loc_14073252A
 * 000000014073253C: add     rsp, 8
 * 0000000140732540: call    loc_140732533
 * 0000000140732545: add     rsp, 8
 * 0000000140732549: call    loc_14073253C
 * 000000014073254E: add     rsp, 8
 * 0000000140732552: call    loc_140732545
 * 0000000140732557: add     rsp, 8
 * 000000014073255B: call    loc_14073254E
 * 0000000140732560: add     rsp, 8
 * 0000000140732564: call    loc_140732557
 * 0000000140732569: add     rsp, 8
 * 000000014073256D: call    loc_140732560
 * 0000000140732572: add     rsp, 8
 * 0000000140732576: call    loc_140732569
 * 000000014073257B: add     rsp, 8
 * 000000014073257F: call    loc_140732572
 * 0000000140732584: add     rsp, 8
 * 0000000140732588: call    loc_14073257B
 * 000000014073258D: add     rsp, 8
 * 0000000140732591: call    loc_140732584
 * 0000000140732596: add     rsp, 8
 * 000000014073259A: call    loc_14073258D
 * 000000014073259F: add     rsp, 8
 * 00000001407325A3: call    loc_140732596
 * 00000001407325A8: add     rsp, 8
 * 00000001407325AC: call    loc_14073259F
 * 00000001407325B1: add     rsp, 8
 * 00000001407325B5: call    loc_1407325A8
 * 00000001407325BA: add     rsp, 8
 * 00000001407325BE: call    loc_1407325B1
 * 00000001407325C3: add     rsp, 8
 * 00000001407325C7: mov     eax, 0DADAh
 * 00000001407325CC: test    byte ptr gs:89Ch, 8
 * 00000001407325D5: jz      short loc_1407325DE
 * 00000001407325D7: mov     al, 20h ; ' '
 * 00000001407325D9: incsspq rax
 * 00000001407325DE: test    edx, 80h
 * 00000001407325E4: jz      short loc_1407325EE
 * 00000001407325E6: lfence
 * 00000001407325E9: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001407325EE: lfence
 * 00000001407325F1: mov     byte ptr gs:89Eh, 0
 * 00000001407325FA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140732601: jz      short loc_140732622
 * 0000000140732603: mov     ecx, 6A7h
 * 0000000140732608: rdmsr
 * 000000014073260A: cmp     edx, 0
 * 000000014073260D: jz      short loc_140732622
 * 000000014073260F: mov     ecx, edx
 * 0000000140732611: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140732617: cmp     edx, ecx
 * 0000000140732619: jz      short loc_140732622
 * 000000014073261B: mov     ecx, 6A7h
 * 0000000140732620: wrmsr
 * 0000000140732622: test    byte ptr [r10+3], 3
 * 0000000140732627: mov     word ptr [rbp+80h], 0
 * 0000000140732630: jz      short loc_140732637
 * 0000000140732632: call    KiSaveDebugRegisterState
 * 0000000140732637: cld
 * 0000000140732638: stmxcsr dword ptr [rbp-54h]
 * 000000014073263C: ldmxcsr dword ptr gs:180h
 * 0000000140732645: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140732649: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014073264D: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140732651: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140732655: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140732659: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014073265D: test    byte ptr [rbp+0F0h], 1
 * 0000000140732664: jz      short KiVmbusInterrupt2DispatchTrap
 * 0000000140732666: mov     r10, gs:188h
 * 000000014073266F: test    byte ptr [r10+3], 80h
 * 0000000140732674: jz      short KiVmbusInterrupt2DispatchTrap
 * 0000000140732676: call    KiSynchronizeUserIsolationDomainExit
 * 000000014073267B: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140732682: jz      short loc_14073268B
 * 0000000140732684: mov     [rbp+0D0h], rsi
 * 000000014073268B: mov     byte ptr [rbp-55h], 0
 * 000000014073268F: cmp     byte ptr gs:87DAh, 0
 * 0000000140732698: jz      short loc_14073269F
 * 000000014073269A: call    KeWakeProcessor
 * 000000014073269F: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001407326A6: cmp     rax, [rbp+0E8h]
 * 00000001407326AD: jnb     short loc_1407326C8
 * 00000001407326AF: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001407326B6: cmp     rax, [rbp+0E8h]
 * 00000001407326BD: jb      short loc_1407326C8
 * 00000001407326BF: lea     rcx, [rbp-80h]
 * 00000001407326C3: call    KiCheckForSListAddress
 * 00000001407326C8: xor     esi, esi
 * 00000001407326CA: inc     dword ptr gs:87C0h
 * 00000001407326D2: jmp     KiVmbusInterruptDispatch
 */
