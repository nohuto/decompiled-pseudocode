/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x14072FBE0
 * Callers:
 *     <none>
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14021E2A0 (KiEndInterruptCycleAccumulation.c)
 *     KiStartInterruptCycleAccumulation @ 0x140229AE0 (KiStartInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EE560 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiSpuriousDispatchNoEOI @ 0x14072FBE0 (KiSpuriousDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140734290 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiSpuriousDispatchNoEOI @ 0x14072FBE0
 * Reason: Hex-Rays returned no pseudocode for 0x14072FBE0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072FBE0: mov     ecx, 0Fh
 * 000000014072FBE5: cmp     cs:KiIrqlFlags, 0
 * 000000014072FBEC: jz      short loc_14072FBF5
 * 000000014072FBEE: call    KzSetIrqlUnsafe
 * 000000014072FBF3: jmp     short loc_14072FBFD
 * 000000014072FBF5: mov     rax, cr8
 * 000000014072FBF9: mov     cr8, rcx
 * 000000014072FBFD: mov     [rbp-57h], al
 * 000000014072FC00: mov     rcx, gs:20h
 * 000000014072FC09: xor     edx, edx
 * 000000014072FC0B: call    KiStartInterruptCycleAccumulation
 * 000000014072FC10: sti
 * 000000014072FC11: inc     dword ptr [rsi+74h]
 * 000000014072FC14: cli
 * 000000014072FC15: mov     rcx, gs:20h
 * 000000014072FC1E: movzx   edx, byte ptr [rbp-57h]
 * 000000014072FC22: call    KiEndInterruptCycleAccumulation
 * 000000014072FC27: test    al, al
 * 000000014072FC29: jz      short loc_14072FC30
 * 000000014072FC2B: call    KiDpcInterruptBypass
 * 000000014072FC30: movzx   ecx, byte ptr [rbp-57h]
 * 000000014072FC34: cmp     cs:KiIrqlFlags, 0
 * 000000014072FC3B: jz      short loc_14072FC44
 * 000000014072FC3D: call    KzSetIrqlUnsafe
 * 000000014072FC42: jmp     short loc_14072FC48
 * 000000014072FC44: mov     cr8, rcx
 * 000000014072FC48: mov     rsi, [rbp+0D0h]
 * 000000014072FC4F: cli
 * 000000014072FC50: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072FC57: jz      short loc_14072FC5E
 * 000000014072FC59: add     rsp, 28h
 * 000000014072FC5D: retn
 * 000000014072FC5E: test    byte ptr [rbp+0F0h], 1
 * 000000014072FC65: jz      loc_14072FF66
 * 000000014072FC6B: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072FC72: jz      short loc_14072FC77
 * 000000014072FC74: stac
 * 000000014072FC77: mov     rcx, gs:188h
 * 000000014072FC80: test    byte ptr [rcx+0C2h], 3
 * 000000014072FC87: jz      short loc_14072FCA4
 * 000000014072FC89: mov     ecx, 1
 * 000000014072FC8E: mov     cr8, rcx
 * 000000014072FC92: sti
 * 000000014072FC93: call    KiInitiateUserApc
 * 000000014072FC98: cli
 * 000000014072FC99: mov     ecx, 0
 * 000000014072FC9E: mov     cr8, rcx
 * 000000014072FCA2: jmp     short loc_14072FC77
 * 000000014072FCA4: test    byte ptr [rcx+3], 80h
 * 000000014072FCA8: jz      short loc_14072FCB7
 * 000000014072FCAA: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072FCAF: test    eax, eax
 * 000000014072FCB1: mov     rax, [rbp-50h]
 * 000000014072FCB5: jnz     short loc_14072FC77
 * 000000014072FCB7: test    byte ptr gs:8A0h, 2
 * 000000014072FCC0: jz      short loc_14072FCC9
 * 000000014072FCC2: xor     ecx, ecx
 * 000000014072FCC4: call    KiUpdateStibpPairing
 * 000000014072FCC9: mov     rcx, gs:188h
 * 000000014072FCD2: test    dword ptr [rcx], 8000000h
 * 000000014072FCD8: jz      short loc_14072FCDF
 * 000000014072FCDA: call    KiRestoreSetContextState
 * 000000014072FCDF: mov     rcx, gs:188h
 * 000000014072FCE8: test    dword ptr [rcx], 10000h
 * 000000014072FCEE: jz      short loc_14072FD04
 * 000000014072FCF0: test    byte ptr [rcx+2], 1
 * 000000014072FCF4: jz      short loc_14072FD04
 * 000000014072FCF6: call    KiCopyCounters
 * 000000014072FCFB: mov     rcx, gs:188h
 * 000000014072FD04: ldmxcsr dword ptr [rbp-54h]
 * 000000014072FD08: cmp     word ptr [rbp+80h], 0
 * 000000014072FD10: jz      short loc_14072FD17
 * 000000014072FD12: call    KiRestoreDebugRegisterState
 * 000000014072FD17: mov     rcx, gs:188h
 * 000000014072FD20: bt      dword ptr [rcx+74h], 16h
 * 000000014072FD25: jnb     short loc_14072FD51
 * 000000014072FD27: xor     ecx, ecx
 * 000000014072FD29: rdsspq  rcx
 * 000000014072FD2E: mov     r8, gs:9D68h
 * 000000014072FD37: add     r8, 8
 * 000000014072FD3B: cmp     rcx, r8
 * 000000014072FD3E: jnz     short loc_14072FD51
 * 000000014072FD40: mov     rcx, gs:9D60h
 * 000000014072FD49: rstorssp qword ptr [rcx]
 * 000000014072FD4D: saveprevssp
 * 000000014072FD51: mov     byte ptr gs:89Eh, 0
 * 000000014072FD5A: movzx   eax, word ptr gs:8ACh
 * 000000014072FD63: cmp     gs:8A6h, ax
 * 000000014072FD6C: jz      short loc_14072FD80
 * 000000014072FD6E: mov     gs:8A6h, ax
 * 000000014072FD77: mov     ecx, 48h ; 'H'
 * 000000014072FD7C: xor     edx, edx
 * 000000014072FD7E: wrmsr
 * 000000014072FD80: btr     word ptr gs:898h, 2
 * 000000014072FD8B: jnb     short loc_14072FD9B
 * 000000014072FD8D: mov     eax, 1
 * 000000014072FD92: xor     edx, edx
 * 000000014072FD94: mov     ecx, 49h ; 'I'
 * 000000014072FD99: wrmsr
 * 000000014072FD9B: btr     word ptr gs:898h, 5
 * 000000014072FDA6: jnb     loc_14072FEE3
 * 000000014072FDAC: call    loc_14072FEBF
 * 000000014072FDB1: add     rsp, 8
 * 000000014072FDB5: call    loc_14072FEC8
 * 000000014072FDBA: add     rsp, 8
 * 000000014072FDBE: call    loc_14072FDB1
 * 000000014072FDC3: add     rsp, 8
 * 000000014072FDC7: call    loc_14072FDBA
 * 000000014072FDCC: add     rsp, 8
 * 000000014072FDD0: call    loc_14072FDC3
 * 000000014072FDD5: add     rsp, 8
 * 000000014072FDD9: call    loc_14072FDCC
 * 000000014072FDDE: add     rsp, 8
 * 000000014072FDE2: call    loc_14072FDD5
 * 000000014072FDE7: add     rsp, 8
 * 000000014072FDEB: call    loc_14072FDDE
 * 000000014072FDF0: add     rsp, 8
 * 000000014072FDF4: call    loc_14072FDE7
 * 000000014072FDF9: add     rsp, 8
 * 000000014072FDFD: call    loc_14072FDF0
 * 000000014072FE02: add     rsp, 8
 * 000000014072FE06: call    loc_14072FDF9
 * 000000014072FE0B: add     rsp, 8
 * 000000014072FE0F: call    loc_14072FE02
 * 000000014072FE14: add     rsp, 8
 * 000000014072FE18: call    loc_14072FE0B
 * 000000014072FE1D: add     rsp, 8
 * 000000014072FE21: call    loc_14072FE14
 * 000000014072FE26: add     rsp, 8
 * 000000014072FE2A: call    loc_14072FE1D
 * 000000014072FE2F: add     rsp, 8
 * 000000014072FE33: call    loc_14072FE26
 * 000000014072FE38: add     rsp, 8
 * 000000014072FE3C: call    loc_14072FE2F
 * 000000014072FE41: add     rsp, 8
 * 000000014072FE45: call    loc_14072FE38
 * 000000014072FE4A: add     rsp, 8
 * 000000014072FE4E: call    loc_14072FE41
 * 000000014072FE53: add     rsp, 8
 * 000000014072FE57: call    loc_14072FE4A
 * 000000014072FE5C: add     rsp, 8
 * 000000014072FE60: call    loc_14072FE53
 * 000000014072FE65: add     rsp, 8
 * 000000014072FE69: call    loc_14072FE5C
 * 000000014072FE6E: add     rsp, 8
 * 000000014072FE72: call    loc_14072FE65
 * 000000014072FE77: add     rsp, 8
 * 000000014072FE7B: call    loc_14072FE6E
 * 000000014072FE80: add     rsp, 8
 * 000000014072FE84: call    loc_14072FE77
 * 000000014072FE89: add     rsp, 8
 * 000000014072FE8D: call    loc_14072FE80
 * 000000014072FE92: add     rsp, 8
 * 000000014072FE96: call    loc_14072FE89
 * 000000014072FE9B: add     rsp, 8
 * 000000014072FE9F: call    loc_14072FE92
 * 000000014072FEA4: add     rsp, 8
 * 000000014072FEA8: call    loc_14072FE9B
 * 000000014072FEAD: add     rsp, 8
 * 000000014072FEB1: call    loc_14072FEA4
 * 000000014072FEB6: add     rsp, 8
 * 000000014072FEBA: call    loc_14072FEAD
 * 000000014072FEBF: add     rsp, 8
 * 000000014072FEC3: call    loc_14072FEB6
 * 000000014072FEC8: add     rsp, 8
 * 000000014072FECC: mov     eax, 0DADAh
 * 000000014072FED1: test    byte ptr gs:89Ch, 8
 * 000000014072FEDA: jz      short loc_14072FEE3
 * 000000014072FEDC: mov     al, 20h ; ' '
 * 000000014072FEDE: incsspq rax
 * 000000014072FEE3: test    word ptr gs:898h, 100h
 * 000000014072FEEE: jz      short loc_14072FEFC
 * 000000014072FEF0: xor     eax, eax
 * 000000014072FEF2: xor     edx, edx
 * 000000014072FEF4: mov     ecx, 1
 * 000000014072FEF9: div     rcx
 * 000000014072FEFC: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072FF00: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072FF04: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072FF08: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072FF0C: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072FF10: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072FF14: mov     r11, [rbp-20h]
 * 000000014072FF18: mov     r10, [rbp-28h]
 * 000000014072FF1C: mov     r9, [rbp-30h]
 * 000000014072FF20: mov     r8, [rbp-38h]
 * 000000014072FF24: mov     rdx, [rbp-40h]
 * 000000014072FF28: mov     rcx, [rbp-48h]
 * 000000014072FF2C: mov     rax, [rbp-50h]
 * 000000014072FF30: mov     rsp, rbp
 * 000000014072FF33: mov     rbp, [rbp+0D8h]
 * 000000014072FF3A: add     rsp, 0E8h
 * 000000014072FF41: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072FF48: jz      short loc_14072FF4F
 * 000000014072FF4A: jmp     KiKernelExit
 * 000000014072FF4F: test    word ptr gs:898h, 200h
 * 000000014072FF5A: jz      short loc_14072FF61
 * 000000014072FF5C: verw    [rsp-1E8h+arg_200]
 * 000000014072FF61: swapgs
 * 000000014072FF64: iretq
 * 000000014072FF66: ldmxcsr dword ptr [rbp-54h]
 * 000000014072FF6A: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072FF6E: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072FF72: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072FF76: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072FF7A: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072FF7E: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072FF82: mov     r11, [rbp-20h]
 * 000000014072FF86: mov     r10, [rbp-28h]
 * 000000014072FF8A: mov     r9, [rbp-30h]
 * 000000014072FF8E: mov     r8, [rbp-38h]
 * 000000014072FF92: mov     rdx, [rbp-40h]
 * 000000014072FF96: mov     rcx, [rbp-48h]
 * 000000014072FF9A: mov     rax, [rbp-50h]
 * 000000014072FF9E: mov     rsp, rbp
 * 000000014072FFA1: mov     rbp, [rbp+0D8h]
 * 000000014072FFA8: add     rsp, 0E8h
 * 000000014072FFAF: iretq
 */
