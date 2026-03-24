/*
 * XREFs of NtContinueEx @ 0x1407273F0
 * Callers:
 *     DifNtContinueExWrapper @ 0x14066F5A0 (DifNtContinueExWrapper.c)
 *     NtContinue @ 0x1407273E0 (NtContinue.c)
 * Callees:
 *     KiContinueEx @ 0x1403D58B0 (KiContinueEx.c)
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     NtContinueEx @ 0x1407273F0 (NtContinueEx.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 */

/*
 * Hex-Rays decompilation failed for NtContinueEx @ 0x1407273F0
 * Reason: Hex-Rays returned no pseudocode for 0x1407273F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407273F0: mov     rbx, [rbp+0C0h]
 * 00000001407273F7: mov     rdi, [rbp+0C8h]
 * 00000001407273FE: mov     rsi, [rbp+0D0h]
 * 0000000140727405: xor     eax, eax
 * 0000000140727407: mov     [rbp-50h], rax
 * 000000014072740B: sub     rsp, 138h
 * 0000000140727412: lea     rax, [rsp+138h+var_38]
 * 000000014072741A: movaps  [rsp+138h+var_108], xmm6
 * 000000014072741F: movaps  [rsp+138h+var_F8], xmm7
 * 0000000140727424: movaps  [rsp+138h+var_E8], xmm8
 * 000000014072742A: movaps  [rsp+138h+var_D8], xmm9
 * 0000000140727430: movaps  [rsp+138h+var_C8], xmm10
 * 0000000140727436: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014072743B: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140727440: movaps  xmmword ptr [rax-60h], xmm13
 * 0000000140727445: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014072744A: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014072744F: mov     [rax], rbx
 * 0000000140727452: mov     [rax+8], rdi
 * 0000000140727456: mov     [rax+10h], rsi
 * 000000014072745A: mov     [rax+18h], r12
 * 000000014072745E: mov     [rax+20h], r13
 * 0000000140727462: mov     [rax+28h], r14
 * 0000000140727466: mov     [rax+30h], r15
 * 000000014072746A: mov     r8, rsp
 * 000000014072746D: lea     r9, [rbp-80h]
 * 0000000140727471: call    KiContinueEx
 * 0000000140727476: test    eax, eax
 * 0000000140727478: jle     loc_140727898
 * 000000014072747E: mov     rcx, gs:188h
 * 0000000140727487: test    byte ptr [rbp+0F0h], 1
 * 000000014072748E: jnz     short loc_1407274A7
 * 0000000140727490: mov     rdx, [rbp+0B8h]
 * 0000000140727497: mov     [rcx+90h], rdx
 * 000000014072749E: mov     dl, [rbp-58h]
 * 00000001407274A1: mov     [rcx+232h], dl
 * 00000001407274A7: lea     rcx, [rsp+138h+var_38]
 * 00000001407274AF: movaps  xmm6, [rsp+138h+var_108]
 * 00000001407274B4: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001407274B9: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001407274BF: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001407274C5: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001407274CB: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001407274D0: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001407274D5: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001407274DA: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001407274DF: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001407274E4: mov     rbx, [rcx]
 * 00000001407274E7: mov     rdi, [rcx+8]
 * 00000001407274EB: mov     rsi, [rcx+10h]
 * 00000001407274EF: mov     r12, [rcx+18h]
 * 00000001407274F3: mov     r13, [rcx+20h]
 * 00000001407274F7: mov     r14, [rcx+28h]
 * 00000001407274FB: mov     r15, [rcx+30h]
 * 00000001407274FF: cli
 * 0000000140727500: xor     ecx, ecx
 * 0000000140727502: rdsspq  rcx
 * 0000000140727507: test    rcx, rcx
 * 000000014072750A: jz      short loc_140727516
 * 000000014072750C: mov     ecx, 1
 * 0000000140727511: incsspq rcx
 * 0000000140727516: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072751D: jz      short loc_140727545
 * 000000014072751F: test    byte ptr [rbp+0F0h], 1
 * 0000000140727526: jz      short loc_140727545
 * 0000000140727528: mov     [rbp+0C0h], rbx
 * 000000014072752F: mov     [rbp+0D0h], rsi
 * 0000000140727536: mov     [rbp+0C8h], rdi
 * 000000014072753D: lea     rsp, [rbp-88h]
 * 0000000140727544: retn
 * 0000000140727545: test    byte ptr [rbp+0F0h], 1
 * 000000014072754C: jz      loc_14072784D
 * 0000000140727552: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140727559: jz      short loc_14072755E
 * 000000014072755B: stac
 * 000000014072755E: mov     rcx, gs:188h
 * 0000000140727567: test    byte ptr [rcx+0C2h], 3
 * 000000014072756E: jz      short loc_14072758B
 * 0000000140727570: mov     ecx, 1
 * 0000000140727575: mov     cr8, rcx
 * 0000000140727579: sti
 * 000000014072757A: call    KiInitiateUserApc
 * 000000014072757F: cli
 * 0000000140727580: mov     ecx, 0
 * 0000000140727585: mov     cr8, rcx
 * 0000000140727589: jmp     short loc_14072755E
 * 000000014072758B: test    byte ptr [rcx+3], 80h
 * 000000014072758F: jz      short loc_14072759E
 * 0000000140727591: call    KiSynchronizeUserIsolationDomainEntry
 * 0000000140727596: test    eax, eax
 * 0000000140727598: mov     rax, [rbp-50h]
 * 000000014072759C: jnz     short loc_14072755E
 * 000000014072759E: test    byte ptr gs:8A0h, 2
 * 00000001407275A7: jz      short loc_1407275B0
 * 00000001407275A9: xor     ecx, ecx
 * 00000001407275AB: call    KiUpdateStibpPairing
 * 00000001407275B0: mov     rcx, gs:188h
 * 00000001407275B9: test    dword ptr [rcx], 8000000h
 * 00000001407275BF: jz      short loc_1407275C6
 * 00000001407275C1: call    KiRestoreSetContextState
 * 00000001407275C6: mov     rcx, gs:188h
 * 00000001407275CF: test    dword ptr [rcx], 10000h
 * 00000001407275D5: jz      short loc_1407275EB
 * 00000001407275D7: test    byte ptr [rcx+2], 1
 * 00000001407275DB: jz      short loc_1407275EB
 * 00000001407275DD: call    KiCopyCounters
 * 00000001407275E2: mov     rcx, gs:188h
 * 00000001407275EB: ldmxcsr dword ptr [rbp-54h]
 * 00000001407275EF: cmp     word ptr [rbp+80h], 0
 * 00000001407275F7: jz      short loc_1407275FE
 * 00000001407275F9: call    KiRestoreDebugRegisterState
 * 00000001407275FE: mov     rcx, gs:188h
 * 0000000140727607: bt      dword ptr [rcx+74h], 16h
 * 000000014072760C: jnb     short loc_140727638
 * 000000014072760E: xor     ecx, ecx
 * 0000000140727610: rdsspq  rcx
 * 0000000140727615: mov     r8, gs:9D68h
 * 000000014072761E: add     r8, 8
 * 0000000140727622: cmp     rcx, r8
 * 0000000140727625: jnz     short loc_140727638
 * 0000000140727627: mov     rcx, gs:9D60h
 * 0000000140727630: rstorssp qword ptr [rcx]
 * 0000000140727634: saveprevssp
 * 0000000140727638: mov     byte ptr gs:89Eh, 0
 * 0000000140727641: movzx   eax, word ptr gs:8ACh
 * 000000014072764A: cmp     gs:8A6h, ax
 * 0000000140727653: jz      short loc_140727667
 * 0000000140727655: mov     gs:8A6h, ax
 * 000000014072765E: mov     ecx, 48h ; 'H'
 * 0000000140727663: xor     edx, edx
 * 0000000140727665: wrmsr
 * 0000000140727667: btr     word ptr gs:898h, 2
 * 0000000140727672: jnb     short loc_140727682
 * 0000000140727674: mov     eax, 1
 * 0000000140727679: xor     edx, edx
 * 000000014072767B: mov     ecx, 49h ; 'I'
 * 0000000140727680: wrmsr
 * 0000000140727682: btr     word ptr gs:898h, 5
 * 000000014072768D: jnb     loc_1407277CA
 * 0000000140727693: call    loc_1407277A6
 * 0000000140727698: add     rsp, 8
 * 000000014072769C: call    loc_1407277AF
 * 00000001407276A1: add     rsp, 8
 * 00000001407276A5: call    loc_140727698
 * 00000001407276AA: add     rsp, 8
 * 00000001407276AE: call    loc_1407276A1
 * 00000001407276B3: add     rsp, 8
 * 00000001407276B7: call    loc_1407276AA
 * 00000001407276BC: add     rsp, 8
 * 00000001407276C0: call    loc_1407276B3
 * 00000001407276C5: add     rsp, 8
 * 00000001407276C9: call    loc_1407276BC
 * 00000001407276CE: add     rsp, 8
 * 00000001407276D2: call    loc_1407276C5
 * 00000001407276D7: add     rsp, 8
 * 00000001407276DB: call    loc_1407276CE
 * 00000001407276E0: add     rsp, 8
 * 00000001407276E4: call    loc_1407276D7
 * 00000001407276E9: add     rsp, 8
 * 00000001407276ED: call    loc_1407276E0
 * 00000001407276F2: add     rsp, 8
 * 00000001407276F6: call    loc_1407276E9
 * 00000001407276FB: add     rsp, 8
 * 00000001407276FF: call    loc_1407276F2
 * 0000000140727704: add     rsp, 8
 * 0000000140727708: call    loc_1407276FB
 * 000000014072770D: add     rsp, 8
 * 0000000140727711: call    loc_140727704
 * 0000000140727716: add     rsp, 8
 * 000000014072771A: call    loc_14072770D
 * 000000014072771F: add     rsp, 8
 * 0000000140727723: call    loc_140727716
 * 0000000140727728: add     rsp, 8
 * 000000014072772C: call    loc_14072771F
 * 0000000140727731: add     rsp, 8
 * 0000000140727735: call    loc_140727728
 * 000000014072773A: add     rsp, 8
 * 000000014072773E: call    loc_140727731
 * 0000000140727743: add     rsp, 8
 * 0000000140727747: call    loc_14072773A
 * 000000014072774C: add     rsp, 8
 * 0000000140727750: call    loc_140727743
 * 0000000140727755: add     rsp, 8
 * 0000000140727759: call    loc_14072774C
 * 000000014072775E: add     rsp, 8
 * 0000000140727762: call    loc_140727755
 * 0000000140727767: add     rsp, 8
 * 000000014072776B: call    loc_14072775E
 * 0000000140727770: add     rsp, 8
 * 0000000140727774: call    loc_140727767
 * 0000000140727779: add     rsp, 8
 * 000000014072777D: call    loc_140727770
 * 0000000140727782: add     rsp, 8
 * 0000000140727786: call    loc_140727779
 * 000000014072778B: add     rsp, 8
 * 000000014072778F: call    loc_140727782
 * 0000000140727794: add     rsp, 8
 * 0000000140727798: call    loc_14072778B
 * 000000014072779D: add     rsp, 8
 * 00000001407277A1: call    loc_140727794
 * 00000001407277A6: add     rsp, 8
 * 00000001407277AA: call    loc_14072779D
 * 00000001407277AF: add     rsp, 8
 * 00000001407277B3: mov     eax, 0DADAh
 * 00000001407277B8: test    byte ptr gs:89Ch, 8
 * 00000001407277C1: jz      short loc_1407277CA
 * 00000001407277C3: mov     al, 20h ; ' '
 * 00000001407277C5: incsspq rax
 * 00000001407277CA: test    word ptr gs:898h, 100h
 * 00000001407277D5: jz      short loc_1407277E3
 * 00000001407277D7: xor     eax, eax
 * 00000001407277D9: xor     edx, edx
 * 00000001407277DB: mov     ecx, 1
 * 00000001407277E0: div     rcx
 * 00000001407277E3: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001407277E7: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001407277EB: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001407277EF: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001407277F3: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001407277F7: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001407277FB: mov     r11, [rbp-20h]
 * 00000001407277FF: mov     r10, [rbp-28h]
 * 0000000140727803: mov     r9, [rbp-30h]
 * 0000000140727807: mov     r8, [rbp-38h]
 * 000000014072780B: mov     rdx, [rbp-40h]
 * 000000014072780F: mov     rcx, [rbp-48h]
 * 0000000140727813: mov     rax, [rbp-50h]
 * 0000000140727817: mov     rsp, rbp
 * 000000014072781A: mov     rbp, [rbp+0D8h]
 * 0000000140727821: add     rsp, 0E8h
 * 0000000140727828: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072782F: jz      short loc_140727836
 * 0000000140727831: jmp     KiKernelExit
 * 0000000140727836: test    word ptr gs:898h, 200h
 * 0000000140727841: jz      short loc_140727848
 * 0000000140727843: verw    [rsp-1E8h+arg_200]
 * 0000000140727848: swapgs
 * 000000014072784B: iretq
 * 000000014072784D: ldmxcsr dword ptr [rbp-54h]
 * 0000000140727851: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140727855: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140727859: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072785D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140727861: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140727865: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140727869: mov     r11, [rbp-20h]
 * 000000014072786D: mov     r10, [rbp-28h]
 * 0000000140727871: mov     r9, [rbp-30h]
 * 0000000140727875: mov     r8, [rbp-38h]
 * 0000000140727879: mov     rdx, [rbp-40h]
 * 000000014072787D: mov     rcx, [rbp-48h]
 * 0000000140727881: mov     rax, [rbp-50h]
 * 0000000140727885: mov     rsp, rbp
 * 0000000140727888: mov     rbp, [rbp+0D8h]
 * 000000014072788F: add     rsp, 0E8h
 * 0000000140727896: iretq
 * 0000000140727898: add     rsp, 138h
 * 000000014072789F: retn
 */
