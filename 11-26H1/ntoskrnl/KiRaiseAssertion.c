/*
 * XREFs of KiRaiseAssertion @ 0x14073F2C0
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140C5FDC0 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x14073F2C0 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x14073F2C0
 * Reason: Hex-Rays returned no pseudocode for 0x14073F2C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073F2C0: or      [rsp+arg_1F], 20h
 * 000000014073F2C6: sub     rsp, 8
 * 000000014073F2CA: push    rbp
 * 000000014073F2CB: sub     rsp, 158h
 * 000000014073F2D2: lea     rbp, [rsp+80h]
 * 000000014073F2DA: mov     [rbp+0E8h+var_138], rax
 * 000000014073F2DE: mov     [rbp+0E8h+var_130], rcx
 * 000000014073F2E2: mov     [rbp+0E8h+var_128], rdx
 * 000000014073F2E6: mov     [rbp+0E8h+var_120], r8
 * 000000014073F2EA: mov     [rbp+0E8h+var_118], r9
 * 000000014073F2EE: mov     [rbp+0E8h+var_110], r10
 * 000000014073F2F2: mov     [rbp+0E8h+var_108], r11
 * 000000014073F2F6: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073F2FD: jnz     short loc_14073F337
 * 000000014073F2FF: xor     edx, edx
 * 000000014073F301: rdsspq  rdx
 * 000000014073F306: mov     [rbp+0E8h+var_90], rdx
 * 000000014073F30A: lfence
 * 000000014073F30D: test    byte ptr gs:898h, 1
 * 000000014073F316: jnz     short loc_14073F320
 * 000000014073F318: lfence
 * 000000014073F31B: jmp     loc_14073F5A8
 * 000000014073F320: movzx   eax, word ptr gs:8A6h
 * 000000014073F329: mov     ecx, 48h ; 'H'
 * 000000014073F32E: xor     edx, edx
 * 000000014073F330: wrmsr
 * 000000014073F332: jmp     loc_14073F5A8
 * 000000014073F337: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073F33E: jnz     short loc_14073F343
 * 000000014073F340: swapgs
 * 000000014073F343: lfence
 * 000000014073F346: mov     rcx, gs:9D68h
 * 000000014073F34F: test    rcx, rcx
 * 000000014073F352: jz      short loc_14073F373
 * 000000014073F354: rdsspq  rdx
 * 000000014073F359: mov     r10, gs:9D60h
 * 000000014073F362: add     r10, 8
 * 000000014073F366: cmp     rdx, r10
 * 000000014073F369: jnz     short loc_14073F373
 * 000000014073F36B: rstorssp qword ptr [rcx]
 * 000000014073F36F: saveprevssp
 * 000000014073F373: mov     r10, gs:188h
 * 000000014073F37C: mov     rcx, gs:188h
 * 000000014073F385: mov     rcx, [rcx+220h]
 * 000000014073F38C: mov     rcx, [rcx+760h]
 * 000000014073F393: mov     gs:890h, rcx
 * 000000014073F39C: mov     cx, gs:8A2h
 * 000000014073F3A5: mov     gs:8A4h, cx
 * 000000014073F3AE: mov     cl, gs:898h
 * 000000014073F3B6: mov     gs:89Ah, cl
 * 000000014073F3BE: movzx   eax, word ptr gs:8A8h
 * 000000014073F3C7: cmp     gs:8A6h, ax
 * 000000014073F3D0: jz      short loc_14073F3E4
 * 000000014073F3D2: mov     gs:8A6h, ax
 * 000000014073F3DB: mov     ecx, 48h ; 'H'
 * 000000014073F3E0: xor     edx, edx
 * 000000014073F3E2: wrmsr
 * 000000014073F3E4: movzx   edx, byte ptr gs:898h
 * 000000014073F3ED: test    edx, 8
 * 000000014073F3F3: jz      short loc_14073F40C
 * 000000014073F3F5: mov     eax, 1
 * 000000014073F3FA: xor     edx, edx
 * 000000014073F3FC: mov     ecx, 49h ; 'I'
 * 000000014073F401: wrmsr
 * 000000014073F403: movzx   edx, byte ptr gs:898h
 * 000000014073F40C: test    edx, 2
 * 000000014073F412: jz      loc_14073F54F
 * 000000014073F418: call    loc_14073F52B
 * 000000014073F41D: add     rsp, 8
 * 000000014073F421: call    loc_14073F534
 * 000000014073F426: add     rsp, 8
 * 000000014073F42A: call    loc_14073F41D
 * 000000014073F42F: add     rsp, 8
 * 000000014073F433: call    loc_14073F426
 * 000000014073F438: add     rsp, 8
 * 000000014073F43C: call    loc_14073F42F
 * 000000014073F441: add     rsp, 8
 * 000000014073F445: call    loc_14073F438
 * 000000014073F44A: add     rsp, 8
 * 000000014073F44E: call    loc_14073F441
 * 000000014073F453: add     rsp, 8
 * 000000014073F457: call    loc_14073F44A
 * 000000014073F45C: add     rsp, 8
 * 000000014073F460: call    loc_14073F453
 * 000000014073F465: add     rsp, 8
 * 000000014073F469: call    loc_14073F45C
 * 000000014073F46E: add     rsp, 8
 * 000000014073F472: call    loc_14073F465
 * 000000014073F477: add     rsp, 8
 * 000000014073F47B: call    loc_14073F46E
 * 000000014073F480: add     rsp, 8
 * 000000014073F484: call    loc_14073F477
 * 000000014073F489: add     rsp, 8
 * 000000014073F48D: call    loc_14073F480
 * 000000014073F492: add     rsp, 8
 * 000000014073F496: call    loc_14073F489
 * 000000014073F49B: add     rsp, 8
 * 000000014073F49F: call    loc_14073F492
 * 000000014073F4A4: add     rsp, 8
 * 000000014073F4A8: call    loc_14073F49B
 * 000000014073F4AD: add     rsp, 8
 * 000000014073F4B1: call    loc_14073F4A4
 * 000000014073F4B6: add     rsp, 8
 * 000000014073F4BA: call    loc_14073F4AD
 * 000000014073F4BF: add     rsp, 8
 * 000000014073F4C3: call    loc_14073F4B6
 * 000000014073F4C8: add     rsp, 8
 * 000000014073F4CC: call    loc_14073F4BF
 * 000000014073F4D1: add     rsp, 8
 * 000000014073F4D5: call    loc_14073F4C8
 * 000000014073F4DA: add     rsp, 8
 * 000000014073F4DE: call    loc_14073F4D1
 * 000000014073F4E3: add     rsp, 8
 * 000000014073F4E7: call    loc_14073F4DA
 * 000000014073F4EC: add     rsp, 8
 * 000000014073F4F0: call    loc_14073F4E3
 * 000000014073F4F5: add     rsp, 8
 * 000000014073F4F9: call    loc_14073F4EC
 * 000000014073F4FE: add     rsp, 8
 * 000000014073F502: call    loc_14073F4F5
 * 000000014073F507: add     rsp, 8
 * 000000014073F50B: call    loc_14073F4FE
 * 000000014073F510: add     rsp, 8
 * 000000014073F514: call    loc_14073F507
 * 000000014073F519: add     rsp, 8
 * 000000014073F51D: call    loc_14073F510
 * 000000014073F522: add     rsp, 8
 * 000000014073F526: call    loc_14073F519
 * 000000014073F52B: add     rsp, 8
 * 000000014073F52F: call    loc_14073F522
 * 000000014073F534: add     rsp, 8
 * 000000014073F538: mov     eax, 0DADAh
 * 000000014073F53D: test    byte ptr gs:89Ch, 8
 * 000000014073F546: jz      short loc_14073F54F
 * 000000014073F548: mov     al, 20h ; ' '
 * 000000014073F54A: incsspq rax
 * 000000014073F54F: test    edx, 80h
 * 000000014073F555: jz      short loc_14073F55F
 * 000000014073F557: lfence
 * 000000014073F55A: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073F55F: lfence
 * 000000014073F562: mov     byte ptr gs:89Eh, 0
 * 000000014073F56B: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073F572: jz      short loc_14073F593
 * 000000014073F574: mov     ecx, 6A7h
 * 000000014073F579: rdmsr
 * 000000014073F57B: cmp     edx, 0
 * 000000014073F57E: jz      short loc_14073F593
 * 000000014073F580: mov     ecx, edx
 * 000000014073F582: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073F588: cmp     edx, ecx
 * 000000014073F58A: jz      short loc_14073F593
 * 000000014073F58C: mov     ecx, 6A7h
 * 000000014073F591: wrmsr
 * 000000014073F593: test    byte ptr [r10+3], 3
 * 000000014073F598: mov     [rbp+0E8h+var_68], 0
 * 000000014073F5A1: jz      short loc_14073F5A8
 * 000000014073F5A3: call    KiSaveDebugRegisterState
 * 000000014073F5A8: cld
 * 000000014073F5A9: stmxcsr [rbp+0E8h+var_13C]
 * 000000014073F5AD: ldmxcsr dword ptr gs:180h
 * 000000014073F5B6: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014073F5BA: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014073F5BE: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014073F5C2: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014073F5C6: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014073F5CA: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014073F5CE: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073F5D5: jz      short KiRaiseAssertionDispatchTrap
 * 000000014073F5D7: mov     r10, gs:188h
 * 000000014073F5E0: test    byte ptr [r10+3], 80h
 * 000000014073F5E5: jz      short KiRaiseAssertionDispatchTrap
 * 000000014073F5E7: call    KiSynchronizeUserIsolationDomainExit
 * 000000014073F5EC: mov     [rbp+0E8h+var_13D], 1
 * 000000014073F5F0: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073F5F7: jz      short loc_14073F61A
 * 000000014073F5F9: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073F600: jnz     short loc_14073F617
 * 000000014073F602: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073F609: jz      short loc_14073F61A
 * 000000014073F60B: test    [rbp+0E8h+arg_8], 40000h
 * 000000014073F615: jz      short loc_14073F61A
 * 000000014073F617: stac
 * 000000014073F61A: movzx   eax, byte ptr [rbp+0E8h+arg_1F]
 * 000000014073F621: shr     eax, 4
 * 000000014073F624: sub     [rbp+0E8h], rax
 * 000000014073F62B: cmp     [rbp+0E8h+arg_0], 23h ; '#'
 * 000000014073F633: jnz     short loc_14073F63C
 * 000000014073F635: and     dword ptr [rbp+0ECh], 0
 * 000000014073F63C: mov     eax, [rbp+0E8h+var_8]
 * 000000014073F642: test    [rbp+0E8h+arg_8], 200h
 * 000000014073F64C: jz      short loc_14073F64F
 * 000000014073F64E: sti
 * 000000014073F64F: mov     ecx, 0C0000420h
 * 000000014073F654: xor     edx, edx
 * 000000014073F656: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073F65D: setz    dl
 * 000000014073F660: shl     rdx, 20h
 * 000000014073F664: mov     r8, [rbp+0E8h]
 * 000000014073F66B: call    KiExceptionDispatch
 * 000000014073F670: nop
 * 000000014073F671: retn
 */
