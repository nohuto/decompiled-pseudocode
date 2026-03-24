/*
 * XREFs of KiVirtualizationException @ 0x140739380
 * Callers:
 *     KiVirtualizationExceptionShadow @ 0x140C59B40 (KiVirtualizationExceptionShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KzRaiseIrql @ 0x14041BC90 (KzRaiseIrql.c)
 *     KiCheckForSListAddress @ 0x140422100 (KiCheckForSListAddress.c)
 *     KzLowerIrql @ 0x14042F7D0 (KzLowerIrql.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiEpfHandleNotification @ 0x1405F6F30 (KiEpfHandleNotification.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiVirtualizationException @ 0x140739380 (KiVirtualizationException.c)
 *     KiBugCheckDispatch @ 0x14073C4C0 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVirtualizationException @ 0x140739380
 * Reason: Hex-Rays returned no pseudocode for 0x140739380
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140739380: sub     rsp, 8
 * 0000000140739384: push    rbp
 * 0000000140739385: sub     rsp, 158h
 * 000000014073938C: lea     rbp, [rsp+80h]
 * 0000000140739394: mov     [rbp+0E8h+var_138], rax
 * 0000000140739398: mov     [rbp+0E8h+var_130], rcx
 * 000000014073939C: mov     [rbp+0E8h+var_128], rdx
 * 00000001407393A0: mov     [rbp+0E8h+var_120], r8
 * 00000001407393A4: mov     [rbp+0E8h+var_118], r9
 * 00000001407393A8: mov     [rbp+0E8h+var_110], r10
 * 00000001407393AC: mov     [rbp+0E8h+var_108], r11
 * 00000001407393B0: test    [rbp+0E8h+arg_0], 1
 * 00000001407393B7: jnz     short loc_1407393F1
 * 00000001407393B9: xor     edx, edx
 * 00000001407393BB: rdsspq  rdx
 * 00000001407393C0: mov     [rbp+0E8h+var_90], rdx
 * 00000001407393C4: lfence
 * 00000001407393C7: test    byte ptr gs:898h, 1
 * 00000001407393D0: jnz     short loc_1407393DA
 * 00000001407393D2: lfence
 * 00000001407393D5: jmp     loc_140739662
 * 00000001407393DA: movzx   eax, word ptr gs:8A6h
 * 00000001407393E3: mov     ecx, 48h ; 'H'
 * 00000001407393E8: xor     edx, edx
 * 00000001407393EA: wrmsr
 * 00000001407393EC: jmp     loc_140739662
 * 00000001407393F1: test    byte ptr cs:KiTrapFeatures, 1
 * 00000001407393F8: jnz     short loc_1407393FD
 * 00000001407393FA: swapgs
 * 00000001407393FD: lfence
 * 0000000140739400: mov     rcx, gs:9D68h
 * 0000000140739409: test    rcx, rcx
 * 000000014073940C: jz      short loc_14073942D
 * 000000014073940E: rdsspq  rdx
 * 0000000140739413: mov     r10, gs:9D60h
 * 000000014073941C: add     r10, 8
 * 0000000140739420: cmp     rdx, r10
 * 0000000140739423: jnz     short loc_14073942D
 * 0000000140739425: rstorssp qword ptr [rcx]
 * 0000000140739429: saveprevssp
 * 000000014073942D: mov     r10, gs:188h
 * 0000000140739436: mov     rcx, gs:188h
 * 000000014073943F: mov     rcx, [rcx+220h]
 * 0000000140739446: mov     rcx, [rcx+760h]
 * 000000014073944D: mov     gs:890h, rcx
 * 0000000140739456: mov     cx, gs:8A2h
 * 000000014073945F: mov     gs:8A4h, cx
 * 0000000140739468: mov     cl, gs:898h
 * 0000000140739470: mov     gs:89Ah, cl
 * 0000000140739478: movzx   eax, word ptr gs:8A8h
 * 0000000140739481: cmp     gs:8A6h, ax
 * 000000014073948A: jz      short loc_14073949E
 * 000000014073948C: mov     gs:8A6h, ax
 * 0000000140739495: mov     ecx, 48h ; 'H'
 * 000000014073949A: xor     edx, edx
 * 000000014073949C: wrmsr
 * 000000014073949E: movzx   edx, byte ptr gs:898h
 * 00000001407394A7: test    edx, 8
 * 00000001407394AD: jz      short loc_1407394C6
 * 00000001407394AF: mov     eax, 1
 * 00000001407394B4: xor     edx, edx
 * 00000001407394B6: mov     ecx, 49h ; 'I'
 * 00000001407394BB: wrmsr
 * 00000001407394BD: movzx   edx, byte ptr gs:898h
 * 00000001407394C6: test    edx, 2
 * 00000001407394CC: jz      loc_140739609
 * 00000001407394D2: call    loc_1407395E5
 * 00000001407394D7: add     rsp, 8
 * 00000001407394DB: call    loc_1407395EE
 * 00000001407394E0: add     rsp, 8
 * 00000001407394E4: call    loc_1407394D7
 * 00000001407394E9: add     rsp, 8
 * 00000001407394ED: call    loc_1407394E0
 * 00000001407394F2: add     rsp, 8
 * 00000001407394F6: call    loc_1407394E9
 * 00000001407394FB: add     rsp, 8
 * 00000001407394FF: call    loc_1407394F2
 * 0000000140739504: add     rsp, 8
 * 0000000140739508: call    loc_1407394FB
 * 000000014073950D: add     rsp, 8
 * 0000000140739511: call    loc_140739504
 * 0000000140739516: add     rsp, 8
 * 000000014073951A: call    loc_14073950D
 * 000000014073951F: add     rsp, 8
 * 0000000140739523: call    loc_140739516
 * 0000000140739528: add     rsp, 8
 * 000000014073952C: call    loc_14073951F
 * 0000000140739531: add     rsp, 8
 * 0000000140739535: call    loc_140739528
 * 000000014073953A: add     rsp, 8
 * 000000014073953E: call    loc_140739531
 * 0000000140739543: add     rsp, 8
 * 0000000140739547: call    loc_14073953A
 * 000000014073954C: add     rsp, 8
 * 0000000140739550: call    loc_140739543
 * 0000000140739555: add     rsp, 8
 * 0000000140739559: call    loc_14073954C
 * 000000014073955E: add     rsp, 8
 * 0000000140739562: call    loc_140739555
 * 0000000140739567: add     rsp, 8
 * 000000014073956B: call    loc_14073955E
 * 0000000140739570: add     rsp, 8
 * 0000000140739574: call    loc_140739567
 * 0000000140739579: add     rsp, 8
 * 000000014073957D: call    loc_140739570
 * 0000000140739582: add     rsp, 8
 * 0000000140739586: call    loc_140739579
 * 000000014073958B: add     rsp, 8
 * 000000014073958F: call    loc_140739582
 * 0000000140739594: add     rsp, 8
 * 0000000140739598: call    loc_14073958B
 * 000000014073959D: add     rsp, 8
 * 00000001407395A1: call    loc_140739594
 * 00000001407395A6: add     rsp, 8
 * 00000001407395AA: call    loc_14073959D
 * 00000001407395AF: add     rsp, 8
 * 00000001407395B3: call    loc_1407395A6
 * 00000001407395B8: add     rsp, 8
 * 00000001407395BC: call    loc_1407395AF
 * 00000001407395C1: add     rsp, 8
 * 00000001407395C5: call    loc_1407395B8
 * 00000001407395CA: add     rsp, 8
 * 00000001407395CE: call    loc_1407395C1
 * 00000001407395D3: add     rsp, 8
 * 00000001407395D7: call    loc_1407395CA
 * 00000001407395DC: add     rsp, 8
 * 00000001407395E0: call    loc_1407395D3
 * 00000001407395E5: add     rsp, 8
 * 00000001407395E9: call    loc_1407395DC
 * 00000001407395EE: add     rsp, 8
 * 00000001407395F2: mov     eax, 0DADAh
 * 00000001407395F7: test    byte ptr gs:89Ch, 8
 * 0000000140739600: jz      short loc_140739609
 * 0000000140739602: mov     al, 20h ; ' '
 * 0000000140739604: incsspq rax
 * 0000000140739609: test    edx, 80h
 * 000000014073960F: jz      short loc_140739619
 * 0000000140739611: lfence
 * 0000000140739614: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140739619: lfence
 * 000000014073961C: mov     byte ptr gs:89Eh, 0
 * 0000000140739625: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073962C: jz      short loc_14073964D
 * 000000014073962E: mov     ecx, 6A7h
 * 0000000140739633: rdmsr
 * 0000000140739635: cmp     edx, 0
 * 0000000140739638: jz      short loc_14073964D
 * 000000014073963A: mov     ecx, edx
 * 000000014073963C: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140739642: cmp     edx, ecx
 * 0000000140739644: jz      short loc_14073964D
 * 0000000140739646: mov     ecx, 6A7h
 * 000000014073964B: wrmsr
 * 000000014073964D: test    byte ptr [r10+3], 3
 * 0000000140739652: mov     [rbp+0E8h+var_68], 0
 * 000000014073965B: jz      short loc_140739662
 * 000000014073965D: call    KiSaveDebugRegisterState
 * 0000000140739662: cld
 * 0000000140739663: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140739667: ldmxcsr dword ptr gs:180h
 * 0000000140739670: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140739674: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140739678: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014073967C: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140739680: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140739684: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140739688: test    [rbp+0E8h+arg_0], 1
 * 000000014073968F: jz      short KiVirtualizationExceptionDispatchTrap
 * 0000000140739691: mov     r10, gs:188h
 * 000000014073969A: test    byte ptr [r10+3], 80h
 * 000000014073969F: jz      short KiVirtualizationExceptionDispatchTrap
 * 00000001407396A1: call    KiSynchronizeUserIsolationDomainExit
 * 00000001407396A6: mov     [rbp+0E8h+var_13D], 1
 * 00000001407396AA: test    byte ptr cs:KiTrapFeatures, 8
 * 00000001407396B1: jz      short loc_1407396D4
 * 00000001407396B3: test    [rbp+0E8h+arg_0], 1
 * 00000001407396BA: jnz     short loc_1407396D1
 * 00000001407396BC: test    byte ptr cs:KiTrapFeatures, 2
 * 00000001407396C3: jz      short loc_1407396D4
 * 00000001407396C5: test    [rbp+0E8h+arg_8], 40000h
 * 00000001407396CF: jz      short loc_1407396D4
 * 00000001407396D1: stac
 * 00000001407396D4: mov     r9, gs:8DC8h
 * 00000001407396DD: test    r9, r9
 * 00000001407396E0: jz      loc_140739AA8
 * 00000001407396E6: cmp     dword ptr [r9+44h], 1
 * 00000001407396EB: jnz     loc_140739AA8
 * 00000001407396F1: test    [rbp+0E8h+arg_8], 200h
 * 00000001407396FB: jz      loc_140739AA8
 * 0000000140739701: mov     rax, cr8
 * 0000000140739705: mov     dword ptr [rbp+0E8h+NewIrql], eax
 * 0000000140739708: cmp     al, 2
 * 000000014073970A: jge     loc_140739AA8
 * 0000000140739710: mov     ecx, 2; NewIrql
 * 0000000140739715: call    KzRaiseIrql
 * 000000014073971A: sti
 * 000000014073971B: mov     r9, gs:8DC8h
 * 0000000140739724: mov     rcx, [r9+48h]
 * 0000000140739728: mov     dword ptr [r9+44h], 0
 * 0000000140739730: call    KiEpfHandleNotification
 * 0000000140739735: cli
 * 0000000140739736: lea     rcx, [rbp+0E8h+var_168]
 * 000000014073973A: call    KiCheckForSListAddress
 * 000000014073973F: mov     ecx, dword ptr [rbp+0E8h+NewIrql]; NewIrql
 * 0000000140739742: call    KzLowerIrql
 * 0000000140739747: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073974E: jz      short loc_140739755
 * 0000000140739750: add     rsp, 28h
 * 0000000140739754: retn
 * 0000000140739755: test    [rbp+0E8h+arg_0], 1
 * 000000014073975C: jz      loc_140739A5D
 * 0000000140739762: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140739769: jz      short loc_14073976E
 * 000000014073976B: stac
 * 000000014073976E: mov     rcx, gs:188h
 * 0000000140739777: test    byte ptr [rcx+0C2h], 3
 * 000000014073977E: jz      short loc_14073979B
 * 0000000140739780: mov     ecx, 1
 * 0000000140739785: mov     cr8, rcx
 * 0000000140739789: sti
 * 000000014073978A: call    KiInitiateUserApc
 * 000000014073978F: cli
 * 0000000140739790: mov     ecx, 0
 * 0000000140739795: mov     cr8, rcx
 * 0000000140739799: jmp     short loc_14073976E
 * 000000014073979B: test    byte ptr [rcx+3], 80h
 * 000000014073979F: jz      short loc_1407397AE
 * 00000001407397A1: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001407397A6: test    eax, eax
 * 00000001407397A8: mov     rax, [rbp+0E8h+var_138]
 * 00000001407397AC: jnz     short loc_14073976E
 * 00000001407397AE: test    byte ptr gs:8A0h, 2
 * 00000001407397B7: jz      short loc_1407397C0
 * 00000001407397B9: xor     ecx, ecx
 * 00000001407397BB: call    KiUpdateStibpPairing
 * 00000001407397C0: mov     rcx, gs:188h
 * 00000001407397C9: test    dword ptr [rcx], 8000000h
 * 00000001407397CF: jz      short loc_1407397D6
 * 00000001407397D1: call    KiRestoreSetContextState
 * 00000001407397D6: mov     rcx, gs:188h
 * 00000001407397DF: test    dword ptr [rcx], 10000h
 * 00000001407397E5: jz      short loc_1407397FB
 * 00000001407397E7: test    byte ptr [rcx+2], 1
 * 00000001407397EB: jz      short loc_1407397FB
 * 00000001407397ED: call    KiCopyCounters
 * 00000001407397F2: mov     rcx, gs:188h
 * 00000001407397FB: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001407397FF: cmp     [rbp+0E8h+var_68], 0
 * 0000000140739807: jz      short loc_14073980E
 * 0000000140739809: call    KiRestoreDebugRegisterState
 * 000000014073980E: mov     rcx, gs:188h
 * 0000000140739817: bt      dword ptr [rcx+74h], 16h
 * 000000014073981C: jnb     short loc_140739848
 * 000000014073981E: xor     ecx, ecx
 * 0000000140739820: rdsspq  rcx
 * 0000000140739825: mov     r8, gs:9D68h
 * 000000014073982E: add     r8, 8
 * 0000000140739832: cmp     rcx, r8
 * 0000000140739835: jnz     short loc_140739848
 * 0000000140739837: mov     rcx, gs:9D60h
 * 0000000140739840: rstorssp qword ptr [rcx]
 * 0000000140739844: saveprevssp
 * 0000000140739848: mov     byte ptr gs:89Eh, 0
 * 0000000140739851: movzx   eax, word ptr gs:8ACh
 * 000000014073985A: cmp     gs:8A6h, ax
 * 0000000140739863: jz      short loc_140739877
 * 0000000140739865: mov     gs:8A6h, ax
 * 000000014073986E: mov     ecx, 48h ; 'H'
 * 0000000140739873: xor     edx, edx
 * 0000000140739875: wrmsr
 * 0000000140739877: btr     word ptr gs:898h, 2
 * 0000000140739882: jnb     short loc_140739892
 * 0000000140739884: mov     eax, 1
 * 0000000140739889: xor     edx, edx
 * 000000014073988B: mov     ecx, 49h ; 'I'
 * 0000000140739890: wrmsr
 * 0000000140739892: btr     word ptr gs:898h, 5
 * 000000014073989D: jnb     loc_1407399DA
 * 00000001407398A3: call    loc_1407399B6
 * 00000001407398A8: add     rsp, 8
 * 00000001407398AC: call    loc_1407399BF
 * 00000001407398B1: add     rsp, 8
 * 00000001407398B5: call    loc_1407398A8
 * 00000001407398BA: add     rsp, 8
 * 00000001407398BE: call    loc_1407398B1
 * 00000001407398C3: add     rsp, 8
 * 00000001407398C7: call    loc_1407398BA
 * 00000001407398CC: add     rsp, 8
 * 00000001407398D0: call    loc_1407398C3
 * 00000001407398D5: add     rsp, 8
 * 00000001407398D9: call    loc_1407398CC
 * 00000001407398DE: add     rsp, 8
 * 00000001407398E2: call    loc_1407398D5
 * 00000001407398E7: add     rsp, 8
 * 00000001407398EB: call    loc_1407398DE
 * 00000001407398F0: add     rsp, 8
 * 00000001407398F4: call    loc_1407398E7
 * 00000001407398F9: add     rsp, 8
 * 00000001407398FD: call    loc_1407398F0
 * 0000000140739902: add     rsp, 8
 * 0000000140739906: call    loc_1407398F9
 * 000000014073990B: add     rsp, 8
 * 000000014073990F: call    loc_140739902
 * 0000000140739914: add     rsp, 8
 * 0000000140739918: call    loc_14073990B
 * 000000014073991D: add     rsp, 8
 * 0000000140739921: call    loc_140739914
 * 0000000140739926: add     rsp, 8
 * 000000014073992A: call    loc_14073991D
 * 000000014073992F: add     rsp, 8
 * 0000000140739933: call    loc_140739926
 * 0000000140739938: add     rsp, 8
 * 000000014073993C: call    loc_14073992F
 * 0000000140739941: add     rsp, 8
 * 0000000140739945: call    loc_140739938
 * 000000014073994A: add     rsp, 8
 * 000000014073994E: call    loc_140739941
 * 0000000140739953: add     rsp, 8
 * 0000000140739957: call    loc_14073994A
 * 000000014073995C: add     rsp, 8
 * 0000000140739960: call    loc_140739953
 * 0000000140739965: add     rsp, 8
 * 0000000140739969: call    loc_14073995C
 * 000000014073996E: add     rsp, 8
 * 0000000140739972: call    loc_140739965
 * 0000000140739977: add     rsp, 8
 * 000000014073997B: call    loc_14073996E
 * 0000000140739980: add     rsp, 8
 * 0000000140739984: call    loc_140739977
 * 0000000140739989: add     rsp, 8
 * 000000014073998D: call    loc_140739980
 * 0000000140739992: add     rsp, 8
 * 0000000140739996: call    loc_140739989
 * 000000014073999B: add     rsp, 8
 * 000000014073999F: call    loc_140739992
 * 00000001407399A4: add     rsp, 8
 * 00000001407399A8: call    loc_14073999B
 * 00000001407399AD: add     rsp, 8
 * 00000001407399B1: call    loc_1407399A4
 * 00000001407399B6: add     rsp, 8
 * 00000001407399BA: call    loc_1407399AD
 * 00000001407399BF: add     rsp, 8
 * 00000001407399C3: mov     eax, 0DADAh
 * 00000001407399C8: test    byte ptr gs:89Ch, 8
 * 00000001407399D1: jz      short loc_1407399DA
 * 00000001407399D3: mov     al, 20h ; ' '
 * 00000001407399D5: incsspq rax
 * 00000001407399DA: test    word ptr gs:898h, 100h
 * 00000001407399E5: jz      short loc_1407399F3
 * 00000001407399E7: xor     eax, eax
 * 00000001407399E9: xor     edx, edx
 * 00000001407399EB: mov     ecx, 1
 * 00000001407399F0: div     rcx
 * 00000001407399F3: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001407399F7: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001407399FB: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001407399FF: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140739A03: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140739A07: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140739A0B: mov     r11, [rbp+0E8h+var_108]
 * 0000000140739A0F: mov     r10, [rbp+0E8h+var_110]
 * 0000000140739A13: mov     r9, [rbp+0E8h+var_118]
 * 0000000140739A17: mov     r8, [rbp+0E8h+var_120]
 * 0000000140739A1B: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140739A1F: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140739A23: mov     rax, [rbp+0E8h+var_138]
 * 0000000140739A27: mov     rsp, rbp
 * 0000000140739A2A: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140739A31: add     rsp, 0E8h
 * 0000000140739A38: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140739A3F: jz      short loc_140739A46
 * 0000000140739A41: jmp     KiKernelExit
 * 0000000140739A46: test    word ptr gs:898h, 200h
 * 0000000140739A51: jz      short loc_140739A58
 * 0000000140739A53: verw    [rsp+arg_18]
 * 0000000140739A58: swapgs
 * 0000000140739A5B: iretq
 * 0000000140739A5D: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140739A61: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140739A65: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140739A69: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140739A6D: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140739A71: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140739A75: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140739A79: mov     r11, [rbp+0E8h+var_108]
 * 0000000140739A7D: mov     r10, [rbp+0E8h+var_110]
 * 0000000140739A81: mov     r9, [rbp+0E8h+var_118]
 * 0000000140739A85: mov     r8, [rbp+0E8h+var_120]
 * 0000000140739A89: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140739A8D: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140739A91: mov     rax, [rbp+0E8h+var_138]
 * 0000000140739A95: mov     rsp, rbp
 * 0000000140739A98: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140739A9F: add     rsp, 0E8h
 * 0000000140739AA6: iretq
 * 0000000140739AA8: mov     r10, [rbp+0E8h]
 * 0000000140739AAF: mov     r9, gs:8DC8h
 * 0000000140739AB8: movzx   r8, [rbp+0E8h+NewIrql]
 * 0000000140739ABD: mov     ecx, 7Fh
 * 0000000140739AC2: mov     edx, 20h ; ' '
 * 0000000140739AC7: call    KiBugCheckDispatch
 */
