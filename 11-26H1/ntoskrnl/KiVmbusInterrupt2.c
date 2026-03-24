/*
 * XREFs of KiVmbusInterrupt2 @ 0x14072D780
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140C5A140 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140422100 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405F0F90 (KeWakeProcessor.c)
 *     KiVmbusInterrupt2 @ 0x14072D780 (KiVmbusInterrupt2.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x14072D780
 * Reason: Hex-Rays returned no pseudocode for 0x14072D780
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072D780: push    3
 * 000000014072D782: push    rbp
 * 000000014072D783: sub     rsp, 158h
 * 000000014072D78A: lea     rbp, [rsp+168h+var_E8]
 * 000000014072D792: mov     [rbp+0D0h], rsi
 * 000000014072D799: mov     [rbp-50h], rax
 * 000000014072D79D: mov     [rbp-48h], rcx
 * 000000014072D7A1: mov     [rbp-40h], rdx
 * 000000014072D7A5: mov     [rbp-38h], r8
 * 000000014072D7A9: mov     [rbp-30h], r9
 * 000000014072D7AD: mov     [rbp-28h], r10
 * 000000014072D7B1: mov     [rbp-20h], r11
 * 000000014072D7B5: test    byte ptr [rbp+0F0h], 1
 * 000000014072D7BC: jnz     short loc_14072D7F6
 * 000000014072D7BE: xor     edx, edx
 * 000000014072D7C0: rdsspq  rdx
 * 000000014072D7C5: mov     [rbp+58h], rdx
 * 000000014072D7C9: lfence
 * 000000014072D7CC: test    byte ptr gs:898h, 1
 * 000000014072D7D5: jnz     short loc_14072D7DF
 * 000000014072D7D7: lfence
 * 000000014072D7DA: jmp     loc_14072DA67
 * 000000014072D7DF: movzx   eax, word ptr gs:8A6h
 * 000000014072D7E8: mov     ecx, 48h ; 'H'
 * 000000014072D7ED: xor     edx, edx
 * 000000014072D7EF: wrmsr
 * 000000014072D7F1: jmp     loc_14072DA67
 * 000000014072D7F6: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072D7FD: jnz     short loc_14072D802
 * 000000014072D7FF: swapgs
 * 000000014072D802: lfence
 * 000000014072D805: mov     rcx, gs:9D68h
 * 000000014072D80E: test    rcx, rcx
 * 000000014072D811: jz      short loc_14072D832
 * 000000014072D813: rdsspq  rdx
 * 000000014072D818: mov     r10, gs:9D60h
 * 000000014072D821: add     r10, 8
 * 000000014072D825: cmp     rdx, r10
 * 000000014072D828: jnz     short loc_14072D832
 * 000000014072D82A: rstorssp qword ptr [rcx]
 * 000000014072D82E: saveprevssp
 * 000000014072D832: mov     r10, gs:188h
 * 000000014072D83B: mov     rcx, gs:188h
 * 000000014072D844: mov     rcx, [rcx+220h]
 * 000000014072D84B: mov     rcx, [rcx+760h]
 * 000000014072D852: mov     gs:890h, rcx
 * 000000014072D85B: mov     cx, gs:8A2h
 * 000000014072D864: mov     gs:8A4h, cx
 * 000000014072D86D: mov     cl, gs:898h
 * 000000014072D875: mov     gs:89Ah, cl
 * 000000014072D87D: movzx   eax, word ptr gs:8A8h
 * 000000014072D886: cmp     gs:8A6h, ax
 * 000000014072D88F: jz      short loc_14072D8A3
 * 000000014072D891: mov     gs:8A6h, ax
 * 000000014072D89A: mov     ecx, 48h ; 'H'
 * 000000014072D89F: xor     edx, edx
 * 000000014072D8A1: wrmsr
 * 000000014072D8A3: movzx   edx, byte ptr gs:898h
 * 000000014072D8AC: test    edx, 8
 * 000000014072D8B2: jz      short loc_14072D8CB
 * 000000014072D8B4: mov     eax, 1
 * 000000014072D8B9: xor     edx, edx
 * 000000014072D8BB: mov     ecx, 49h ; 'I'
 * 000000014072D8C0: wrmsr
 * 000000014072D8C2: movzx   edx, byte ptr gs:898h
 * 000000014072D8CB: test    edx, 2
 * 000000014072D8D1: jz      loc_14072DA0E
 * 000000014072D8D7: call    loc_14072D9EA
 * 000000014072D8DC: add     rsp, 8
 * 000000014072D8E0: call    loc_14072D9F3
 * 000000014072D8E5: add     rsp, 8
 * 000000014072D8E9: call    loc_14072D8DC
 * 000000014072D8EE: add     rsp, 8
 * 000000014072D8F2: call    loc_14072D8E5
 * 000000014072D8F7: add     rsp, 8
 * 000000014072D8FB: call    loc_14072D8EE
 * 000000014072D900: add     rsp, 8
 * 000000014072D904: call    loc_14072D8F7
 * 000000014072D909: add     rsp, 8
 * 000000014072D90D: call    loc_14072D900
 * 000000014072D912: add     rsp, 8
 * 000000014072D916: call    loc_14072D909
 * 000000014072D91B: add     rsp, 8
 * 000000014072D91F: call    loc_14072D912
 * 000000014072D924: add     rsp, 8
 * 000000014072D928: call    loc_14072D91B
 * 000000014072D92D: add     rsp, 8
 * 000000014072D931: call    loc_14072D924
 * 000000014072D936: add     rsp, 8
 * 000000014072D93A: call    loc_14072D92D
 * 000000014072D93F: add     rsp, 8
 * 000000014072D943: call    loc_14072D936
 * 000000014072D948: add     rsp, 8
 * 000000014072D94C: call    loc_14072D93F
 * 000000014072D951: add     rsp, 8
 * 000000014072D955: call    loc_14072D948
 * 000000014072D95A: add     rsp, 8
 * 000000014072D95E: call    loc_14072D951
 * 000000014072D963: add     rsp, 8
 * 000000014072D967: call    loc_14072D95A
 * 000000014072D96C: add     rsp, 8
 * 000000014072D970: call    loc_14072D963
 * 000000014072D975: add     rsp, 8
 * 000000014072D979: call    loc_14072D96C
 * 000000014072D97E: add     rsp, 8
 * 000000014072D982: call    loc_14072D975
 * 000000014072D987: add     rsp, 8
 * 000000014072D98B: call    loc_14072D97E
 * 000000014072D990: add     rsp, 8
 * 000000014072D994: call    loc_14072D987
 * 000000014072D999: add     rsp, 8
 * 000000014072D99D: call    loc_14072D990
 * 000000014072D9A2: add     rsp, 8
 * 000000014072D9A6: call    loc_14072D999
 * 000000014072D9AB: add     rsp, 8
 * 000000014072D9AF: call    loc_14072D9A2
 * 000000014072D9B4: add     rsp, 8
 * 000000014072D9B8: call    loc_14072D9AB
 * 000000014072D9BD: add     rsp, 8
 * 000000014072D9C1: call    loc_14072D9B4
 * 000000014072D9C6: add     rsp, 8
 * 000000014072D9CA: call    loc_14072D9BD
 * 000000014072D9CF: add     rsp, 8
 * 000000014072D9D3: call    loc_14072D9C6
 * 000000014072D9D8: add     rsp, 8
 * 000000014072D9DC: call    loc_14072D9CF
 * 000000014072D9E1: add     rsp, 8
 * 000000014072D9E5: call    loc_14072D9D8
 * 000000014072D9EA: add     rsp, 8
 * 000000014072D9EE: call    loc_14072D9E1
 * 000000014072D9F3: add     rsp, 8
 * 000000014072D9F7: mov     eax, 0DADAh
 * 000000014072D9FC: test    byte ptr gs:89Ch, 8
 * 000000014072DA05: jz      short loc_14072DA0E
 * 000000014072DA07: mov     al, 20h ; ' '
 * 000000014072DA09: incsspq rax
 * 000000014072DA0E: test    edx, 80h
 * 000000014072DA14: jz      short loc_14072DA1E
 * 000000014072DA16: lfence
 * 000000014072DA19: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014072DA1E: lfence
 * 000000014072DA21: mov     byte ptr gs:89Eh, 0
 * 000000014072DA2A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014072DA31: jz      short loc_14072DA52
 * 000000014072DA33: mov     ecx, 6A7h
 * 000000014072DA38: rdmsr
 * 000000014072DA3A: cmp     edx, 0
 * 000000014072DA3D: jz      short loc_14072DA52
 * 000000014072DA3F: mov     ecx, edx
 * 000000014072DA41: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014072DA47: cmp     edx, ecx
 * 000000014072DA49: jz      short loc_14072DA52
 * 000000014072DA4B: mov     ecx, 6A7h
 * 000000014072DA50: wrmsr
 * 000000014072DA52: test    byte ptr [r10+3], 3
 * 000000014072DA57: mov     word ptr [rbp+80h], 0
 * 000000014072DA60: jz      short loc_14072DA67
 * 000000014072DA62: call    KiSaveDebugRegisterState
 * 000000014072DA67: cld
 * 000000014072DA68: stmxcsr dword ptr [rbp-54h]
 * 000000014072DA6C: ldmxcsr dword ptr gs:180h
 * 000000014072DA75: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014072DA79: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014072DA7D: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014072DA81: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014072DA85: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014072DA89: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014072DA8D: test    byte ptr [rbp+0F0h], 1
 * 000000014072DA94: jz      short KiVmbusInterrupt2DispatchTrap
 * 000000014072DA96: mov     r10, gs:188h
 * 000000014072DA9F: test    byte ptr [r10+3], 80h
 * 000000014072DAA4: jz      short KiVmbusInterrupt2DispatchTrap
 * 000000014072DAA6: call    KiSynchronizeUserIsolationDomainExit
 * 000000014072DAAB: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072DAB2: jz      short loc_14072DABB
 * 000000014072DAB4: mov     [rbp+0D0h], rsi
 * 000000014072DABB: mov     byte ptr [rbp-55h], 0
 * 000000014072DABF: cmp     byte ptr gs:87DAh, 0
 * 000000014072DAC8: jz      short loc_14072DACF
 * 000000014072DACA: call    KeWakeProcessor
 * 000000014072DACF: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014072DAD6: cmp     rax, [rbp+0E8h]
 * 000000014072DADD: jnb     short loc_14072DAF8
 * 000000014072DADF: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014072DAE6: cmp     rax, [rbp+0E8h]
 * 000000014072DAED: jb      short loc_14072DAF8
 * 000000014072DAEF: lea     rcx, [rbp-80h]
 * 000000014072DAF3: call    KiCheckForSListAddress
 * 000000014072DAF8: xor     esi, esi
 * 000000014072DAFA: inc     dword ptr gs:87C0h
 * 000000014072DB02: jmp     KiVmbusInterruptDispatch
 */
