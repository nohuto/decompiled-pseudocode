/*
 * XREFs of KiSystemCall32Shadow @ 0x140C5AE40
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall32Shadow @ 0x140C5AE40 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x140C5AE40
 * Reason: Hex-Rays returned no pseudocode for 0x140C5AE40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140C5AE40: swapgs
 * 0000000140C5AE43: mov     gs:0B010h, rsp
 * 0000000140C5AE4C: mov     rsp, gs:0B000h
 * 0000000140C5AE55: mov     cr3, rsp
 * 0000000140C5AE58: mov     rsp, gs:0B008h
 * 0000000140C5AE61: push    2Bh ; '+'
 * 0000000140C5AE63: push    qword ptr gs:0B010h
 * 0000000140C5AE6B: push    r11
 * 0000000140C5AE6D: push    23h ; '#'
 * 0000000140C5AE6F: push    rcx
 * 0000000140C5AE70: sub     rsp, 8
 * 0000000140C5AE74: push    rbp
 * 0000000140C5AE75: sub     rsp, 158h
 * 0000000140C5AE7C: lea     rbp, [rsp+190h+var_110]
 * 0000000140C5AE84: mov     [rbp-50h], rax
 * 0000000140C5AE88: mov     [rbp-48h], rcx
 * 0000000140C5AE8C: mov     [rbp-40h], rdx
 * 0000000140C5AE90: mov     [rbp-38h], r8
 * 0000000140C5AE94: mov     [rbp-30h], r9
 * 0000000140C5AE98: mov     [rbp-28h], r10
 * 0000000140C5AE9C: mov     [rbp-20h], r11
 * 0000000140C5AEA0: test    byte ptr [rbp+0F0h], 1
 * 0000000140C5AEA7: jnz     short loc_140C5AEE1
 * 0000000140C5AEA9: xor     edx, edx
 * 0000000140C5AEAB: rdsspq  rdx
 * 0000000140C5AEB0: mov     [rbp+58h], rdx
 * 0000000140C5AEB4: lfence
 * 0000000140C5AEB7: test    byte ptr gs:898h, 1
 * 0000000140C5AEC0: jnz     short loc_140C5AECA
 * 0000000140C5AEC2: lfence
 * 0000000140C5AEC5: jmp     loc_140C5B152
 * 0000000140C5AECA: movzx   eax, word ptr gs:8A6h
 * 0000000140C5AED3: mov     ecx, 48h ; 'H'
 * 0000000140C5AED8: xor     edx, edx
 * 0000000140C5AEDA: wrmsr
 * 0000000140C5AEDC: jmp     loc_140C5B152
 * 0000000140C5AEE1: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140C5AEE8: jnz     short loc_140C5AEED
 * 0000000140C5AEEA: swapgs
 * 0000000140C5AEED: lfence
 * 0000000140C5AEF0: mov     rcx, gs:9D68h
 * 0000000140C5AEF9: test    rcx, rcx
 * 0000000140C5AEFC: jz      short loc_140C5AF1D
 * 0000000140C5AEFE: rdsspq  rdx
 * 0000000140C5AF03: mov     r10, gs:9D60h
 * 0000000140C5AF0C: add     r10, 8
 * 0000000140C5AF10: cmp     rdx, r10
 * 0000000140C5AF13: jnz     short loc_140C5AF1D
 * 0000000140C5AF15: rstorssp qword ptr [rcx]
 * 0000000140C5AF19: saveprevssp
 * 0000000140C5AF1D: mov     r10, gs:188h
 * 0000000140C5AF26: mov     rcx, gs:188h
 * 0000000140C5AF2F: mov     rcx, [rcx+220h]
 * 0000000140C5AF36: mov     rcx, [rcx+760h]
 * 0000000140C5AF3D: mov     gs:890h, rcx
 * 0000000140C5AF46: mov     cx, gs:8A2h
 * 0000000140C5AF4F: mov     gs:8A4h, cx
 * 0000000140C5AF58: mov     cl, gs:898h
 * 0000000140C5AF60: mov     gs:89Ah, cl
 * 0000000140C5AF68: movzx   eax, word ptr gs:8A8h
 * 0000000140C5AF71: cmp     gs:8A6h, ax
 * 0000000140C5AF7A: jz      short loc_140C5AF8E
 * 0000000140C5AF7C: mov     gs:8A6h, ax
 * 0000000140C5AF85: mov     ecx, 48h ; 'H'
 * 0000000140C5AF8A: xor     edx, edx
 * 0000000140C5AF8C: wrmsr
 * 0000000140C5AF8E: movzx   edx, byte ptr gs:898h
 * 0000000140C5AF97: test    edx, 8
 * 0000000140C5AF9D: jz      short loc_140C5AFB6
 * 0000000140C5AF9F: mov     eax, 1
 * 0000000140C5AFA4: xor     edx, edx
 * 0000000140C5AFA6: mov     ecx, 49h ; 'I'
 * 0000000140C5AFAB: wrmsr
 * 0000000140C5AFAD: movzx   edx, byte ptr gs:898h
 * 0000000140C5AFB6: test    edx, 2
 * 0000000140C5AFBC: jz      loc_140C5B0F9
 * 0000000140C5AFC2: call    loc_140C5B0D5
 * 0000000140C5AFC7: add     rsp, 8
 * 0000000140C5AFCB: call    loc_140C5B0DE
 * 0000000140C5AFD0: add     rsp, 8
 * 0000000140C5AFD4: call    loc_140C5AFC7
 * 0000000140C5AFD9: add     rsp, 8
 * 0000000140C5AFDD: call    loc_140C5AFD0
 * 0000000140C5AFE2: add     rsp, 8
 * 0000000140C5AFE6: call    loc_140C5AFD9
 * 0000000140C5AFEB: add     rsp, 8
 * 0000000140C5AFEF: call    loc_140C5AFE2
 * 0000000140C5AFF4: add     rsp, 8
 * 0000000140C5AFF8: call    loc_140C5AFEB
 * 0000000140C5AFFD: add     rsp, 8
 * 0000000140C5B001: call    loc_140C5AFF4
 * 0000000140C5B006: add     rsp, 8
 * 0000000140C5B00A: call    loc_140C5AFFD
 * 0000000140C5B00F: add     rsp, 8
 * 0000000140C5B013: call    loc_140C5B006
 * 0000000140C5B018: add     rsp, 8
 * 0000000140C5B01C: call    loc_140C5B00F
 * 0000000140C5B021: add     rsp, 8
 * 0000000140C5B025: call    loc_140C5B018
 * 0000000140C5B02A: add     rsp, 8
 * 0000000140C5B02E: call    loc_140C5B021
 * 0000000140C5B033: add     rsp, 8
 * 0000000140C5B037: call    loc_140C5B02A
 * 0000000140C5B03C: add     rsp, 8
 * 0000000140C5B040: call    loc_140C5B033
 * 0000000140C5B045: add     rsp, 8
 * 0000000140C5B049: call    loc_140C5B03C
 * 0000000140C5B04E: add     rsp, 8
 * 0000000140C5B052: call    loc_140C5B045
 * 0000000140C5B057: add     rsp, 8
 * 0000000140C5B05B: call    loc_140C5B04E
 * 0000000140C5B060: add     rsp, 8
 * 0000000140C5B064: call    loc_140C5B057
 * 0000000140C5B069: add     rsp, 8
 * 0000000140C5B06D: call    loc_140C5B060
 * 0000000140C5B072: add     rsp, 8
 * 0000000140C5B076: call    loc_140C5B069
 * 0000000140C5B07B: add     rsp, 8
 * 0000000140C5B07F: call    loc_140C5B072
 * 0000000140C5B084: add     rsp, 8
 * 0000000140C5B088: call    loc_140C5B07B
 * 0000000140C5B08D: add     rsp, 8
 * 0000000140C5B091: call    loc_140C5B084
 * 0000000140C5B096: add     rsp, 8
 * 0000000140C5B09A: call    loc_140C5B08D
 * 0000000140C5B09F: add     rsp, 8
 * 0000000140C5B0A3: call    loc_140C5B096
 * 0000000140C5B0A8: add     rsp, 8
 * 0000000140C5B0AC: call    loc_140C5B09F
 * 0000000140C5B0B1: add     rsp, 8
 * 0000000140C5B0B5: call    loc_140C5B0A8
 * 0000000140C5B0BA: add     rsp, 8
 * 0000000140C5B0BE: call    loc_140C5B0B1
 * 0000000140C5B0C3: add     rsp, 8
 * 0000000140C5B0C7: call    loc_140C5B0BA
 * 0000000140C5B0CC: add     rsp, 8
 * 0000000140C5B0D0: call    loc_140C5B0C3
 * 0000000140C5B0D5: add     rsp, 8
 * 0000000140C5B0D9: call    loc_140C5B0CC
 * 0000000140C5B0DE: add     rsp, 8
 * 0000000140C5B0E2: mov     eax, 0DADAh
 * 0000000140C5B0E7: test    byte ptr gs:89Ch, 8
 * 0000000140C5B0F0: jz      short loc_140C5B0F9
 * 0000000140C5B0F2: mov     al, 20h ; ' '
 * 0000000140C5B0F4: incsspq rax
 * 0000000140C5B0F9: test    edx, 80h
 * 0000000140C5B0FF: jz      short loc_140C5B109
 * 0000000140C5B101: lfence
 * 0000000140C5B104: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140C5B109: lfence
 * 0000000140C5B10C: mov     byte ptr gs:89Eh, 0
 * 0000000140C5B115: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140C5B11C: jz      short loc_140C5B13D
 * 0000000140C5B11E: mov     ecx, 6A7h
 * 0000000140C5B123: rdmsr
 * 0000000140C5B125: cmp     edx, 0
 * 0000000140C5B128: jz      short loc_140C5B13D
 * 0000000140C5B12A: mov     ecx, edx
 * 0000000140C5B12C: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140C5B132: cmp     edx, ecx
 * 0000000140C5B134: jz      short loc_140C5B13D
 * 0000000140C5B136: mov     ecx, 6A7h
 * 0000000140C5B13B: wrmsr
 * 0000000140C5B13D: test    byte ptr [r10+3], 3
 * 0000000140C5B142: mov     word ptr [rbp+80h], 0
 * 0000000140C5B14B: jz      short loc_140C5B152
 * 0000000140C5B14D: call    KiSaveDebugRegisterState
 * 0000000140C5B152: cld
 * 0000000140C5B153: stmxcsr dword ptr [rbp-54h]
 * 0000000140C5B157: ldmxcsr dword ptr gs:180h
 * 0000000140C5B160: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140C5B164: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140C5B168: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140C5B16C: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140C5B170: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140C5B174: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140C5B178: test    byte ptr [rbp+0F0h], 1
 * 0000000140C5B17F: jz      short KiSystemCall32ShadowDispatchTrap
 * 0000000140C5B181: mov     r10, gs:188h
 * 0000000140C5B18A: test    byte ptr [r10+3], 80h
 * 0000000140C5B18F: jz      short KiSystemCall32ShadowDispatchTrap
 * 0000000140C5B191: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140C5B196: mov     byte ptr [rbp-55h], 1
 * 0000000140C5B19A: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140C5B1A1: jz      short loc_140C5B1C4
 * 0000000140C5B1A3: test    byte ptr [rbp+0F0h], 1
 * 0000000140C5B1AA: jnz     short loc_140C5B1C1
 * 0000000140C5B1AC: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140C5B1B3: jz      short loc_140C5B1C4
 * 0000000140C5B1B5: test    dword ptr [rbp+0F8h], 40000h
 * 0000000140C5B1BF: jz      short loc_140C5B1C4
 * 0000000140C5B1C1: stac
 * 0000000140C5B1C4: sub     qword ptr [rbp+0E8h], 2
 * 0000000140C5B1CC: and     dword ptr [rbp+0ECh], 0
 * 0000000140C5B1D3: sti
 * 0000000140C5B1D4: mov     ecx, 0C000001Dh
 * 0000000140C5B1D9: xor     edx, edx
 * 0000000140C5B1DB: mov     r8, [rbp+0E8h]
 * 0000000140C5B1E2: call    KiExceptionDispatch
 * 0000000140C5B1E7: nop
 * 0000000140C5B1E8: retn
 */
