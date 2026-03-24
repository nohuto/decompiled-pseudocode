/*
 * XREFs of KiDivideErrorFault @ 0x140733100
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140C59100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x140733100 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x140733100
 * Reason: Hex-Rays returned no pseudocode for 0x140733100
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140733100: sub     rsp, 8
 * 0000000140733104: push    rbp
 * 0000000140733105: sub     rsp, 158h
 * 000000014073310C: lea     rbp, [rsp+80h]
 * 0000000140733114: mov     [rbp+0E8h+var_138], rax
 * 0000000140733118: mov     [rbp+0E8h+var_130], rcx
 * 000000014073311C: mov     [rbp+0E8h+var_128], rdx
 * 0000000140733120: mov     [rbp+0E8h+var_120], r8
 * 0000000140733124: mov     [rbp+0E8h+var_118], r9
 * 0000000140733128: mov     [rbp+0E8h+var_110], r10
 * 000000014073312C: mov     [rbp+0E8h+var_108], r11
 * 0000000140733130: test    [rbp+0E8h+arg_0], 1
 * 0000000140733137: jnz     short loc_140733171
 * 0000000140733139: xor     edx, edx
 * 000000014073313B: rdsspq  rdx
 * 0000000140733140: mov     [rbp+0E8h+var_90], rdx
 * 0000000140733144: lfence
 * 0000000140733147: test    byte ptr gs:898h, 1
 * 0000000140733150: jnz     short loc_14073315A
 * 0000000140733152: lfence
 * 0000000140733155: jmp     loc_1407333E2
 * 000000014073315A: movzx   eax, word ptr gs:8A6h
 * 0000000140733163: mov     ecx, 48h ; 'H'
 * 0000000140733168: xor     edx, edx
 * 000000014073316A: wrmsr
 * 000000014073316C: jmp     loc_1407333E2
 * 0000000140733171: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140733178: jnz     short loc_14073317D
 * 000000014073317A: swapgs
 * 000000014073317D: lfence
 * 0000000140733180: mov     rcx, gs:9D68h
 * 0000000140733189: test    rcx, rcx
 * 000000014073318C: jz      short loc_1407331AD
 * 000000014073318E: rdsspq  rdx
 * 0000000140733193: mov     r10, gs:9D60h
 * 000000014073319C: add     r10, 8
 * 00000001407331A0: cmp     rdx, r10
 * 00000001407331A3: jnz     short loc_1407331AD
 * 00000001407331A5: rstorssp qword ptr [rcx]
 * 00000001407331A9: saveprevssp
 * 00000001407331AD: mov     r10, gs:188h
 * 00000001407331B6: mov     rcx, gs:188h
 * 00000001407331BF: mov     rcx, [rcx+220h]
 * 00000001407331C6: mov     rcx, [rcx+760h]
 * 00000001407331CD: mov     gs:890h, rcx
 * 00000001407331D6: mov     cx, gs:8A2h
 * 00000001407331DF: mov     gs:8A4h, cx
 * 00000001407331E8: mov     cl, gs:898h
 * 00000001407331F0: mov     gs:89Ah, cl
 * 00000001407331F8: movzx   eax, word ptr gs:8A8h
 * 0000000140733201: cmp     gs:8A6h, ax
 * 000000014073320A: jz      short loc_14073321E
 * 000000014073320C: mov     gs:8A6h, ax
 * 0000000140733215: mov     ecx, 48h ; 'H'
 * 000000014073321A: xor     edx, edx
 * 000000014073321C: wrmsr
 * 000000014073321E: movzx   edx, byte ptr gs:898h
 * 0000000140733227: test    edx, 8
 * 000000014073322D: jz      short loc_140733246
 * 000000014073322F: mov     eax, 1
 * 0000000140733234: xor     edx, edx
 * 0000000140733236: mov     ecx, 49h ; 'I'
 * 000000014073323B: wrmsr
 * 000000014073323D: movzx   edx, byte ptr gs:898h
 * 0000000140733246: test    edx, 2
 * 000000014073324C: jz      loc_140733389
 * 0000000140733252: call    loc_140733365
 * 0000000140733257: add     rsp, 8
 * 000000014073325B: call    loc_14073336E
 * 0000000140733260: add     rsp, 8
 * 0000000140733264: call    loc_140733257
 * 0000000140733269: add     rsp, 8
 * 000000014073326D: call    loc_140733260
 * 0000000140733272: add     rsp, 8
 * 0000000140733276: call    loc_140733269
 * 000000014073327B: add     rsp, 8
 * 000000014073327F: call    loc_140733272
 * 0000000140733284: add     rsp, 8
 * 0000000140733288: call    loc_14073327B
 * 000000014073328D: add     rsp, 8
 * 0000000140733291: call    loc_140733284
 * 0000000140733296: add     rsp, 8
 * 000000014073329A: call    loc_14073328D
 * 000000014073329F: add     rsp, 8
 * 00000001407332A3: call    loc_140733296
 * 00000001407332A8: add     rsp, 8
 * 00000001407332AC: call    loc_14073329F
 * 00000001407332B1: add     rsp, 8
 * 00000001407332B5: call    loc_1407332A8
 * 00000001407332BA: add     rsp, 8
 * 00000001407332BE: call    loc_1407332B1
 * 00000001407332C3: add     rsp, 8
 * 00000001407332C7: call    loc_1407332BA
 * 00000001407332CC: add     rsp, 8
 * 00000001407332D0: call    loc_1407332C3
 * 00000001407332D5: add     rsp, 8
 * 00000001407332D9: call    loc_1407332CC
 * 00000001407332DE: add     rsp, 8
 * 00000001407332E2: call    loc_1407332D5
 * 00000001407332E7: add     rsp, 8
 * 00000001407332EB: call    loc_1407332DE
 * 00000001407332F0: add     rsp, 8
 * 00000001407332F4: call    loc_1407332E7
 * 00000001407332F9: add     rsp, 8
 * 00000001407332FD: call    loc_1407332F0
 * 0000000140733302: add     rsp, 8
 * 0000000140733306: call    loc_1407332F9
 * 000000014073330B: add     rsp, 8
 * 000000014073330F: call    loc_140733302
 * 0000000140733314: add     rsp, 8
 * 0000000140733318: call    loc_14073330B
 * 000000014073331D: add     rsp, 8
 * 0000000140733321: call    loc_140733314
 * 0000000140733326: add     rsp, 8
 * 000000014073332A: call    loc_14073331D
 * 000000014073332F: add     rsp, 8
 * 0000000140733333: call    loc_140733326
 * 0000000140733338: add     rsp, 8
 * 000000014073333C: call    loc_14073332F
 * 0000000140733341: add     rsp, 8
 * 0000000140733345: call    loc_140733338
 * 000000014073334A: add     rsp, 8
 * 000000014073334E: call    loc_140733341
 * 0000000140733353: add     rsp, 8
 * 0000000140733357: call    loc_14073334A
 * 000000014073335C: add     rsp, 8
 * 0000000140733360: call    loc_140733353
 * 0000000140733365: add     rsp, 8
 * 0000000140733369: call    loc_14073335C
 * 000000014073336E: add     rsp, 8
 * 0000000140733372: mov     eax, 0DADAh
 * 0000000140733377: test    byte ptr gs:89Ch, 8
 * 0000000140733380: jz      short loc_140733389
 * 0000000140733382: mov     al, 20h ; ' '
 * 0000000140733384: incsspq rax
 * 0000000140733389: test    edx, 80h
 * 000000014073338F: jz      short loc_140733399
 * 0000000140733391: lfence
 * 0000000140733394: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140733399: lfence
 * 000000014073339C: mov     byte ptr gs:89Eh, 0
 * 00000001407333A5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001407333AC: jz      short loc_1407333CD
 * 00000001407333AE: mov     ecx, 6A7h
 * 00000001407333B3: rdmsr
 * 00000001407333B5: cmp     edx, 0
 * 00000001407333B8: jz      short loc_1407333CD
 * 00000001407333BA: mov     ecx, edx
 * 00000001407333BC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001407333C2: cmp     edx, ecx
 * 00000001407333C4: jz      short loc_1407333CD
 * 00000001407333C6: mov     ecx, 6A7h
 * 00000001407333CB: wrmsr
 * 00000001407333CD: test    byte ptr [r10+3], 3
 * 00000001407333D2: mov     [rbp+0E8h+var_68], 0
 * 00000001407333DB: jz      short loc_1407333E2
 * 00000001407333DD: call    KiSaveDebugRegisterState
 * 00000001407333E2: cld
 * 00000001407333E3: stmxcsr [rbp+0E8h+var_13C]
 * 00000001407333E7: ldmxcsr dword ptr gs:180h
 * 00000001407333F0: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001407333F4: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001407333F8: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001407333FC: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140733400: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140733404: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140733408: test    [rbp+0E8h+arg_0], 1
 * 000000014073340F: jz      short KiDivideErrorFaultDispatchTrap
 * 0000000140733411: mov     r10, gs:188h
 * 000000014073341A: test    byte ptr [r10+3], 80h
 * 000000014073341F: jz      short KiDivideErrorFaultDispatchTrap
 * 0000000140733421: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140733426: mov     [rbp+0E8h+var_13D], 1
 * 000000014073342A: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140733431: jz      short loc_140733454
 * 0000000140733433: test    [rbp+0E8h+arg_0], 1
 * 000000014073343A: jnz     short loc_140733451
 * 000000014073343C: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140733443: jz      short loc_140733454
 * 0000000140733445: test    [rbp+0E8h+arg_8], 40000h
 * 000000014073344F: jz      short loc_140733454
 * 0000000140733451: stac
 * 0000000140733454: test    [rbp+0E8h+arg_8], 200h
 * 000000014073345E: jz      short loc_140733461
 * 0000000140733460: sti
 * 0000000140733461: mov     ecx, 10000003h
 * 0000000140733466: xor     edx, edx
 * 0000000140733468: mov     r8, [rbp+0E8h]
 * 000000014073346F: call    KiExceptionDispatch
 * 0000000140733474: nop
 * 0000000140733475: retn
 */
