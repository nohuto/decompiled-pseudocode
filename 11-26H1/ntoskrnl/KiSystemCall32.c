/*
 * XREFs of KiSystemCall32 @ 0x14073B100
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x14073B100 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x14073B100
 * Reason: Hex-Rays returned no pseudocode for 0x14073B100
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073B100: swapgs
 * 000000014073B103: mov     gs:10h, rsp
 * 000000014073B10C: mov     rsp, gs:1A8h
 * 000000014073B115: push    2Bh ; '+'
 * 000000014073B117: push    qword ptr gs:10h
 * 000000014073B11F: push    r11
 * 000000014073B121: push    23h ; '#'
 * 000000014073B123: push    rcx
 * 000000014073B124: cmp     qword ptr gs:9D68h, 0
 * 000000014073B12E: jz      short loc_14073B134
 * 000000014073B130: setssbsy
 * 000000014073B134: swapgs
 * 000000014073B137: lfence
 * 000000014073B13A: or      word ptr [rsp+27h], 20h
 * 000000014073B140: sub     rsp, 8
 * 000000014073B144: push    rbp
 * 000000014073B145: sub     rsp, 158h
 * 000000014073B14C: lea     rbp, [rsp+190h+var_110]
 * 000000014073B154: mov     [rbp-50h], rax
 * 000000014073B158: mov     [rbp-48h], rcx
 * 000000014073B15C: mov     [rbp-40h], rdx
 * 000000014073B160: mov     [rbp-38h], r8
 * 000000014073B164: mov     [rbp-30h], r9
 * 000000014073B168: mov     [rbp-28h], r10
 * 000000014073B16C: mov     [rbp-20h], r11
 * 000000014073B170: test    byte ptr [rbp+0F0h], 1
 * 000000014073B177: jnz     short loc_14073B1B1
 * 000000014073B179: xor     edx, edx
 * 000000014073B17B: rdsspq  rdx
 * 000000014073B180: mov     [rbp+58h], rdx
 * 000000014073B184: lfence
 * 000000014073B187: test    byte ptr gs:898h, 1
 * 000000014073B190: jnz     short loc_14073B19A
 * 000000014073B192: lfence
 * 000000014073B195: jmp     loc_14073B422
 * 000000014073B19A: movzx   eax, word ptr gs:8A6h
 * 000000014073B1A3: mov     ecx, 48h ; 'H'
 * 000000014073B1A8: xor     edx, edx
 * 000000014073B1AA: wrmsr
 * 000000014073B1AC: jmp     loc_14073B422
 * 000000014073B1B1: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073B1B8: jnz     short loc_14073B1BD
 * 000000014073B1BA: swapgs
 * 000000014073B1BD: lfence
 * 000000014073B1C0: mov     rcx, gs:9D68h
 * 000000014073B1C9: test    rcx, rcx
 * 000000014073B1CC: jz      short loc_14073B1ED
 * 000000014073B1CE: rdsspq  rdx
 * 000000014073B1D3: mov     r10, gs:9D60h
 * 000000014073B1DC: add     r10, 8
 * 000000014073B1E0: cmp     rdx, r10
 * 000000014073B1E3: jnz     short loc_14073B1ED
 * 000000014073B1E5: rstorssp qword ptr [rcx]
 * 000000014073B1E9: saveprevssp
 * 000000014073B1ED: mov     r10, gs:188h
 * 000000014073B1F6: mov     rcx, gs:188h
 * 000000014073B1FF: mov     rcx, [rcx+220h]
 * 000000014073B206: mov     rcx, [rcx+760h]
 * 000000014073B20D: mov     gs:890h, rcx
 * 000000014073B216: mov     cx, gs:8A2h
 * 000000014073B21F: mov     gs:8A4h, cx
 * 000000014073B228: mov     cl, gs:898h
 * 000000014073B230: mov     gs:89Ah, cl
 * 000000014073B238: movzx   eax, word ptr gs:8A8h
 * 000000014073B241: cmp     gs:8A6h, ax
 * 000000014073B24A: jz      short loc_14073B25E
 * 000000014073B24C: mov     gs:8A6h, ax
 * 000000014073B255: mov     ecx, 48h ; 'H'
 * 000000014073B25A: xor     edx, edx
 * 000000014073B25C: wrmsr
 * 000000014073B25E: movzx   edx, byte ptr gs:898h
 * 000000014073B267: test    edx, 8
 * 000000014073B26D: jz      short loc_14073B286
 * 000000014073B26F: mov     eax, 1
 * 000000014073B274: xor     edx, edx
 * 000000014073B276: mov     ecx, 49h ; 'I'
 * 000000014073B27B: wrmsr
 * 000000014073B27D: movzx   edx, byte ptr gs:898h
 * 000000014073B286: test    edx, 2
 * 000000014073B28C: jz      loc_14073B3C9
 * 000000014073B292: call    loc_14073B3A5
 * 000000014073B297: add     rsp, 8
 * 000000014073B29B: call    loc_14073B3AE
 * 000000014073B2A0: add     rsp, 8
 * 000000014073B2A4: call    loc_14073B297
 * 000000014073B2A9: add     rsp, 8
 * 000000014073B2AD: call    loc_14073B2A0
 * 000000014073B2B2: add     rsp, 8
 * 000000014073B2B6: call    loc_14073B2A9
 * 000000014073B2BB: add     rsp, 8
 * 000000014073B2BF: call    loc_14073B2B2
 * 000000014073B2C4: add     rsp, 8
 * 000000014073B2C8: call    loc_14073B2BB
 * 000000014073B2CD: add     rsp, 8
 * 000000014073B2D1: call    loc_14073B2C4
 * 000000014073B2D6: add     rsp, 8
 * 000000014073B2DA: call    loc_14073B2CD
 * 000000014073B2DF: add     rsp, 8
 * 000000014073B2E3: call    loc_14073B2D6
 * 000000014073B2E8: add     rsp, 8
 * 000000014073B2EC: call    loc_14073B2DF
 * 000000014073B2F1: add     rsp, 8
 * 000000014073B2F5: call    loc_14073B2E8
 * 000000014073B2FA: add     rsp, 8
 * 000000014073B2FE: call    loc_14073B2F1
 * 000000014073B303: add     rsp, 8
 * 000000014073B307: call    loc_14073B2FA
 * 000000014073B30C: add     rsp, 8
 * 000000014073B310: call    loc_14073B303
 * 000000014073B315: add     rsp, 8
 * 000000014073B319: call    loc_14073B30C
 * 000000014073B31E: add     rsp, 8
 * 000000014073B322: call    loc_14073B315
 * 000000014073B327: add     rsp, 8
 * 000000014073B32B: call    loc_14073B31E
 * 000000014073B330: add     rsp, 8
 * 000000014073B334: call    loc_14073B327
 * 000000014073B339: add     rsp, 8
 * 000000014073B33D: call    loc_14073B330
 * 000000014073B342: add     rsp, 8
 * 000000014073B346: call    loc_14073B339
 * 000000014073B34B: add     rsp, 8
 * 000000014073B34F: call    loc_14073B342
 * 000000014073B354: add     rsp, 8
 * 000000014073B358: call    loc_14073B34B
 * 000000014073B35D: add     rsp, 8
 * 000000014073B361: call    loc_14073B354
 * 000000014073B366: add     rsp, 8
 * 000000014073B36A: call    loc_14073B35D
 * 000000014073B36F: add     rsp, 8
 * 000000014073B373: call    loc_14073B366
 * 000000014073B378: add     rsp, 8
 * 000000014073B37C: call    loc_14073B36F
 * 000000014073B381: add     rsp, 8
 * 000000014073B385: call    loc_14073B378
 * 000000014073B38A: add     rsp, 8
 * 000000014073B38E: call    loc_14073B381
 * 000000014073B393: add     rsp, 8
 * 000000014073B397: call    loc_14073B38A
 * 000000014073B39C: add     rsp, 8
 * 000000014073B3A0: call    loc_14073B393
 * 000000014073B3A5: add     rsp, 8
 * 000000014073B3A9: call    loc_14073B39C
 * 000000014073B3AE: add     rsp, 8
 * 000000014073B3B2: mov     eax, 0DADAh
 * 000000014073B3B7: test    byte ptr gs:89Ch, 8
 * 000000014073B3C0: jz      short loc_14073B3C9
 * 000000014073B3C2: mov     al, 20h ; ' '
 * 000000014073B3C4: incsspq rax
 * 000000014073B3C9: test    edx, 80h
 * 000000014073B3CF: jz      short loc_14073B3D9
 * 000000014073B3D1: lfence
 * 000000014073B3D4: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073B3D9: lfence
 * 000000014073B3DC: mov     byte ptr gs:89Eh, 0
 * 000000014073B3E5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073B3EC: jz      short loc_14073B40D
 * 000000014073B3EE: mov     ecx, 6A7h
 * 000000014073B3F3: rdmsr
 * 000000014073B3F5: cmp     edx, 0
 * 000000014073B3F8: jz      short loc_14073B40D
 * 000000014073B3FA: mov     ecx, edx
 * 000000014073B3FC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073B402: cmp     edx, ecx
 * 000000014073B404: jz      short loc_14073B40D
 * 000000014073B406: mov     ecx, 6A7h
 * 000000014073B40B: wrmsr
 * 000000014073B40D: test    byte ptr [r10+3], 3
 * 000000014073B412: mov     word ptr [rbp+80h], 0
 * 000000014073B41B: jz      short loc_14073B422
 * 000000014073B41D: call    KiSaveDebugRegisterState
 * 000000014073B422: cld
 * 000000014073B423: stmxcsr dword ptr [rbp-54h]
 * 000000014073B427: ldmxcsr dword ptr gs:180h
 * 000000014073B430: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014073B434: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014073B438: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014073B43C: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014073B440: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014073B444: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014073B448: test    byte ptr [rbp+0F0h], 1
 * 000000014073B44F: jz      short KiSystemService32UserDispatchTrap
 * 000000014073B451: mov     r10, gs:188h
 * 000000014073B45A: test    byte ptr [r10+3], 80h
 * 000000014073B45F: jz      short KiSystemService32UserDispatchTrap
 * 000000014073B461: call    KiSynchronizeUserIsolationDomainExit
 * 000000014073B466: mov     byte ptr [rbp-55h], 1
 * 000000014073B46A: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073B471: jz      short loc_14073B494
 * 000000014073B473: test    byte ptr [rbp+0F0h], 1
 * 000000014073B47A: jnz     short loc_14073B491
 * 000000014073B47C: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073B483: jz      short loc_14073B494
 * 000000014073B485: test    dword ptr [rbp+0F8h], 40000h
 * 000000014073B48F: jz      short loc_14073B494
 * 000000014073B491: stac
 * 000000014073B494: movzx   eax, byte ptr [rbp+10Fh]
 * 000000014073B49B: shr     eax, 4
 * 000000014073B49E: sub     [rbp+0E8h], rax
 * 000000014073B4A5: cmp     word ptr [rbp+0F0h], 23h ; '#'
 * 000000014073B4AD: jnz     short loc_14073B4B6
 * 000000014073B4AF: and     dword ptr [rbp+0ECh], 0
 * 000000014073B4B6: mov     eax, [rbp+0E0h]
 * 000000014073B4BC: sti
 * 000000014073B4BD: mov     ecx, 0C000001Dh
 * 000000014073B4C2: xor     edx, edx
 * 000000014073B4C4: mov     r8, [rbp+0E8h]
 * 000000014073B4CB: call    KiExceptionDispatch
 * 000000014073B4D0: nop
 * 000000014073B4D1: retn
 */
