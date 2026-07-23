/*
 * XREFs of KiSystemService @ 0x14073FA40
 * Callers:
 *     KiSystemServiceShadow @ 0x140C5FEC0 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x14073FA40 (KiSystemService.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x14073FA40
 * Reason: Hex-Rays returned no pseudocode for 0x14073FA40
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073FA40: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014073FA46: jz      KiSystemService32User
 * 000000014073FA4C: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073FA53: jnz     short loc_14073FA58
 * 000000014073FA55: swapgs
 * 000000014073FA58: lfence
 * 000000014073FA5B: mov     rcx, gs:9D68h
 * 000000014073FA64: test    rcx, rcx
 * 000000014073FA67: jz      short loc_14073FA71
 * 000000014073FA69: rstorssp qword ptr [rcx]
 * 000000014073FA6D: saveprevssp
 * 000000014073FA71: mov     rcx, r10
 * 000000014073FA74: sub     rsp, 8
 * 000000014073FA78: push    rbp
 * 000000014073FA79: sub     rsp, 158h
 * 000000014073FA80: lea     rbp, [rsp+168h+var_E8]
 * 000000014073FA88: mov     [rbp+0C0h], rbx
 * 000000014073FA8F: mov     [rbp+0C8h], rdi
 * 000000014073FA96: mov     [rbp+0D0h], rsi
 * 000000014073FA9D: cld
 * 000000014073FA9E: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073FAA5: jz      short loc_14073FAC8
 * 000000014073FAA7: test    byte ptr [rbp+0F0h], 1
 * 000000014073FAAE: jnz     short loc_14073FAC5
 * 000000014073FAB0: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073FAB7: jz      short loc_14073FAC8
 * 000000014073FAB9: test    dword ptr [rbp+0F8h], 40000h
 * 000000014073FAC3: jz      short loc_14073FAC8
 * 000000014073FAC5: stac
 * 000000014073FAC8: mov     [rbp-50h], rax
 * 000000014073FACC: mov     [rbp-48h], rcx
 * 000000014073FAD0: mov     [rbp-40h], rdx
 * 000000014073FAD4: mov     rcx, gs:188h
 * 000000014073FADD: mov     rcx, [rcx+220h]
 * 000000014073FAE4: mov     rcx, [rcx+760h]
 * 000000014073FAEB: mov     gs:890h, rcx
 * 000000014073FAF4: mov     cx, gs:8A2h
 * 000000014073FAFD: mov     gs:8A4h, cx
 * 000000014073FB06: mov     cl, gs:898h
 * 000000014073FB0E: mov     gs:89Ah, cl
 * 000000014073FB16: movzx   eax, word ptr gs:8A8h
 * 000000014073FB1F: cmp     gs:8A6h, ax
 * 000000014073FB28: jz      short loc_14073FB3C
 * 000000014073FB2A: mov     gs:8A6h, ax
 * 000000014073FB33: mov     ecx, 48h ; 'H'
 * 000000014073FB38: xor     edx, edx
 * 000000014073FB3A: wrmsr
 * 000000014073FB3C: movzx   edx, byte ptr gs:898h
 * 000000014073FB45: test    edx, 8
 * 000000014073FB4B: jz      short loc_14073FB64
 * 000000014073FB4D: mov     eax, 1
 * 000000014073FB52: xor     edx, edx
 * 000000014073FB54: mov     ecx, 49h ; 'I'
 * 000000014073FB59: wrmsr
 * 000000014073FB5B: movzx   edx, byte ptr gs:898h
 * 000000014073FB64: test    edx, 2
 * 000000014073FB6A: jz      loc_14073FCA7
 * 000000014073FB70: call    loc_14073FC83
 * 000000014073FB75: add     rsp, 8
 * 000000014073FB79: call    loc_14073FC8C
 * 000000014073FB7E: add     rsp, 8
 * 000000014073FB82: call    loc_14073FB75
 * 000000014073FB87: add     rsp, 8
 * 000000014073FB8B: call    loc_14073FB7E
 * 000000014073FB90: add     rsp, 8
 * 000000014073FB94: call    loc_14073FB87
 * 000000014073FB99: add     rsp, 8
 * 000000014073FB9D: call    loc_14073FB90
 * 000000014073FBA2: add     rsp, 8
 * 000000014073FBA6: call    loc_14073FB99
 * 000000014073FBAB: add     rsp, 8
 * 000000014073FBAF: call    loc_14073FBA2
 * 000000014073FBB4: add     rsp, 8
 * 000000014073FBB8: call    loc_14073FBAB
 * 000000014073FBBD: add     rsp, 8
 * 000000014073FBC1: call    loc_14073FBB4
 * 000000014073FBC6: add     rsp, 8
 * 000000014073FBCA: call    loc_14073FBBD
 * 000000014073FBCF: add     rsp, 8
 * 000000014073FBD3: call    loc_14073FBC6
 * 000000014073FBD8: add     rsp, 8
 * 000000014073FBDC: call    loc_14073FBCF
 * 000000014073FBE1: add     rsp, 8
 * 000000014073FBE5: call    loc_14073FBD8
 * 000000014073FBEA: add     rsp, 8
 * 000000014073FBEE: call    loc_14073FBE1
 * 000000014073FBF3: add     rsp, 8
 * 000000014073FBF7: call    loc_14073FBEA
 * 000000014073FBFC: add     rsp, 8
 * 000000014073FC00: call    loc_14073FBF3
 * 000000014073FC05: add     rsp, 8
 * 000000014073FC09: call    loc_14073FBFC
 * 000000014073FC0E: add     rsp, 8
 * 000000014073FC12: call    loc_14073FC05
 * 000000014073FC17: add     rsp, 8
 * 000000014073FC1B: call    loc_14073FC0E
 * 000000014073FC20: add     rsp, 8
 * 000000014073FC24: call    loc_14073FC17
 * 000000014073FC29: add     rsp, 8
 * 000000014073FC2D: call    loc_14073FC20
 * 000000014073FC32: add     rsp, 8
 * 000000014073FC36: call    loc_14073FC29
 * 000000014073FC3B: add     rsp, 8
 * 000000014073FC3F: call    loc_14073FC32
 * 000000014073FC44: add     rsp, 8
 * 000000014073FC48: call    loc_14073FC3B
 * 000000014073FC4D: add     rsp, 8
 * 000000014073FC51: call    loc_14073FC44
 * 000000014073FC56: add     rsp, 8
 * 000000014073FC5A: call    loc_14073FC4D
 * 000000014073FC5F: add     rsp, 8
 * 000000014073FC63: call    loc_14073FC56
 * 000000014073FC68: add     rsp, 8
 * 000000014073FC6C: call    loc_14073FC5F
 * 000000014073FC71: add     rsp, 8
 * 000000014073FC75: call    loc_14073FC68
 * 000000014073FC7A: add     rsp, 8
 * 000000014073FC7E: call    loc_14073FC71
 * 000000014073FC83: add     rsp, 8
 * 000000014073FC87: call    loc_14073FC7A
 * 000000014073FC8C: add     rsp, 8
 * 000000014073FC90: mov     eax, 0DADAh
 * 000000014073FC95: test    byte ptr gs:89Ch, 8
 * 000000014073FC9E: jz      short loc_14073FCA7
 * 000000014073FCA0: mov     al, 20h ; ' '
 * 000000014073FCA2: incsspq rax
 * 000000014073FCA7: test    edx, 80h
 * 000000014073FCAD: jz      short loc_14073FCB7
 * 000000014073FCAF: lfence
 * 000000014073FCB2: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073FCB7: lfence
 * 000000014073FCBA: mov     byte ptr gs:89Eh, 0
 * 000000014073FCC3: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073FCCA: jz      short loc_14073FCEB
 * 000000014073FCCC: mov     ecx, 6A7h
 * 000000014073FCD1: rdmsr
 * 000000014073FCD3: cmp     edx, 0
 * 000000014073FCD6: jz      short loc_14073FCEB
 * 000000014073FCD8: mov     ecx, edx
 * 000000014073FCDA: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073FCE0: cmp     edx, ecx
 * 000000014073FCE2: jz      short loc_14073FCEB
 * 000000014073FCE4: mov     ecx, 6A7h
 * 000000014073FCE9: wrmsr
 * 000000014073FCEB: jmp     KiSystemServiceUser
 * 000000014073FCF0: retn
 */
