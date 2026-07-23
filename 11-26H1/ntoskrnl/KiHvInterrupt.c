/*
 * XREFs of KiHvInterrupt @ 0x1407318A0
 * Callers:
 *     KiHvInterruptShadow @ 0x140C5FFC0 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140419940 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405F3900 (KeWakeProcessor.c)
 *     KiHvInterrupt @ 0x1407318A0 (KiHvInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x1407318A0
 * Reason: Hex-Rays returned no pseudocode for 0x1407318A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407318A0: push    0
 * 00000001407318A2: push    rbp
 * 00000001407318A3: sub     rsp, 158h
 * 00000001407318AA: lea     rbp, [rsp+168h+var_E8]
 * 00000001407318B2: mov     [rbp+0D0h], rsi
 * 00000001407318B9: mov     [rbp-50h], rax
 * 00000001407318BD: mov     [rbp-48h], rcx
 * 00000001407318C1: mov     [rbp-40h], rdx
 * 00000001407318C5: mov     [rbp-38h], r8
 * 00000001407318C9: mov     [rbp-30h], r9
 * 00000001407318CD: mov     [rbp-28h], r10
 * 00000001407318D1: mov     [rbp-20h], r11
 * 00000001407318D5: test    byte ptr [rbp+0F0h], 1
 * 00000001407318DC: jnz     short loc_140731916
 * 00000001407318DE: xor     edx, edx
 * 00000001407318E0: rdsspq  rdx
 * 00000001407318E5: mov     [rbp+58h], rdx
 * 00000001407318E9: lfence
 * 00000001407318EC: test    byte ptr gs:898h, 1
 * 00000001407318F5: jnz     short loc_1407318FF
 * 00000001407318F7: lfence
 * 00000001407318FA: jmp     loc_140731B87
 * 00000001407318FF: movzx   eax, word ptr gs:8A6h
 * 0000000140731908: mov     ecx, 48h ; 'H'
 * 000000014073190D: xor     edx, edx
 * 000000014073190F: wrmsr
 * 0000000140731911: jmp     loc_140731B87
 * 0000000140731916: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073191D: jnz     short loc_140731922
 * 000000014073191F: swapgs
 * 0000000140731922: lfence
 * 0000000140731925: mov     rcx, gs:9D68h
 * 000000014073192E: test    rcx, rcx
 * 0000000140731931: jz      short loc_140731952
 * 0000000140731933: rdsspq  rdx
 * 0000000140731938: mov     r10, gs:9D60h
 * 0000000140731941: add     r10, 8
 * 0000000140731945: cmp     rdx, r10
 * 0000000140731948: jnz     short loc_140731952
 * 000000014073194A: rstorssp qword ptr [rcx]
 * 000000014073194E: saveprevssp
 * 0000000140731952: mov     r10, gs:188h
 * 000000014073195B: mov     rcx, gs:188h
 * 0000000140731964: mov     rcx, [rcx+220h]
 * 000000014073196B: mov     rcx, [rcx+760h]
 * 0000000140731972: mov     gs:890h, rcx
 * 000000014073197B: mov     cx, gs:8A2h
 * 0000000140731984: mov     gs:8A4h, cx
 * 000000014073198D: mov     cl, gs:898h
 * 0000000140731995: mov     gs:89Ah, cl
 * 000000014073199D: movzx   eax, word ptr gs:8A8h
 * 00000001407319A6: cmp     gs:8A6h, ax
 * 00000001407319AF: jz      short loc_1407319C3
 * 00000001407319B1: mov     gs:8A6h, ax
 * 00000001407319BA: mov     ecx, 48h ; 'H'
 * 00000001407319BF: xor     edx, edx
 * 00000001407319C1: wrmsr
 * 00000001407319C3: movzx   edx, byte ptr gs:898h
 * 00000001407319CC: test    edx, 8
 * 00000001407319D2: jz      short loc_1407319EB
 * 00000001407319D4: mov     eax, 1
 * 00000001407319D9: xor     edx, edx
 * 00000001407319DB: mov     ecx, 49h ; 'I'
 * 00000001407319E0: wrmsr
 * 00000001407319E2: movzx   edx, byte ptr gs:898h
 * 00000001407319EB: test    edx, 2
 * 00000001407319F1: jz      loc_140731B2E
 * 00000001407319F7: call    loc_140731B0A
 * 00000001407319FC: add     rsp, 8
 * 0000000140731A00: call    loc_140731B13
 * 0000000140731A05: add     rsp, 8
 * 0000000140731A09: call    loc_1407319FC
 * 0000000140731A0E: add     rsp, 8
 * 0000000140731A12: call    loc_140731A05
 * 0000000140731A17: add     rsp, 8
 * 0000000140731A1B: call    loc_140731A0E
 * 0000000140731A20: add     rsp, 8
 * 0000000140731A24: call    loc_140731A17
 * 0000000140731A29: add     rsp, 8
 * 0000000140731A2D: call    loc_140731A20
 * 0000000140731A32: add     rsp, 8
 * 0000000140731A36: call    loc_140731A29
 * 0000000140731A3B: add     rsp, 8
 * 0000000140731A3F: call    loc_140731A32
 * 0000000140731A44: add     rsp, 8
 * 0000000140731A48: call    loc_140731A3B
 * 0000000140731A4D: add     rsp, 8
 * 0000000140731A51: call    loc_140731A44
 * 0000000140731A56: add     rsp, 8
 * 0000000140731A5A: call    loc_140731A4D
 * 0000000140731A5F: add     rsp, 8
 * 0000000140731A63: call    loc_140731A56
 * 0000000140731A68: add     rsp, 8
 * 0000000140731A6C: call    loc_140731A5F
 * 0000000140731A71: add     rsp, 8
 * 0000000140731A75: call    loc_140731A68
 * 0000000140731A7A: add     rsp, 8
 * 0000000140731A7E: call    loc_140731A71
 * 0000000140731A83: add     rsp, 8
 * 0000000140731A87: call    loc_140731A7A
 * 0000000140731A8C: add     rsp, 8
 * 0000000140731A90: call    loc_140731A83
 * 0000000140731A95: add     rsp, 8
 * 0000000140731A99: call    loc_140731A8C
 * 0000000140731A9E: add     rsp, 8
 * 0000000140731AA2: call    loc_140731A95
 * 0000000140731AA7: add     rsp, 8
 * 0000000140731AAB: call    loc_140731A9E
 * 0000000140731AB0: add     rsp, 8
 * 0000000140731AB4: call    loc_140731AA7
 * 0000000140731AB9: add     rsp, 8
 * 0000000140731ABD: call    loc_140731AB0
 * 0000000140731AC2: add     rsp, 8
 * 0000000140731AC6: call    loc_140731AB9
 * 0000000140731ACB: add     rsp, 8
 * 0000000140731ACF: call    loc_140731AC2
 * 0000000140731AD4: add     rsp, 8
 * 0000000140731AD8: call    loc_140731ACB
 * 0000000140731ADD: add     rsp, 8
 * 0000000140731AE1: call    loc_140731AD4
 * 0000000140731AE6: add     rsp, 8
 * 0000000140731AEA: call    loc_140731ADD
 * 0000000140731AEF: add     rsp, 8
 * 0000000140731AF3: call    loc_140731AE6
 * 0000000140731AF8: add     rsp, 8
 * 0000000140731AFC: call    loc_140731AEF
 * 0000000140731B01: add     rsp, 8
 * 0000000140731B05: call    loc_140731AF8
 * 0000000140731B0A: add     rsp, 8
 * 0000000140731B0E: call    loc_140731B01
 * 0000000140731B13: add     rsp, 8
 * 0000000140731B17: mov     eax, 0DADAh
 * 0000000140731B1C: test    byte ptr gs:89Ch, 8
 * 0000000140731B25: jz      short loc_140731B2E
 * 0000000140731B27: mov     al, 20h ; ' '
 * 0000000140731B29: incsspq rax
 * 0000000140731B2E: test    edx, 80h
 * 0000000140731B34: jz      short loc_140731B3E
 * 0000000140731B36: lfence
 * 0000000140731B39: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140731B3E: lfence
 * 0000000140731B41: mov     byte ptr gs:89Eh, 0
 * 0000000140731B4A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140731B51: jz      short loc_140731B72
 * 0000000140731B53: mov     ecx, 6A7h
 * 0000000140731B58: rdmsr
 * 0000000140731B5A: cmp     edx, 0
 * 0000000140731B5D: jz      short loc_140731B72
 * 0000000140731B5F: mov     ecx, edx
 * 0000000140731B61: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140731B67: cmp     edx, ecx
 * 0000000140731B69: jz      short loc_140731B72
 * 0000000140731B6B: mov     ecx, 6A7h
 * 0000000140731B70: wrmsr
 * 0000000140731B72: test    byte ptr [r10+3], 3
 * 0000000140731B77: mov     word ptr [rbp+80h], 0
 * 0000000140731B80: jz      short loc_140731B87
 * 0000000140731B82: call    KiSaveDebugRegisterState
 * 0000000140731B87: cld
 * 0000000140731B88: stmxcsr dword ptr [rbp-54h]
 * 0000000140731B8C: ldmxcsr dword ptr gs:180h
 * 0000000140731B95: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140731B99: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140731B9D: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140731BA1: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140731BA5: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140731BA9: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140731BAD: test    byte ptr [rbp+0F0h], 1
 * 0000000140731BB4: jz      short KiHvInterruptDispatchTrap
 * 0000000140731BB6: mov     r10, gs:188h
 * 0000000140731BBF: test    byte ptr [r10+3], 80h
 * 0000000140731BC4: jz      short KiHvInterruptDispatchTrap
 * 0000000140731BC6: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140731BCB: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140731BD2: jz      short loc_140731BDB
 * 0000000140731BD4: mov     [rbp+0D0h], rsi
 * 0000000140731BDB: mov     byte ptr [rbp-55h], 0
 * 0000000140731BDF: cmp     byte ptr gs:87DAh, 0
 * 0000000140731BE8: jz      short loc_140731BEF
 * 0000000140731BEA: call    KeWakeProcessor
 * 0000000140731BEF: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140731BF6: cmp     rax, [rbp+0E8h]
 * 0000000140731BFD: jnb     short loc_140731C18
 * 0000000140731BFF: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140731C06: cmp     rax, [rbp+0E8h]
 * 0000000140731C0D: jb      short loc_140731C18
 * 0000000140731C0F: lea     rcx, [rbp-80h]
 * 0000000140731C13: call    KiCheckForSListAddress
 * 0000000140731C18: xor     esi, esi
 * 0000000140731C1A: inc     dword ptr gs:87C0h
 * 0000000140731C22: jmp     KiHvInterruptDispatch
 */
