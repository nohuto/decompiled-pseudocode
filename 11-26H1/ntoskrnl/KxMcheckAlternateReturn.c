/*
 * XREFs of KxMcheckAlternateReturn @ 0x14073D400
 * Callers:
 *     KxMcheckAlternateReturnShadow @ 0x140C5FA40 (KxMcheckAlternateReturnShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiMcheckAlternateReturn @ 0x1405FF7C0 (KiMcheckAlternateReturn.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KxMcheckAlternateReturn @ 0x14073D400 (KxMcheckAlternateReturn.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxMcheckAlternateReturn @ 0x14073D400
 * Reason: Hex-Rays returned no pseudocode for 0x14073D400
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073D400: test    cs:KiKernelCetEnabled, 1
 * 000000014073D407: jz      short loc_14073D419
 * 000000014073D409: push    rdx
 * 000000014073D40A: rdsspq  rdx
 * 000000014073D40F: test    rdx, rdx
 * 000000014073D412: pop     rdx
 * 000000014073D413: jnz     short loc_14073D419
 * 000000014073D415: setssbsy
 * 000000014073D419: sub     rsp, 8
 * 000000014073D41D: push    rbp
 * 000000014073D41E: sub     rsp, 158h
 * 000000014073D425: lea     rbp, [rsp+168h+var_E8]
 * 000000014073D42D: mov     [rbp-50h], rax
 * 000000014073D431: mov     [rbp-48h], rcx
 * 000000014073D435: mov     [rbp-40h], rdx
 * 000000014073D439: mov     [rbp-38h], r8
 * 000000014073D43D: mov     [rbp-30h], r9
 * 000000014073D441: mov     [rbp-28h], r10
 * 000000014073D445: mov     [rbp-20h], r11
 * 000000014073D449: test    byte ptr [rbp+0F0h], 1
 * 000000014073D450: jnz     short loc_14073D48A
 * 000000014073D452: xor     edx, edx
 * 000000014073D454: rdsspq  rdx
 * 000000014073D459: mov     [rbp+58h], rdx
 * 000000014073D45D: lfence
 * 000000014073D460: test    byte ptr gs:898h, 1
 * 000000014073D469: jnz     short loc_14073D473
 * 000000014073D46B: lfence
 * 000000014073D46E: jmp     loc_14073D6FB
 * 000000014073D473: movzx   eax, word ptr gs:8A6h
 * 000000014073D47C: mov     ecx, 48h ; 'H'
 * 000000014073D481: xor     edx, edx
 * 000000014073D483: wrmsr
 * 000000014073D485: jmp     loc_14073D6FB
 * 000000014073D48A: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073D491: jnz     short loc_14073D496
 * 000000014073D493: swapgs
 * 000000014073D496: lfence
 * 000000014073D499: mov     rcx, gs:9D68h
 * 000000014073D4A2: test    rcx, rcx
 * 000000014073D4A5: jz      short loc_14073D4C6
 * 000000014073D4A7: rdsspq  rdx
 * 000000014073D4AC: mov     r10, gs:9D60h
 * 000000014073D4B5: add     r10, 8
 * 000000014073D4B9: cmp     rdx, r10
 * 000000014073D4BC: jnz     short loc_14073D4C6
 * 000000014073D4BE: rstorssp qword ptr [rcx]
 * 000000014073D4C2: saveprevssp
 * 000000014073D4C6: mov     r10, gs:188h
 * 000000014073D4CF: mov     rcx, gs:188h
 * 000000014073D4D8: mov     rcx, [rcx+220h]
 * 000000014073D4DF: mov     rcx, [rcx+760h]
 * 000000014073D4E6: mov     gs:890h, rcx
 * 000000014073D4EF: mov     cx, gs:8A2h
 * 000000014073D4F8: mov     gs:8A4h, cx
 * 000000014073D501: mov     cl, gs:898h
 * 000000014073D509: mov     gs:89Ah, cl
 * 000000014073D511: movzx   eax, word ptr gs:8A8h
 * 000000014073D51A: cmp     gs:8A6h, ax
 * 000000014073D523: jz      short loc_14073D537
 * 000000014073D525: mov     gs:8A6h, ax
 * 000000014073D52E: mov     ecx, 48h ; 'H'
 * 000000014073D533: xor     edx, edx
 * 000000014073D535: wrmsr
 * 000000014073D537: movzx   edx, byte ptr gs:898h
 * 000000014073D540: test    edx, 8
 * 000000014073D546: jz      short loc_14073D55F
 * 000000014073D548: mov     eax, 1
 * 000000014073D54D: xor     edx, edx
 * 000000014073D54F: mov     ecx, 49h ; 'I'
 * 000000014073D554: wrmsr
 * 000000014073D556: movzx   edx, byte ptr gs:898h
 * 000000014073D55F: test    edx, 2
 * 000000014073D565: jz      loc_14073D6A2
 * 000000014073D56B: call    loc_14073D67E
 * 000000014073D570: add     rsp, 8
 * 000000014073D574: call    loc_14073D687
 * 000000014073D579: add     rsp, 8
 * 000000014073D57D: call    loc_14073D570
 * 000000014073D582: add     rsp, 8
 * 000000014073D586: call    loc_14073D579
 * 000000014073D58B: add     rsp, 8
 * 000000014073D58F: call    loc_14073D582
 * 000000014073D594: add     rsp, 8
 * 000000014073D598: call    loc_14073D58B
 * 000000014073D59D: add     rsp, 8
 * 000000014073D5A1: call    loc_14073D594
 * 000000014073D5A6: add     rsp, 8
 * 000000014073D5AA: call    loc_14073D59D
 * 000000014073D5AF: add     rsp, 8
 * 000000014073D5B3: call    loc_14073D5A6
 * 000000014073D5B8: add     rsp, 8
 * 000000014073D5BC: call    loc_14073D5AF
 * 000000014073D5C1: add     rsp, 8
 * 000000014073D5C5: call    loc_14073D5B8
 * 000000014073D5CA: add     rsp, 8
 * 000000014073D5CE: call    loc_14073D5C1
 * 000000014073D5D3: add     rsp, 8
 * 000000014073D5D7: call    loc_14073D5CA
 * 000000014073D5DC: add     rsp, 8
 * 000000014073D5E0: call    loc_14073D5D3
 * 000000014073D5E5: add     rsp, 8
 * 000000014073D5E9: call    loc_14073D5DC
 * 000000014073D5EE: add     rsp, 8
 * 000000014073D5F2: call    loc_14073D5E5
 * 000000014073D5F7: add     rsp, 8
 * 000000014073D5FB: call    loc_14073D5EE
 * 000000014073D600: add     rsp, 8
 * 000000014073D604: call    loc_14073D5F7
 * 000000014073D609: add     rsp, 8
 * 000000014073D60D: call    loc_14073D600
 * 000000014073D612: add     rsp, 8
 * 000000014073D616: call    loc_14073D609
 * 000000014073D61B: add     rsp, 8
 * 000000014073D61F: call    loc_14073D612
 * 000000014073D624: add     rsp, 8
 * 000000014073D628: call    loc_14073D61B
 * 000000014073D62D: add     rsp, 8
 * 000000014073D631: call    loc_14073D624
 * 000000014073D636: add     rsp, 8
 * 000000014073D63A: call    loc_14073D62D
 * 000000014073D63F: add     rsp, 8
 * 000000014073D643: call    loc_14073D636
 * 000000014073D648: add     rsp, 8
 * 000000014073D64C: call    loc_14073D63F
 * 000000014073D651: add     rsp, 8
 * 000000014073D655: call    loc_14073D648
 * 000000014073D65A: add     rsp, 8
 * 000000014073D65E: call    loc_14073D651
 * 000000014073D663: add     rsp, 8
 * 000000014073D667: call    loc_14073D65A
 * 000000014073D66C: add     rsp, 8
 * 000000014073D670: call    loc_14073D663
 * 000000014073D675: add     rsp, 8
 * 000000014073D679: call    loc_14073D66C
 * 000000014073D67E: add     rsp, 8
 * 000000014073D682: call    loc_14073D675
 * 000000014073D687: add     rsp, 8
 * 000000014073D68B: mov     eax, 0DADAh
 * 000000014073D690: test    byte ptr gs:89Ch, 8
 * 000000014073D699: jz      short loc_14073D6A2
 * 000000014073D69B: mov     al, 20h ; ' '
 * 000000014073D69D: incsspq rax
 * 000000014073D6A2: test    edx, 80h
 * 000000014073D6A8: jz      short loc_14073D6B2
 * 000000014073D6AA: lfence
 * 000000014073D6AD: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073D6B2: lfence
 * 000000014073D6B5: mov     byte ptr gs:89Eh, 0
 * 000000014073D6BE: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073D6C5: jz      short loc_14073D6E6
 * 000000014073D6C7: mov     ecx, 6A7h
 * 000000014073D6CC: rdmsr
 * 000000014073D6CE: cmp     edx, 0
 * 000000014073D6D1: jz      short loc_14073D6E6
 * 000000014073D6D3: mov     ecx, edx
 * 000000014073D6D5: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073D6DB: cmp     edx, ecx
 * 000000014073D6DD: jz      short loc_14073D6E6
 * 000000014073D6DF: mov     ecx, 6A7h
 * 000000014073D6E4: wrmsr
 * 000000014073D6E6: test    byte ptr [r10+3], 3
 * 000000014073D6EB: mov     word ptr [rbp+80h], 0
 * 000000014073D6F4: jz      short loc_14073D6FB
 * 000000014073D6F6: call    KiSaveDebugRegisterState
 * 000000014073D6FB: cld
 * 000000014073D6FC: stmxcsr dword ptr [rbp-54h]
 * 000000014073D700: ldmxcsr dword ptr gs:180h
 * 000000014073D709: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014073D70D: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014073D711: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014073D715: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014073D719: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014073D71D: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014073D721: test    byte ptr [rbp+0F0h], 1
 * 000000014073D728: jz      short KxMcheckAlternateReturnDispatchTrap
 * 000000014073D72A: mov     r10, gs:188h
 * 000000014073D733: test    byte ptr [r10+3], 80h
 * 000000014073D738: jz      short KxMcheckAlternateReturnDispatchTrap
 * 000000014073D73A: call    KiSynchronizeUserIsolationDomainExit
 * 000000014073D73F: mov     byte ptr [rbp-55h], 1
 * 000000014073D743: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073D74A: jz      short loc_14073D76D
 * 000000014073D74C: test    byte ptr [rbp+0F0h], 1
 * 000000014073D753: jnz     short loc_14073D76A
 * 000000014073D755: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073D75C: jz      short loc_14073D76D
 * 000000014073D75E: test    dword ptr [rbp+0F8h], 40000h
 * 000000014073D768: jz      short loc_14073D76D
 * 000000014073D76A: stac
 * 000000014073D76D: sub     rsp, 30h
 * 000000014073D771: movdqa  xmm0, xmmword ptr gs:8860h
 * 000000014073D77B: movdqa  [rsp+198h+var_178], xmm0
 * 000000014073D781: pxor    xmm0, xmm0
 * 000000014073D785: movdqa  xmmword ptr gs:8860h, xmm0
 * 000000014073D78F: bt      dword ptr [rbp+0F8h], 9
 * 000000014073D797: jnb     short loc_14073D79A
 * 000000014073D799: sti
 * 000000014073D79A: lea     rcx, [rsp+198h+var_178]
 * 000000014073D79F: call    KiMcheckAlternateReturn
 * 000000014073D7A4: cli
 * 000000014073D7A5: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073D7AC: jz      short loc_14073D7B3
 * 000000014073D7AE: add     rsp, 28h
 * 000000014073D7B2: retn
 * 000000014073D7B3: test    byte ptr [rbp+0F0h], 1
 * 000000014073D7BA: jz      loc_14073DABB
 * 000000014073D7C0: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073D7C7: jz      short loc_14073D7CC
 * 000000014073D7C9: stac
 * 000000014073D7CC: mov     rcx, gs:188h
 * 000000014073D7D5: test    byte ptr [rcx+0C2h], 3
 * 000000014073D7DC: jz      short loc_14073D7F9
 * 000000014073D7DE: mov     ecx, 1
 * 000000014073D7E3: mov     cr8, rcx
 * 000000014073D7E7: sti
 * 000000014073D7E8: call    KiInitiateUserApc
 * 000000014073D7ED: cli
 * 000000014073D7EE: mov     ecx, 0
 * 000000014073D7F3: mov     cr8, rcx
 * 000000014073D7F7: jmp     short loc_14073D7CC
 * 000000014073D7F9: test    byte ptr [rcx+3], 80h
 * 000000014073D7FD: jz      short loc_14073D80C
 * 000000014073D7FF: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014073D804: test    eax, eax
 * 000000014073D806: mov     rax, [rbp-50h]
 * 000000014073D80A: jnz     short loc_14073D7CC
 * 000000014073D80C: test    byte ptr gs:8A0h, 2
 * 000000014073D815: jz      short loc_14073D81E
 * 000000014073D817: xor     ecx, ecx
 * 000000014073D819: call    KiUpdateStibpPairing
 * 000000014073D81E: mov     rcx, gs:188h
 * 000000014073D827: test    dword ptr [rcx], 8000000h
 * 000000014073D82D: jz      short loc_14073D834
 * 000000014073D82F: call    KiRestoreSetContextState
 * 000000014073D834: mov     rcx, gs:188h
 * 000000014073D83D: test    dword ptr [rcx], 10000h
 * 000000014073D843: jz      short loc_14073D859
 * 000000014073D845: test    byte ptr [rcx+2], 1
 * 000000014073D849: jz      short loc_14073D859
 * 000000014073D84B: call    KiCopyCounters
 * 000000014073D850: mov     rcx, gs:188h
 * 000000014073D859: ldmxcsr dword ptr [rbp-54h]
 * 000000014073D85D: cmp     word ptr [rbp+80h], 0
 * 000000014073D865: jz      short loc_14073D86C
 * 000000014073D867: call    KiRestoreDebugRegisterState
 * 000000014073D86C: mov     rcx, gs:188h
 * 000000014073D875: bt      dword ptr [rcx+74h], 16h
 * 000000014073D87A: jnb     short loc_14073D8A6
 * 000000014073D87C: xor     ecx, ecx
 * 000000014073D87E: rdsspq  rcx
 * 000000014073D883: mov     r8, gs:9D68h
 * 000000014073D88C: add     r8, 8
 * 000000014073D890: cmp     rcx, r8
 * 000000014073D893: jnz     short loc_14073D8A6
 * 000000014073D895: mov     rcx, gs:9D60h
 * 000000014073D89E: rstorssp qword ptr [rcx]
 * 000000014073D8A2: saveprevssp
 * 000000014073D8A6: mov     byte ptr gs:89Eh, 0
 * 000000014073D8AF: movzx   eax, word ptr gs:8ACh
 * 000000014073D8B8: cmp     gs:8A6h, ax
 * 000000014073D8C1: jz      short loc_14073D8D5
 * 000000014073D8C3: mov     gs:8A6h, ax
 * 000000014073D8CC: mov     ecx, 48h ; 'H'
 * 000000014073D8D1: xor     edx, edx
 * 000000014073D8D3: wrmsr
 * 000000014073D8D5: btr     word ptr gs:898h, 2
 * 000000014073D8E0: jnb     short loc_14073D8F0
 * 000000014073D8E2: mov     eax, 1
 * 000000014073D8E7: xor     edx, edx
 * 000000014073D8E9: mov     ecx, 49h ; 'I'
 * 000000014073D8EE: wrmsr
 * 000000014073D8F0: btr     word ptr gs:898h, 5
 * 000000014073D8FB: jnb     loc_14073DA38
 * 000000014073D901: call    loc_14073DA14
 * 000000014073D906: add     rsp, 8
 * 000000014073D90A: call    loc_14073DA1D
 * 000000014073D90F: add     rsp, 8
 * 000000014073D913: call    loc_14073D906
 * 000000014073D918: add     rsp, 8
 * 000000014073D91C: call    loc_14073D90F
 * 000000014073D921: add     rsp, 8
 * 000000014073D925: call    loc_14073D918
 * 000000014073D92A: add     rsp, 8
 * 000000014073D92E: call    loc_14073D921
 * 000000014073D933: add     rsp, 8
 * 000000014073D937: call    loc_14073D92A
 * 000000014073D93C: add     rsp, 8
 * 000000014073D940: call    loc_14073D933
 * 000000014073D945: add     rsp, 8
 * 000000014073D949: call    loc_14073D93C
 * 000000014073D94E: add     rsp, 8
 * 000000014073D952: call    loc_14073D945
 * 000000014073D957: add     rsp, 8
 * 000000014073D95B: call    loc_14073D94E
 * 000000014073D960: add     rsp, 8
 * 000000014073D964: call    loc_14073D957
 * 000000014073D969: add     rsp, 8
 * 000000014073D96D: call    loc_14073D960
 * 000000014073D972: add     rsp, 8
 * 000000014073D976: call    loc_14073D969
 * 000000014073D97B: add     rsp, 8
 * 000000014073D97F: call    loc_14073D972
 * 000000014073D984: add     rsp, 8
 * 000000014073D988: call    loc_14073D97B
 * 000000014073D98D: add     rsp, 8
 * 000000014073D991: call    loc_14073D984
 * 000000014073D996: add     rsp, 8
 * 000000014073D99A: call    loc_14073D98D
 * 000000014073D99F: add     rsp, 8
 * 000000014073D9A3: call    loc_14073D996
 * 000000014073D9A8: add     rsp, 8
 * 000000014073D9AC: call    loc_14073D99F
 * 000000014073D9B1: add     rsp, 8
 * 000000014073D9B5: call    loc_14073D9A8
 * 000000014073D9BA: add     rsp, 8
 * 000000014073D9BE: call    loc_14073D9B1
 * 000000014073D9C3: add     rsp, 8
 * 000000014073D9C7: call    loc_14073D9BA
 * 000000014073D9CC: add     rsp, 8
 * 000000014073D9D0: call    loc_14073D9C3
 * 000000014073D9D5: add     rsp, 8
 * 000000014073D9D9: call    loc_14073D9CC
 * 000000014073D9DE: add     rsp, 8
 * 000000014073D9E2: call    loc_14073D9D5
 * 000000014073D9E7: add     rsp, 8
 * 000000014073D9EB: call    loc_14073D9DE
 * 000000014073D9F0: add     rsp, 8
 * 000000014073D9F4: call    loc_14073D9E7
 * 000000014073D9F9: add     rsp, 8
 * 000000014073D9FD: call    loc_14073D9F0
 * 000000014073DA02: add     rsp, 8
 * 000000014073DA06: call    loc_14073D9F9
 * 000000014073DA0B: add     rsp, 8
 * 000000014073DA0F: call    loc_14073DA02
 * 000000014073DA14: add     rsp, 8
 * 000000014073DA18: call    loc_14073DA0B
 * 000000014073DA1D: add     rsp, 8
 * 000000014073DA21: mov     eax, 0DADAh
 * 000000014073DA26: test    byte ptr gs:89Ch, 8
 * 000000014073DA2F: jz      short loc_14073DA38
 * 000000014073DA31: mov     al, 20h ; ' '
 * 000000014073DA33: incsspq rax
 * 000000014073DA38: test    word ptr gs:898h, 100h
 * 000000014073DA43: jz      short loc_14073DA51
 * 000000014073DA45: xor     eax, eax
 * 000000014073DA47: xor     edx, edx
 * 000000014073DA49: mov     ecx, 1
 * 000000014073DA4E: div     rcx
 * 000000014073DA51: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014073DA55: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014073DA59: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014073DA5D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014073DA61: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014073DA65: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014073DA69: mov     r11, [rbp-20h]
 * 000000014073DA6D: mov     r10, [rbp-28h]
 * 000000014073DA71: mov     r9, [rbp-30h]
 * 000000014073DA75: mov     r8, [rbp-38h]
 * 000000014073DA79: mov     rdx, [rbp-40h]
 * 000000014073DA7D: mov     rcx, [rbp-48h]
 * 000000014073DA81: mov     rax, [rbp-50h]
 * 000000014073DA85: mov     rsp, rbp
 * 000000014073DA88: mov     rbp, [rbp+0D8h]
 * 000000014073DA8F: add     rsp, 0E8h
 * 000000014073DA96: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073DA9D: jz      short loc_14073DAA4
 * 000000014073DA9F: jmp     KiKernelExit
 * 000000014073DAA4: test    word ptr gs:898h, 200h
 * 000000014073DAAF: jz      short loc_14073DAB6
 * 000000014073DAB1: verw    [rsp-50h+arg_68]
 * 000000014073DAB6: swapgs
 * 000000014073DAB9: iretq
 * 000000014073DABB: ldmxcsr dword ptr [rbp-54h]
 * 000000014073DABF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014073DAC3: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014073DAC7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014073DACB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014073DACF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014073DAD3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014073DAD7: mov     r11, [rbp-20h]
 * 000000014073DADB: mov     r10, [rbp-28h]
 * 000000014073DADF: mov     r9, [rbp-30h]
 * 000000014073DAE3: mov     r8, [rbp-38h]
 * 000000014073DAE7: mov     rdx, [rbp-40h]
 * 000000014073DAEB: mov     rcx, [rbp-48h]
 * 000000014073DAEF: mov     rax, [rbp-50h]
 * 000000014073DAF3: mov     rsp, rbp
 * 000000014073DAF6: mov     rbp, [rbp+0D8h]
 * 000000014073DAFD: add     rsp, 0E8h
 * 000000014073DB04: iretq
 */
