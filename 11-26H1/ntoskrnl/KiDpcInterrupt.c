/*
 * XREFs of KiDpcInterrupt @ 0x140733B40
 * Callers:
 *     KiDpcInterruptShadow @ 0x140C5FF40 (KiDpcInterruptShadow.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140224C20 (KiDispatchInterrupt.c)
 *     HalPerformEndOfInterrupt @ 0x14032FAB0 (HalPerformEndOfInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EE560 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x140733B40 (KiDpcInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x140733B40
 * Reason: Hex-Rays returned no pseudocode for 0x140733B40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140733B40: sub     rsp, 8
 * 0000000140733B44: push    rbp
 * 0000000140733B45: sub     rsp, 158h
 * 0000000140733B4C: lea     rbp, [rsp+80h]
 * 0000000140733B54: mov     [rbp+0E8h+var_18], rsi
 * 0000000140733B5B: mov     [rbp+0E8h+var_13F+7], rax
 * 0000000140733B5F: mov     [rbp+0E8h+var_130], rcx
 * 0000000140733B63: mov     [rbp+0E8h+var_128], rdx
 * 0000000140733B67: mov     [rbp+0E8h+var_120], r8
 * 0000000140733B6B: mov     [rbp+0E8h+var_118], r9
 * 0000000140733B6F: mov     [rbp+0E8h+var_110], r10
 * 0000000140733B73: mov     [rbp+0E8h+var_108], r11
 * 0000000140733B77: test    [rbp+0E8h+arg_0], 1
 * 0000000140733B7E: jnz     short loc_140733BB8
 * 0000000140733B80: xor     edx, edx
 * 0000000140733B82: rdsspq  rdx
 * 0000000140733B87: mov     [rbp+0E8h+var_90], rdx
 * 0000000140733B8B: lfence
 * 0000000140733B8E: test    byte ptr gs:898h, 1
 * 0000000140733B97: jnz     short loc_140733BA1
 * 0000000140733B99: lfence
 * 0000000140733B9C: jmp     loc_140733E29
 * 0000000140733BA1: movzx   eax, word ptr gs:8A6h
 * 0000000140733BAA: mov     ecx, 48h ; 'H'
 * 0000000140733BAF: xor     edx, edx
 * 0000000140733BB1: wrmsr
 * 0000000140733BB3: jmp     loc_140733E29
 * 0000000140733BB8: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140733BBF: jnz     short loc_140733BC4
 * 0000000140733BC1: swapgs
 * 0000000140733BC4: lfence
 * 0000000140733BC7: mov     rcx, gs:9D68h
 * 0000000140733BD0: test    rcx, rcx
 * 0000000140733BD3: jz      short loc_140733BF4
 * 0000000140733BD5: rdsspq  rdx
 * 0000000140733BDA: mov     r10, gs:9D60h
 * 0000000140733BE3: add     r10, 8
 * 0000000140733BE7: cmp     rdx, r10
 * 0000000140733BEA: jnz     short loc_140733BF4
 * 0000000140733BEC: rstorssp qword ptr [rcx]
 * 0000000140733BF0: saveprevssp
 * 0000000140733BF4: mov     r10, gs:188h
 * 0000000140733BFD: mov     rcx, gs:188h
 * 0000000140733C06: mov     rcx, [rcx+220h]
 * 0000000140733C0D: mov     rcx, [rcx+760h]
 * 0000000140733C14: mov     gs:890h, rcx
 * 0000000140733C1D: mov     cx, gs:8A2h
 * 0000000140733C26: mov     gs:8A4h, cx
 * 0000000140733C2F: mov     cl, gs:898h
 * 0000000140733C37: mov     gs:89Ah, cl
 * 0000000140733C3F: movzx   eax, word ptr gs:8A8h
 * 0000000140733C48: cmp     gs:8A6h, ax
 * 0000000140733C51: jz      short loc_140733C65
 * 0000000140733C53: mov     gs:8A6h, ax
 * 0000000140733C5C: mov     ecx, 48h ; 'H'
 * 0000000140733C61: xor     edx, edx
 * 0000000140733C63: wrmsr
 * 0000000140733C65: movzx   edx, byte ptr gs:898h
 * 0000000140733C6E: test    edx, 8
 * 0000000140733C74: jz      short loc_140733C8D
 * 0000000140733C76: mov     eax, 1
 * 0000000140733C7B: xor     edx, edx
 * 0000000140733C7D: mov     ecx, 49h ; 'I'
 * 0000000140733C82: wrmsr
 * 0000000140733C84: movzx   edx, byte ptr gs:898h
 * 0000000140733C8D: test    edx, 2
 * 0000000140733C93: jz      loc_140733DD0
 * 0000000140733C99: call    loc_140733DAC
 * 0000000140733C9E: add     rsp, 8
 * 0000000140733CA2: call    loc_140733DB5
 * 0000000140733CA7: add     rsp, 8
 * 0000000140733CAB: call    loc_140733C9E
 * 0000000140733CB0: add     rsp, 8
 * 0000000140733CB4: call    loc_140733CA7
 * 0000000140733CB9: add     rsp, 8
 * 0000000140733CBD: call    loc_140733CB0
 * 0000000140733CC2: add     rsp, 8
 * 0000000140733CC6: call    loc_140733CB9
 * 0000000140733CCB: add     rsp, 8
 * 0000000140733CCF: call    loc_140733CC2
 * 0000000140733CD4: add     rsp, 8
 * 0000000140733CD8: call    loc_140733CCB
 * 0000000140733CDD: add     rsp, 8
 * 0000000140733CE1: call    loc_140733CD4
 * 0000000140733CE6: add     rsp, 8
 * 0000000140733CEA: call    loc_140733CDD
 * 0000000140733CEF: add     rsp, 8
 * 0000000140733CF3: call    loc_140733CE6
 * 0000000140733CF8: add     rsp, 8
 * 0000000140733CFC: call    loc_140733CEF
 * 0000000140733D01: add     rsp, 8
 * 0000000140733D05: call    loc_140733CF8
 * 0000000140733D0A: add     rsp, 8
 * 0000000140733D0E: call    loc_140733D01
 * 0000000140733D13: add     rsp, 8
 * 0000000140733D17: call    loc_140733D0A
 * 0000000140733D1C: add     rsp, 8
 * 0000000140733D20: call    loc_140733D13
 * 0000000140733D25: add     rsp, 8
 * 0000000140733D29: call    loc_140733D1C
 * 0000000140733D2E: add     rsp, 8
 * 0000000140733D32: call    loc_140733D25
 * 0000000140733D37: add     rsp, 8
 * 0000000140733D3B: call    loc_140733D2E
 * 0000000140733D40: add     rsp, 8
 * 0000000140733D44: call    loc_140733D37
 * 0000000140733D49: add     rsp, 8
 * 0000000140733D4D: call    loc_140733D40
 * 0000000140733D52: add     rsp, 8
 * 0000000140733D56: call    loc_140733D49
 * 0000000140733D5B: add     rsp, 8
 * 0000000140733D5F: call    loc_140733D52
 * 0000000140733D64: add     rsp, 8
 * 0000000140733D68: call    loc_140733D5B
 * 0000000140733D6D: add     rsp, 8
 * 0000000140733D71: call    loc_140733D64
 * 0000000140733D76: add     rsp, 8
 * 0000000140733D7A: call    loc_140733D6D
 * 0000000140733D7F: add     rsp, 8
 * 0000000140733D83: call    loc_140733D76
 * 0000000140733D88: add     rsp, 8
 * 0000000140733D8C: call    loc_140733D7F
 * 0000000140733D91: add     rsp, 8
 * 0000000140733D95: call    loc_140733D88
 * 0000000140733D9A: add     rsp, 8
 * 0000000140733D9E: call    loc_140733D91
 * 0000000140733DA3: add     rsp, 8
 * 0000000140733DA7: call    loc_140733D9A
 * 0000000140733DAC: add     rsp, 8
 * 0000000140733DB0: call    loc_140733DA3
 * 0000000140733DB5: add     rsp, 8
 * 0000000140733DB9: mov     eax, 0DADAh
 * 0000000140733DBE: test    byte ptr gs:89Ch, 8
 * 0000000140733DC7: jz      short loc_140733DD0
 * 0000000140733DC9: mov     al, 20h ; ' '
 * 0000000140733DCB: incsspq rax
 * 0000000140733DD0: test    edx, 80h
 * 0000000140733DD6: jz      short loc_140733DE0
 * 0000000140733DD8: lfence
 * 0000000140733DDB: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140733DE0: lfence
 * 0000000140733DE3: mov     byte ptr gs:89Eh, 0
 * 0000000140733DEC: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140733DF3: jz      short loc_140733E14
 * 0000000140733DF5: mov     ecx, 6A7h
 * 0000000140733DFA: rdmsr
 * 0000000140733DFC: cmp     edx, 0
 * 0000000140733DFF: jz      short loc_140733E14
 * 0000000140733E01: mov     ecx, edx
 * 0000000140733E03: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140733E09: cmp     edx, ecx
 * 0000000140733E0B: jz      short loc_140733E14
 * 0000000140733E0D: mov     ecx, 6A7h
 * 0000000140733E12: wrmsr
 * 0000000140733E14: test    byte ptr [r10+3], 3
 * 0000000140733E19: mov     [rbp+0E8h+var_68], 0
 * 0000000140733E22: jz      short loc_140733E29
 * 0000000140733E24: call    KiSaveDebugRegisterState
 * 0000000140733E29: cld
 * 0000000140733E2A: stmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 0000000140733E2E: ldmxcsr dword ptr gs:180h
 * 0000000140733E37: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140733E3B: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140733E3F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140733E43: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140733E47: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140733E4B: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140733E4F: test    [rbp+0E8h+arg_0], 1
 * 0000000140733E56: jz      short KiDpcInterruptDispatchTrap
 * 0000000140733E58: mov     r10, gs:188h
 * 0000000140733E61: test    byte ptr [r10+3], 80h
 * 0000000140733E66: jz      short KiDpcInterruptDispatchTrap
 * 0000000140733E68: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140733E6D: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140733E74: jz      short loc_140733E7D
 * 0000000140733E76: mov     [rbp+0E8h+var_18], rsi
 * 0000000140733E7D: mov     byte ptr [rbp+0E8h+var_13F+2], 0
 * 0000000140733E81: xor     esi, esi
 * 0000000140733E83: inc     dword ptr gs:87C0h
 * 0000000140733E8B: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140733E92: jz      short loc_140733E97
 * 0000000140733E94: clac
 * 0000000140733E97: test    byte ptr cs:KiTrapFeatures, 10h
 * 0000000140733E9E: jz      short loc_140733EC4
 * 0000000140733EA0: btr     dword ptr gs:228h, 2
 * 0000000140733EAA: cmp     dword ptr gs:228h, 0
 * 0000000140733EB3: jnz     short loc_140733EC4
 * 0000000140733EB5: mov     ecx, 0C0010015h
 * 0000000140733EBA: rdmsr
 * 0000000140733EBC: btr     edx, 0
 * 0000000140733EC0: jnb     short loc_140733EC4
 * 0000000140733EC2: wrmsr
 * 0000000140733EC4: mov     ecx, 2
 * 0000000140733EC9: cmp     cs:KiIrqlFlags, 0
 * 0000000140733ED0: jz      short loc_140733ED9
 * 0000000140733ED2: call    KzSetIrqlUnsafe
 * 0000000140733ED7: jmp     short loc_140733EE1
 * 0000000140733ED9: mov     rax, cr8
 * 0000000140733EDD: mov     cr8, rcx
 * 0000000140733EE1: mov     byte ptr [rbp+0E8h+var_13F], al
 * 0000000140733EE4: mov     rcx, rsi
 * 0000000140733EE7: call    HalPerformEndOfInterrupt
 * 0000000140733EEC: sti
 * 0000000140733EED: cmp     byte ptr gs:187h, 0
 * 0000000140733EF6: jnz     short loc_140733F05
 * 0000000140733EF8: mov     rcx, [rbp+0E8h+var_13F]
 * 0000000140733EFC: lea     rdx, [rbp+0E8h+var_168]
 * 0000000140733F00: call    KiDispatchInterrupt
 * 0000000140733F05: cli
 * 0000000140733F06: movzx   ecx, byte ptr [rbp+0E8h+var_13F]
 * 0000000140733F0A: cmp     cs:KiIrqlFlags, 0
 * 0000000140733F11: jz      short loc_140733F1A
 * 0000000140733F13: call    KzSetIrqlUnsafe
 * 0000000140733F18: jmp     short loc_140733F1E
 * 0000000140733F1A: mov     cr8, rcx
 * 0000000140733F1E: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140733F25: cli
 * 0000000140733F26: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140733F2D: jz      short loc_140733F34
 * 0000000140733F2F: add     rsp, 28h
 * 0000000140733F33: retn
 * 0000000140733F34: test    [rbp+0E8h+arg_0], 1
 * 0000000140733F3B: jz      loc_14073423C
 * 0000000140733F41: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140733F48: jz      short loc_140733F4D
 * 0000000140733F4A: stac
 * 0000000140733F4D: mov     rcx, gs:188h
 * 0000000140733F56: test    byte ptr [rcx+0C2h], 3
 * 0000000140733F5D: jz      short loc_140733F7A
 * 0000000140733F5F: mov     ecx, 1
 * 0000000140733F64: mov     cr8, rcx
 * 0000000140733F68: sti
 * 0000000140733F69: call    KiInitiateUserApc
 * 0000000140733F6E: cli
 * 0000000140733F6F: mov     ecx, 0
 * 0000000140733F74: mov     cr8, rcx
 * 0000000140733F78: jmp     short loc_140733F4D
 * 0000000140733F7A: test    byte ptr [rcx+3], 80h
 * 0000000140733F7E: jz      short loc_140733F8D
 * 0000000140733F80: call    KiSynchronizeUserIsolationDomainEntry
 * 0000000140733F85: test    eax, eax
 * 0000000140733F87: mov     rax, [rbp+0E8h+var_13F+7]
 * 0000000140733F8B: jnz     short loc_140733F4D
 * 0000000140733F8D: test    byte ptr gs:8A0h, 2
 * 0000000140733F96: jz      short loc_140733F9F
 * 0000000140733F98: xor     ecx, ecx
 * 0000000140733F9A: call    KiUpdateStibpPairing
 * 0000000140733F9F: mov     rcx, gs:188h
 * 0000000140733FA8: test    dword ptr [rcx], 8000000h
 * 0000000140733FAE: jz      short loc_140733FB5
 * 0000000140733FB0: call    KiRestoreSetContextState
 * 0000000140733FB5: mov     rcx, gs:188h
 * 0000000140733FBE: test    dword ptr [rcx], 10000h
 * 0000000140733FC4: jz      short loc_140733FDA
 * 0000000140733FC6: test    byte ptr [rcx+2], 1
 * 0000000140733FCA: jz      short loc_140733FDA
 * 0000000140733FCC: call    KiCopyCounters
 * 0000000140733FD1: mov     rcx, gs:188h
 * 0000000140733FDA: ldmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 0000000140733FDE: cmp     [rbp+0E8h+var_68], 0
 * 0000000140733FE6: jz      short loc_140733FED
 * 0000000140733FE8: call    KiRestoreDebugRegisterState
 * 0000000140733FED: mov     rcx, gs:188h
 * 0000000140733FF6: bt      dword ptr [rcx+74h], 16h
 * 0000000140733FFB: jnb     short loc_140734027
 * 0000000140733FFD: xor     ecx, ecx
 * 0000000140733FFF: rdsspq  rcx
 * 0000000140734004: mov     r8, gs:9D68h
 * 000000014073400D: add     r8, 8
 * 0000000140734011: cmp     rcx, r8
 * 0000000140734014: jnz     short loc_140734027
 * 0000000140734016: mov     rcx, gs:9D60h
 * 000000014073401F: rstorssp qword ptr [rcx]
 * 0000000140734023: saveprevssp
 * 0000000140734027: mov     byte ptr gs:89Eh, 0
 * 0000000140734030: movzx   eax, word ptr gs:8ACh
 * 0000000140734039: cmp     gs:8A6h, ax
 * 0000000140734042: jz      short loc_140734056
 * 0000000140734044: mov     gs:8A6h, ax
 * 000000014073404D: mov     ecx, 48h ; 'H'
 * 0000000140734052: xor     edx, edx
 * 0000000140734054: wrmsr
 * 0000000140734056: btr     word ptr gs:898h, 2
 * 0000000140734061: jnb     short loc_140734071
 * 0000000140734063: mov     eax, 1
 * 0000000140734068: xor     edx, edx
 * 000000014073406A: mov     ecx, 49h ; 'I'
 * 000000014073406F: wrmsr
 * 0000000140734071: btr     word ptr gs:898h, 5
 * 000000014073407C: jnb     loc_1407341B9
 * 0000000140734082: call    loc_140734195
 * 0000000140734087: add     rsp, 8
 * 000000014073408B: call    loc_14073419E
 * 0000000140734090: add     rsp, 8
 * 0000000140734094: call    loc_140734087
 * 0000000140734099: add     rsp, 8
 * 000000014073409D: call    loc_140734090
 * 00000001407340A2: add     rsp, 8
 * 00000001407340A6: call    loc_140734099
 * 00000001407340AB: add     rsp, 8
 * 00000001407340AF: call    loc_1407340A2
 * 00000001407340B4: add     rsp, 8
 * 00000001407340B8: call    loc_1407340AB
 * 00000001407340BD: add     rsp, 8
 * 00000001407340C1: call    loc_1407340B4
 * 00000001407340C6: add     rsp, 8
 * 00000001407340CA: call    loc_1407340BD
 * 00000001407340CF: add     rsp, 8
 * 00000001407340D3: call    loc_1407340C6
 * 00000001407340D8: add     rsp, 8
 * 00000001407340DC: call    loc_1407340CF
 * 00000001407340E1: add     rsp, 8
 * 00000001407340E5: call    loc_1407340D8
 * 00000001407340EA: add     rsp, 8
 * 00000001407340EE: call    loc_1407340E1
 * 00000001407340F3: add     rsp, 8
 * 00000001407340F7: call    loc_1407340EA
 * 00000001407340FC: add     rsp, 8
 * 0000000140734100: call    loc_1407340F3
 * 0000000140734105: add     rsp, 8
 * 0000000140734109: call    loc_1407340FC
 * 000000014073410E: add     rsp, 8
 * 0000000140734112: call    loc_140734105
 * 0000000140734117: add     rsp, 8
 * 000000014073411B: call    loc_14073410E
 * 0000000140734120: add     rsp, 8
 * 0000000140734124: call    loc_140734117
 * 0000000140734129: add     rsp, 8
 * 000000014073412D: call    loc_140734120
 * 0000000140734132: add     rsp, 8
 * 0000000140734136: call    loc_140734129
 * 000000014073413B: add     rsp, 8
 * 000000014073413F: call    loc_140734132
 * 0000000140734144: add     rsp, 8
 * 0000000140734148: call    loc_14073413B
 * 000000014073414D: add     rsp, 8
 * 0000000140734151: call    loc_140734144
 * 0000000140734156: add     rsp, 8
 * 000000014073415A: call    loc_14073414D
 * 000000014073415F: add     rsp, 8
 * 0000000140734163: call    loc_140734156
 * 0000000140734168: add     rsp, 8
 * 000000014073416C: call    loc_14073415F
 * 0000000140734171: add     rsp, 8
 * 0000000140734175: call    loc_140734168
 * 000000014073417A: add     rsp, 8
 * 000000014073417E: call    loc_140734171
 * 0000000140734183: add     rsp, 8
 * 0000000140734187: call    loc_14073417A
 * 000000014073418C: add     rsp, 8
 * 0000000140734190: call    loc_140734183
 * 0000000140734195: add     rsp, 8
 * 0000000140734199: call    loc_14073418C
 * 000000014073419E: add     rsp, 8
 * 00000001407341A2: mov     eax, 0DADAh
 * 00000001407341A7: test    byte ptr gs:89Ch, 8
 * 00000001407341B0: jz      short loc_1407341B9
 * 00000001407341B2: mov     al, 20h ; ' '
 * 00000001407341B4: incsspq rax
 * 00000001407341B9: test    word ptr gs:898h, 100h
 * 00000001407341C4: jz      short loc_1407341D2
 * 00000001407341C6: xor     eax, eax
 * 00000001407341C8: xor     edx, edx
 * 00000001407341CA: mov     ecx, 1
 * 00000001407341CF: div     rcx
 * 00000001407341D2: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001407341D6: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001407341DA: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001407341DE: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001407341E2: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001407341E6: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001407341EA: mov     r11, [rbp+0E8h+var_108]
 * 00000001407341EE: mov     r10, [rbp+0E8h+var_110]
 * 00000001407341F2: mov     r9, [rbp+0E8h+var_118]
 * 00000001407341F6: mov     r8, [rbp+0E8h+var_120]
 * 00000001407341FA: mov     rdx, [rbp+0E8h+var_128]
 * 00000001407341FE: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140734202: mov     rax, [rbp+0E8h+var_13F+7]
 * 0000000140734206: mov     rsp, rbp
 * 0000000140734209: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140734210: add     rsp, 0E8h
 * 0000000140734217: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073421E: jz      short loc_140734225
 * 0000000140734220: jmp     KiKernelExit
 * 0000000140734225: test    word ptr gs:898h, 200h
 * 0000000140734230: jz      short loc_140734237
 * 0000000140734232: verw    [rsp+arg_18]
 * 0000000140734237: swapgs
 * 000000014073423A: iretq
 * 000000014073423C: ldmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 0000000140734240: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140734244: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140734248: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014073424C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140734250: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140734254: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140734258: mov     r11, [rbp+0E8h+var_108]
 * 000000014073425C: mov     r10, [rbp+0E8h+var_110]
 * 0000000140734260: mov     r9, [rbp+0E8h+var_118]
 * 0000000140734264: mov     r8, [rbp+0E8h+var_120]
 * 0000000140734268: mov     rdx, [rbp+0E8h+var_128]
 * 000000014073426C: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140734270: mov     rax, [rbp+0E8h+var_13F+7]
 * 0000000140734274: mov     rsp, rbp
 * 0000000140734277: mov     rbp, [rbp+0E8h+var_10]
 * 000000014073427E: add     rsp, 0E8h
 * 0000000140734285: iretq
 */
