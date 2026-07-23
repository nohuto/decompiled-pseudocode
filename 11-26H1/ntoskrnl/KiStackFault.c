/*
 * XREFs of KiStackFault @ 0x14073B500
 * Callers:
 *     KiStackFaultShadow @ 0x140C5F740 (KiStackFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x14073B500 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x14073B500
 * Reason: Hex-Rays returned no pseudocode for 0x14073B500
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073B500: push    rbp
 * 000000014073B501: sub     rsp, 158h
 * 000000014073B508: lea     rbp, [rsp+80h]
 * 000000014073B510: mov     [rbp+0D8h+var_128], rax
 * 000000014073B514: mov     [rbp+0D8h+var_120], rcx
 * 000000014073B518: mov     [rbp+0D8h+var_118], rdx
 * 000000014073B51C: mov     [rbp+0D8h+var_110], r8
 * 000000014073B520: mov     [rbp+0D8h+var_108], r9
 * 000000014073B524: mov     [rbp+0D8h+var_100], r10
 * 000000014073B528: mov     [rbp+0D8h+var_F8], r11
 * 000000014073B52C: test    [rbp+0D8h+arg_8], 1
 * 000000014073B533: jnz     short loc_14073B56D
 * 000000014073B535: xor     edx, edx
 * 000000014073B537: rdsspq  rdx
 * 000000014073B53C: mov     [rbp+0D8h+var_80], rdx
 * 000000014073B540: lfence
 * 000000014073B543: test    byte ptr gs:898h, 1
 * 000000014073B54C: jnz     short loc_14073B556
 * 000000014073B54E: lfence
 * 000000014073B551: jmp     loc_14073B7DE
 * 000000014073B556: movzx   eax, word ptr gs:8A6h
 * 000000014073B55F: mov     ecx, 48h ; 'H'
 * 000000014073B564: xor     edx, edx
 * 000000014073B566: wrmsr
 * 000000014073B568: jmp     loc_14073B7DE
 * 000000014073B56D: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073B574: jnz     short loc_14073B579
 * 000000014073B576: swapgs
 * 000000014073B579: lfence
 * 000000014073B57C: mov     rcx, gs:9D68h
 * 000000014073B585: test    rcx, rcx
 * 000000014073B588: jz      short loc_14073B5A9
 * 000000014073B58A: rdsspq  rdx
 * 000000014073B58F: mov     r10, gs:9D60h
 * 000000014073B598: add     r10, 8
 * 000000014073B59C: cmp     rdx, r10
 * 000000014073B59F: jnz     short loc_14073B5A9
 * 000000014073B5A1: rstorssp qword ptr [rcx]
 * 000000014073B5A5: saveprevssp
 * 000000014073B5A9: mov     r10, gs:188h
 * 000000014073B5B2: mov     rcx, gs:188h
 * 000000014073B5BB: mov     rcx, [rcx+220h]
 * 000000014073B5C2: mov     rcx, [rcx+760h]
 * 000000014073B5C9: mov     gs:890h, rcx
 * 000000014073B5D2: mov     cx, gs:8A2h
 * 000000014073B5DB: mov     gs:8A4h, cx
 * 000000014073B5E4: mov     cl, gs:898h
 * 000000014073B5EC: mov     gs:89Ah, cl
 * 000000014073B5F4: movzx   eax, word ptr gs:8A8h
 * 000000014073B5FD: cmp     gs:8A6h, ax
 * 000000014073B606: jz      short loc_14073B61A
 * 000000014073B608: mov     gs:8A6h, ax
 * 000000014073B611: mov     ecx, 48h ; 'H'
 * 000000014073B616: xor     edx, edx
 * 000000014073B618: wrmsr
 * 000000014073B61A: movzx   edx, byte ptr gs:898h
 * 000000014073B623: test    edx, 8
 * 000000014073B629: jz      short loc_14073B642
 * 000000014073B62B: mov     eax, 1
 * 000000014073B630: xor     edx, edx
 * 000000014073B632: mov     ecx, 49h ; 'I'
 * 000000014073B637: wrmsr
 * 000000014073B639: movzx   edx, byte ptr gs:898h
 * 000000014073B642: test    edx, 2
 * 000000014073B648: jz      loc_14073B785
 * 000000014073B64E: call    loc_14073B761
 * 000000014073B653: add     rsp, 8
 * 000000014073B657: call    loc_14073B76A
 * 000000014073B65C: add     rsp, 8
 * 000000014073B660: call    loc_14073B653
 * 000000014073B665: add     rsp, 8
 * 000000014073B669: call    loc_14073B65C
 * 000000014073B66E: add     rsp, 8
 * 000000014073B672: call    loc_14073B665
 * 000000014073B677: add     rsp, 8
 * 000000014073B67B: call    loc_14073B66E
 * 000000014073B680: add     rsp, 8
 * 000000014073B684: call    loc_14073B677
 * 000000014073B689: add     rsp, 8
 * 000000014073B68D: call    loc_14073B680
 * 000000014073B692: add     rsp, 8
 * 000000014073B696: call    loc_14073B689
 * 000000014073B69B: add     rsp, 8
 * 000000014073B69F: call    loc_14073B692
 * 000000014073B6A4: add     rsp, 8
 * 000000014073B6A8: call    loc_14073B69B
 * 000000014073B6AD: add     rsp, 8
 * 000000014073B6B1: call    loc_14073B6A4
 * 000000014073B6B6: add     rsp, 8
 * 000000014073B6BA: call    loc_14073B6AD
 * 000000014073B6BF: add     rsp, 8
 * 000000014073B6C3: call    loc_14073B6B6
 * 000000014073B6C8: add     rsp, 8
 * 000000014073B6CC: call    loc_14073B6BF
 * 000000014073B6D1: add     rsp, 8
 * 000000014073B6D5: call    loc_14073B6C8
 * 000000014073B6DA: add     rsp, 8
 * 000000014073B6DE: call    loc_14073B6D1
 * 000000014073B6E3: add     rsp, 8
 * 000000014073B6E7: call    loc_14073B6DA
 * 000000014073B6EC: add     rsp, 8
 * 000000014073B6F0: call    loc_14073B6E3
 * 000000014073B6F5: add     rsp, 8
 * 000000014073B6F9: call    loc_14073B6EC
 * 000000014073B6FE: add     rsp, 8
 * 000000014073B702: call    loc_14073B6F5
 * 000000014073B707: add     rsp, 8
 * 000000014073B70B: call    loc_14073B6FE
 * 000000014073B710: add     rsp, 8
 * 000000014073B714: call    loc_14073B707
 * 000000014073B719: add     rsp, 8
 * 000000014073B71D: call    loc_14073B710
 * 000000014073B722: add     rsp, 8
 * 000000014073B726: call    loc_14073B719
 * 000000014073B72B: add     rsp, 8
 * 000000014073B72F: call    loc_14073B722
 * 000000014073B734: add     rsp, 8
 * 000000014073B738: call    loc_14073B72B
 * 000000014073B73D: add     rsp, 8
 * 000000014073B741: call    loc_14073B734
 * 000000014073B746: add     rsp, 8
 * 000000014073B74A: call    loc_14073B73D
 * 000000014073B74F: add     rsp, 8
 * 000000014073B753: call    loc_14073B746
 * 000000014073B758: add     rsp, 8
 * 000000014073B75C: call    loc_14073B74F
 * 000000014073B761: add     rsp, 8
 * 000000014073B765: call    loc_14073B758
 * 000000014073B76A: add     rsp, 8
 * 000000014073B76E: mov     eax, 0DADAh
 * 000000014073B773: test    byte ptr gs:89Ch, 8
 * 000000014073B77C: jz      short loc_14073B785
 * 000000014073B77E: mov     al, 20h ; ' '
 * 000000014073B780: incsspq rax
 * 000000014073B785: test    edx, 80h
 * 000000014073B78B: jz      short loc_14073B795
 * 000000014073B78D: lfence
 * 000000014073B790: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073B795: lfence
 * 000000014073B798: mov     byte ptr gs:89Eh, 0
 * 000000014073B7A1: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073B7A8: jz      short loc_14073B7C9
 * 000000014073B7AA: mov     ecx, 6A7h
 * 000000014073B7AF: rdmsr
 * 000000014073B7B1: cmp     edx, 0
 * 000000014073B7B4: jz      short loc_14073B7C9
 * 000000014073B7B6: mov     ecx, edx
 * 000000014073B7B8: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073B7BE: cmp     edx, ecx
 * 000000014073B7C0: jz      short loc_14073B7C9
 * 000000014073B7C2: mov     ecx, 6A7h
 * 000000014073B7C7: wrmsr
 * 000000014073B7C9: test    byte ptr [r10+3], 3
 * 000000014073B7CE: mov     [rbp+0D8h+var_58], 0
 * 000000014073B7D7: jz      short loc_14073B7DE
 * 000000014073B7D9: call    KiSaveDebugRegisterState
 * 000000014073B7DE: cld
 * 000000014073B7DF: stmxcsr [rbp+0D8h+var_12C]
 * 000000014073B7E3: ldmxcsr dword ptr gs:180h
 * 000000014073B7EC: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014073B7F0: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014073B7F4: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014073B7F8: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014073B7FC: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014073B800: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014073B804: test    [rbp+0D8h+arg_8], 1
 * 000000014073B80B: jz      short KiStackFaultDispatchTrap
 * 000000014073B80D: mov     r10, gs:188h
 * 000000014073B816: test    byte ptr [r10+3], 80h
 * 000000014073B81B: jz      short KiStackFaultDispatchTrap
 * 000000014073B81D: call    KiSynchronizeUserIsolationDomainExit
 * 000000014073B822: mov     [rbp+0D8h+var_12D], 1
 * 000000014073B826: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073B82D: jz      short loc_14073B850
 * 000000014073B82F: test    [rbp+0D8h+arg_8], 1
 * 000000014073B836: jnz     short loc_14073B84D
 * 000000014073B838: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073B83F: jz      short loc_14073B850
 * 000000014073B841: test    [rbp+0D8h+arg_10], 40000h
 * 000000014073B84B: jz      short loc_14073B850
 * 000000014073B84D: stac
 * 000000014073B850: mov     eax, [rbp+0E0h]
 * 000000014073B856: test    [rbp+0D8h+arg_10], 200h
 * 000000014073B860: jz      short loc_14073B863
 * 000000014073B862: sti
 * 000000014073B863: mov     ecx, 0C0000005h
 * 000000014073B868: mov     edx, 2
 * 000000014073B86D: mov     r8, [rbp+0D8h+arg_0]
 * 000000014073B874: mov     r9d, [rbp+0E0h]
 * 000000014073B87B: or      r9d, 3
 * 000000014073B87F: and     r9d, 0FFFFh
 * 000000014073B886: test    [rbp+0D8h+arg_8], 1
 * 000000014073B88D: jnz     short loc_14073B893
 * 000000014073B88F: or      r9, 0FFFFFFFFFFFFFFFFh
 * 000000014073B893: xor     r10, r10
 * 000000014073B896: call    KiExceptionDispatch
 * 000000014073B89B: nop
 * 000000014073B89C: retn
 */
