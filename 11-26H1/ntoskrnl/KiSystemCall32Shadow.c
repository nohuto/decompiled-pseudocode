/*
 * XREFs of KiSystemCall32Shadow @ 0x140C60E40
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall32Shadow @ 0x140C60E40 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x140C60E40
 * Reason: Hex-Rays returned no pseudocode for 0x140C60E40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140C60E40: swapgs
 * 0000000140C60E43: mov     gs:0B010h, rsp
 * 0000000140C60E4C: mov     rsp, gs:0B000h
 * 0000000140C60E55: mov     cr3, rsp
 * 0000000140C60E58: mov     rsp, gs:0B008h
 * 0000000140C60E61: push    2Bh ; '+'
 * 0000000140C60E63: push    qword ptr gs:0B010h
 * 0000000140C60E6B: push    r11
 * 0000000140C60E6D: push    23h ; '#'
 * 0000000140C60E6F: push    rcx
 * 0000000140C60E70: sub     rsp, 8
 * 0000000140C60E74: push    rbp
 * 0000000140C60E75: sub     rsp, 158h
 * 0000000140C60E7C: lea     rbp, [rsp+190h+var_110]
 * 0000000140C60E84: mov     [rbp-50h], rax
 * 0000000140C60E88: mov     [rbp-48h], rcx
 * 0000000140C60E8C: mov     [rbp-40h], rdx
 * 0000000140C60E90: mov     [rbp-38h], r8
 * 0000000140C60E94: mov     [rbp-30h], r9
 * 0000000140C60E98: mov     [rbp-28h], r10
 * 0000000140C60E9C: mov     [rbp-20h], r11
 * 0000000140C60EA0: test    byte ptr [rbp+0F0h], 1
 * 0000000140C60EA7: jnz     short loc_140C60EE1
 * 0000000140C60EA9: xor     edx, edx
 * 0000000140C60EAB: rdsspq  rdx
 * 0000000140C60EB0: mov     [rbp+58h], rdx
 * 0000000140C60EB4: lfence
 * 0000000140C60EB7: test    byte ptr gs:898h, 1
 * 0000000140C60EC0: jnz     short loc_140C60ECA
 * 0000000140C60EC2: lfence
 * 0000000140C60EC5: jmp     loc_140C61152
 * 0000000140C60ECA: movzx   eax, word ptr gs:8A6h
 * 0000000140C60ED3: mov     ecx, 48h ; 'H'
 * 0000000140C60ED8: xor     edx, edx
 * 0000000140C60EDA: wrmsr
 * 0000000140C60EDC: jmp     loc_140C61152
 * 0000000140C60EE1: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140C60EE8: jnz     short loc_140C60EED
 * 0000000140C60EEA: swapgs
 * 0000000140C60EED: lfence
 * 0000000140C60EF0: mov     rcx, gs:9D68h
 * 0000000140C60EF9: test    rcx, rcx
 * 0000000140C60EFC: jz      short loc_140C60F1D
 * 0000000140C60EFE: rdsspq  rdx
 * 0000000140C60F03: mov     r10, gs:9D60h
 * 0000000140C60F0C: add     r10, 8
 * 0000000140C60F10: cmp     rdx, r10
 * 0000000140C60F13: jnz     short loc_140C60F1D
 * 0000000140C60F15: rstorssp qword ptr [rcx]
 * 0000000140C60F19: saveprevssp
 * 0000000140C60F1D: mov     r10, gs:188h
 * 0000000140C60F26: mov     rcx, gs:188h
 * 0000000140C60F2F: mov     rcx, [rcx+220h]
 * 0000000140C60F36: mov     rcx, [rcx+760h]
 * 0000000140C60F3D: mov     gs:890h, rcx
 * 0000000140C60F46: mov     cx, gs:8A2h
 * 0000000140C60F4F: mov     gs:8A4h, cx
 * 0000000140C60F58: mov     cl, gs:898h
 * 0000000140C60F60: mov     gs:89Ah, cl
 * 0000000140C60F68: movzx   eax, word ptr gs:8A8h
 * 0000000140C60F71: cmp     gs:8A6h, ax
 * 0000000140C60F7A: jz      short loc_140C60F8E
 * 0000000140C60F7C: mov     gs:8A6h, ax
 * 0000000140C60F85: mov     ecx, 48h ; 'H'
 * 0000000140C60F8A: xor     edx, edx
 * 0000000140C60F8C: wrmsr
 * 0000000140C60F8E: movzx   edx, byte ptr gs:898h
 * 0000000140C60F97: test    edx, 8
 * 0000000140C60F9D: jz      short loc_140C60FB6
 * 0000000140C60F9F: mov     eax, 1
 * 0000000140C60FA4: xor     edx, edx
 * 0000000140C60FA6: mov     ecx, 49h ; 'I'
 * 0000000140C60FAB: wrmsr
 * 0000000140C60FAD: movzx   edx, byte ptr gs:898h
 * 0000000140C60FB6: test    edx, 2
 * 0000000140C60FBC: jz      loc_140C610F9
 * 0000000140C60FC2: call    loc_140C610D5
 * 0000000140C60FC7: add     rsp, 8
 * 0000000140C60FCB: call    loc_140C610DE
 * 0000000140C60FD0: add     rsp, 8
 * 0000000140C60FD4: call    loc_140C60FC7
 * 0000000140C60FD9: add     rsp, 8
 * 0000000140C60FDD: call    loc_140C60FD0
 * 0000000140C60FE2: add     rsp, 8
 * 0000000140C60FE6: call    loc_140C60FD9
 * 0000000140C60FEB: add     rsp, 8
 * 0000000140C60FEF: call    loc_140C60FE2
 * 0000000140C60FF4: add     rsp, 8
 * 0000000140C60FF8: call    loc_140C60FEB
 * 0000000140C60FFD: add     rsp, 8
 * 0000000140C61001: call    loc_140C60FF4
 * 0000000140C61006: add     rsp, 8
 * 0000000140C6100A: call    loc_140C60FFD
 * 0000000140C6100F: add     rsp, 8
 * 0000000140C61013: call    loc_140C61006
 * 0000000140C61018: add     rsp, 8
 * 0000000140C6101C: call    loc_140C6100F
 * 0000000140C61021: add     rsp, 8
 * 0000000140C61025: call    loc_140C61018
 * 0000000140C6102A: add     rsp, 8
 * 0000000140C6102E: call    loc_140C61021
 * 0000000140C61033: add     rsp, 8
 * 0000000140C61037: call    loc_140C6102A
 * 0000000140C6103C: add     rsp, 8
 * 0000000140C61040: call    loc_140C61033
 * 0000000140C61045: add     rsp, 8
 * 0000000140C61049: call    loc_140C6103C
 * 0000000140C6104E: add     rsp, 8
 * 0000000140C61052: call    loc_140C61045
 * 0000000140C61057: add     rsp, 8
 * 0000000140C6105B: call    loc_140C6104E
 * 0000000140C61060: add     rsp, 8
 * 0000000140C61064: call    loc_140C61057
 * 0000000140C61069: add     rsp, 8
 * 0000000140C6106D: call    loc_140C61060
 * 0000000140C61072: add     rsp, 8
 * 0000000140C61076: call    loc_140C61069
 * 0000000140C6107B: add     rsp, 8
 * 0000000140C6107F: call    loc_140C61072
 * 0000000140C61084: add     rsp, 8
 * 0000000140C61088: call    loc_140C6107B
 * 0000000140C6108D: add     rsp, 8
 * 0000000140C61091: call    loc_140C61084
 * 0000000140C61096: add     rsp, 8
 * 0000000140C6109A: call    loc_140C6108D
 * 0000000140C6109F: add     rsp, 8
 * 0000000140C610A3: call    loc_140C61096
 * 0000000140C610A8: add     rsp, 8
 * 0000000140C610AC: call    loc_140C6109F
 * 0000000140C610B1: add     rsp, 8
 * 0000000140C610B5: call    loc_140C610A8
 * 0000000140C610BA: add     rsp, 8
 * 0000000140C610BE: call    loc_140C610B1
 * 0000000140C610C3: add     rsp, 8
 * 0000000140C610C7: call    loc_140C610BA
 * 0000000140C610CC: add     rsp, 8
 * 0000000140C610D0: call    loc_140C610C3
 * 0000000140C610D5: add     rsp, 8
 * 0000000140C610D9: call    loc_140C610CC
 * 0000000140C610DE: add     rsp, 8
 * 0000000140C610E2: mov     eax, 0DADAh
 * 0000000140C610E7: test    byte ptr gs:89Ch, 8
 * 0000000140C610F0: jz      short loc_140C610F9
 * 0000000140C610F2: mov     al, 20h ; ' '
 * 0000000140C610F4: incsspq rax
 * 0000000140C610F9: test    edx, 80h
 * 0000000140C610FF: jz      short loc_140C61109
 * 0000000140C61101: lfence
 * 0000000140C61104: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140C61109: lfence
 * 0000000140C6110C: mov     byte ptr gs:89Eh, 0
 * 0000000140C61115: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140C6111C: jz      short loc_140C6113D
 * 0000000140C6111E: mov     ecx, 6A7h
 * 0000000140C61123: rdmsr
 * 0000000140C61125: cmp     edx, 0
 * 0000000140C61128: jz      short loc_140C6113D
 * 0000000140C6112A: mov     ecx, edx
 * 0000000140C6112C: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140C61132: cmp     edx, ecx
 * 0000000140C61134: jz      short loc_140C6113D
 * 0000000140C61136: mov     ecx, 6A7h
 * 0000000140C6113B: wrmsr
 * 0000000140C6113D: test    byte ptr [r10+3], 3
 * 0000000140C61142: mov     word ptr [rbp+80h], 0
 * 0000000140C6114B: jz      short loc_140C61152
 * 0000000140C6114D: call    KiSaveDebugRegisterState
 * 0000000140C61152: cld
 * 0000000140C61153: stmxcsr dword ptr [rbp-54h]
 * 0000000140C61157: ldmxcsr dword ptr gs:180h
 * 0000000140C61160: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140C61164: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140C61168: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140C6116C: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140C61170: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140C61174: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140C61178: test    byte ptr [rbp+0F0h], 1
 * 0000000140C6117F: jz      short KiSystemCall32ShadowDispatchTrap
 * 0000000140C61181: mov     r10, gs:188h
 * 0000000140C6118A: test    byte ptr [r10+3], 80h
 * 0000000140C6118F: jz      short KiSystemCall32ShadowDispatchTrap
 * 0000000140C61191: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140C61196: mov     byte ptr [rbp-55h], 1
 * 0000000140C6119A: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140C611A1: jz      short loc_140C611C4
 * 0000000140C611A3: test    byte ptr [rbp+0F0h], 1
 * 0000000140C611AA: jnz     short loc_140C611C1
 * 0000000140C611AC: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140C611B3: jz      short loc_140C611C4
 * 0000000140C611B5: test    dword ptr [rbp+0F8h], 40000h
 * 0000000140C611BF: jz      short loc_140C611C4
 * 0000000140C611C1: stac
 * 0000000140C611C4: sub     qword ptr [rbp+0E8h], 2
 * 0000000140C611CC: and     dword ptr [rbp+0ECh], 0
 * 0000000140C611D3: sti
 * 0000000140C611D4: mov     ecx, 0C000001Dh
 * 0000000140C611D9: xor     edx, edx
 * 0000000140C611DB: mov     r8, [rbp+0E8h]
 * 0000000140C611E2: call    KiExceptionDispatch
 * 0000000140C611E7: nop
 * 0000000140C611E8: retn
 */
