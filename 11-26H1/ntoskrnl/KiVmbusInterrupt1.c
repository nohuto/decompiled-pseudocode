/*
 * XREFs of KiVmbusInterrupt1 @ 0x14072D3F0
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140C5A0C0 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140422100 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405F0F90 (KeWakeProcessor.c)
 *     KiVmbusInterrupt1 @ 0x14072D3F0 (KiVmbusInterrupt1.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x14072D3F0
 * Reason: Hex-Rays returned no pseudocode for 0x14072D3F0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072D3F0: push    2
 * 000000014072D3F2: push    rbp
 * 000000014072D3F3: sub     rsp, 158h
 * 000000014072D3FA: lea     rbp, [rsp+168h+var_E8]
 * 000000014072D402: mov     [rbp+0D0h], rsi
 * 000000014072D409: mov     [rbp-50h], rax
 * 000000014072D40D: mov     [rbp-48h], rcx
 * 000000014072D411: mov     [rbp-40h], rdx
 * 000000014072D415: mov     [rbp-38h], r8
 * 000000014072D419: mov     [rbp-30h], r9
 * 000000014072D41D: mov     [rbp-28h], r10
 * 000000014072D421: mov     [rbp-20h], r11
 * 000000014072D425: test    byte ptr [rbp+0F0h], 1
 * 000000014072D42C: jnz     short loc_14072D466
 * 000000014072D42E: xor     edx, edx
 * 000000014072D430: rdsspq  rdx
 * 000000014072D435: mov     [rbp+58h], rdx
 * 000000014072D439: lfence
 * 000000014072D43C: test    byte ptr gs:898h, 1
 * 000000014072D445: jnz     short loc_14072D44F
 * 000000014072D447: lfence
 * 000000014072D44A: jmp     loc_14072D6D7
 * 000000014072D44F: movzx   eax, word ptr gs:8A6h
 * 000000014072D458: mov     ecx, 48h ; 'H'
 * 000000014072D45D: xor     edx, edx
 * 000000014072D45F: wrmsr
 * 000000014072D461: jmp     loc_14072D6D7
 * 000000014072D466: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072D46D: jnz     short loc_14072D472
 * 000000014072D46F: swapgs
 * 000000014072D472: lfence
 * 000000014072D475: mov     rcx, gs:9D68h
 * 000000014072D47E: test    rcx, rcx
 * 000000014072D481: jz      short loc_14072D4A2
 * 000000014072D483: rdsspq  rdx
 * 000000014072D488: mov     r10, gs:9D60h
 * 000000014072D491: add     r10, 8
 * 000000014072D495: cmp     rdx, r10
 * 000000014072D498: jnz     short loc_14072D4A2
 * 000000014072D49A: rstorssp qword ptr [rcx]
 * 000000014072D49E: saveprevssp
 * 000000014072D4A2: mov     r10, gs:188h
 * 000000014072D4AB: mov     rcx, gs:188h
 * 000000014072D4B4: mov     rcx, [rcx+220h]
 * 000000014072D4BB: mov     rcx, [rcx+760h]
 * 000000014072D4C2: mov     gs:890h, rcx
 * 000000014072D4CB: mov     cx, gs:8A2h
 * 000000014072D4D4: mov     gs:8A4h, cx
 * 000000014072D4DD: mov     cl, gs:898h
 * 000000014072D4E5: mov     gs:89Ah, cl
 * 000000014072D4ED: movzx   eax, word ptr gs:8A8h
 * 000000014072D4F6: cmp     gs:8A6h, ax
 * 000000014072D4FF: jz      short loc_14072D513
 * 000000014072D501: mov     gs:8A6h, ax
 * 000000014072D50A: mov     ecx, 48h ; 'H'
 * 000000014072D50F: xor     edx, edx
 * 000000014072D511: wrmsr
 * 000000014072D513: movzx   edx, byte ptr gs:898h
 * 000000014072D51C: test    edx, 8
 * 000000014072D522: jz      short loc_14072D53B
 * 000000014072D524: mov     eax, 1
 * 000000014072D529: xor     edx, edx
 * 000000014072D52B: mov     ecx, 49h ; 'I'
 * 000000014072D530: wrmsr
 * 000000014072D532: movzx   edx, byte ptr gs:898h
 * 000000014072D53B: test    edx, 2
 * 000000014072D541: jz      loc_14072D67E
 * 000000014072D547: call    loc_14072D65A
 * 000000014072D54C: add     rsp, 8
 * 000000014072D550: call    loc_14072D663
 * 000000014072D555: add     rsp, 8
 * 000000014072D559: call    loc_14072D54C
 * 000000014072D55E: add     rsp, 8
 * 000000014072D562: call    loc_14072D555
 * 000000014072D567: add     rsp, 8
 * 000000014072D56B: call    loc_14072D55E
 * 000000014072D570: add     rsp, 8
 * 000000014072D574: call    loc_14072D567
 * 000000014072D579: add     rsp, 8
 * 000000014072D57D: call    loc_14072D570
 * 000000014072D582: add     rsp, 8
 * 000000014072D586: call    loc_14072D579
 * 000000014072D58B: add     rsp, 8
 * 000000014072D58F: call    loc_14072D582
 * 000000014072D594: add     rsp, 8
 * 000000014072D598: call    loc_14072D58B
 * 000000014072D59D: add     rsp, 8
 * 000000014072D5A1: call    loc_14072D594
 * 000000014072D5A6: add     rsp, 8
 * 000000014072D5AA: call    loc_14072D59D
 * 000000014072D5AF: add     rsp, 8
 * 000000014072D5B3: call    loc_14072D5A6
 * 000000014072D5B8: add     rsp, 8
 * 000000014072D5BC: call    loc_14072D5AF
 * 000000014072D5C1: add     rsp, 8
 * 000000014072D5C5: call    loc_14072D5B8
 * 000000014072D5CA: add     rsp, 8
 * 000000014072D5CE: call    loc_14072D5C1
 * 000000014072D5D3: add     rsp, 8
 * 000000014072D5D7: call    loc_14072D5CA
 * 000000014072D5DC: add     rsp, 8
 * 000000014072D5E0: call    loc_14072D5D3
 * 000000014072D5E5: add     rsp, 8
 * 000000014072D5E9: call    loc_14072D5DC
 * 000000014072D5EE: add     rsp, 8
 * 000000014072D5F2: call    loc_14072D5E5
 * 000000014072D5F7: add     rsp, 8
 * 000000014072D5FB: call    loc_14072D5EE
 * 000000014072D600: add     rsp, 8
 * 000000014072D604: call    loc_14072D5F7
 * 000000014072D609: add     rsp, 8
 * 000000014072D60D: call    loc_14072D600
 * 000000014072D612: add     rsp, 8
 * 000000014072D616: call    loc_14072D609
 * 000000014072D61B: add     rsp, 8
 * 000000014072D61F: call    loc_14072D612
 * 000000014072D624: add     rsp, 8
 * 000000014072D628: call    loc_14072D61B
 * 000000014072D62D: add     rsp, 8
 * 000000014072D631: call    loc_14072D624
 * 000000014072D636: add     rsp, 8
 * 000000014072D63A: call    loc_14072D62D
 * 000000014072D63F: add     rsp, 8
 * 000000014072D643: call    loc_14072D636
 * 000000014072D648: add     rsp, 8
 * 000000014072D64C: call    loc_14072D63F
 * 000000014072D651: add     rsp, 8
 * 000000014072D655: call    loc_14072D648
 * 000000014072D65A: add     rsp, 8
 * 000000014072D65E: call    loc_14072D651
 * 000000014072D663: add     rsp, 8
 * 000000014072D667: mov     eax, 0DADAh
 * 000000014072D66C: test    byte ptr gs:89Ch, 8
 * 000000014072D675: jz      short loc_14072D67E
 * 000000014072D677: mov     al, 20h ; ' '
 * 000000014072D679: incsspq rax
 * 000000014072D67E: test    edx, 80h
 * 000000014072D684: jz      short loc_14072D68E
 * 000000014072D686: lfence
 * 000000014072D689: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014072D68E: lfence
 * 000000014072D691: mov     byte ptr gs:89Eh, 0
 * 000000014072D69A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014072D6A1: jz      short loc_14072D6C2
 * 000000014072D6A3: mov     ecx, 6A7h
 * 000000014072D6A8: rdmsr
 * 000000014072D6AA: cmp     edx, 0
 * 000000014072D6AD: jz      short loc_14072D6C2
 * 000000014072D6AF: mov     ecx, edx
 * 000000014072D6B1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014072D6B7: cmp     edx, ecx
 * 000000014072D6B9: jz      short loc_14072D6C2
 * 000000014072D6BB: mov     ecx, 6A7h
 * 000000014072D6C0: wrmsr
 * 000000014072D6C2: test    byte ptr [r10+3], 3
 * 000000014072D6C7: mov     word ptr [rbp+80h], 0
 * 000000014072D6D0: jz      short loc_14072D6D7
 * 000000014072D6D2: call    KiSaveDebugRegisterState
 * 000000014072D6D7: cld
 * 000000014072D6D8: stmxcsr dword ptr [rbp-54h]
 * 000000014072D6DC: ldmxcsr dword ptr gs:180h
 * 000000014072D6E5: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014072D6E9: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014072D6ED: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014072D6F1: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014072D6F5: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014072D6F9: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014072D6FD: test    byte ptr [rbp+0F0h], 1
 * 000000014072D704: jz      short KiVmbusInterrupt1DispatchTrap
 * 000000014072D706: mov     r10, gs:188h
 * 000000014072D70F: test    byte ptr [r10+3], 80h
 * 000000014072D714: jz      short KiVmbusInterrupt1DispatchTrap
 * 000000014072D716: call    KiSynchronizeUserIsolationDomainExit
 * 000000014072D71B: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072D722: jz      short loc_14072D72B
 * 000000014072D724: mov     [rbp+0D0h], rsi
 * 000000014072D72B: mov     byte ptr [rbp-55h], 0
 * 000000014072D72F: cmp     byte ptr gs:87DAh, 0
 * 000000014072D738: jz      short loc_14072D73F
 * 000000014072D73A: call    KeWakeProcessor
 * 000000014072D73F: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014072D746: cmp     rax, [rbp+0E8h]
 * 000000014072D74D: jnb     short loc_14072D768
 * 000000014072D74F: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014072D756: cmp     rax, [rbp+0E8h]
 * 000000014072D75D: jb      short loc_14072D768
 * 000000014072D75F: lea     rcx, [rbp-80h]
 * 000000014072D763: call    KiCheckForSListAddress
 * 000000014072D768: xor     esi, esi
 * 000000014072D76A: inc     dword ptr gs:87C0h
 * 000000014072D772: jmp     KiVmbusInterruptDispatch
 */
