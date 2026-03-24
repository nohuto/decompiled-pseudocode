/*
 * XREFs of KiSystemService @ 0x14073AE40
 * Callers:
 *     KiSystemServiceShadow @ 0x140C59EC0 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x14073AE40 (KiSystemService.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x14073AE40
 * Reason: Hex-Rays returned no pseudocode for 0x14073AE40
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073AE40: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014073AE46: jz      KiSystemService32User
 * 000000014073AE4C: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073AE53: jnz     short loc_14073AE58
 * 000000014073AE55: swapgs
 * 000000014073AE58: lfence
 * 000000014073AE5B: mov     rcx, gs:9D68h
 * 000000014073AE64: test    rcx, rcx
 * 000000014073AE67: jz      short loc_14073AE71
 * 000000014073AE69: rstorssp qword ptr [rcx]
 * 000000014073AE6D: saveprevssp
 * 000000014073AE71: mov     rcx, r10
 * 000000014073AE74: sub     rsp, 8
 * 000000014073AE78: push    rbp
 * 000000014073AE79: sub     rsp, 158h
 * 000000014073AE80: lea     rbp, [rsp+168h+var_E8]
 * 000000014073AE88: mov     [rbp+0C0h], rbx
 * 000000014073AE8F: mov     [rbp+0C8h], rdi
 * 000000014073AE96: mov     [rbp+0D0h], rsi
 * 000000014073AE9D: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073AEA4: jz      short loc_14073AEC7
 * 000000014073AEA6: test    byte ptr [rbp+0F0h], 1
 * 000000014073AEAD: jnz     short loc_14073AEC4
 * 000000014073AEAF: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073AEB6: jz      short loc_14073AEC7
 * 000000014073AEB8: test    dword ptr [rbp+0F8h], 40000h
 * 000000014073AEC2: jz      short loc_14073AEC7
 * 000000014073AEC4: stac
 * 000000014073AEC7: mov     [rbp-50h], rax
 * 000000014073AECB: mov     [rbp-48h], rcx
 * 000000014073AECF: mov     [rbp-40h], rdx
 * 000000014073AED3: mov     rcx, gs:188h
 * 000000014073AEDC: mov     rcx, [rcx+220h]
 * 000000014073AEE3: mov     rcx, [rcx+760h]
 * 000000014073AEEA: mov     gs:890h, rcx
 * 000000014073AEF3: mov     cx, gs:8A2h
 * 000000014073AEFC: mov     gs:8A4h, cx
 * 000000014073AF05: mov     cl, gs:898h
 * 000000014073AF0D: mov     gs:89Ah, cl
 * 000000014073AF15: movzx   eax, word ptr gs:8A8h
 * 000000014073AF1E: cmp     gs:8A6h, ax
 * 000000014073AF27: jz      short loc_14073AF3B
 * 000000014073AF29: mov     gs:8A6h, ax
 * 000000014073AF32: mov     ecx, 48h ; 'H'
 * 000000014073AF37: xor     edx, edx
 * 000000014073AF39: wrmsr
 * 000000014073AF3B: movzx   edx, byte ptr gs:898h
 * 000000014073AF44: test    edx, 8
 * 000000014073AF4A: jz      short loc_14073AF63
 * 000000014073AF4C: mov     eax, 1
 * 000000014073AF51: xor     edx, edx
 * 000000014073AF53: mov     ecx, 49h ; 'I'
 * 000000014073AF58: wrmsr
 * 000000014073AF5A: movzx   edx, byte ptr gs:898h
 * 000000014073AF63: test    edx, 2
 * 000000014073AF69: jz      loc_14073B0A6
 * 000000014073AF6F: call    loc_14073B082
 * 000000014073AF74: add     rsp, 8
 * 000000014073AF78: call    loc_14073B08B
 * 000000014073AF7D: add     rsp, 8
 * 000000014073AF81: call    loc_14073AF74
 * 000000014073AF86: add     rsp, 8
 * 000000014073AF8A: call    loc_14073AF7D
 * 000000014073AF8F: add     rsp, 8
 * 000000014073AF93: call    loc_14073AF86
 * 000000014073AF98: add     rsp, 8
 * 000000014073AF9C: call    loc_14073AF8F
 * 000000014073AFA1: add     rsp, 8
 * 000000014073AFA5: call    loc_14073AF98
 * 000000014073AFAA: add     rsp, 8
 * 000000014073AFAE: call    loc_14073AFA1
 * 000000014073AFB3: add     rsp, 8
 * 000000014073AFB7: call    loc_14073AFAA
 * 000000014073AFBC: add     rsp, 8
 * 000000014073AFC0: call    loc_14073AFB3
 * 000000014073AFC5: add     rsp, 8
 * 000000014073AFC9: call    loc_14073AFBC
 * 000000014073AFCE: add     rsp, 8
 * 000000014073AFD2: call    loc_14073AFC5
 * 000000014073AFD7: add     rsp, 8
 * 000000014073AFDB: call    loc_14073AFCE
 * 000000014073AFE0: add     rsp, 8
 * 000000014073AFE4: call    loc_14073AFD7
 * 000000014073AFE9: add     rsp, 8
 * 000000014073AFED: call    loc_14073AFE0
 * 000000014073AFF2: add     rsp, 8
 * 000000014073AFF6: call    loc_14073AFE9
 * 000000014073AFFB: add     rsp, 8
 * 000000014073AFFF: call    loc_14073AFF2
 * 000000014073B004: add     rsp, 8
 * 000000014073B008: call    loc_14073AFFB
 * 000000014073B00D: add     rsp, 8
 * 000000014073B011: call    loc_14073B004
 * 000000014073B016: add     rsp, 8
 * 000000014073B01A: call    loc_14073B00D
 * 000000014073B01F: add     rsp, 8
 * 000000014073B023: call    loc_14073B016
 * 000000014073B028: add     rsp, 8
 * 000000014073B02C: call    loc_14073B01F
 * 000000014073B031: add     rsp, 8
 * 000000014073B035: call    loc_14073B028
 * 000000014073B03A: add     rsp, 8
 * 000000014073B03E: call    loc_14073B031
 * 000000014073B043: add     rsp, 8
 * 000000014073B047: call    loc_14073B03A
 * 000000014073B04C: add     rsp, 8
 * 000000014073B050: call    loc_14073B043
 * 000000014073B055: add     rsp, 8
 * 000000014073B059: call    loc_14073B04C
 * 000000014073B05E: add     rsp, 8
 * 000000014073B062: call    loc_14073B055
 * 000000014073B067: add     rsp, 8
 * 000000014073B06B: call    loc_14073B05E
 * 000000014073B070: add     rsp, 8
 * 000000014073B074: call    loc_14073B067
 * 000000014073B079: add     rsp, 8
 * 000000014073B07D: call    loc_14073B070
 * 000000014073B082: add     rsp, 8
 * 000000014073B086: call    loc_14073B079
 * 000000014073B08B: add     rsp, 8
 * 000000014073B08F: mov     eax, 0DADAh
 * 000000014073B094: test    byte ptr gs:89Ch, 8
 * 000000014073B09D: jz      short loc_14073B0A6
 * 000000014073B09F: mov     al, 20h ; ' '
 * 000000014073B0A1: incsspq rax
 * 000000014073B0A6: test    edx, 80h
 * 000000014073B0AC: jz      short loc_14073B0B6
 * 000000014073B0AE: lfence
 * 000000014073B0B1: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073B0B6: lfence
 * 000000014073B0B9: mov     byte ptr gs:89Eh, 0
 * 000000014073B0C2: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073B0C9: jz      short loc_14073B0EA
 * 000000014073B0CB: mov     ecx, 6A7h
 * 000000014073B0D0: rdmsr
 * 000000014073B0D2: cmp     edx, 0
 * 000000014073B0D5: jz      short loc_14073B0EA
 * 000000014073B0D7: mov     ecx, edx
 * 000000014073B0D9: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073B0DF: cmp     edx, ecx
 * 000000014073B0E1: jz      short loc_14073B0EA
 * 000000014073B0E3: mov     ecx, 6A7h
 * 000000014073B0E8: wrmsr
 * 000000014073B0EA: jmp     KiSystemServiceUser
 * 000000014073B0EF: retn
 */
