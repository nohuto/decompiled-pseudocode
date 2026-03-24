/*
 * XREFs of KiChainedDispatch @ 0x140729970
 * Callers:
 *     <none>
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14021C910 (KiEndInterruptCycleAccumulation.c)
 *     HalPerformEndOfInterrupt @ 0x14032DA80 (HalPerformEndOfInterrupt.c)
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EBBF0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x140729970 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x140729D60 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x14072F6C0 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x140729970
 * Reason: Hex-Rays returned no pseudocode for 0x140729970
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140729970: mov     rcx, gs:9198h
 * 0000000140729979: mov     rax, rcx
 * 000000014072997C: mov     edx, cs:KeIsrStackSize
 * 0000000140729982: sub     rax, rdx
 * 0000000140729985: mov     rdx, rsp
 * 0000000140729988: cmp     rax, rsp
 * 000000014072998B: ja      short loc_140729992
 * 000000014072998D: cmp     rsp, rcx
 * 0000000140729990: jb      short loc_14072999E
 * 0000000140729992: cmp     dword ptr cs:KiDpcWatchdogConfigurationLock.StackLimit, 0
 * 0000000140729999: jnz     short loc_14072999E
 * 000000014072999B: mov     rsp, rcx
 * 000000014072999E: sub     rsp, 20h
 * 00000001407299A2: mov     [rsp+20h+var_10], rdx
 * 00000001407299A7: call    KiScanInterruptObjectList
 * 00000001407299AC: mov     rsp, [rsp+20h+var_10]
 * 00000001407299B1: mov     rcx, rsi
 * 00000001407299B4: call    HalPerformEndOfInterrupt
 * 00000001407299B9: mov     rcx, gs:20h
 * 00000001407299C2: movzx   edx, byte ptr [rbp-57h]
 * 00000001407299C6: call    KiEndInterruptCycleAccumulation
 * 00000001407299CB: test    al, al
 * 00000001407299CD: jz      short loc_1407299D4
 * 00000001407299CF: call    KiDpcInterruptBypass
 * 00000001407299D4: movzx   ecx, byte ptr [rbp-57h]
 * 00000001407299D8: cmp     cs:KiIrqlFlags, 0
 * 00000001407299DF: jz      short loc_1407299E8
 * 00000001407299E1: call    KzSetIrqlUnsafe
 * 00000001407299E6: jmp     short loc_1407299EC
 * 00000001407299E8: mov     cr8, rcx
 * 00000001407299EC: mov     rsi, [rbp+0D0h]
 * 00000001407299F3: test    byte ptr cs:KiTrapFeatures, 2
 * 00000001407299FA: jz      short loc_140729A01
 * 00000001407299FC: add     rsp, 28h
 * 0000000140729A00: retn
 * 0000000140729A01: test    byte ptr [rbp+0F0h], 1
 * 0000000140729A08: jz      loc_140729D09
 * 0000000140729A0E: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140729A15: jz      short loc_140729A1A
 * 0000000140729A17: stac
 * 0000000140729A1A: mov     rcx, gs:188h
 * 0000000140729A23: test    byte ptr [rcx+0C2h], 3
 * 0000000140729A2A: jz      short loc_140729A47
 * 0000000140729A2C: mov     ecx, 1
 * 0000000140729A31: mov     cr8, rcx
 * 0000000140729A35: sti
 * 0000000140729A36: call    KiInitiateUserApc
 * 0000000140729A3B: cli
 * 0000000140729A3C: mov     ecx, 0
 * 0000000140729A41: mov     cr8, rcx
 * 0000000140729A45: jmp     short loc_140729A1A
 * 0000000140729A47: test    byte ptr [rcx+3], 80h
 * 0000000140729A4B: jz      short loc_140729A5A
 * 0000000140729A4D: call    KiSynchronizeUserIsolationDomainEntry
 * 0000000140729A52: test    eax, eax
 * 0000000140729A54: mov     rax, [rbp-50h]
 * 0000000140729A58: jnz     short loc_140729A1A
 * 0000000140729A5A: test    byte ptr gs:8A0h, 2
 * 0000000140729A63: jz      short loc_140729A6C
 * 0000000140729A65: xor     ecx, ecx
 * 0000000140729A67: call    KiUpdateStibpPairing
 * 0000000140729A6C: mov     rcx, gs:188h
 * 0000000140729A75: test    dword ptr [rcx], 8000000h
 * 0000000140729A7B: jz      short loc_140729A82
 * 0000000140729A7D: call    KiRestoreSetContextState
 * 0000000140729A82: mov     rcx, gs:188h
 * 0000000140729A8B: test    dword ptr [rcx], 10000h
 * 0000000140729A91: jz      short loc_140729AA7
 * 0000000140729A93: test    byte ptr [rcx+2], 1
 * 0000000140729A97: jz      short loc_140729AA7
 * 0000000140729A99: call    KiCopyCounters
 * 0000000140729A9E: mov     rcx, gs:188h
 * 0000000140729AA7: ldmxcsr dword ptr [rbp-54h]
 * 0000000140729AAB: cmp     word ptr [rbp+80h], 0
 * 0000000140729AB3: jz      short loc_140729ABA
 * 0000000140729AB5: call    KiRestoreDebugRegisterState
 * 0000000140729ABA: mov     rcx, gs:188h
 * 0000000140729AC3: bt      dword ptr [rcx+74h], 16h
 * 0000000140729AC8: jnb     short loc_140729AF4
 * 0000000140729ACA: xor     ecx, ecx
 * 0000000140729ACC: rdsspq  rcx
 * 0000000140729AD1: mov     r8, gs:9D68h
 * 0000000140729ADA: add     r8, 8
 * 0000000140729ADE: cmp     rcx, r8
 * 0000000140729AE1: jnz     short loc_140729AF4
 * 0000000140729AE3: mov     rcx, gs:9D60h
 * 0000000140729AEC: rstorssp qword ptr [rcx]
 * 0000000140729AF0: saveprevssp
 * 0000000140729AF4: mov     byte ptr gs:89Eh, 0
 * 0000000140729AFD: movzx   eax, word ptr gs:8ACh
 * 0000000140729B06: cmp     gs:8A6h, ax
 * 0000000140729B0F: jz      short loc_140729B23
 * 0000000140729B11: mov     gs:8A6h, ax
 * 0000000140729B1A: mov     ecx, 48h ; 'H'
 * 0000000140729B1F: xor     edx, edx
 * 0000000140729B21: wrmsr
 * 0000000140729B23: btr     word ptr gs:898h, 2
 * 0000000140729B2E: jnb     short loc_140729B3E
 * 0000000140729B30: mov     eax, 1
 * 0000000140729B35: xor     edx, edx
 * 0000000140729B37: mov     ecx, 49h ; 'I'
 * 0000000140729B3C: wrmsr
 * 0000000140729B3E: btr     word ptr gs:898h, 5
 * 0000000140729B49: jnb     loc_140729C86
 * 0000000140729B4F: call    loc_140729C62
 * 0000000140729B54: add     rsp, 8
 * 0000000140729B58: call    loc_140729C6B
 * 0000000140729B5D: add     rsp, 8
 * 0000000140729B61: call    loc_140729B54
 * 0000000140729B66: add     rsp, 8
 * 0000000140729B6A: call    loc_140729B5D
 * 0000000140729B6F: add     rsp, 8
 * 0000000140729B73: call    loc_140729B66
 * 0000000140729B78: add     rsp, 8
 * 0000000140729B7C: call    loc_140729B6F
 * 0000000140729B81: add     rsp, 8
 * 0000000140729B85: call    loc_140729B78
 * 0000000140729B8A: add     rsp, 8
 * 0000000140729B8E: call    loc_140729B81
 * 0000000140729B93: add     rsp, 8
 * 0000000140729B97: call    loc_140729B8A
 * 0000000140729B9C: add     rsp, 8
 * 0000000140729BA0: call    loc_140729B93
 * 0000000140729BA5: add     rsp, 8
 * 0000000140729BA9: call    loc_140729B9C
 * 0000000140729BAE: add     rsp, 8
 * 0000000140729BB2: call    loc_140729BA5
 * 0000000140729BB7: add     rsp, 8
 * 0000000140729BBB: call    loc_140729BAE
 * 0000000140729BC0: add     rsp, 8
 * 0000000140729BC4: call    loc_140729BB7
 * 0000000140729BC9: add     rsp, 8
 * 0000000140729BCD: call    loc_140729BC0
 * 0000000140729BD2: add     rsp, 8
 * 0000000140729BD6: call    loc_140729BC9
 * 0000000140729BDB: add     rsp, 8
 * 0000000140729BDF: call    loc_140729BD2
 * 0000000140729BE4: add     rsp, 8
 * 0000000140729BE8: call    loc_140729BDB
 * 0000000140729BED: add     rsp, 8
 * 0000000140729BF1: call    loc_140729BE4
 * 0000000140729BF6: add     rsp, 8
 * 0000000140729BFA: call    loc_140729BED
 * 0000000140729BFF: add     rsp, 8
 * 0000000140729C03: call    loc_140729BF6
 * 0000000140729C08: add     rsp, 8
 * 0000000140729C0C: call    loc_140729BFF
 * 0000000140729C11: add     rsp, 8
 * 0000000140729C15: call    loc_140729C08
 * 0000000140729C1A: add     rsp, 8
 * 0000000140729C1E: call    loc_140729C11
 * 0000000140729C23: add     rsp, 8
 * 0000000140729C27: call    loc_140729C1A
 * 0000000140729C2C: add     rsp, 8
 * 0000000140729C30: call    loc_140729C23
 * 0000000140729C35: add     rsp, 8
 * 0000000140729C39: call    loc_140729C2C
 * 0000000140729C3E: add     rsp, 8
 * 0000000140729C42: call    loc_140729C35
 * 0000000140729C47: add     rsp, 8
 * 0000000140729C4B: call    loc_140729C3E
 * 0000000140729C50: add     rsp, 8
 * 0000000140729C54: call    loc_140729C47
 * 0000000140729C59: add     rsp, 8
 * 0000000140729C5D: call    loc_140729C50
 * 0000000140729C62: add     rsp, 8
 * 0000000140729C66: call    loc_140729C59
 * 0000000140729C6B: add     rsp, 8
 * 0000000140729C6F: mov     eax, 0DADAh
 * 0000000140729C74: test    byte ptr gs:89Ch, 8
 * 0000000140729C7D: jz      short loc_140729C86
 * 0000000140729C7F: mov     al, 20h ; ' '
 * 0000000140729C81: incsspq rax
 * 0000000140729C86: test    word ptr gs:898h, 100h
 * 0000000140729C91: jz      short loc_140729C9F
 * 0000000140729C93: xor     eax, eax
 * 0000000140729C95: xor     edx, edx
 * 0000000140729C97: mov     ecx, 1
 * 0000000140729C9C: div     rcx
 * 0000000140729C9F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140729CA3: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140729CA7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140729CAB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140729CAF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140729CB3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140729CB7: mov     r11, [rbp-20h]
 * 0000000140729CBB: mov     r10, [rbp-28h]
 * 0000000140729CBF: mov     r9, [rbp-30h]
 * 0000000140729CC3: mov     r8, [rbp-38h]
 * 0000000140729CC7: mov     rdx, [rbp-40h]
 * 0000000140729CCB: mov     rcx, [rbp-48h]
 * 0000000140729CCF: mov     rax, [rbp-50h]
 * 0000000140729CD3: mov     rsp, rbp
 * 0000000140729CD6: mov     rbp, [rbp+0D8h]
 * 0000000140729CDD: add     rsp, 0E8h
 * 0000000140729CE4: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140729CEB: jz      short loc_140729CF2
 * 0000000140729CED: jmp     KiKernelExit
 * 0000000140729CF2: test    word ptr gs:898h, 200h
 * 0000000140729CFD: jz      short loc_140729D04
 * 0000000140729CFF: verw    [rsp-1C8h+arg_1E0]
 * 0000000140729D04: swapgs
 * 0000000140729D07: iretq
 * 0000000140729D09: ldmxcsr dword ptr [rbp-54h]
 * 0000000140729D0D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140729D11: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140729D15: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140729D19: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140729D1D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140729D21: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140729D25: mov     r11, [rbp-20h]
 * 0000000140729D29: mov     r10, [rbp-28h]
 * 0000000140729D2D: mov     r9, [rbp-30h]
 * 0000000140729D31: mov     r8, [rbp-38h]
 * 0000000140729D35: mov     rdx, [rbp-40h]
 * 0000000140729D39: mov     rcx, [rbp-48h]
 * 0000000140729D3D: mov     rax, [rbp-50h]
 * 0000000140729D41: mov     rsp, rbp
 * 0000000140729D44: mov     rbp, [rbp+0D8h]
 * 0000000140729D4B: add     rsp, 0E8h
 * 0000000140729D52: iretq
 */
