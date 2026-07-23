/*
 * XREFs of KiSystemCall32 @ 0x14073FD00
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x14073FD00 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x14073FD00
 * Reason: Hex-Rays returned no pseudocode for 0x14073FD00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073FD00: swapgs
 * 000000014073FD03: mov     gs:10h, rsp
 * 000000014073FD0C: mov     rsp, gs:1A8h
 * 000000014073FD15: push    2Bh ; '+'
 * 000000014073FD17: push    qword ptr gs:10h
 * 000000014073FD1F: push    r11
 * 000000014073FD21: push    23h ; '#'
 * 000000014073FD23: push    rcx
 * 000000014073FD24: cmp     qword ptr gs:9D68h, 0
 * 000000014073FD2E: jz      short loc_14073FD34
 * 000000014073FD30: setssbsy
 * 000000014073FD34: swapgs
 * 000000014073FD37: lfence
 * 000000014073FD3A: or      word ptr [rsp+27h], 20h
 * 000000014073FD40: sub     rsp, 8
 * 000000014073FD44: push    rbp
 * 000000014073FD45: sub     rsp, 158h
 * 000000014073FD4C: lea     rbp, [rsp+190h+var_110]
 * 000000014073FD54: mov     [rbp-50h], rax
 * 000000014073FD58: mov     [rbp-48h], rcx
 * 000000014073FD5C: mov     [rbp-40h], rdx
 * 000000014073FD60: mov     [rbp-38h], r8
 * 000000014073FD64: mov     [rbp-30h], r9
 * 000000014073FD68: mov     [rbp-28h], r10
 * 000000014073FD6C: mov     [rbp-20h], r11
 * 000000014073FD70: test    byte ptr [rbp+0F0h], 1
 * 000000014073FD77: jnz     short loc_14073FDB1
 * 000000014073FD79: xor     edx, edx
 * 000000014073FD7B: rdsspq  rdx
 * 000000014073FD80: mov     [rbp+58h], rdx
 * 000000014073FD84: lfence
 * 000000014073FD87: test    byte ptr gs:898h, 1
 * 000000014073FD90: jnz     short loc_14073FD9A
 * 000000014073FD92: lfence
 * 000000014073FD95: jmp     loc_140740022
 * 000000014073FD9A: movzx   eax, word ptr gs:8A6h
 * 000000014073FDA3: mov     ecx, 48h ; 'H'
 * 000000014073FDA8: xor     edx, edx
 * 000000014073FDAA: wrmsr
 * 000000014073FDAC: jmp     loc_140740022
 * 000000014073FDB1: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073FDB8: jnz     short loc_14073FDBD
 * 000000014073FDBA: swapgs
 * 000000014073FDBD: lfence
 * 000000014073FDC0: mov     rcx, gs:9D68h
 * 000000014073FDC9: test    rcx, rcx
 * 000000014073FDCC: jz      short loc_14073FDED
 * 000000014073FDCE: rdsspq  rdx
 * 000000014073FDD3: mov     r10, gs:9D60h
 * 000000014073FDDC: add     r10, 8
 * 000000014073FDE0: cmp     rdx, r10
 * 000000014073FDE3: jnz     short loc_14073FDED
 * 000000014073FDE5: rstorssp qword ptr [rcx]
 * 000000014073FDE9: saveprevssp
 * 000000014073FDED: mov     r10, gs:188h
 * 000000014073FDF6: mov     rcx, gs:188h
 * 000000014073FDFF: mov     rcx, [rcx+220h]
 * 000000014073FE06: mov     rcx, [rcx+760h]
 * 000000014073FE0D: mov     gs:890h, rcx
 * 000000014073FE16: mov     cx, gs:8A2h
 * 000000014073FE1F: mov     gs:8A4h, cx
 * 000000014073FE28: mov     cl, gs:898h
 * 000000014073FE30: mov     gs:89Ah, cl
 * 000000014073FE38: movzx   eax, word ptr gs:8A8h
 * 000000014073FE41: cmp     gs:8A6h, ax
 * 000000014073FE4A: jz      short loc_14073FE5E
 * 000000014073FE4C: mov     gs:8A6h, ax
 * 000000014073FE55: mov     ecx, 48h ; 'H'
 * 000000014073FE5A: xor     edx, edx
 * 000000014073FE5C: wrmsr
 * 000000014073FE5E: movzx   edx, byte ptr gs:898h
 * 000000014073FE67: test    edx, 8
 * 000000014073FE6D: jz      short loc_14073FE86
 * 000000014073FE6F: mov     eax, 1
 * 000000014073FE74: xor     edx, edx
 * 000000014073FE76: mov     ecx, 49h ; 'I'
 * 000000014073FE7B: wrmsr
 * 000000014073FE7D: movzx   edx, byte ptr gs:898h
 * 000000014073FE86: test    edx, 2
 * 000000014073FE8C: jz      loc_14073FFC9
 * 000000014073FE92: call    loc_14073FFA5
 * 000000014073FE97: add     rsp, 8
 * 000000014073FE9B: call    loc_14073FFAE
 * 000000014073FEA0: add     rsp, 8
 * 000000014073FEA4: call    loc_14073FE97
 * 000000014073FEA9: add     rsp, 8
 * 000000014073FEAD: call    loc_14073FEA0
 * 000000014073FEB2: add     rsp, 8
 * 000000014073FEB6: call    loc_14073FEA9
 * 000000014073FEBB: add     rsp, 8
 * 000000014073FEBF: call    loc_14073FEB2
 * 000000014073FEC4: add     rsp, 8
 * 000000014073FEC8: call    loc_14073FEBB
 * 000000014073FECD: add     rsp, 8
 * 000000014073FED1: call    loc_14073FEC4
 * 000000014073FED6: add     rsp, 8
 * 000000014073FEDA: call    loc_14073FECD
 * 000000014073FEDF: add     rsp, 8
 * 000000014073FEE3: call    loc_14073FED6
 * 000000014073FEE8: add     rsp, 8
 * 000000014073FEEC: call    loc_14073FEDF
 * 000000014073FEF1: add     rsp, 8
 * 000000014073FEF5: call    loc_14073FEE8
 * 000000014073FEFA: add     rsp, 8
 * 000000014073FEFE: call    loc_14073FEF1
 * 000000014073FF03: add     rsp, 8
 * 000000014073FF07: call    loc_14073FEFA
 * 000000014073FF0C: add     rsp, 8
 * 000000014073FF10: call    loc_14073FF03
 * 000000014073FF15: add     rsp, 8
 * 000000014073FF19: call    loc_14073FF0C
 * 000000014073FF1E: add     rsp, 8
 * 000000014073FF22: call    loc_14073FF15
 * 000000014073FF27: add     rsp, 8
 * 000000014073FF2B: call    loc_14073FF1E
 * 000000014073FF30: add     rsp, 8
 * 000000014073FF34: call    loc_14073FF27
 * 000000014073FF39: add     rsp, 8
 * 000000014073FF3D: call    loc_14073FF30
 * 000000014073FF42: add     rsp, 8
 * 000000014073FF46: call    loc_14073FF39
 * 000000014073FF4B: add     rsp, 8
 * 000000014073FF4F: call    loc_14073FF42
 * 000000014073FF54: add     rsp, 8
 * 000000014073FF58: call    loc_14073FF4B
 * 000000014073FF5D: add     rsp, 8
 * 000000014073FF61: call    loc_14073FF54
 * 000000014073FF66: add     rsp, 8
 * 000000014073FF6A: call    loc_14073FF5D
 * 000000014073FF6F: add     rsp, 8
 * 000000014073FF73: call    loc_14073FF66
 * 000000014073FF78: add     rsp, 8
 * 000000014073FF7C: call    loc_14073FF6F
 * 000000014073FF81: add     rsp, 8
 * 000000014073FF85: call    loc_14073FF78
 * 000000014073FF8A: add     rsp, 8
 * 000000014073FF8E: call    loc_14073FF81
 * 000000014073FF93: add     rsp, 8
 * 000000014073FF97: call    loc_14073FF8A
 * 000000014073FF9C: add     rsp, 8
 * 000000014073FFA0: call    loc_14073FF93
 * 000000014073FFA5: add     rsp, 8
 * 000000014073FFA9: call    loc_14073FF9C
 * 000000014073FFAE: add     rsp, 8
 * 000000014073FFB2: mov     eax, 0DADAh
 * 000000014073FFB7: test    byte ptr gs:89Ch, 8
 * 000000014073FFC0: jz      short loc_14073FFC9
 * 000000014073FFC2: mov     al, 20h ; ' '
 * 000000014073FFC4: incsspq rax
 * 000000014073FFC9: test    edx, 80h
 * 000000014073FFCF: jz      short loc_14073FFD9
 * 000000014073FFD1: lfence
 * 000000014073FFD4: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073FFD9: lfence
 * 000000014073FFDC: mov     byte ptr gs:89Eh, 0
 * 000000014073FFE5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073FFEC: jz      short loc_14074000D
 * 000000014073FFEE: mov     ecx, 6A7h
 * 000000014073FFF3: rdmsr
 * 000000014073FFF5: cmp     edx, 0
 * 000000014073FFF8: jz      short loc_14074000D
 * 000000014073FFFA: mov     ecx, edx
 * 000000014073FFFC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140740002: cmp     edx, ecx
 * 0000000140740004: jz      short loc_14074000D
 * 0000000140740006: mov     ecx, 6A7h
 * 000000014074000B: wrmsr
 * 000000014074000D: test    byte ptr [r10+3], 3
 * 0000000140740012: mov     word ptr [rbp+80h], 0
 * 000000014074001B: jz      short loc_140740022
 * 000000014074001D: call    KiSaveDebugRegisterState
 * 0000000140740022: cld
 * 0000000140740023: stmxcsr dword ptr [rbp-54h]
 * 0000000140740027: ldmxcsr dword ptr gs:180h
 * 0000000140740030: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140740034: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140740038: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014074003C: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140740040: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140740044: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140740048: test    byte ptr [rbp+0F0h], 1
 * 000000014074004F: jz      short KiSystemService32UserDispatchTrap
 * 0000000140740051: mov     r10, gs:188h
 * 000000014074005A: test    byte ptr [r10+3], 80h
 * 000000014074005F: jz      short KiSystemService32UserDispatchTrap
 * 0000000140740061: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140740066: mov     byte ptr [rbp-55h], 1
 * 000000014074006A: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140740071: jz      short loc_140740094
 * 0000000140740073: test    byte ptr [rbp+0F0h], 1
 * 000000014074007A: jnz     short loc_140740091
 * 000000014074007C: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140740083: jz      short loc_140740094
 * 0000000140740085: test    dword ptr [rbp+0F8h], 40000h
 * 000000014074008F: jz      short loc_140740094
 * 0000000140740091: stac
 * 0000000140740094: movzx   eax, byte ptr [rbp+10Fh]
 * 000000014074009B: shr     eax, 4
 * 000000014074009E: sub     [rbp+0E8h], rax
 * 00000001407400A5: cmp     word ptr [rbp+0F0h], 23h ; '#'
 * 00000001407400AD: jnz     short loc_1407400B6
 * 00000001407400AF: and     dword ptr [rbp+0ECh], 0
 * 00000001407400B6: mov     eax, [rbp+0E0h]
 * 00000001407400BC: sti
 * 00000001407400BD: mov     ecx, 0C000001Dh
 * 00000001407400C2: xor     edx, edx
 * 00000001407400C4: mov     r8, [rbp+0E8h]
 * 00000001407400CB: call    KiExceptionDispatch
 * 00000001407400D0: nop
 * 00000001407400D1: retn
 */
