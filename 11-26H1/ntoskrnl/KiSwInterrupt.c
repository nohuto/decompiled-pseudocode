/*
 * XREFs of KiSwInterrupt @ 0x14072E7F0
 * Callers:
 *     KiSwInterruptShadow @ 0x140C59CC0 (KiSwInterruptShadow.c)
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14021C910 (KiEndInterruptCycleAccumulation.c)
 *     KiStartInterruptCycleAccumulation @ 0x140228150 (KiStartInterruptCycleAccumulation.c)
 *     HalPerformEndOfInterrupt @ 0x14032DA80 (HalPerformEndOfInterrupt.c)
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiCheckForSListAddress @ 0x140422100 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiSwInterruptDispatch @ 0x140540C30 (KiSwInterruptDispatch.c)
 *     KzSetIrqlUnsafe @ 0x1405EBBF0 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405F0F90 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x14072E7F0 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x14072F6C0 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x14072E7F0
 * Reason: Hex-Rays returned no pseudocode for 0x14072E7F0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072E7F0: sub     rsp, 8
 * 000000014072E7F4: push    rbp
 * 000000014072E7F5: sub     rsp, 158h
 * 000000014072E7FC: lea     rbp, [rsp+80h]
 * 000000014072E804: mov     [rbp+0E8h+var_18], rsi
 * 000000014072E80B: mov     [rbp+0E8h+var_138], rax
 * 000000014072E80F: mov     [rbp+0E8h+var_130], rcx
 * 000000014072E813: mov     [rbp+0E8h+var_128], rdx
 * 000000014072E817: mov     [rbp+0E8h+var_120], r8
 * 000000014072E81B: mov     [rbp+0E8h+var_118], r9
 * 000000014072E81F: mov     [rbp+0E8h+var_110], r10
 * 000000014072E823: mov     [rbp+0E8h+var_108], r11
 * 000000014072E827: test    [rbp+0E8h+arg_0], 1
 * 000000014072E82E: jnz     short loc_14072E868
 * 000000014072E830: xor     edx, edx
 * 000000014072E832: rdsspq  rdx
 * 000000014072E837: mov     [rbp+0E8h+var_90], rdx
 * 000000014072E83B: lfence
 * 000000014072E83E: test    byte ptr gs:898h, 1
 * 000000014072E847: jnz     short loc_14072E851
 * 000000014072E849: lfence
 * 000000014072E84C: jmp     loc_14072EAD9
 * 000000014072E851: movzx   eax, word ptr gs:8A6h
 * 000000014072E85A: mov     ecx, 48h ; 'H'
 * 000000014072E85F: xor     edx, edx
 * 000000014072E861: wrmsr
 * 000000014072E863: jmp     loc_14072EAD9
 * 000000014072E868: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072E86F: jnz     short loc_14072E874
 * 000000014072E871: swapgs
 * 000000014072E874: lfence
 * 000000014072E877: mov     rcx, gs:9D68h
 * 000000014072E880: test    rcx, rcx
 * 000000014072E883: jz      short loc_14072E8A4
 * 000000014072E885: rdsspq  rdx
 * 000000014072E88A: mov     r10, gs:9D60h
 * 000000014072E893: add     r10, 8
 * 000000014072E897: cmp     rdx, r10
 * 000000014072E89A: jnz     short loc_14072E8A4
 * 000000014072E89C: rstorssp qword ptr [rcx]
 * 000000014072E8A0: saveprevssp
 * 000000014072E8A4: mov     r10, gs:188h
 * 000000014072E8AD: mov     rcx, gs:188h
 * 000000014072E8B6: mov     rcx, [rcx+220h]
 * 000000014072E8BD: mov     rcx, [rcx+760h]
 * 000000014072E8C4: mov     gs:890h, rcx
 * 000000014072E8CD: mov     cx, gs:8A2h
 * 000000014072E8D6: mov     gs:8A4h, cx
 * 000000014072E8DF: mov     cl, gs:898h
 * 000000014072E8E7: mov     gs:89Ah, cl
 * 000000014072E8EF: movzx   eax, word ptr gs:8A8h
 * 000000014072E8F8: cmp     gs:8A6h, ax
 * 000000014072E901: jz      short loc_14072E915
 * 000000014072E903: mov     gs:8A6h, ax
 * 000000014072E90C: mov     ecx, 48h ; 'H'
 * 000000014072E911: xor     edx, edx
 * 000000014072E913: wrmsr
 * 000000014072E915: movzx   edx, byte ptr gs:898h
 * 000000014072E91E: test    edx, 8
 * 000000014072E924: jz      short loc_14072E93D
 * 000000014072E926: mov     eax, 1
 * 000000014072E92B: xor     edx, edx
 * 000000014072E92D: mov     ecx, 49h ; 'I'
 * 000000014072E932: wrmsr
 * 000000014072E934: movzx   edx, byte ptr gs:898h
 * 000000014072E93D: test    edx, 2
 * 000000014072E943: jz      loc_14072EA80
 * 000000014072E949: call    loc_14072EA5C
 * 000000014072E94E: add     rsp, 8
 * 000000014072E952: call    loc_14072EA65
 * 000000014072E957: add     rsp, 8
 * 000000014072E95B: call    loc_14072E94E
 * 000000014072E960: add     rsp, 8
 * 000000014072E964: call    loc_14072E957
 * 000000014072E969: add     rsp, 8
 * 000000014072E96D: call    loc_14072E960
 * 000000014072E972: add     rsp, 8
 * 000000014072E976: call    loc_14072E969
 * 000000014072E97B: add     rsp, 8
 * 000000014072E97F: call    loc_14072E972
 * 000000014072E984: add     rsp, 8
 * 000000014072E988: call    loc_14072E97B
 * 000000014072E98D: add     rsp, 8
 * 000000014072E991: call    loc_14072E984
 * 000000014072E996: add     rsp, 8
 * 000000014072E99A: call    loc_14072E98D
 * 000000014072E99F: add     rsp, 8
 * 000000014072E9A3: call    loc_14072E996
 * 000000014072E9A8: add     rsp, 8
 * 000000014072E9AC: call    loc_14072E99F
 * 000000014072E9B1: add     rsp, 8
 * 000000014072E9B5: call    loc_14072E9A8
 * 000000014072E9BA: add     rsp, 8
 * 000000014072E9BE: call    loc_14072E9B1
 * 000000014072E9C3: add     rsp, 8
 * 000000014072E9C7: call    loc_14072E9BA
 * 000000014072E9CC: add     rsp, 8
 * 000000014072E9D0: call    loc_14072E9C3
 * 000000014072E9D5: add     rsp, 8
 * 000000014072E9D9: call    loc_14072E9CC
 * 000000014072E9DE: add     rsp, 8
 * 000000014072E9E2: call    loc_14072E9D5
 * 000000014072E9E7: add     rsp, 8
 * 000000014072E9EB: call    loc_14072E9DE
 * 000000014072E9F0: add     rsp, 8
 * 000000014072E9F4: call    loc_14072E9E7
 * 000000014072E9F9: add     rsp, 8
 * 000000014072E9FD: call    loc_14072E9F0
 * 000000014072EA02: add     rsp, 8
 * 000000014072EA06: call    loc_14072E9F9
 * 000000014072EA0B: add     rsp, 8
 * 000000014072EA0F: call    loc_14072EA02
 * 000000014072EA14: add     rsp, 8
 * 000000014072EA18: call    loc_14072EA0B
 * 000000014072EA1D: add     rsp, 8
 * 000000014072EA21: call    loc_14072EA14
 * 000000014072EA26: add     rsp, 8
 * 000000014072EA2A: call    loc_14072EA1D
 * 000000014072EA2F: add     rsp, 8
 * 000000014072EA33: call    loc_14072EA26
 * 000000014072EA38: add     rsp, 8
 * 000000014072EA3C: call    loc_14072EA2F
 * 000000014072EA41: add     rsp, 8
 * 000000014072EA45: call    loc_14072EA38
 * 000000014072EA4A: add     rsp, 8
 * 000000014072EA4E: call    loc_14072EA41
 * 000000014072EA53: add     rsp, 8
 * 000000014072EA57: call    loc_14072EA4A
 * 000000014072EA5C: add     rsp, 8
 * 000000014072EA60: call    loc_14072EA53
 * 000000014072EA65: add     rsp, 8
 * 000000014072EA69: mov     eax, 0DADAh
 * 000000014072EA6E: test    byte ptr gs:89Ch, 8
 * 000000014072EA77: jz      short loc_14072EA80
 * 000000014072EA79: mov     al, 20h ; ' '
 * 000000014072EA7B: incsspq rax
 * 000000014072EA80: test    edx, 80h
 * 000000014072EA86: jz      short loc_14072EA90
 * 000000014072EA88: lfence
 * 000000014072EA8B: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014072EA90: lfence
 * 000000014072EA93: mov     byte ptr gs:89Eh, 0
 * 000000014072EA9C: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014072EAA3: jz      short loc_14072EAC4
 * 000000014072EAA5: mov     ecx, 6A7h
 * 000000014072EAAA: rdmsr
 * 000000014072EAAC: cmp     edx, 0
 * 000000014072EAAF: jz      short loc_14072EAC4
 * 000000014072EAB1: mov     ecx, edx
 * 000000014072EAB3: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014072EAB9: cmp     edx, ecx
 * 000000014072EABB: jz      short loc_14072EAC4
 * 000000014072EABD: mov     ecx, 6A7h
 * 000000014072EAC2: wrmsr
 * 000000014072EAC4: test    byte ptr [r10+3], 3
 * 000000014072EAC9: mov     [rbp+0E8h+var_68], 0
 * 000000014072EAD2: jz      short loc_14072EAD9
 * 000000014072EAD4: call    KiSaveDebugRegisterState
 * 000000014072EAD9: cld
 * 000000014072EADA: stmxcsr [rbp+0E8h+var_13C]
 * 000000014072EADE: ldmxcsr dword ptr gs:180h
 * 000000014072EAE7: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014072EAEB: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014072EAEF: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014072EAF3: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014072EAF7: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014072EAFB: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014072EAFF: test    [rbp+0E8h+arg_0], 1
 * 000000014072EB06: jz      short KiSwInterruptDispatchTrap
 * 000000014072EB08: mov     r10, gs:188h
 * 000000014072EB11: test    byte ptr [r10+3], 80h
 * 000000014072EB16: jz      short KiSwInterruptDispatchTrap
 * 000000014072EB18: call    KiSynchronizeUserIsolationDomainExit
 * 000000014072EB1D: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072EB24: jz      short loc_14072EB2D
 * 000000014072EB26: mov     [rbp+0E8h+var_18], rsi
 * 000000014072EB2D: mov     [rbp+0E8h+var_13D], 0
 * 000000014072EB31: cmp     byte ptr gs:87DAh, 0
 * 000000014072EB3A: jz      short loc_14072EB41
 * 000000014072EB3C: call    KeWakeProcessor
 * 000000014072EB41: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014072EB48: cmp     rax, [rbp+0E8h]
 * 000000014072EB4F: jnb     short loc_14072EB6A
 * 000000014072EB51: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014072EB58: cmp     rax, [rbp+0E8h]
 * 000000014072EB5F: jb      short loc_14072EB6A
 * 000000014072EB61: lea     rcx, [rbp+0E8h+var_168]
 * 000000014072EB65: call    KiCheckForSListAddress
 * 000000014072EB6A: xor     esi, esi
 * 000000014072EB6C: inc     dword ptr gs:87C0h
 * 000000014072EB74: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072EB7B: jz      short loc_14072EB80
 * 000000014072EB7D: clac
 * 000000014072EB80: mov     ecx, 2
 * 000000014072EB85: cmp     cs:KiIrqlFlags, 0
 * 000000014072EB8C: jz      short loc_14072EB95
 * 000000014072EB8E: call    KzSetIrqlUnsafe
 * 000000014072EB93: jmp     short loc_14072EB9D
 * 000000014072EB95: mov     rax, cr8
 * 000000014072EB99: mov     cr8, rcx
 * 000000014072EB9D: mov     [rbp+0E8h+var_13F], al
 * 000000014072EBA0: mov     rcx, gs:20h
 * 000000014072EBA9: xor     edx, edx
 * 000000014072EBAB: call    KiStartInterruptCycleAccumulation
 * 000000014072EBB0: sti
 * 000000014072EBB1: lea     rcx, [rbp+0E8h+var_168]
 * 000000014072EBB5: call    KiSwInterruptDispatch
 * 000000014072EBBA: cli
 * 000000014072EBBB: mov     rcx, rsi
 * 000000014072EBBE: call    HalPerformEndOfInterrupt
 * 000000014072EBC3: mov     rcx, gs:20h
 * 000000014072EBCC: movzx   edx, [rbp+0E8h+var_13F]
 * 000000014072EBD0: call    KiEndInterruptCycleAccumulation
 * 000000014072EBD5: test    al, al
 * 000000014072EBD7: jz      short loc_14072EBDE
 * 000000014072EBD9: call    KiDpcInterruptBypass
 * 000000014072EBDE: movzx   ecx, [rbp+0E8h+var_13F]
 * 000000014072EBE2: cmp     cs:KiIrqlFlags, 0
 * 000000014072EBE9: jz      short loc_14072EBF2
 * 000000014072EBEB: call    KzSetIrqlUnsafe
 * 000000014072EBF0: jmp     short loc_14072EBF6
 * 000000014072EBF2: mov     cr8, rcx
 * 000000014072EBF6: mov     rsi, [rbp+0E8h+var_18]
 * 000000014072EBFD: cli
 * 000000014072EBFE: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072EC05: jz      short loc_14072EC0C
 * 000000014072EC07: add     rsp, 28h
 * 000000014072EC0B: retn
 * 000000014072EC0C: test    [rbp+0E8h+arg_0], 1
 * 000000014072EC13: jz      loc_14072EF14
 * 000000014072EC19: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072EC20: jz      short loc_14072EC25
 * 000000014072EC22: stac
 * 000000014072EC25: mov     rcx, gs:188h
 * 000000014072EC2E: test    byte ptr [rcx+0C2h], 3
 * 000000014072EC35: jz      short loc_14072EC52
 * 000000014072EC37: mov     ecx, 1
 * 000000014072EC3C: mov     cr8, rcx
 * 000000014072EC40: sti
 * 000000014072EC41: call    KiInitiateUserApc
 * 000000014072EC46: cli
 * 000000014072EC47: mov     ecx, 0
 * 000000014072EC4C: mov     cr8, rcx
 * 000000014072EC50: jmp     short loc_14072EC25
 * 000000014072EC52: test    byte ptr [rcx+3], 80h
 * 000000014072EC56: jz      short loc_14072EC65
 * 000000014072EC58: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072EC5D: test    eax, eax
 * 000000014072EC5F: mov     rax, [rbp+0E8h+var_138]
 * 000000014072EC63: jnz     short loc_14072EC25
 * 000000014072EC65: test    byte ptr gs:8A0h, 2
 * 000000014072EC6E: jz      short loc_14072EC77
 * 000000014072EC70: xor     ecx, ecx
 * 000000014072EC72: call    KiUpdateStibpPairing
 * 000000014072EC77: mov     rcx, gs:188h
 * 000000014072EC80: test    dword ptr [rcx], 8000000h
 * 000000014072EC86: jz      short loc_14072EC8D
 * 000000014072EC88: call    KiRestoreSetContextState
 * 000000014072EC8D: mov     rcx, gs:188h
 * 000000014072EC96: test    dword ptr [rcx], 10000h
 * 000000014072EC9C: jz      short loc_14072ECB2
 * 000000014072EC9E: test    byte ptr [rcx+2], 1
 * 000000014072ECA2: jz      short loc_14072ECB2
 * 000000014072ECA4: call    KiCopyCounters
 * 000000014072ECA9: mov     rcx, gs:188h
 * 000000014072ECB2: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014072ECB6: cmp     [rbp+0E8h+var_68], 0
 * 000000014072ECBE: jz      short loc_14072ECC5
 * 000000014072ECC0: call    KiRestoreDebugRegisterState
 * 000000014072ECC5: mov     rcx, gs:188h
 * 000000014072ECCE: bt      dword ptr [rcx+74h], 16h
 * 000000014072ECD3: jnb     short loc_14072ECFF
 * 000000014072ECD5: xor     ecx, ecx
 * 000000014072ECD7: rdsspq  rcx
 * 000000014072ECDC: mov     r8, gs:9D68h
 * 000000014072ECE5: add     r8, 8
 * 000000014072ECE9: cmp     rcx, r8
 * 000000014072ECEC: jnz     short loc_14072ECFF
 * 000000014072ECEE: mov     rcx, gs:9D60h
 * 000000014072ECF7: rstorssp qword ptr [rcx]
 * 000000014072ECFB: saveprevssp
 * 000000014072ECFF: mov     byte ptr gs:89Eh, 0
 * 000000014072ED08: movzx   eax, word ptr gs:8ACh
 * 000000014072ED11: cmp     gs:8A6h, ax
 * 000000014072ED1A: jz      short loc_14072ED2E
 * 000000014072ED1C: mov     gs:8A6h, ax
 * 000000014072ED25: mov     ecx, 48h ; 'H'
 * 000000014072ED2A: xor     edx, edx
 * 000000014072ED2C: wrmsr
 * 000000014072ED2E: btr     word ptr gs:898h, 2
 * 000000014072ED39: jnb     short loc_14072ED49
 * 000000014072ED3B: mov     eax, 1
 * 000000014072ED40: xor     edx, edx
 * 000000014072ED42: mov     ecx, 49h ; 'I'
 * 000000014072ED47: wrmsr
 * 000000014072ED49: btr     word ptr gs:898h, 5
 * 000000014072ED54: jnb     loc_14072EE91
 * 000000014072ED5A: call    loc_14072EE6D
 * 000000014072ED5F: add     rsp, 8
 * 000000014072ED63: call    loc_14072EE76
 * 000000014072ED68: add     rsp, 8
 * 000000014072ED6C: call    loc_14072ED5F
 * 000000014072ED71: add     rsp, 8
 * 000000014072ED75: call    loc_14072ED68
 * 000000014072ED7A: add     rsp, 8
 * 000000014072ED7E: call    loc_14072ED71
 * 000000014072ED83: add     rsp, 8
 * 000000014072ED87: call    loc_14072ED7A
 * 000000014072ED8C: add     rsp, 8
 * 000000014072ED90: call    loc_14072ED83
 * 000000014072ED95: add     rsp, 8
 * 000000014072ED99: call    loc_14072ED8C
 * 000000014072ED9E: add     rsp, 8
 * 000000014072EDA2: call    loc_14072ED95
 * 000000014072EDA7: add     rsp, 8
 * 000000014072EDAB: call    loc_14072ED9E
 * 000000014072EDB0: add     rsp, 8
 * 000000014072EDB4: call    loc_14072EDA7
 * 000000014072EDB9: add     rsp, 8
 * 000000014072EDBD: call    loc_14072EDB0
 * 000000014072EDC2: add     rsp, 8
 * 000000014072EDC6: call    loc_14072EDB9
 * 000000014072EDCB: add     rsp, 8
 * 000000014072EDCF: call    loc_14072EDC2
 * 000000014072EDD4: add     rsp, 8
 * 000000014072EDD8: call    loc_14072EDCB
 * 000000014072EDDD: add     rsp, 8
 * 000000014072EDE1: call    loc_14072EDD4
 * 000000014072EDE6: add     rsp, 8
 * 000000014072EDEA: call    loc_14072EDDD
 * 000000014072EDEF: add     rsp, 8
 * 000000014072EDF3: call    loc_14072EDE6
 * 000000014072EDF8: add     rsp, 8
 * 000000014072EDFC: call    loc_14072EDEF
 * 000000014072EE01: add     rsp, 8
 * 000000014072EE05: call    loc_14072EDF8
 * 000000014072EE0A: add     rsp, 8
 * 000000014072EE0E: call    loc_14072EE01
 * 000000014072EE13: add     rsp, 8
 * 000000014072EE17: call    loc_14072EE0A
 * 000000014072EE1C: add     rsp, 8
 * 000000014072EE20: call    loc_14072EE13
 * 000000014072EE25: add     rsp, 8
 * 000000014072EE29: call    loc_14072EE1C
 * 000000014072EE2E: add     rsp, 8
 * 000000014072EE32: call    loc_14072EE25
 * 000000014072EE37: add     rsp, 8
 * 000000014072EE3B: call    loc_14072EE2E
 * 000000014072EE40: add     rsp, 8
 * 000000014072EE44: call    loc_14072EE37
 * 000000014072EE49: add     rsp, 8
 * 000000014072EE4D: call    loc_14072EE40
 * 000000014072EE52: add     rsp, 8
 * 000000014072EE56: call    loc_14072EE49
 * 000000014072EE5B: add     rsp, 8
 * 000000014072EE5F: call    loc_14072EE52
 * 000000014072EE64: add     rsp, 8
 * 000000014072EE68: call    loc_14072EE5B
 * 000000014072EE6D: add     rsp, 8
 * 000000014072EE71: call    loc_14072EE64
 * 000000014072EE76: add     rsp, 8
 * 000000014072EE7A: mov     eax, 0DADAh
 * 000000014072EE7F: test    byte ptr gs:89Ch, 8
 * 000000014072EE88: jz      short loc_14072EE91
 * 000000014072EE8A: mov     al, 20h ; ' '
 * 000000014072EE8C: incsspq rax
 * 000000014072EE91: test    word ptr gs:898h, 100h
 * 000000014072EE9C: jz      short loc_14072EEAA
 * 000000014072EE9E: xor     eax, eax
 * 000000014072EEA0: xor     edx, edx
 * 000000014072EEA2: mov     ecx, 1
 * 000000014072EEA7: div     rcx
 * 000000014072EEAA: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014072EEAE: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014072EEB2: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014072EEB6: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014072EEBA: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014072EEBE: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014072EEC2: mov     r11, [rbp+0E8h+var_108]
 * 000000014072EEC6: mov     r10, [rbp+0E8h+var_110]
 * 000000014072EECA: mov     r9, [rbp+0E8h+var_118]
 * 000000014072EECE: mov     r8, [rbp+0E8h+var_120]
 * 000000014072EED2: mov     rdx, [rbp+0E8h+var_128]
 * 000000014072EED6: mov     rcx, [rbp+0E8h+var_130]
 * 000000014072EEDA: mov     rax, [rbp+0E8h+var_138]
 * 000000014072EEDE: mov     rsp, rbp
 * 000000014072EEE1: mov     rbp, [rbp+0E8h+var_10]
 * 000000014072EEE8: add     rsp, 0E8h
 * 000000014072EEEF: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072EEF6: jz      short loc_14072EEFD
 * 000000014072EEF8: jmp     KiKernelExit
 * 000000014072EEFD: test    word ptr gs:898h, 200h
 * 000000014072EF08: jz      short loc_14072EF0F
 * 000000014072EF0A: verw    [rsp+arg_18]
 * 000000014072EF0F: swapgs
 * 000000014072EF12: iretq
 * 000000014072EF14: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014072EF18: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014072EF1C: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014072EF20: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014072EF24: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014072EF28: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014072EF2C: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014072EF30: mov     r11, [rbp+0E8h+var_108]
 * 000000014072EF34: mov     r10, [rbp+0E8h+var_110]
 * 000000014072EF38: mov     r9, [rbp+0E8h+var_118]
 * 000000014072EF3C: mov     r8, [rbp+0E8h+var_120]
 * 000000014072EF40: mov     rdx, [rbp+0E8h+var_128]
 * 000000014072EF44: mov     rcx, [rbp+0E8h+var_130]
 * 000000014072EF48: mov     rax, [rbp+0E8h+var_138]
 * 000000014072EF4C: mov     rsp, rbp
 * 000000014072EF4F: mov     rbp, [rbp+0E8h+var_10]
 * 000000014072EF56: add     rsp, 0E8h
 * 000000014072EF5D: iretq
 */
