/*
 * XREFs of KiDebugServiceTrap @ 0x14073F680
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140C5FE40 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x14073F680 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x14073F680
 * Reason: Hex-Rays returned no pseudocode for 0x14073F680
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073F680: sub     rsp, 8
 * 000000014073F684: push    rbp
 * 000000014073F685: sub     rsp, 158h
 * 000000014073F68C: lea     rbp, [rsp+80h]
 * 000000014073F694: mov     [rbp+0E8h+var_138], rax
 * 000000014073F698: mov     [rbp+0E8h+var_130], rcx
 * 000000014073F69C: mov     [rbp+0E8h+var_128], rdx
 * 000000014073F6A0: mov     [rbp+0E8h+var_120], r8
 * 000000014073F6A4: mov     [rbp+0E8h+var_118], r9
 * 000000014073F6A8: mov     [rbp+0E8h+var_110], r10
 * 000000014073F6AC: mov     [rbp+0E8h+var_108], r11
 * 000000014073F6B0: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073F6B7: jnz     short loc_14073F6F1
 * 000000014073F6B9: xor     edx, edx
 * 000000014073F6BB: rdsspq  rdx
 * 000000014073F6C0: mov     [rbp+0E8h+var_90], rdx
 * 000000014073F6C4: lfence
 * 000000014073F6C7: test    byte ptr gs:898h, 1
 * 000000014073F6D0: jnz     short loc_14073F6DA
 * 000000014073F6D2: lfence
 * 000000014073F6D5: jmp     loc_14073F962
 * 000000014073F6DA: movzx   eax, word ptr gs:8A6h
 * 000000014073F6E3: mov     ecx, 48h ; 'H'
 * 000000014073F6E8: xor     edx, edx
 * 000000014073F6EA: wrmsr
 * 000000014073F6EC: jmp     loc_14073F962
 * 000000014073F6F1: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073F6F8: jnz     short loc_14073F6FD
 * 000000014073F6FA: swapgs
 * 000000014073F6FD: lfence
 * 000000014073F700: mov     rcx, gs:9D68h
 * 000000014073F709: test    rcx, rcx
 * 000000014073F70C: jz      short loc_14073F72D
 * 000000014073F70E: rdsspq  rdx
 * 000000014073F713: mov     r10, gs:9D60h
 * 000000014073F71C: add     r10, 8
 * 000000014073F720: cmp     rdx, r10
 * 000000014073F723: jnz     short loc_14073F72D
 * 000000014073F725: rstorssp qword ptr [rcx]
 * 000000014073F729: saveprevssp
 * 000000014073F72D: mov     r10, gs:188h
 * 000000014073F736: mov     rcx, gs:188h
 * 000000014073F73F: mov     rcx, [rcx+220h]
 * 000000014073F746: mov     rcx, [rcx+760h]
 * 000000014073F74D: mov     gs:890h, rcx
 * 000000014073F756: mov     cx, gs:8A2h
 * 000000014073F75F: mov     gs:8A4h, cx
 * 000000014073F768: mov     cl, gs:898h
 * 000000014073F770: mov     gs:89Ah, cl
 * 000000014073F778: movzx   eax, word ptr gs:8A8h
 * 000000014073F781: cmp     gs:8A6h, ax
 * 000000014073F78A: jz      short loc_14073F79E
 * 000000014073F78C: mov     gs:8A6h, ax
 * 000000014073F795: mov     ecx, 48h ; 'H'
 * 000000014073F79A: xor     edx, edx
 * 000000014073F79C: wrmsr
 * 000000014073F79E: movzx   edx, byte ptr gs:898h
 * 000000014073F7A7: test    edx, 8
 * 000000014073F7AD: jz      short loc_14073F7C6
 * 000000014073F7AF: mov     eax, 1
 * 000000014073F7B4: xor     edx, edx
 * 000000014073F7B6: mov     ecx, 49h ; 'I'
 * 000000014073F7BB: wrmsr
 * 000000014073F7BD: movzx   edx, byte ptr gs:898h
 * 000000014073F7C6: test    edx, 2
 * 000000014073F7CC: jz      loc_14073F909
 * 000000014073F7D2: call    loc_14073F8E5
 * 000000014073F7D7: add     rsp, 8
 * 000000014073F7DB: call    loc_14073F8EE
 * 000000014073F7E0: add     rsp, 8
 * 000000014073F7E4: call    loc_14073F7D7
 * 000000014073F7E9: add     rsp, 8
 * 000000014073F7ED: call    loc_14073F7E0
 * 000000014073F7F2: add     rsp, 8
 * 000000014073F7F6: call    loc_14073F7E9
 * 000000014073F7FB: add     rsp, 8
 * 000000014073F7FF: call    loc_14073F7F2
 * 000000014073F804: add     rsp, 8
 * 000000014073F808: call    loc_14073F7FB
 * 000000014073F80D: add     rsp, 8
 * 000000014073F811: call    loc_14073F804
 * 000000014073F816: add     rsp, 8
 * 000000014073F81A: call    loc_14073F80D
 * 000000014073F81F: add     rsp, 8
 * 000000014073F823: call    loc_14073F816
 * 000000014073F828: add     rsp, 8
 * 000000014073F82C: call    loc_14073F81F
 * 000000014073F831: add     rsp, 8
 * 000000014073F835: call    loc_14073F828
 * 000000014073F83A: add     rsp, 8
 * 000000014073F83E: call    loc_14073F831
 * 000000014073F843: add     rsp, 8
 * 000000014073F847: call    loc_14073F83A
 * 000000014073F84C: add     rsp, 8
 * 000000014073F850: call    loc_14073F843
 * 000000014073F855: add     rsp, 8
 * 000000014073F859: call    loc_14073F84C
 * 000000014073F85E: add     rsp, 8
 * 000000014073F862: call    loc_14073F855
 * 000000014073F867: add     rsp, 8
 * 000000014073F86B: call    loc_14073F85E
 * 000000014073F870: add     rsp, 8
 * 000000014073F874: call    loc_14073F867
 * 000000014073F879: add     rsp, 8
 * 000000014073F87D: call    loc_14073F870
 * 000000014073F882: add     rsp, 8
 * 000000014073F886: call    loc_14073F879
 * 000000014073F88B: add     rsp, 8
 * 000000014073F88F: call    loc_14073F882
 * 000000014073F894: add     rsp, 8
 * 000000014073F898: call    loc_14073F88B
 * 000000014073F89D: add     rsp, 8
 * 000000014073F8A1: call    loc_14073F894
 * 000000014073F8A6: add     rsp, 8
 * 000000014073F8AA: call    loc_14073F89D
 * 000000014073F8AF: add     rsp, 8
 * 000000014073F8B3: call    loc_14073F8A6
 * 000000014073F8B8: add     rsp, 8
 * 000000014073F8BC: call    loc_14073F8AF
 * 000000014073F8C1: add     rsp, 8
 * 000000014073F8C5: call    loc_14073F8B8
 * 000000014073F8CA: add     rsp, 8
 * 000000014073F8CE: call    loc_14073F8C1
 * 000000014073F8D3: add     rsp, 8
 * 000000014073F8D7: call    loc_14073F8CA
 * 000000014073F8DC: add     rsp, 8
 * 000000014073F8E0: call    loc_14073F8D3
 * 000000014073F8E5: add     rsp, 8
 * 000000014073F8E9: call    loc_14073F8DC
 * 000000014073F8EE: add     rsp, 8
 * 000000014073F8F2: mov     eax, 0DADAh
 * 000000014073F8F7: test    byte ptr gs:89Ch, 8
 * 000000014073F900: jz      short loc_14073F909
 * 000000014073F902: mov     al, 20h ; ' '
 * 000000014073F904: incsspq rax
 * 000000014073F909: test    edx, 80h
 * 000000014073F90F: jz      short loc_14073F919
 * 000000014073F911: lfence
 * 000000014073F914: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073F919: lfence
 * 000000014073F91C: mov     byte ptr gs:89Eh, 0
 * 000000014073F925: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073F92C: jz      short loc_14073F94D
 * 000000014073F92E: mov     ecx, 6A7h
 * 000000014073F933: rdmsr
 * 000000014073F935: cmp     edx, 0
 * 000000014073F938: jz      short loc_14073F94D
 * 000000014073F93A: mov     ecx, edx
 * 000000014073F93C: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073F942: cmp     edx, ecx
 * 000000014073F944: jz      short loc_14073F94D
 * 000000014073F946: mov     ecx, 6A7h
 * 000000014073F94B: wrmsr
 * 000000014073F94D: test    byte ptr [r10+3], 3
 * 000000014073F952: mov     [rbp+0E8h+var_68], 0
 * 000000014073F95B: jz      short loc_14073F962
 * 000000014073F95D: call    KiSaveDebugRegisterState
 * 000000014073F962: cld
 * 000000014073F963: stmxcsr [rbp+0E8h+var_13C]
 * 000000014073F967: ldmxcsr dword ptr gs:180h
 * 000000014073F970: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014073F974: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014073F978: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014073F97C: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014073F980: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014073F984: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014073F988: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073F98F: jz      short KiDebugServiceTrapDispatchTrap
 * 000000014073F991: mov     r10, gs:188h
 * 000000014073F99A: test    byte ptr [r10+3], 80h
 * 000000014073F99F: jz      short KiDebugServiceTrapDispatchTrap
 * 000000014073F9A1: call    KiSynchronizeUserIsolationDomainExit
 * 000000014073F9A6: mov     [rbp+0E8h+var_13D], 1
 * 000000014073F9AA: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073F9B1: jz      short loc_14073F9D4
 * 000000014073F9B3: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073F9BA: jnz     short loc_14073F9D1
 * 000000014073F9BC: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073F9C3: jz      short loc_14073F9D4
 * 000000014073F9C5: test    [rbp+0E8h+arg_8], 40000h
 * 000000014073F9CF: jz      short loc_14073F9D4
 * 000000014073F9D1: stac
 * 000000014073F9D4: inc     qword ptr [rbp+0E8h]
 * 000000014073F9DB: cmp     [rbp+0E8h+arg_0], 23h ; '#'
 * 000000014073F9E3: jnz     short loc_14073F9EC
 * 000000014073F9E5: and     dword ptr [rbp+0ECh], 0
 * 000000014073F9EC: mov     eax, [rbp+0E8h+var_8]
 * 000000014073F9F2: test    [rbp+0E8h+arg_8], 200h
 * 000000014073F9FC: jz      short loc_14073F9FF
 * 000000014073F9FE: sti
 * 000000014073F9FF: mov     ecx, 80000003h
 * 000000014073FA04: mov     edx, 1
 * 000000014073FA09: mov     r9, [rbp+0E8h+var_138]
 * 000000014073FA0D: mov     r8, [rbp+0E8h]
 * 000000014073FA14: call    KiExceptionDispatch
 * 000000014073FA19: nop
 * 000000014073FA1A: retn
 */
