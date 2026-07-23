/*
 * XREFs of KiPageFault @ 0x14073BC80
 * Callers:
 *     KiPageFaultShadow @ 0x140C5F840 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiCheckForSListAddress @ 0x140419940 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     PsWatchWorkingSet @ 0x140476780 (PsWatchWorkingSet.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x14073BC80 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x1407410C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x14073BC80
 * Reason: Hex-Rays returned no pseudocode for 0x14073BC80
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073BC80: push    rbp
 * 000000014073BC81: sub     rsp, 158h
 * 000000014073BC88: lea     rbp, [rsp+80h]
 * 000000014073BC90: mov     [rbp+0D8h+var_128], rax
 * 000000014073BC94: mov     [rbp+0D8h+var_120], rcx
 * 000000014073BC98: mov     [rbp+0D8h+var_118], rdx
 * 000000014073BC9C: mov     [rbp+0D8h+var_110], r8
 * 000000014073BCA0: mov     [rbp+0D8h+var_108], r9
 * 000000014073BCA4: mov     [rbp+0D8h+var_100], r10
 * 000000014073BCA8: mov     [rbp+0D8h+var_F8], r11
 * 000000014073BCAC: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014073BCB3: jnz     short loc_14073BCED
 * 000000014073BCB5: xor     edx, edx
 * 000000014073BCB7: rdsspq  rdx
 * 000000014073BCBC: mov     [rbp+0D8h+var_80], rdx
 * 000000014073BCC0: lfence
 * 000000014073BCC3: test    byte ptr gs:898h, 1
 * 000000014073BCCC: jnz     short loc_14073BCD6
 * 000000014073BCCE: lfence
 * 000000014073BCD1: jmp     loc_14073BF5E
 * 000000014073BCD6: movzx   eax, word ptr gs:8A6h
 * 000000014073BCDF: mov     ecx, 48h ; 'H'
 * 000000014073BCE4: xor     edx, edx
 * 000000014073BCE6: wrmsr
 * 000000014073BCE8: jmp     loc_14073BF5E
 * 000000014073BCED: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073BCF4: jnz     short loc_14073BCF9
 * 000000014073BCF6: swapgs
 * 000000014073BCF9: lfence
 * 000000014073BCFC: mov     rcx, gs:9D68h
 * 000000014073BD05: test    rcx, rcx
 * 000000014073BD08: jz      short loc_14073BD29
 * 000000014073BD0A: rdsspq  rdx
 * 000000014073BD0F: mov     r10, gs:9D60h
 * 000000014073BD18: add     r10, 8
 * 000000014073BD1C: cmp     rdx, r10
 * 000000014073BD1F: jnz     short loc_14073BD29
 * 000000014073BD21: rstorssp qword ptr [rcx]
 * 000000014073BD25: saveprevssp
 * 000000014073BD29: mov     r10, gs:188h
 * 000000014073BD32: mov     rcx, gs:188h
 * 000000014073BD3B: mov     rcx, [rcx+220h]
 * 000000014073BD42: mov     rcx, [rcx+760h]
 * 000000014073BD49: mov     gs:890h, rcx
 * 000000014073BD52: mov     cx, gs:8A2h
 * 000000014073BD5B: mov     gs:8A4h, cx
 * 000000014073BD64: mov     cl, gs:898h
 * 000000014073BD6C: mov     gs:89Ah, cl
 * 000000014073BD74: movzx   eax, word ptr gs:8A8h
 * 000000014073BD7D: cmp     gs:8A6h, ax
 * 000000014073BD86: jz      short loc_14073BD9A
 * 000000014073BD88: mov     gs:8A6h, ax
 * 000000014073BD91: mov     ecx, 48h ; 'H'
 * 000000014073BD96: xor     edx, edx
 * 000000014073BD98: wrmsr
 * 000000014073BD9A: movzx   edx, byte ptr gs:898h
 * 000000014073BDA3: test    edx, 8
 * 000000014073BDA9: jz      short loc_14073BDC2
 * 000000014073BDAB: mov     eax, 1
 * 000000014073BDB0: xor     edx, edx
 * 000000014073BDB2: mov     ecx, 49h ; 'I'
 * 000000014073BDB7: wrmsr
 * 000000014073BDB9: movzx   edx, byte ptr gs:898h
 * 000000014073BDC2: test    edx, 2
 * 000000014073BDC8: jz      loc_14073BF05
 * 000000014073BDCE: call    loc_14073BEE1
 * 000000014073BDD3: add     rsp, 8
 * 000000014073BDD7: call    loc_14073BEEA
 * 000000014073BDDC: add     rsp, 8
 * 000000014073BDE0: call    loc_14073BDD3
 * 000000014073BDE5: add     rsp, 8
 * 000000014073BDE9: call    loc_14073BDDC
 * 000000014073BDEE: add     rsp, 8
 * 000000014073BDF2: call    loc_14073BDE5
 * 000000014073BDF7: add     rsp, 8
 * 000000014073BDFB: call    loc_14073BDEE
 * 000000014073BE00: add     rsp, 8
 * 000000014073BE04: call    loc_14073BDF7
 * 000000014073BE09: add     rsp, 8
 * 000000014073BE0D: call    loc_14073BE00
 * 000000014073BE12: add     rsp, 8
 * 000000014073BE16: call    loc_14073BE09
 * 000000014073BE1B: add     rsp, 8
 * 000000014073BE1F: call    loc_14073BE12
 * 000000014073BE24: add     rsp, 8
 * 000000014073BE28: call    loc_14073BE1B
 * 000000014073BE2D: add     rsp, 8
 * 000000014073BE31: call    loc_14073BE24
 * 000000014073BE36: add     rsp, 8
 * 000000014073BE3A: call    loc_14073BE2D
 * 000000014073BE3F: add     rsp, 8
 * 000000014073BE43: call    loc_14073BE36
 * 000000014073BE48: add     rsp, 8
 * 000000014073BE4C: call    loc_14073BE3F
 * 000000014073BE51: add     rsp, 8
 * 000000014073BE55: call    loc_14073BE48
 * 000000014073BE5A: add     rsp, 8
 * 000000014073BE5E: call    loc_14073BE51
 * 000000014073BE63: add     rsp, 8
 * 000000014073BE67: call    loc_14073BE5A
 * 000000014073BE6C: add     rsp, 8
 * 000000014073BE70: call    loc_14073BE63
 * 000000014073BE75: add     rsp, 8
 * 000000014073BE79: call    loc_14073BE6C
 * 000000014073BE7E: add     rsp, 8
 * 000000014073BE82: call    loc_14073BE75
 * 000000014073BE87: add     rsp, 8
 * 000000014073BE8B: call    loc_14073BE7E
 * 000000014073BE90: add     rsp, 8
 * 000000014073BE94: call    loc_14073BE87
 * 000000014073BE99: add     rsp, 8
 * 000000014073BE9D: call    loc_14073BE90
 * 000000014073BEA2: add     rsp, 8
 * 000000014073BEA6: call    loc_14073BE99
 * 000000014073BEAB: add     rsp, 8
 * 000000014073BEAF: call    loc_14073BEA2
 * 000000014073BEB4: add     rsp, 8
 * 000000014073BEB8: call    loc_14073BEAB
 * 000000014073BEBD: add     rsp, 8
 * 000000014073BEC1: call    loc_14073BEB4
 * 000000014073BEC6: add     rsp, 8
 * 000000014073BECA: call    loc_14073BEBD
 * 000000014073BECF: add     rsp, 8
 * 000000014073BED3: call    loc_14073BEC6
 * 000000014073BED8: add     rsp, 8
 * 000000014073BEDC: call    loc_14073BECF
 * 000000014073BEE1: add     rsp, 8
 * 000000014073BEE5: call    loc_14073BED8
 * 000000014073BEEA: add     rsp, 8
 * 000000014073BEEE: mov     eax, 0DADAh
 * 000000014073BEF3: test    byte ptr gs:89Ch, 8
 * 000000014073BEFC: jz      short loc_14073BF05
 * 000000014073BEFE: mov     al, 20h ; ' '
 * 000000014073BF00: incsspq rax
 * 000000014073BF05: test    edx, 80h
 * 000000014073BF0B: jz      short loc_14073BF15
 * 000000014073BF0D: lfence
 * 000000014073BF10: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073BF15: lfence
 * 000000014073BF18: mov     byte ptr gs:89Eh, 0
 * 000000014073BF21: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073BF28: jz      short loc_14073BF49
 * 000000014073BF2A: mov     ecx, 6A7h
 * 000000014073BF2F: rdmsr
 * 000000014073BF31: cmp     edx, 0
 * 000000014073BF34: jz      short loc_14073BF49
 * 000000014073BF36: mov     ecx, edx
 * 000000014073BF38: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073BF3E: cmp     edx, ecx
 * 000000014073BF40: jz      short loc_14073BF49
 * 000000014073BF42: mov     ecx, 6A7h
 * 000000014073BF47: wrmsr
 * 000000014073BF49: test    byte ptr [r10+3], 3
 * 000000014073BF4E: mov     [rbp+0D8h+var_58], 0
 * 000000014073BF57: jz      short loc_14073BF5E
 * 000000014073BF59: call    KiSaveDebugRegisterState
 * 000000014073BF5E: cld
 * 000000014073BF5F: stmxcsr [rbp+0D8h+var_12C]
 * 000000014073BF63: ldmxcsr dword ptr gs:180h
 * 000000014073BF6C: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014073BF70: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014073BF74: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014073BF78: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014073BF7C: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014073BF80: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014073BF84: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014073BF8B: jz      short loc_14073BFA2
 * 000000014073BF8D: mov     r10, gs:188h
 * 000000014073BF96: test    byte ptr [r10+3], 80h
 * 000000014073BF9B: jz      short loc_14073BFA2
 * 000000014073BF9D: call    KiSynchronizeUserIsolationDomainExit
 * 000000014073BFA2: mov     r8, cr2
 * 000000014073BFA6: mov     [rbp+0D8h+var_12D], 1
 * 000000014073BFAA: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073BFB1: jz      short loc_14073BFD4
 * 000000014073BFB3: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014073BFBA: jnz     short loc_14073BFD1
 * 000000014073BFBC: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073BFC3: jz      short loc_14073BFD4
 * 000000014073BFC5: test    [rbp+0D8h+arg_10], 40000h
 * 000000014073BFCF: jz      short loc_14073BFD4
 * 000000014073BFD1: stac
 * 000000014073BFD4: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014073BFDC: jnz     short loc_14073BFEB
 * 000000014073BFDE: mov     ecx, 0C0000102h
 * 000000014073BFE3: rdmsr
 * 000000014073BFE5: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 000000014073BFE8: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 000000014073BFEB: mov     eax, [rbp+0E0h]
 * 000000014073BFF1: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073BFF8: jz      short loc_14073C001
 * 000000014073BFFA: mov     r8, [rbp+0D8h+arg_28]
 * 000000014073C001: test    [rbp+0D8h+arg_10], 200h
 * 000000014073C00B: jz      short loc_14073C00E
 * 000000014073C00D: sti
 * 000000014073C00E: mov     [rbp+0D8h+var_88], r8
 * 000000014073C012: bt      [rbp+0D8h+arg_10], 9
 * 000000014073C01A: jnb     loc_14073C11E
 * 000000014073C020: lea     r9, [rbp+0D8h+var_158]
 * 000000014073C024: mov     rdx, r8; BugCheckParameter1
 * 000000014073C027: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 000000014073C02E: and     r8b, 1
 * 000000014073C032: mov     ecx, eax; BugCheckParameter2
 * 000000014073C034: shr     eax, 1
 * 000000014073C036: and     eax, 9
 * 000000014073C039: mov     [rbp+0D8h+var_12E], al
 * 000000014073C03C: call    MmAccessFault
 * 000000014073C041: test    eax, eax
 * 000000014073C043: jge     loc_14073C124
 * 000000014073C049: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014073C050: jz      short loc_14073C0A8
 * 000000014073C052: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014073C05A: jnz     short loc_14073C09A
 * 000000014073C05C: mov     r9, gs:188h
 * 000000014073C065: test    byte ptr [r9+3], 4
 * 000000014073C06A: jz      short loc_14073C075
 * 000000014073C06C: mov     r8, [r9+680h]
 * 000000014073C073: jmp     short loc_14073C07E
 * 000000014073C075: mov     r8, gs:30h
 * 000000014073C07E: cmp     r8, [rbp+0D8h+var_F0]
 * 000000014073C082: jz      short loc_14073C0A8
 * 000000014073C084: mov     ecx, 0C0000102h
 * 000000014073C089: mov     eax, r8d
 * 000000014073C08C: shr     r8, 20h
 * 000000014073C090: mov     edx, r8d
 * 000000014073C093: wrmsr
 * 000000014073C095: jmp     loc_14073C13F
 * 000000014073C09A: mov     rcx, [rbp+0D8h+var_88]
 * 000000014073C09E: shr     rcx, 20h
 * 000000014073C0A2: jnz     loc_14073C13F
 * 000000014073C0A8: mov     ecx, eax
 * 000000014073C0AA: mov     edx, 2
 * 000000014073C0AF: cmp     ecx, 0D0000006h
 * 000000014073C0B5: jz      short loc_14073C0F8
 * 000000014073C0B7: cmp     ecx, 0C0000005h
 * 000000014073C0BD: jz      short loc_14073C0DE
 * 000000014073C0BF: cmp     ecx, 80000001h
 * 000000014073C0C5: jz      short loc_14073C0E3
 * 000000014073C0C7: cmp     ecx, 0C00000FDh
 * 000000014073C0CD: jz      short loc_14073C0E3
 * 000000014073C0CF: mov     ecx, 0C0000006h
 * 000000014073C0D4: mov     edx, 3
 * 000000014073C0D9: mov     r11d, eax
 * 000000014073C0DC: jmp     short loc_14073C0E3
 * 000000014073C0DE: mov     ecx, 10000004h
 * 000000014073C0E3: mov     r10, [rbp+0D8h+var_88]
 * 000000014073C0E7: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014073C0EC: mov     r8, [rbp+0D8h+arg_0]
 * 000000014073C0F3: call    KiExceptionDispatch
 * 000000014073C0F8: mov     rax, cr8
 * 000000014073C0FC: mov     r10, [rbp+0D8h+arg_0]
 * 000000014073C103: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014073C108: and     eax, 0FFh
 * 000000014073C10D: mov     r8, rax
 * 000000014073C110: mov     rdx, [rbp+0D8h+var_88]
 * 000000014073C114: mov     ecx, 0Ah
 * 000000014073C119: call    KiBugCheckDispatch
 * 000000014073C11E: xor     eax, eax
 * 000000014073C120: mov     al, 0FFh
 * 000000014073C122: jmp     short loc_14073C0FC
 * 000000014073C124: cmp     byte ptr cs:PsAltSystemCallRegistrationLock.Timer.DueTime, 0
 * 000000014073C12B: jz      short loc_14073C13F
 * 000000014073C12D: mov     r8, [rbp+0D8h+var_88]
 * 000000014073C131: mov     rdx, [rbp+0D8h+arg_0]
 * 000000014073C138: mov     ecx, eax
 * 000000014073C13A: call    PsWatchWorkingSet
 * 000000014073C13F: mov     rax, cr8
 * 000000014073C143: or      eax, eax
 * 000000014073C145: mov     [rbp+0D8h+var_138], eax
 * 000000014073C148: jnz     short loc_14073C153
 * 000000014073C14A: mov     ecx, 1
 * 000000014073C14F: mov     cr8, rcx
 * 000000014073C153: lea     rcx, [rbp+0D8h+var_158]
 * 000000014073C157: call    KiCheckForSListAddress
 * 000000014073C15C: mov     ecx, [rbp+0D8h+var_138]
 * 000000014073C15F: or      ecx, ecx
 * 000000014073C161: jnz     short loc_14073C167
 * 000000014073C163: mov     cr8, rcx
 * 000000014073C167: cli
 * 000000014073C168: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073C16F: jz      short loc_14073C176
 * 000000014073C171: add     rsp, 28h
 * 000000014073C175: retn
 * 000000014073C176: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014073C17D: jz      loc_14073C47E
 * 000000014073C183: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073C18A: jz      short loc_14073C18F
 * 000000014073C18C: stac
 * 000000014073C18F: mov     rcx, gs:188h
 * 000000014073C198: test    byte ptr [rcx+0C2h], 3
 * 000000014073C19F: jz      short loc_14073C1BC
 * 000000014073C1A1: mov     ecx, 1
 * 000000014073C1A6: mov     cr8, rcx
 * 000000014073C1AA: sti
 * 000000014073C1AB: call    KiInitiateUserApc
 * 000000014073C1B0: cli
 * 000000014073C1B1: mov     ecx, 0
 * 000000014073C1B6: mov     cr8, rcx
 * 000000014073C1BA: jmp     short loc_14073C18F
 * 000000014073C1BC: test    byte ptr [rcx+3], 80h
 * 000000014073C1C0: jz      short loc_14073C1CF
 * 000000014073C1C2: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014073C1C7: test    eax, eax
 * 000000014073C1C9: mov     rax, [rbp+0D8h+var_128]
 * 000000014073C1CD: jnz     short loc_14073C18F
 * 000000014073C1CF: test    byte ptr gs:8A0h, 2
 * 000000014073C1D8: jz      short loc_14073C1E1
 * 000000014073C1DA: xor     ecx, ecx
 * 000000014073C1DC: call    KiUpdateStibpPairing
 * 000000014073C1E1: mov     rcx, gs:188h
 * 000000014073C1EA: test    dword ptr [rcx], 8000000h
 * 000000014073C1F0: jz      short loc_14073C1F7
 * 000000014073C1F2: call    KiRestoreSetContextState
 * 000000014073C1F7: mov     rcx, gs:188h
 * 000000014073C200: test    dword ptr [rcx], 10000h
 * 000000014073C206: jz      short loc_14073C21C
 * 000000014073C208: test    byte ptr [rcx+2], 1
 * 000000014073C20C: jz      short loc_14073C21C
 * 000000014073C20E: call    KiCopyCounters
 * 000000014073C213: mov     rcx, gs:188h
 * 000000014073C21C: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014073C220: cmp     [rbp+0D8h+var_58], 0
 * 000000014073C228: jz      short loc_14073C22F
 * 000000014073C22A: call    KiRestoreDebugRegisterState
 * 000000014073C22F: mov     rcx, gs:188h
 * 000000014073C238: bt      dword ptr [rcx+74h], 16h
 * 000000014073C23D: jnb     short loc_14073C269
 * 000000014073C23F: xor     ecx, ecx
 * 000000014073C241: rdsspq  rcx
 * 000000014073C246: mov     r8, gs:9D68h
 * 000000014073C24F: add     r8, 8
 * 000000014073C253: cmp     rcx, r8
 * 000000014073C256: jnz     short loc_14073C269
 * 000000014073C258: mov     rcx, gs:9D60h
 * 000000014073C261: rstorssp qword ptr [rcx]
 * 000000014073C265: saveprevssp
 * 000000014073C269: mov     byte ptr gs:89Eh, 0
 * 000000014073C272: movzx   eax, word ptr gs:8ACh
 * 000000014073C27B: cmp     gs:8A6h, ax
 * 000000014073C284: jz      short loc_14073C298
 * 000000014073C286: mov     gs:8A6h, ax
 * 000000014073C28F: mov     ecx, 48h ; 'H'
 * 000000014073C294: xor     edx, edx
 * 000000014073C296: wrmsr
 * 000000014073C298: btr     word ptr gs:898h, 2
 * 000000014073C2A3: jnb     short loc_14073C2B3
 * 000000014073C2A5: mov     eax, 1
 * 000000014073C2AA: xor     edx, edx
 * 000000014073C2AC: mov     ecx, 49h ; 'I'
 * 000000014073C2B1: wrmsr
 * 000000014073C2B3: btr     word ptr gs:898h, 5
 * 000000014073C2BE: jnb     loc_14073C3FB
 * 000000014073C2C4: call    loc_14073C3D7
 * 000000014073C2C9: add     rsp, 8
 * 000000014073C2CD: call    loc_14073C3E0
 * 000000014073C2D2: add     rsp, 8
 * 000000014073C2D6: call    loc_14073C2C9
 * 000000014073C2DB: add     rsp, 8
 * 000000014073C2DF: call    loc_14073C2D2
 * 000000014073C2E4: add     rsp, 8
 * 000000014073C2E8: call    loc_14073C2DB
 * 000000014073C2ED: add     rsp, 8
 * 000000014073C2F1: call    loc_14073C2E4
 * 000000014073C2F6: add     rsp, 8
 * 000000014073C2FA: call    loc_14073C2ED
 * 000000014073C2FF: add     rsp, 8
 * 000000014073C303: call    loc_14073C2F6
 * 000000014073C308: add     rsp, 8
 * 000000014073C30C: call    loc_14073C2FF
 * 000000014073C311: add     rsp, 8
 * 000000014073C315: call    loc_14073C308
 * 000000014073C31A: add     rsp, 8
 * 000000014073C31E: call    loc_14073C311
 * 000000014073C323: add     rsp, 8
 * 000000014073C327: call    loc_14073C31A
 * 000000014073C32C: add     rsp, 8
 * 000000014073C330: call    loc_14073C323
 * 000000014073C335: add     rsp, 8
 * 000000014073C339: call    loc_14073C32C
 * 000000014073C33E: add     rsp, 8
 * 000000014073C342: call    loc_14073C335
 * 000000014073C347: add     rsp, 8
 * 000000014073C34B: call    loc_14073C33E
 * 000000014073C350: add     rsp, 8
 * 000000014073C354: call    loc_14073C347
 * 000000014073C359: add     rsp, 8
 * 000000014073C35D: call    loc_14073C350
 * 000000014073C362: add     rsp, 8
 * 000000014073C366: call    loc_14073C359
 * 000000014073C36B: add     rsp, 8
 * 000000014073C36F: call    loc_14073C362
 * 000000014073C374: add     rsp, 8
 * 000000014073C378: call    loc_14073C36B
 * 000000014073C37D: add     rsp, 8
 * 000000014073C381: call    loc_14073C374
 * 000000014073C386: add     rsp, 8
 * 000000014073C38A: call    loc_14073C37D
 * 000000014073C38F: add     rsp, 8
 * 000000014073C393: call    loc_14073C386
 * 000000014073C398: add     rsp, 8
 * 000000014073C39C: call    loc_14073C38F
 * 000000014073C3A1: add     rsp, 8
 * 000000014073C3A5: call    loc_14073C398
 * 000000014073C3AA: add     rsp, 8
 * 000000014073C3AE: call    loc_14073C3A1
 * 000000014073C3B3: add     rsp, 8
 * 000000014073C3B7: call    loc_14073C3AA
 * 000000014073C3BC: add     rsp, 8
 * 000000014073C3C0: call    loc_14073C3B3
 * 000000014073C3C5: add     rsp, 8
 * 000000014073C3C9: call    loc_14073C3BC
 * 000000014073C3CE: add     rsp, 8
 * 000000014073C3D2: call    loc_14073C3C5
 * 000000014073C3D7: add     rsp, 8
 * 000000014073C3DB: call    loc_14073C3CE
 * 000000014073C3E0: add     rsp, 8
 * 000000014073C3E4: mov     eax, 0DADAh
 * 000000014073C3E9: test    byte ptr gs:89Ch, 8
 * 000000014073C3F2: jz      short loc_14073C3FB
 * 000000014073C3F4: mov     al, 20h ; ' '
 * 000000014073C3F6: incsspq rax
 * 000000014073C3FB: test    word ptr gs:898h, 100h
 * 000000014073C406: jz      short loc_14073C414
 * 000000014073C408: xor     eax, eax
 * 000000014073C40A: xor     edx, edx
 * 000000014073C40C: mov     ecx, 1
 * 000000014073C411: div     rcx
 * 000000014073C414: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014073C418: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014073C41C: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014073C420: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014073C424: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014073C428: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014073C42C: mov     r11, [rbp+0D8h+var_F8]
 * 000000014073C430: mov     r10, [rbp+0D8h+var_100]
 * 000000014073C434: mov     r9, [rbp+0D8h+var_108]
 * 000000014073C438: mov     r8, [rbp+0D8h+var_110]
 * 000000014073C43C: mov     rdx, [rbp+0D8h+var_118]
 * 000000014073C440: mov     rcx, [rbp+0D8h+var_120]
 * 000000014073C444: mov     rax, [rbp+0D8h+var_128]
 * 000000014073C448: mov     rsp, rbp
 * 000000014073C44B: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014073C452: add     rsp, 0E8h
 * 000000014073C459: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073C460: jz      short loc_14073C467
 * 000000014073C462: jmp     KiKernelExit
 * 000000014073C467: test    word ptr gs:898h, 200h
 * 000000014073C472: jz      short loc_14073C479
 * 000000014073C474: verw    [rsp-10h+arg_20]
 * 000000014073C479: swapgs
 * 000000014073C47C: iretq
 * 000000014073C47E: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014073C482: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014073C486: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014073C48A: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014073C48E: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014073C492: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014073C496: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014073C49A: mov     r11, [rbp+0D8h+var_F8]
 * 000000014073C49E: mov     r10, [rbp+0D8h+var_100]
 * 000000014073C4A2: mov     r9, [rbp+0D8h+var_108]
 * 000000014073C4A6: mov     r8, [rbp+0D8h+var_110]
 * 000000014073C4AA: mov     rdx, [rbp+0D8h+var_118]
 * 000000014073C4AE: mov     rcx, [rbp+0D8h+var_120]
 * 000000014073C4B2: mov     rax, [rbp+0D8h+var_128]
 * 000000014073C4B6: mov     rsp, rbp
 * 000000014073C4B9: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014073C4C0: add     rsp, 0E8h
 * 000000014073C4C7: iretq
 */
