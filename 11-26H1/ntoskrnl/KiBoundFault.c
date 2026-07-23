/*
 * XREFs of KiBoundFault @ 0x1407393C0
 * Callers:
 *     KiBoundFaultShadow @ 0x140C5F3C0 (KiBoundFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiHandleBound @ 0x1405E7AB0 (KiHandleBound.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x1407393C0 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x1407410C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140741680 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBoundFault @ 0x1407393C0
 * Reason: Hex-Rays returned no pseudocode for 0x1407393C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407393C0: sub     rsp, 8
 * 00000001407393C4: push    rbp
 * 00000001407393C5: sub     rsp, 158h
 * 00000001407393CC: lea     rbp, [rsp+80h]
 * 00000001407393D4: mov     [rbp+0E8h+var_138], rax
 * 00000001407393D8: mov     [rbp+0E8h+var_130], rcx
 * 00000001407393DC: mov     [rbp+0E8h+var_128], rdx
 * 00000001407393E0: mov     [rbp+0E8h+var_120], r8
 * 00000001407393E4: mov     [rbp+0E8h+var_118], r9
 * 00000001407393E8: mov     [rbp+0E8h+var_110], r10
 * 00000001407393EC: mov     [rbp+0E8h+var_108], r11
 * 00000001407393F0: test    [rbp+0E8h+arg_0], 1
 * 00000001407393F7: jnz     short loc_140739431
 * 00000001407393F9: xor     edx, edx
 * 00000001407393FB: rdsspq  rdx
 * 0000000140739400: mov     [rbp+0E8h+var_90], rdx
 * 0000000140739404: lfence
 * 0000000140739407: test    byte ptr gs:898h, 1
 * 0000000140739410: jnz     short loc_14073941A
 * 0000000140739412: lfence
 * 0000000140739415: jmp     loc_1407396A2
 * 000000014073941A: movzx   eax, word ptr gs:8A6h
 * 0000000140739423: mov     ecx, 48h ; 'H'
 * 0000000140739428: xor     edx, edx
 * 000000014073942A: wrmsr
 * 000000014073942C: jmp     loc_1407396A2
 * 0000000140739431: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140739438: jnz     short loc_14073943D
 * 000000014073943A: swapgs
 * 000000014073943D: lfence
 * 0000000140739440: mov     rcx, gs:9D68h
 * 0000000140739449: test    rcx, rcx
 * 000000014073944C: jz      short loc_14073946D
 * 000000014073944E: rdsspq  rdx
 * 0000000140739453: mov     r10, gs:9D60h
 * 000000014073945C: add     r10, 8
 * 0000000140739460: cmp     rdx, r10
 * 0000000140739463: jnz     short loc_14073946D
 * 0000000140739465: rstorssp qword ptr [rcx]
 * 0000000140739469: saveprevssp
 * 000000014073946D: mov     r10, gs:188h
 * 0000000140739476: mov     rcx, gs:188h
 * 000000014073947F: mov     rcx, [rcx+220h]
 * 0000000140739486: mov     rcx, [rcx+760h]
 * 000000014073948D: mov     gs:890h, rcx
 * 0000000140739496: mov     cx, gs:8A2h
 * 000000014073949F: mov     gs:8A4h, cx
 * 00000001407394A8: mov     cl, gs:898h
 * 00000001407394B0: mov     gs:89Ah, cl
 * 00000001407394B8: movzx   eax, word ptr gs:8A8h
 * 00000001407394C1: cmp     gs:8A6h, ax
 * 00000001407394CA: jz      short loc_1407394DE
 * 00000001407394CC: mov     gs:8A6h, ax
 * 00000001407394D5: mov     ecx, 48h ; 'H'
 * 00000001407394DA: xor     edx, edx
 * 00000001407394DC: wrmsr
 * 00000001407394DE: movzx   edx, byte ptr gs:898h
 * 00000001407394E7: test    edx, 8
 * 00000001407394ED: jz      short loc_140739506
 * 00000001407394EF: mov     eax, 1
 * 00000001407394F4: xor     edx, edx
 * 00000001407394F6: mov     ecx, 49h ; 'I'
 * 00000001407394FB: wrmsr
 * 00000001407394FD: movzx   edx, byte ptr gs:898h
 * 0000000140739506: test    edx, 2
 * 000000014073950C: jz      loc_140739649
 * 0000000140739512: call    loc_140739625
 * 0000000140739517: add     rsp, 8
 * 000000014073951B: call    loc_14073962E
 * 0000000140739520: add     rsp, 8
 * 0000000140739524: call    loc_140739517
 * 0000000140739529: add     rsp, 8
 * 000000014073952D: call    loc_140739520
 * 0000000140739532: add     rsp, 8
 * 0000000140739536: call    loc_140739529
 * 000000014073953B: add     rsp, 8
 * 000000014073953F: call    loc_140739532
 * 0000000140739544: add     rsp, 8
 * 0000000140739548: call    loc_14073953B
 * 000000014073954D: add     rsp, 8
 * 0000000140739551: call    loc_140739544
 * 0000000140739556: add     rsp, 8
 * 000000014073955A: call    loc_14073954D
 * 000000014073955F: add     rsp, 8
 * 0000000140739563: call    loc_140739556
 * 0000000140739568: add     rsp, 8
 * 000000014073956C: call    loc_14073955F
 * 0000000140739571: add     rsp, 8
 * 0000000140739575: call    loc_140739568
 * 000000014073957A: add     rsp, 8
 * 000000014073957E: call    loc_140739571
 * 0000000140739583: add     rsp, 8
 * 0000000140739587: call    loc_14073957A
 * 000000014073958C: add     rsp, 8
 * 0000000140739590: call    loc_140739583
 * 0000000140739595: add     rsp, 8
 * 0000000140739599: call    loc_14073958C
 * 000000014073959E: add     rsp, 8
 * 00000001407395A2: call    loc_140739595
 * 00000001407395A7: add     rsp, 8
 * 00000001407395AB: call    loc_14073959E
 * 00000001407395B0: add     rsp, 8
 * 00000001407395B4: call    loc_1407395A7
 * 00000001407395B9: add     rsp, 8
 * 00000001407395BD: call    loc_1407395B0
 * 00000001407395C2: add     rsp, 8
 * 00000001407395C6: call    loc_1407395B9
 * 00000001407395CB: add     rsp, 8
 * 00000001407395CF: call    loc_1407395C2
 * 00000001407395D4: add     rsp, 8
 * 00000001407395D8: call    loc_1407395CB
 * 00000001407395DD: add     rsp, 8
 * 00000001407395E1: call    loc_1407395D4
 * 00000001407395E6: add     rsp, 8
 * 00000001407395EA: call    loc_1407395DD
 * 00000001407395EF: add     rsp, 8
 * 00000001407395F3: call    loc_1407395E6
 * 00000001407395F8: add     rsp, 8
 * 00000001407395FC: call    loc_1407395EF
 * 0000000140739601: add     rsp, 8
 * 0000000140739605: call    loc_1407395F8
 * 000000014073960A: add     rsp, 8
 * 000000014073960E: call    loc_140739601
 * 0000000140739613: add     rsp, 8
 * 0000000140739617: call    loc_14073960A
 * 000000014073961C: add     rsp, 8
 * 0000000140739620: call    loc_140739613
 * 0000000140739625: add     rsp, 8
 * 0000000140739629: call    loc_14073961C
 * 000000014073962E: add     rsp, 8
 * 0000000140739632: mov     eax, 0DADAh
 * 0000000140739637: test    byte ptr gs:89Ch, 8
 * 0000000140739640: jz      short loc_140739649
 * 0000000140739642: mov     al, 20h ; ' '
 * 0000000140739644: incsspq rax
 * 0000000140739649: test    edx, 80h
 * 000000014073964F: jz      short loc_140739659
 * 0000000140739651: lfence
 * 0000000140739654: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140739659: lfence
 * 000000014073965C: mov     byte ptr gs:89Eh, 0
 * 0000000140739665: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073966C: jz      short loc_14073968D
 * 000000014073966E: mov     ecx, 6A7h
 * 0000000140739673: rdmsr
 * 0000000140739675: cmp     edx, 0
 * 0000000140739678: jz      short loc_14073968D
 * 000000014073967A: mov     ecx, edx
 * 000000014073967C: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140739682: cmp     edx, ecx
 * 0000000140739684: jz      short loc_14073968D
 * 0000000140739686: mov     ecx, 6A7h
 * 000000014073968B: wrmsr
 * 000000014073968D: test    byte ptr [r10+3], 3
 * 0000000140739692: mov     [rbp+0E8h+var_68], 0
 * 000000014073969B: jz      short loc_1407396A2
 * 000000014073969D: call    KiSaveDebugRegisterState
 * 00000001407396A2: cld
 * 00000001407396A3: stmxcsr [rbp+0E8h+var_13C]
 * 00000001407396A7: ldmxcsr dword ptr gs:180h
 * 00000001407396B0: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001407396B4: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001407396B8: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001407396BC: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001407396C0: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001407396C4: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001407396C8: test    [rbp+0E8h+arg_0], 1
 * 00000001407396CF: jz      short KiBoundFaultDispatchTrap
 * 00000001407396D1: mov     r10, gs:188h
 * 00000001407396DA: test    byte ptr [r10+3], 80h
 * 00000001407396DF: jz      short KiBoundFaultDispatchTrap
 * 00000001407396E1: call    KiSynchronizeUserIsolationDomainExit
 * 00000001407396E6: mov     [rbp+0E8h+var_13D], 1
 * 00000001407396EA: test    byte ptr cs:KiTrapFeatures, 8
 * 00000001407396F1: jz      short loc_140739714
 * 00000001407396F3: test    [rbp+0E8h+arg_0], 1
 * 00000001407396FA: jnz     short loc_140739711
 * 00000001407396FC: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140739703: jz      short loc_140739714
 * 0000000140739705: test    [rbp+0E8h+arg_8], 40000h
 * 000000014073970F: jz      short loc_140739714
 * 0000000140739711: stac
 * 0000000140739714: test    [rbp+0E8h+arg_8], 200h
 * 000000014073971E: jz      short loc_140739721
 * 0000000140739720: sti
 * 0000000140739721: test    [rbp+0E8h+arg_0], 1
 * 0000000140739728: jz      short loc_14073976B
 * 000000014073972A: call    KiHandleBound
 * 000000014073972F: cmp     eax, 0
 * 0000000140739732: jz      short loc_14073976B
 * 0000000140739734: cmp     eax, 1
 * 0000000140739737: jz      short loc_14073977F
 * 0000000140739739: cmp     eax, 2
 * 000000014073973C: jz      short loc_14073974D
 * 000000014073973E: mov     edx, 5
 * 0000000140739743: mov     ecx, 7Fh
 * 0000000140739748: call    KiBugCheckDispatch
 * 000000014073974D: mov     r9, 1Ch
 * 0000000140739754: mov     ecx, 0C0000409h
 * 0000000140739759: mov     edx, 1
 * 000000014073975E: mov     r8, [rbp+0E8h]
 * 0000000140739765: call    KiFastFailDispatch
 * 000000014073976A: nop
 * 000000014073976B: mov     ecx, 0C000008Ch
 * 0000000140739770: xor     edx, edx
 * 0000000140739772: mov     r8, [rbp+0E8h]
 * 0000000140739779: call    KiExceptionDispatch
 * 000000014073977E: nop
 * 000000014073977F: cli
 * 0000000140739780: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140739787: jz      short loc_14073978E
 * 0000000140739789: add     rsp, 28h
 * 000000014073978D: retn
 * 000000014073978E: test    [rbp+0E8h+arg_0], 1
 * 0000000140739795: jz      loc_140739A96
 * 000000014073979B: test    byte ptr cs:KiTrapFeatures, 8
 * 00000001407397A2: jz      short loc_1407397A7
 * 00000001407397A4: stac
 * 00000001407397A7: mov     rcx, gs:188h
 * 00000001407397B0: test    byte ptr [rcx+0C2h], 3
 * 00000001407397B7: jz      short loc_1407397D4
 * 00000001407397B9: mov     ecx, 1
 * 00000001407397BE: mov     cr8, rcx
 * 00000001407397C2: sti
 * 00000001407397C3: call    KiInitiateUserApc
 * 00000001407397C8: cli
 * 00000001407397C9: mov     ecx, 0
 * 00000001407397CE: mov     cr8, rcx
 * 00000001407397D2: jmp     short loc_1407397A7
 * 00000001407397D4: test    byte ptr [rcx+3], 80h
 * 00000001407397D8: jz      short loc_1407397E7
 * 00000001407397DA: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001407397DF: test    eax, eax
 * 00000001407397E1: mov     rax, [rbp+0E8h+var_138]
 * 00000001407397E5: jnz     short loc_1407397A7
 * 00000001407397E7: test    byte ptr gs:8A0h, 2
 * 00000001407397F0: jz      short loc_1407397F9
 * 00000001407397F2: xor     ecx, ecx
 * 00000001407397F4: call    KiUpdateStibpPairing
 * 00000001407397F9: mov     rcx, gs:188h
 * 0000000140739802: test    dword ptr [rcx], 8000000h
 * 0000000140739808: jz      short loc_14073980F
 * 000000014073980A: call    KiRestoreSetContextState
 * 000000014073980F: mov     rcx, gs:188h
 * 0000000140739818: test    dword ptr [rcx], 10000h
 * 000000014073981E: jz      short loc_140739834
 * 0000000140739820: test    byte ptr [rcx+2], 1
 * 0000000140739824: jz      short loc_140739834
 * 0000000140739826: call    KiCopyCounters
 * 000000014073982B: mov     rcx, gs:188h
 * 0000000140739834: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140739838: cmp     [rbp+0E8h+var_68], 0
 * 0000000140739840: jz      short loc_140739847
 * 0000000140739842: call    KiRestoreDebugRegisterState
 * 0000000140739847: mov     rcx, gs:188h
 * 0000000140739850: bt      dword ptr [rcx+74h], 16h
 * 0000000140739855: jnb     short loc_140739881
 * 0000000140739857: xor     ecx, ecx
 * 0000000140739859: rdsspq  rcx
 * 000000014073985E: mov     r8, gs:9D68h
 * 0000000140739867: add     r8, 8
 * 000000014073986B: cmp     rcx, r8
 * 000000014073986E: jnz     short loc_140739881
 * 0000000140739870: mov     rcx, gs:9D60h
 * 0000000140739879: rstorssp qword ptr [rcx]
 * 000000014073987D: saveprevssp
 * 0000000140739881: mov     byte ptr gs:89Eh, 0
 * 000000014073988A: movzx   eax, word ptr gs:8ACh
 * 0000000140739893: cmp     gs:8A6h, ax
 * 000000014073989C: jz      short loc_1407398B0
 * 000000014073989E: mov     gs:8A6h, ax
 * 00000001407398A7: mov     ecx, 48h ; 'H'
 * 00000001407398AC: xor     edx, edx
 * 00000001407398AE: wrmsr
 * 00000001407398B0: btr     word ptr gs:898h, 2
 * 00000001407398BB: jnb     short loc_1407398CB
 * 00000001407398BD: mov     eax, 1
 * 00000001407398C2: xor     edx, edx
 * 00000001407398C4: mov     ecx, 49h ; 'I'
 * 00000001407398C9: wrmsr
 * 00000001407398CB: btr     word ptr gs:898h, 5
 * 00000001407398D6: jnb     loc_140739A13
 * 00000001407398DC: call    loc_1407399EF
 * 00000001407398E1: add     rsp, 8
 * 00000001407398E5: call    loc_1407399F8
 * 00000001407398EA: add     rsp, 8
 * 00000001407398EE: call    loc_1407398E1
 * 00000001407398F3: add     rsp, 8
 * 00000001407398F7: call    loc_1407398EA
 * 00000001407398FC: add     rsp, 8
 * 0000000140739900: call    loc_1407398F3
 * 0000000140739905: add     rsp, 8
 * 0000000140739909: call    loc_1407398FC
 * 000000014073990E: add     rsp, 8
 * 0000000140739912: call    loc_140739905
 * 0000000140739917: add     rsp, 8
 * 000000014073991B: call    loc_14073990E
 * 0000000140739920: add     rsp, 8
 * 0000000140739924: call    loc_140739917
 * 0000000140739929: add     rsp, 8
 * 000000014073992D: call    loc_140739920
 * 0000000140739932: add     rsp, 8
 * 0000000140739936: call    loc_140739929
 * 000000014073993B: add     rsp, 8
 * 000000014073993F: call    loc_140739932
 * 0000000140739944: add     rsp, 8
 * 0000000140739948: call    loc_14073993B
 * 000000014073994D: add     rsp, 8
 * 0000000140739951: call    loc_140739944
 * 0000000140739956: add     rsp, 8
 * 000000014073995A: call    loc_14073994D
 * 000000014073995F: add     rsp, 8
 * 0000000140739963: call    loc_140739956
 * 0000000140739968: add     rsp, 8
 * 000000014073996C: call    loc_14073995F
 * 0000000140739971: add     rsp, 8
 * 0000000140739975: call    loc_140739968
 * 000000014073997A: add     rsp, 8
 * 000000014073997E: call    loc_140739971
 * 0000000140739983: add     rsp, 8
 * 0000000140739987: call    loc_14073997A
 * 000000014073998C: add     rsp, 8
 * 0000000140739990: call    loc_140739983
 * 0000000140739995: add     rsp, 8
 * 0000000140739999: call    loc_14073998C
 * 000000014073999E: add     rsp, 8
 * 00000001407399A2: call    loc_140739995
 * 00000001407399A7: add     rsp, 8
 * 00000001407399AB: call    loc_14073999E
 * 00000001407399B0: add     rsp, 8
 * 00000001407399B4: call    loc_1407399A7
 * 00000001407399B9: add     rsp, 8
 * 00000001407399BD: call    loc_1407399B0
 * 00000001407399C2: add     rsp, 8
 * 00000001407399C6: call    loc_1407399B9
 * 00000001407399CB: add     rsp, 8
 * 00000001407399CF: call    loc_1407399C2
 * 00000001407399D4: add     rsp, 8
 * 00000001407399D8: call    loc_1407399CB
 * 00000001407399DD: add     rsp, 8
 * 00000001407399E1: call    loc_1407399D4
 * 00000001407399E6: add     rsp, 8
 * 00000001407399EA: call    loc_1407399DD
 * 00000001407399EF: add     rsp, 8
 * 00000001407399F3: call    loc_1407399E6
 * 00000001407399F8: add     rsp, 8
 * 00000001407399FC: mov     eax, 0DADAh
 * 0000000140739A01: test    byte ptr gs:89Ch, 8
 * 0000000140739A0A: jz      short loc_140739A13
 * 0000000140739A0C: mov     al, 20h ; ' '
 * 0000000140739A0E: incsspq rax
 * 0000000140739A13: test    word ptr gs:898h, 100h
 * 0000000140739A1E: jz      short loc_140739A2C
 * 0000000140739A20: xor     eax, eax
 * 0000000140739A22: xor     edx, edx
 * 0000000140739A24: mov     ecx, 1
 * 0000000140739A29: div     rcx
 * 0000000140739A2C: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140739A30: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140739A34: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140739A38: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140739A3C: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140739A40: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140739A44: mov     r11, [rbp+0E8h+var_108]
 * 0000000140739A48: mov     r10, [rbp+0E8h+var_110]
 * 0000000140739A4C: mov     r9, [rbp+0E8h+var_118]
 * 0000000140739A50: mov     r8, [rbp+0E8h+var_120]
 * 0000000140739A54: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140739A58: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140739A5C: mov     rax, [rbp+0E8h+var_138]
 * 0000000140739A60: mov     rsp, rbp
 * 0000000140739A63: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140739A6A: add     rsp, 0E8h
 * 0000000140739A71: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140739A78: jz      short loc_140739A7F
 * 0000000140739A7A: jmp     KiKernelExit
 * 0000000140739A7F: test    word ptr gs:898h, 200h
 * 0000000140739A8A: jz      short loc_140739A91
 * 0000000140739A8C: verw    [rsp+arg_18]
 * 0000000140739A91: swapgs
 * 0000000140739A94: iretq
 * 0000000140739A96: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140739A9A: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140739A9E: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140739AA2: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140739AA6: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140739AAA: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140739AAE: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140739AB2: mov     r11, [rbp+0E8h+var_108]
 * 0000000140739AB6: mov     r10, [rbp+0E8h+var_110]
 * 0000000140739ABA: mov     r9, [rbp+0E8h+var_118]
 * 0000000140739ABE: mov     r8, [rbp+0E8h+var_120]
 * 0000000140739AC2: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140739AC6: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140739ACA: mov     rax, [rbp+0E8h+var_138]
 * 0000000140739ACE: mov     rsp, rbp
 * 0000000140739AD1: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140739AD8: add     rsp, 0E8h
 * 0000000140739ADF: iretq
 */
