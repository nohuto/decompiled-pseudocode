/*
 * XREFs of KiInvalidOpcodeFault @ 0x140739B00
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x140C5F440 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x140739B00 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiInvalidOpcodeFault @ 0x140739B00
 * Reason: Hex-Rays returned no pseudocode for 0x140739B00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140739B00: sub     rsp, 8
 * 0000000140739B04: push    rbp
 * 0000000140739B05: sub     rsp, 158h
 * 0000000140739B0C: lea     rbp, [rsp+80h]
 * 0000000140739B14: mov     [rbp+0E8h+var_138], rax
 * 0000000140739B18: mov     [rbp+0E8h+var_130], rcx
 * 0000000140739B1C: mov     [rbp+0E8h+var_128], rdx
 * 0000000140739B20: mov     [rbp+0E8h+var_120], r8
 * 0000000140739B24: mov     [rbp+0E8h+var_118], r9
 * 0000000140739B28: mov     [rbp+0E8h+var_110], r10
 * 0000000140739B2C: mov     [rbp+0E8h+var_108], r11
 * 0000000140739B30: test    [rbp+0E8h+arg_0], 1
 * 0000000140739B37: jnz     short loc_140739B71
 * 0000000140739B39: xor     edx, edx
 * 0000000140739B3B: rdsspq  rdx
 * 0000000140739B40: mov     [rbp+0E8h+var_90], rdx
 * 0000000140739B44: lfence
 * 0000000140739B47: test    byte ptr gs:898h, 1
 * 0000000140739B50: jnz     short loc_140739B5A
 * 0000000140739B52: lfence
 * 0000000140739B55: jmp     loc_140739DE2
 * 0000000140739B5A: movzx   eax, word ptr gs:8A6h
 * 0000000140739B63: mov     ecx, 48h ; 'H'
 * 0000000140739B68: xor     edx, edx
 * 0000000140739B6A: wrmsr
 * 0000000140739B6C: jmp     loc_140739DE2
 * 0000000140739B71: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140739B78: jnz     short loc_140739B7D
 * 0000000140739B7A: swapgs
 * 0000000140739B7D: lfence
 * 0000000140739B80: mov     rcx, gs:9D68h
 * 0000000140739B89: test    rcx, rcx
 * 0000000140739B8C: jz      short loc_140739BAD
 * 0000000140739B8E: rdsspq  rdx
 * 0000000140739B93: mov     r10, gs:9D60h
 * 0000000140739B9C: add     r10, 8
 * 0000000140739BA0: cmp     rdx, r10
 * 0000000140739BA3: jnz     short loc_140739BAD
 * 0000000140739BA5: rstorssp qword ptr [rcx]
 * 0000000140739BA9: saveprevssp
 * 0000000140739BAD: mov     r10, gs:188h
 * 0000000140739BB6: mov     rcx, gs:188h
 * 0000000140739BBF: mov     rcx, [rcx+220h]
 * 0000000140739BC6: mov     rcx, [rcx+760h]
 * 0000000140739BCD: mov     gs:890h, rcx
 * 0000000140739BD6: mov     cx, gs:8A2h
 * 0000000140739BDF: mov     gs:8A4h, cx
 * 0000000140739BE8: mov     cl, gs:898h
 * 0000000140739BF0: mov     gs:89Ah, cl
 * 0000000140739BF8: movzx   eax, word ptr gs:8A8h
 * 0000000140739C01: cmp     gs:8A6h, ax
 * 0000000140739C0A: jz      short loc_140739C1E
 * 0000000140739C0C: mov     gs:8A6h, ax
 * 0000000140739C15: mov     ecx, 48h ; 'H'
 * 0000000140739C1A: xor     edx, edx
 * 0000000140739C1C: wrmsr
 * 0000000140739C1E: movzx   edx, byte ptr gs:898h
 * 0000000140739C27: test    edx, 8
 * 0000000140739C2D: jz      short loc_140739C46
 * 0000000140739C2F: mov     eax, 1
 * 0000000140739C34: xor     edx, edx
 * 0000000140739C36: mov     ecx, 49h ; 'I'
 * 0000000140739C3B: wrmsr
 * 0000000140739C3D: movzx   edx, byte ptr gs:898h
 * 0000000140739C46: test    edx, 2
 * 0000000140739C4C: jz      loc_140739D89
 * 0000000140739C52: call    loc_140739D65
 * 0000000140739C57: add     rsp, 8
 * 0000000140739C5B: call    loc_140739D6E
 * 0000000140739C60: add     rsp, 8
 * 0000000140739C64: call    loc_140739C57
 * 0000000140739C69: add     rsp, 8
 * 0000000140739C6D: call    loc_140739C60
 * 0000000140739C72: add     rsp, 8
 * 0000000140739C76: call    loc_140739C69
 * 0000000140739C7B: add     rsp, 8
 * 0000000140739C7F: call    loc_140739C72
 * 0000000140739C84: add     rsp, 8
 * 0000000140739C88: call    loc_140739C7B
 * 0000000140739C8D: add     rsp, 8
 * 0000000140739C91: call    loc_140739C84
 * 0000000140739C96: add     rsp, 8
 * 0000000140739C9A: call    loc_140739C8D
 * 0000000140739C9F: add     rsp, 8
 * 0000000140739CA3: call    loc_140739C96
 * 0000000140739CA8: add     rsp, 8
 * 0000000140739CAC: call    loc_140739C9F
 * 0000000140739CB1: add     rsp, 8
 * 0000000140739CB5: call    loc_140739CA8
 * 0000000140739CBA: add     rsp, 8
 * 0000000140739CBE: call    loc_140739CB1
 * 0000000140739CC3: add     rsp, 8
 * 0000000140739CC7: call    loc_140739CBA
 * 0000000140739CCC: add     rsp, 8
 * 0000000140739CD0: call    loc_140739CC3
 * 0000000140739CD5: add     rsp, 8
 * 0000000140739CD9: call    loc_140739CCC
 * 0000000140739CDE: add     rsp, 8
 * 0000000140739CE2: call    loc_140739CD5
 * 0000000140739CE7: add     rsp, 8
 * 0000000140739CEB: call    loc_140739CDE
 * 0000000140739CF0: add     rsp, 8
 * 0000000140739CF4: call    loc_140739CE7
 * 0000000140739CF9: add     rsp, 8
 * 0000000140739CFD: call    loc_140739CF0
 * 0000000140739D02: add     rsp, 8
 * 0000000140739D06: call    loc_140739CF9
 * 0000000140739D0B: add     rsp, 8
 * 0000000140739D0F: call    loc_140739D02
 * 0000000140739D14: add     rsp, 8
 * 0000000140739D18: call    loc_140739D0B
 * 0000000140739D1D: add     rsp, 8
 * 0000000140739D21: call    loc_140739D14
 * 0000000140739D26: add     rsp, 8
 * 0000000140739D2A: call    loc_140739D1D
 * 0000000140739D2F: add     rsp, 8
 * 0000000140739D33: call    loc_140739D26
 * 0000000140739D38: add     rsp, 8
 * 0000000140739D3C: call    loc_140739D2F
 * 0000000140739D41: add     rsp, 8
 * 0000000140739D45: call    loc_140739D38
 * 0000000140739D4A: add     rsp, 8
 * 0000000140739D4E: call    loc_140739D41
 * 0000000140739D53: add     rsp, 8
 * 0000000140739D57: call    loc_140739D4A
 * 0000000140739D5C: add     rsp, 8
 * 0000000140739D60: call    loc_140739D53
 * 0000000140739D65: add     rsp, 8
 * 0000000140739D69: call    loc_140739D5C
 * 0000000140739D6E: add     rsp, 8
 * 0000000140739D72: mov     eax, 0DADAh
 * 0000000140739D77: test    byte ptr gs:89Ch, 8
 * 0000000140739D80: jz      short loc_140739D89
 * 0000000140739D82: mov     al, 20h ; ' '
 * 0000000140739D84: incsspq rax
 * 0000000140739D89: test    edx, 80h
 * 0000000140739D8F: jz      short loc_140739D99
 * 0000000140739D91: lfence
 * 0000000140739D94: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140739D99: lfence
 * 0000000140739D9C: mov     byte ptr gs:89Eh, 0
 * 0000000140739DA5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140739DAC: jz      short loc_140739DCD
 * 0000000140739DAE: mov     ecx, 6A7h
 * 0000000140739DB3: rdmsr
 * 0000000140739DB5: cmp     edx, 0
 * 0000000140739DB8: jz      short loc_140739DCD
 * 0000000140739DBA: mov     ecx, edx
 * 0000000140739DBC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140739DC2: cmp     edx, ecx
 * 0000000140739DC4: jz      short loc_140739DCD
 * 0000000140739DC6: mov     ecx, 6A7h
 * 0000000140739DCB: wrmsr
 * 0000000140739DCD: test    byte ptr [r10+3], 3
 * 0000000140739DD2: mov     [rbp+0E8h+var_68], 0
 * 0000000140739DDB: jz      short loc_140739DE2
 * 0000000140739DDD: call    KiSaveDebugRegisterState
 * 0000000140739DE2: cld
 * 0000000140739DE3: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140739DE7: ldmxcsr dword ptr gs:180h
 * 0000000140739DF0: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140739DF4: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140739DF8: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140739DFC: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140739E00: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140739E04: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140739E08: test    [rbp+0E8h+arg_0], 1
 * 0000000140739E0F: jz      short KiInvalidOpcodeFaultDispatchTrap
 * 0000000140739E11: mov     r10, gs:188h
 * 0000000140739E1A: test    byte ptr [r10+3], 80h
 * 0000000140739E1F: jz      short KiInvalidOpcodeFaultDispatchTrap
 * 0000000140739E21: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140739E26: mov     [rbp+0E8h+var_13D], 1
 * 0000000140739E2A: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140739E31: jz      short loc_140739E54
 * 0000000140739E33: test    [rbp+0E8h+arg_0], 1
 * 0000000140739E3A: jnz     short loc_140739E51
 * 0000000140739E3C: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140739E43: jz      short loc_140739E54
 * 0000000140739E45: test    [rbp+0E8h+arg_8], 40000h
 * 0000000140739E4F: jz      short loc_140739E54
 * 0000000140739E51: stac
 * 0000000140739E54: test    [rbp+0E8h+arg_8], 200h
 * 0000000140739E5E: jz      short loc_140739E61
 * 0000000140739E60: sti
 * 0000000140739E61: mov     ecx, 10000002h
 * 0000000140739E66: xor     edx, edx
 * 0000000140739E68: mov     r8, [rbp+0E8h]
 * 0000000140739E6F: call    KiExceptionDispatch
 * 0000000140739E74: nop
 * 0000000140739E75: cli
 * 0000000140739E76: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140739E7D: jz      short loc_140739E84
 * 0000000140739E7F: add     rsp, 28h
 * 0000000140739E83: retn
 * 0000000140739E84: test    [rbp+0E8h+arg_0], 1
 * 0000000140739E8B: jz      loc_14073A18C
 * 0000000140739E91: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140739E98: jz      short loc_140739E9D
 * 0000000140739E9A: stac
 * 0000000140739E9D: mov     rcx, gs:188h
 * 0000000140739EA6: test    byte ptr [rcx+0C2h], 3
 * 0000000140739EAD: jz      short loc_140739ECA
 * 0000000140739EAF: mov     ecx, 1
 * 0000000140739EB4: mov     cr8, rcx
 * 0000000140739EB8: sti
 * 0000000140739EB9: call    KiInitiateUserApc
 * 0000000140739EBE: cli
 * 0000000140739EBF: mov     ecx, 0
 * 0000000140739EC4: mov     cr8, rcx
 * 0000000140739EC8: jmp     short loc_140739E9D
 * 0000000140739ECA: test    byte ptr [rcx+3], 80h
 * 0000000140739ECE: jz      short loc_140739EDD
 * 0000000140739ED0: call    KiSynchronizeUserIsolationDomainEntry
 * 0000000140739ED5: test    eax, eax
 * 0000000140739ED7: mov     rax, [rbp+0E8h+var_138]
 * 0000000140739EDB: jnz     short loc_140739E9D
 * 0000000140739EDD: test    byte ptr gs:8A0h, 2
 * 0000000140739EE6: jz      short loc_140739EEF
 * 0000000140739EE8: xor     ecx, ecx
 * 0000000140739EEA: call    KiUpdateStibpPairing
 * 0000000140739EEF: mov     rcx, gs:188h
 * 0000000140739EF8: test    dword ptr [rcx], 8000000h
 * 0000000140739EFE: jz      short loc_140739F05
 * 0000000140739F00: call    KiRestoreSetContextState
 * 0000000140739F05: mov     rcx, gs:188h
 * 0000000140739F0E: test    dword ptr [rcx], 10000h
 * 0000000140739F14: jz      short loc_140739F2A
 * 0000000140739F16: test    byte ptr [rcx+2], 1
 * 0000000140739F1A: jz      short loc_140739F2A
 * 0000000140739F1C: call    KiCopyCounters
 * 0000000140739F21: mov     rcx, gs:188h
 * 0000000140739F2A: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140739F2E: cmp     [rbp+0E8h+var_68], 0
 * 0000000140739F36: jz      short loc_140739F3D
 * 0000000140739F38: call    KiRestoreDebugRegisterState
 * 0000000140739F3D: mov     rcx, gs:188h
 * 0000000140739F46: bt      dword ptr [rcx+74h], 16h
 * 0000000140739F4B: jnb     short loc_140739F77
 * 0000000140739F4D: xor     ecx, ecx
 * 0000000140739F4F: rdsspq  rcx
 * 0000000140739F54: mov     r8, gs:9D68h
 * 0000000140739F5D: add     r8, 8
 * 0000000140739F61: cmp     rcx, r8
 * 0000000140739F64: jnz     short loc_140739F77
 * 0000000140739F66: mov     rcx, gs:9D60h
 * 0000000140739F6F: rstorssp qword ptr [rcx]
 * 0000000140739F73: saveprevssp
 * 0000000140739F77: mov     byte ptr gs:89Eh, 0
 * 0000000140739F80: movzx   eax, word ptr gs:8ACh
 * 0000000140739F89: cmp     gs:8A6h, ax
 * 0000000140739F92: jz      short loc_140739FA6
 * 0000000140739F94: mov     gs:8A6h, ax
 * 0000000140739F9D: mov     ecx, 48h ; 'H'
 * 0000000140739FA2: xor     edx, edx
 * 0000000140739FA4: wrmsr
 * 0000000140739FA6: btr     word ptr gs:898h, 2
 * 0000000140739FB1: jnb     short loc_140739FC1
 * 0000000140739FB3: mov     eax, 1
 * 0000000140739FB8: xor     edx, edx
 * 0000000140739FBA: mov     ecx, 49h ; 'I'
 * 0000000140739FBF: wrmsr
 * 0000000140739FC1: btr     word ptr gs:898h, 5
 * 0000000140739FCC: jnb     loc_14073A109
 * 0000000140739FD2: call    loc_14073A0E5
 * 0000000140739FD7: add     rsp, 8
 * 0000000140739FDB: call    loc_14073A0EE
 * 0000000140739FE0: add     rsp, 8
 * 0000000140739FE4: call    loc_140739FD7
 * 0000000140739FE9: add     rsp, 8
 * 0000000140739FED: call    loc_140739FE0
 * 0000000140739FF2: add     rsp, 8
 * 0000000140739FF6: call    loc_140739FE9
 * 0000000140739FFB: add     rsp, 8
 * 0000000140739FFF: call    loc_140739FF2
 * 000000014073A004: add     rsp, 8
 * 000000014073A008: call    loc_140739FFB
 * 000000014073A00D: add     rsp, 8
 * 000000014073A011: call    loc_14073A004
 * 000000014073A016: add     rsp, 8
 * 000000014073A01A: call    loc_14073A00D
 * 000000014073A01F: add     rsp, 8
 * 000000014073A023: call    loc_14073A016
 * 000000014073A028: add     rsp, 8
 * 000000014073A02C: call    loc_14073A01F
 * 000000014073A031: add     rsp, 8
 * 000000014073A035: call    loc_14073A028
 * 000000014073A03A: add     rsp, 8
 * 000000014073A03E: call    loc_14073A031
 * 000000014073A043: add     rsp, 8
 * 000000014073A047: call    loc_14073A03A
 * 000000014073A04C: add     rsp, 8
 * 000000014073A050: call    loc_14073A043
 * 000000014073A055: add     rsp, 8
 * 000000014073A059: call    loc_14073A04C
 * 000000014073A05E: add     rsp, 8
 * 000000014073A062: call    loc_14073A055
 * 000000014073A067: add     rsp, 8
 * 000000014073A06B: call    loc_14073A05E
 * 000000014073A070: add     rsp, 8
 * 000000014073A074: call    loc_14073A067
 * 000000014073A079: add     rsp, 8
 * 000000014073A07D: call    loc_14073A070
 * 000000014073A082: add     rsp, 8
 * 000000014073A086: call    loc_14073A079
 * 000000014073A08B: add     rsp, 8
 * 000000014073A08F: call    loc_14073A082
 * 000000014073A094: add     rsp, 8
 * 000000014073A098: call    loc_14073A08B
 * 000000014073A09D: add     rsp, 8
 * 000000014073A0A1: call    loc_14073A094
 * 000000014073A0A6: add     rsp, 8
 * 000000014073A0AA: call    loc_14073A09D
 * 000000014073A0AF: add     rsp, 8
 * 000000014073A0B3: call    loc_14073A0A6
 * 000000014073A0B8: add     rsp, 8
 * 000000014073A0BC: call    loc_14073A0AF
 * 000000014073A0C1: add     rsp, 8
 * 000000014073A0C5: call    loc_14073A0B8
 * 000000014073A0CA: add     rsp, 8
 * 000000014073A0CE: call    loc_14073A0C1
 * 000000014073A0D3: add     rsp, 8
 * 000000014073A0D7: call    loc_14073A0CA
 * 000000014073A0DC: add     rsp, 8
 * 000000014073A0E0: call    loc_14073A0D3
 * 000000014073A0E5: add     rsp, 8
 * 000000014073A0E9: call    loc_14073A0DC
 * 000000014073A0EE: add     rsp, 8
 * 000000014073A0F2: mov     eax, 0DADAh
 * 000000014073A0F7: test    byte ptr gs:89Ch, 8
 * 000000014073A100: jz      short loc_14073A109
 * 000000014073A102: mov     al, 20h ; ' '
 * 000000014073A104: incsspq rax
 * 000000014073A109: test    word ptr gs:898h, 100h
 * 000000014073A114: jz      short loc_14073A122
 * 000000014073A116: xor     eax, eax
 * 000000014073A118: xor     edx, edx
 * 000000014073A11A: mov     ecx, 1
 * 000000014073A11F: div     rcx
 * 000000014073A122: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014073A126: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014073A12A: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014073A12E: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014073A132: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014073A136: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014073A13A: mov     r11, [rbp+0E8h+var_108]
 * 000000014073A13E: mov     r10, [rbp+0E8h+var_110]
 * 000000014073A142: mov     r9, [rbp+0E8h+var_118]
 * 000000014073A146: mov     r8, [rbp+0E8h+var_120]
 * 000000014073A14A: mov     rdx, [rbp+0E8h+var_128]
 * 000000014073A14E: mov     rcx, [rbp+0E8h+var_130]
 * 000000014073A152: mov     rax, [rbp+0E8h+var_138]
 * 000000014073A156: mov     rsp, rbp
 * 000000014073A159: mov     rbp, [rbp+0E8h+var_10]
 * 000000014073A160: add     rsp, 0E8h
 * 000000014073A167: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073A16E: jz      short loc_14073A175
 * 000000014073A170: jmp     KiKernelExit
 * 000000014073A175: test    word ptr gs:898h, 200h
 * 000000014073A180: jz      short loc_14073A187
 * 000000014073A182: verw    [rsp+arg_18]
 * 000000014073A187: swapgs
 * 000000014073A18A: iretq
 * 000000014073A18C: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014073A190: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014073A194: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014073A198: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014073A19C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014073A1A0: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014073A1A4: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014073A1A8: mov     r11, [rbp+0E8h+var_108]
 * 000000014073A1AC: mov     r10, [rbp+0E8h+var_110]
 * 000000014073A1B0: mov     r9, [rbp+0E8h+var_118]
 * 000000014073A1B4: mov     r8, [rbp+0E8h+var_120]
 * 000000014073A1B8: mov     rdx, [rbp+0E8h+var_128]
 * 000000014073A1BC: mov     rcx, [rbp+0E8h+var_130]
 * 000000014073A1C0: mov     rax, [rbp+0E8h+var_138]
 * 000000014073A1C4: mov     rsp, rbp
 * 000000014073A1C7: mov     rbp, [rbp+0E8h+var_10]
 * 000000014073A1CE: add     rsp, 0E8h
 * 000000014073A1D5: iretq
 */
