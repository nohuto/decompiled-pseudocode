/*
 * XREFs of KiControlProtectionFault @ 0x140739B00
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x140C59BC0 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiProcessControlProtection @ 0x1404F7C00 (KiProcessControlProtection.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x140739B00 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x14073C4C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x14073CA80 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x140739B00
 * Reason: Hex-Rays returned no pseudocode for 0x140739B00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140739B00: push    rbp
 * 0000000140739B01: sub     rsp, 158h
 * 0000000140739B08: lea     rbp, [rsp+80h]
 * 0000000140739B10: mov     [rbp+0D8h+var_128], rax
 * 0000000140739B14: mov     [rbp+0D8h+var_120], rcx
 * 0000000140739B18: mov     [rbp+0D8h+var_118], rdx
 * 0000000140739B1C: mov     [rbp+0D8h+var_110], r8
 * 0000000140739B20: mov     [rbp+0D8h+var_108], r9
 * 0000000140739B24: mov     [rbp+0D8h+var_100], r10
 * 0000000140739B28: mov     [rbp+0D8h+var_F8], r11
 * 0000000140739B2C: test    [rbp+0D8h+arg_8], 1
 * 0000000140739B33: jnz     short loc_140739B6D
 * 0000000140739B35: xor     edx, edx
 * 0000000140739B37: rdsspq  rdx
 * 0000000140739B3C: mov     [rbp+0D8h+var_80], rdx
 * 0000000140739B40: lfence
 * 0000000140739B43: test    byte ptr gs:898h, 1
 * 0000000140739B4C: jnz     short loc_140739B56
 * 0000000140739B4E: lfence
 * 0000000140739B51: jmp     loc_140739DDE
 * 0000000140739B56: movzx   eax, word ptr gs:8A6h
 * 0000000140739B5F: mov     ecx, 48h ; 'H'
 * 0000000140739B64: xor     edx, edx
 * 0000000140739B66: wrmsr
 * 0000000140739B68: jmp     loc_140739DDE
 * 0000000140739B6D: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140739B74: jnz     short loc_140739B79
 * 0000000140739B76: swapgs
 * 0000000140739B79: lfence
 * 0000000140739B7C: mov     rcx, gs:9D68h
 * 0000000140739B85: test    rcx, rcx
 * 0000000140739B88: jz      short loc_140739BA9
 * 0000000140739B8A: rdsspq  rdx
 * 0000000140739B8F: mov     r10, gs:9D60h
 * 0000000140739B98: add     r10, 8
 * 0000000140739B9C: cmp     rdx, r10
 * 0000000140739B9F: jnz     short loc_140739BA9
 * 0000000140739BA1: rstorssp qword ptr [rcx]
 * 0000000140739BA5: saveprevssp
 * 0000000140739BA9: mov     r10, gs:188h
 * 0000000140739BB2: mov     rcx, gs:188h
 * 0000000140739BBB: mov     rcx, [rcx+220h]
 * 0000000140739BC2: mov     rcx, [rcx+760h]
 * 0000000140739BC9: mov     gs:890h, rcx
 * 0000000140739BD2: mov     cx, gs:8A2h
 * 0000000140739BDB: mov     gs:8A4h, cx
 * 0000000140739BE4: mov     cl, gs:898h
 * 0000000140739BEC: mov     gs:89Ah, cl
 * 0000000140739BF4: movzx   eax, word ptr gs:8A8h
 * 0000000140739BFD: cmp     gs:8A6h, ax
 * 0000000140739C06: jz      short loc_140739C1A
 * 0000000140739C08: mov     gs:8A6h, ax
 * 0000000140739C11: mov     ecx, 48h ; 'H'
 * 0000000140739C16: xor     edx, edx
 * 0000000140739C18: wrmsr
 * 0000000140739C1A: movzx   edx, byte ptr gs:898h
 * 0000000140739C23: test    edx, 8
 * 0000000140739C29: jz      short loc_140739C42
 * 0000000140739C2B: mov     eax, 1
 * 0000000140739C30: xor     edx, edx
 * 0000000140739C32: mov     ecx, 49h ; 'I'
 * 0000000140739C37: wrmsr
 * 0000000140739C39: movzx   edx, byte ptr gs:898h
 * 0000000140739C42: test    edx, 2
 * 0000000140739C48: jz      loc_140739D85
 * 0000000140739C4E: call    loc_140739D61
 * 0000000140739C53: add     rsp, 8
 * 0000000140739C57: call    loc_140739D6A
 * 0000000140739C5C: add     rsp, 8
 * 0000000140739C60: call    loc_140739C53
 * 0000000140739C65: add     rsp, 8
 * 0000000140739C69: call    loc_140739C5C
 * 0000000140739C6E: add     rsp, 8
 * 0000000140739C72: call    loc_140739C65
 * 0000000140739C77: add     rsp, 8
 * 0000000140739C7B: call    loc_140739C6E
 * 0000000140739C80: add     rsp, 8
 * 0000000140739C84: call    loc_140739C77
 * 0000000140739C89: add     rsp, 8
 * 0000000140739C8D: call    loc_140739C80
 * 0000000140739C92: add     rsp, 8
 * 0000000140739C96: call    loc_140739C89
 * 0000000140739C9B: add     rsp, 8
 * 0000000140739C9F: call    loc_140739C92
 * 0000000140739CA4: add     rsp, 8
 * 0000000140739CA8: call    loc_140739C9B
 * 0000000140739CAD: add     rsp, 8
 * 0000000140739CB1: call    loc_140739CA4
 * 0000000140739CB6: add     rsp, 8
 * 0000000140739CBA: call    loc_140739CAD
 * 0000000140739CBF: add     rsp, 8
 * 0000000140739CC3: call    loc_140739CB6
 * 0000000140739CC8: add     rsp, 8
 * 0000000140739CCC: call    loc_140739CBF
 * 0000000140739CD1: add     rsp, 8
 * 0000000140739CD5: call    loc_140739CC8
 * 0000000140739CDA: add     rsp, 8
 * 0000000140739CDE: call    loc_140739CD1
 * 0000000140739CE3: add     rsp, 8
 * 0000000140739CE7: call    loc_140739CDA
 * 0000000140739CEC: add     rsp, 8
 * 0000000140739CF0: call    loc_140739CE3
 * 0000000140739CF5: add     rsp, 8
 * 0000000140739CF9: call    loc_140739CEC
 * 0000000140739CFE: add     rsp, 8
 * 0000000140739D02: call    loc_140739CF5
 * 0000000140739D07: add     rsp, 8
 * 0000000140739D0B: call    loc_140739CFE
 * 0000000140739D10: add     rsp, 8
 * 0000000140739D14: call    loc_140739D07
 * 0000000140739D19: add     rsp, 8
 * 0000000140739D1D: call    loc_140739D10
 * 0000000140739D22: add     rsp, 8
 * 0000000140739D26: call    loc_140739D19
 * 0000000140739D2B: add     rsp, 8
 * 0000000140739D2F: call    loc_140739D22
 * 0000000140739D34: add     rsp, 8
 * 0000000140739D38: call    loc_140739D2B
 * 0000000140739D3D: add     rsp, 8
 * 0000000140739D41: call    loc_140739D34
 * 0000000140739D46: add     rsp, 8
 * 0000000140739D4A: call    loc_140739D3D
 * 0000000140739D4F: add     rsp, 8
 * 0000000140739D53: call    loc_140739D46
 * 0000000140739D58: add     rsp, 8
 * 0000000140739D5C: call    loc_140739D4F
 * 0000000140739D61: add     rsp, 8
 * 0000000140739D65: call    loc_140739D58
 * 0000000140739D6A: add     rsp, 8
 * 0000000140739D6E: mov     eax, 0DADAh
 * 0000000140739D73: test    byte ptr gs:89Ch, 8
 * 0000000140739D7C: jz      short loc_140739D85
 * 0000000140739D7E: mov     al, 20h ; ' '
 * 0000000140739D80: incsspq rax
 * 0000000140739D85: test    edx, 80h
 * 0000000140739D8B: jz      short loc_140739D95
 * 0000000140739D8D: lfence
 * 0000000140739D90: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140739D95: lfence
 * 0000000140739D98: mov     byte ptr gs:89Eh, 0
 * 0000000140739DA1: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140739DA8: jz      short loc_140739DC9
 * 0000000140739DAA: mov     ecx, 6A7h
 * 0000000140739DAF: rdmsr
 * 0000000140739DB1: cmp     edx, 0
 * 0000000140739DB4: jz      short loc_140739DC9
 * 0000000140739DB6: mov     ecx, edx
 * 0000000140739DB8: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140739DBE: cmp     edx, ecx
 * 0000000140739DC0: jz      short loc_140739DC9
 * 0000000140739DC2: mov     ecx, 6A7h
 * 0000000140739DC7: wrmsr
 * 0000000140739DC9: test    byte ptr [r10+3], 3
 * 0000000140739DCE: mov     [rbp+0D8h+var_58], 0
 * 0000000140739DD7: jz      short loc_140739DDE
 * 0000000140739DD9: call    KiSaveDebugRegisterState
 * 0000000140739DDE: cld
 * 0000000140739DDF: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140739DE3: ldmxcsr dword ptr gs:180h
 * 0000000140739DEC: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140739DF0: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140739DF4: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140739DF8: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140739DFC: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140739E00: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140739E04: test    [rbp+0D8h+arg_8], 1
 * 0000000140739E0B: jz      short KiControlProtectionFaultDispatchTrap
 * 0000000140739E0D: mov     r10, gs:188h
 * 0000000140739E16: test    byte ptr [r10+3], 80h
 * 0000000140739E1B: jz      short KiControlProtectionFaultDispatchTrap
 * 0000000140739E1D: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140739E22: mov     [rbp+0D8h+var_12D], 1
 * 0000000140739E26: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140739E2D: jz      short loc_140739E50
 * 0000000140739E2F: test    [rbp+0D8h+arg_8], 1
 * 0000000140739E36: jnz     short loc_140739E4D
 * 0000000140739E38: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140739E3F: jz      short loc_140739E50
 * 0000000140739E41: test    [rbp+0D8h+arg_10], 40000h
 * 0000000140739E4B: jz      short loc_140739E50
 * 0000000140739E4D: stac
 * 0000000140739E50: mov     eax, [rbp+0E0h]
 * 0000000140739E56: test    [rbp+0D8h+arg_10], 200h
 * 0000000140739E60: jz      short loc_140739E63
 * 0000000140739E62: sti
 * 0000000140739E63: test    byte ptr gs:9165h, 40h
 * 0000000140739E6C: jz      loc_140739F05
 * 0000000140739E72: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140739E76: call    KiProcessControlProtection
 * 0000000140739E7B: cmp     eax, 1
 * 0000000140739E7E: jz      loc_140739F28
 * 0000000140739E84: cmp     eax, 2
 * 0000000140739E87: jz      short loc_140739E94
 * 0000000140739E89: cmp     eax, 3
 * 0000000140739E8C: jz      loc_140739F14
 * 0000000140739E92: jmp     short loc_140739F05
 * 0000000140739E94: test    [rbp+0D8h+arg_8], 1
 * 0000000140739E9B: jz      short loc_140739EE0
 * 0000000140739E9D: mov     ecx, 6A7h
 * 0000000140739EA2: rdmsr
 * 0000000140739EA4: shl     rdx, 20h
 * 0000000140739EA8: or      rax, rdx
 * 0000000140739EAB: mov     r10, rax
 * 0000000140739EAE: mov     rcx, gs:188h
 * 0000000140739EB7: mov     rcx, [rcx+220h]
 * 0000000140739EBE: mov     r11d, [rcx+754h]
 * 0000000140739EC5: and     r11d, 0C0F6C000h
 * 0000000140739ECC: mov     edx, cs:KiUserCetAppcompatOptions
 * 0000000140739ED2: shl     rdx, 20h
 * 0000000140739ED6: or      r11, rdx
 * 0000000140739ED9: mov     edx, 3
 * 0000000140739EDE: jmp     short loc_140739EEC
 * 0000000140739EE0: mov     edx, 2
 * 0000000140739EE5: mov     r10, [rbp+0D8h+var_80]
 * 0000000140739EE9: mov     r10, [r10]
 * 0000000140739EEC: mov     r9, 39h ; '9'
 * 0000000140739EF3: mov     ecx, 0C0000409h
 * 0000000140739EF8: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140739EFF: call    KiFastFailDispatch
 * 0000000140739F04: nop
 * 0000000140739F05: mov     edx, 15h
 * 0000000140739F0A: mov     ecx, 7Fh
 * 0000000140739F0F: call    KiBugCheckDispatch
 * 0000000140739F14: mov     ecx, 80000033h
 * 0000000140739F19: xor     edx, edx
 * 0000000140739F1B: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140739F22: call    KiExceptionDispatch
 * 0000000140739F27: nop
 * 0000000140739F28: cli
 * 0000000140739F29: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140739F30: jz      short loc_140739F37
 * 0000000140739F32: add     rsp, 28h
 * 0000000140739F36: retn
 * 0000000140739F37: test    [rbp+0D8h+arg_8], 1
 * 0000000140739F3E: jz      loc_14073A23F
 * 0000000140739F44: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140739F4B: jz      short loc_140739F50
 * 0000000140739F4D: stac
 * 0000000140739F50: mov     rcx, gs:188h
 * 0000000140739F59: test    byte ptr [rcx+0C2h], 3
 * 0000000140739F60: jz      short loc_140739F7D
 * 0000000140739F62: mov     ecx, 1
 * 0000000140739F67: mov     cr8, rcx
 * 0000000140739F6B: sti
 * 0000000140739F6C: call    KiInitiateUserApc
 * 0000000140739F71: cli
 * 0000000140739F72: mov     ecx, 0
 * 0000000140739F77: mov     cr8, rcx
 * 0000000140739F7B: jmp     short loc_140739F50
 * 0000000140739F7D: test    byte ptr [rcx+3], 80h
 * 0000000140739F81: jz      short loc_140739F90
 * 0000000140739F83: call    KiSynchronizeUserIsolationDomainEntry
 * 0000000140739F88: test    eax, eax
 * 0000000140739F8A: mov     rax, [rbp+0D8h+var_128]
 * 0000000140739F8E: jnz     short loc_140739F50
 * 0000000140739F90: test    byte ptr gs:8A0h, 2
 * 0000000140739F99: jz      short loc_140739FA2
 * 0000000140739F9B: xor     ecx, ecx
 * 0000000140739F9D: call    KiUpdateStibpPairing
 * 0000000140739FA2: mov     rcx, gs:188h
 * 0000000140739FAB: test    dword ptr [rcx], 8000000h
 * 0000000140739FB1: jz      short loc_140739FB8
 * 0000000140739FB3: call    KiRestoreSetContextState
 * 0000000140739FB8: mov     rcx, gs:188h
 * 0000000140739FC1: test    dword ptr [rcx], 10000h
 * 0000000140739FC7: jz      short loc_140739FDD
 * 0000000140739FC9: test    byte ptr [rcx+2], 1
 * 0000000140739FCD: jz      short loc_140739FDD
 * 0000000140739FCF: call    KiCopyCounters
 * 0000000140739FD4: mov     rcx, gs:188h
 * 0000000140739FDD: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140739FE1: cmp     [rbp+0D8h+var_58], 0
 * 0000000140739FE9: jz      short loc_140739FF0
 * 0000000140739FEB: call    KiRestoreDebugRegisterState
 * 0000000140739FF0: mov     rcx, gs:188h
 * 0000000140739FF9: bt      dword ptr [rcx+74h], 16h
 * 0000000140739FFE: jnb     short loc_14073A02A
 * 000000014073A000: xor     ecx, ecx
 * 000000014073A002: rdsspq  rcx
 * 000000014073A007: mov     r8, gs:9D68h
 * 000000014073A010: add     r8, 8
 * 000000014073A014: cmp     rcx, r8
 * 000000014073A017: jnz     short loc_14073A02A
 * 000000014073A019: mov     rcx, gs:9D60h
 * 000000014073A022: rstorssp qword ptr [rcx]
 * 000000014073A026: saveprevssp
 * 000000014073A02A: mov     byte ptr gs:89Eh, 0
 * 000000014073A033: movzx   eax, word ptr gs:8ACh
 * 000000014073A03C: cmp     gs:8A6h, ax
 * 000000014073A045: jz      short loc_14073A059
 * 000000014073A047: mov     gs:8A6h, ax
 * 000000014073A050: mov     ecx, 48h ; 'H'
 * 000000014073A055: xor     edx, edx
 * 000000014073A057: wrmsr
 * 000000014073A059: btr     word ptr gs:898h, 2
 * 000000014073A064: jnb     short loc_14073A074
 * 000000014073A066: mov     eax, 1
 * 000000014073A06B: xor     edx, edx
 * 000000014073A06D: mov     ecx, 49h ; 'I'
 * 000000014073A072: wrmsr
 * 000000014073A074: btr     word ptr gs:898h, 5
 * 000000014073A07F: jnb     loc_14073A1BC
 * 000000014073A085: call    loc_14073A198
 * 000000014073A08A: add     rsp, 8
 * 000000014073A08E: call    loc_14073A1A1
 * 000000014073A093: add     rsp, 8
 * 000000014073A097: call    loc_14073A08A
 * 000000014073A09C: add     rsp, 8
 * 000000014073A0A0: call    loc_14073A093
 * 000000014073A0A5: add     rsp, 8
 * 000000014073A0A9: call    loc_14073A09C
 * 000000014073A0AE: add     rsp, 8
 * 000000014073A0B2: call    loc_14073A0A5
 * 000000014073A0B7: add     rsp, 8
 * 000000014073A0BB: call    loc_14073A0AE
 * 000000014073A0C0: add     rsp, 8
 * 000000014073A0C4: call    loc_14073A0B7
 * 000000014073A0C9: add     rsp, 8
 * 000000014073A0CD: call    loc_14073A0C0
 * 000000014073A0D2: add     rsp, 8
 * 000000014073A0D6: call    loc_14073A0C9
 * 000000014073A0DB: add     rsp, 8
 * 000000014073A0DF: call    loc_14073A0D2
 * 000000014073A0E4: add     rsp, 8
 * 000000014073A0E8: call    loc_14073A0DB
 * 000000014073A0ED: add     rsp, 8
 * 000000014073A0F1: call    loc_14073A0E4
 * 000000014073A0F6: add     rsp, 8
 * 000000014073A0FA: call    loc_14073A0ED
 * 000000014073A0FF: add     rsp, 8
 * 000000014073A103: call    loc_14073A0F6
 * 000000014073A108: add     rsp, 8
 * 000000014073A10C: call    loc_14073A0FF
 * 000000014073A111: add     rsp, 8
 * 000000014073A115: call    loc_14073A108
 * 000000014073A11A: add     rsp, 8
 * 000000014073A11E: call    loc_14073A111
 * 000000014073A123: add     rsp, 8
 * 000000014073A127: call    loc_14073A11A
 * 000000014073A12C: add     rsp, 8
 * 000000014073A130: call    loc_14073A123
 * 000000014073A135: add     rsp, 8
 * 000000014073A139: call    loc_14073A12C
 * 000000014073A13E: add     rsp, 8
 * 000000014073A142: call    loc_14073A135
 * 000000014073A147: add     rsp, 8
 * 000000014073A14B: call    loc_14073A13E
 * 000000014073A150: add     rsp, 8
 * 000000014073A154: call    loc_14073A147
 * 000000014073A159: add     rsp, 8
 * 000000014073A15D: call    loc_14073A150
 * 000000014073A162: add     rsp, 8
 * 000000014073A166: call    loc_14073A159
 * 000000014073A16B: add     rsp, 8
 * 000000014073A16F: call    loc_14073A162
 * 000000014073A174: add     rsp, 8
 * 000000014073A178: call    loc_14073A16B
 * 000000014073A17D: add     rsp, 8
 * 000000014073A181: call    loc_14073A174
 * 000000014073A186: add     rsp, 8
 * 000000014073A18A: call    loc_14073A17D
 * 000000014073A18F: add     rsp, 8
 * 000000014073A193: call    loc_14073A186
 * 000000014073A198: add     rsp, 8
 * 000000014073A19C: call    loc_14073A18F
 * 000000014073A1A1: add     rsp, 8
 * 000000014073A1A5: mov     eax, 0DADAh
 * 000000014073A1AA: test    byte ptr gs:89Ch, 8
 * 000000014073A1B3: jz      short loc_14073A1BC
 * 000000014073A1B5: mov     al, 20h ; ' '
 * 000000014073A1B7: incsspq rax
 * 000000014073A1BC: test    word ptr gs:898h, 100h
 * 000000014073A1C7: jz      short loc_14073A1D5
 * 000000014073A1C9: xor     eax, eax
 * 000000014073A1CB: xor     edx, edx
 * 000000014073A1CD: mov     ecx, 1
 * 000000014073A1D2: div     rcx
 * 000000014073A1D5: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014073A1D9: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014073A1DD: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014073A1E1: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014073A1E5: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014073A1E9: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014073A1ED: mov     r11, [rbp+0D8h+var_F8]
 * 000000014073A1F1: mov     r10, [rbp+0D8h+var_100]
 * 000000014073A1F5: mov     r9, [rbp+0D8h+var_108]
 * 000000014073A1F9: mov     r8, [rbp+0D8h+var_110]
 * 000000014073A1FD: mov     rdx, [rbp+0D8h+var_118]
 * 000000014073A201: mov     rcx, [rbp+0D8h+var_120]
 * 000000014073A205: mov     rax, [rbp+0D8h+var_128]
 * 000000014073A209: mov     rsp, rbp
 * 000000014073A20C: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014073A213: add     rsp, 0E8h
 * 000000014073A21A: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073A221: jz      short loc_14073A228
 * 000000014073A223: jmp     KiKernelExit
 * 000000014073A228: test    word ptr gs:898h, 200h
 * 000000014073A233: jz      short loc_14073A23A
 * 000000014073A235: verw    [rsp-10h+arg_20]
 * 000000014073A23A: swapgs
 * 000000014073A23D: iretq
 * 000000014073A23F: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014073A243: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014073A247: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014073A24B: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014073A24F: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014073A253: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014073A257: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014073A25B: mov     r11, [rbp+0D8h+var_F8]
 * 000000014073A25F: mov     r10, [rbp+0D8h+var_100]
 * 000000014073A263: mov     r9, [rbp+0D8h+var_108]
 * 000000014073A267: mov     r8, [rbp+0D8h+var_110]
 * 000000014073A26B: mov     rdx, [rbp+0D8h+var_118]
 * 000000014073A26F: mov     rcx, [rbp+0D8h+var_120]
 * 000000014073A273: mov     rax, [rbp+0D8h+var_128]
 * 000000014073A277: mov     rsp, rbp
 * 000000014073A27A: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014073A281: add     rsp, 0E8h
 * 000000014073A288: iretq
 * 000000014073A28A: retn
 */
