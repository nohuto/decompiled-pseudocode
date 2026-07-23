/*
 * XREFs of KiInterruptDispatch @ 0x14072EC20
 * Callers:
 *     <none>
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14021E2A0 (KiEndInterruptCycleAccumulation.c)
 *     HalPerformEndOfInterrupt @ 0x14032FAB0 (HalPerformEndOfInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EE560 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x14072EA70 (KiInterruptSubDispatch.c)
 *     KiInterruptDispatch @ 0x14072EC20 (KiInterruptDispatch.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140734290 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x14072EC20
 * Reason: Hex-Rays returned no pseudocode for 0x14072EC20
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072EC20: mov     rcx, gs:9198h
 * 000000014072EC29: mov     rax, rcx
 * 000000014072EC2C: mov     edx, cs:KeIsrStackSize
 * 000000014072EC32: sub     rax, rdx
 * 000000014072EC35: mov     rdx, rsp
 * 000000014072EC38: cmp     rax, rsp
 * 000000014072EC3B: ja      short loc_14072EC42
 * 000000014072EC3D: cmp     rsp, rcx
 * 000000014072EC40: jb      short loc_14072EC4E
 * 000000014072EC42: cmp     dword ptr cs:KiDpcWatchdogConfigurationLock.InitialStack, 0
 * 000000014072EC49: jnz     short loc_14072EC4E
 * 000000014072EC4B: mov     rsp, rcx
 * 000000014072EC4E: sub     rsp, 20h
 * 000000014072EC52: mov     [rsp+20h+var_10], rdx
 * 000000014072EC57: call    KiInterruptSubDispatch
 * 000000014072EC5C: mov     rsp, [rsp+20h+var_10]
 * 000000014072EC61: mov     rcx, rsi
 * 000000014072EC64: call    HalPerformEndOfInterrupt
 * 000000014072EC69: mov     rcx, gs:20h
 * 000000014072EC72: movzx   edx, byte ptr [rbp-57h]
 * 000000014072EC76: call    KiEndInterruptCycleAccumulation
 * 000000014072EC7B: test    al, al
 * 000000014072EC7D: jz      short loc_14072EC84
 * 000000014072EC7F: call    KiDpcInterruptBypass
 * 000000014072EC84: movzx   ecx, byte ptr [rbp-57h]
 * 000000014072EC88: cmp     cs:KiIrqlFlags, 0
 * 000000014072EC8F: jz      short loc_14072EC98
 * 000000014072EC91: call    KzSetIrqlUnsafe
 * 000000014072EC96: jmp     short loc_14072EC9C
 * 000000014072EC98: mov     cr8, rcx
 * 000000014072EC9C: mov     rsi, [rbp+0D0h]
 * 000000014072ECA3: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072ECAA: jz      short loc_14072ECB1
 * 000000014072ECAC: add     rsp, 28h
 * 000000014072ECB0: retn
 * 000000014072ECB1: test    byte ptr [rbp+0F0h], 1
 * 000000014072ECB8: jz      loc_14072EFB9
 * 000000014072ECBE: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072ECC5: jz      short loc_14072ECCA
 * 000000014072ECC7: stac
 * 000000014072ECCA: mov     rcx, gs:188h
 * 000000014072ECD3: test    byte ptr [rcx+0C2h], 3
 * 000000014072ECDA: jz      short loc_14072ECF7
 * 000000014072ECDC: mov     ecx, 1
 * 000000014072ECE1: mov     cr8, rcx
 * 000000014072ECE5: sti
 * 000000014072ECE6: call    KiInitiateUserApc
 * 000000014072ECEB: cli
 * 000000014072ECEC: mov     ecx, 0
 * 000000014072ECF1: mov     cr8, rcx
 * 000000014072ECF5: jmp     short loc_14072ECCA
 * 000000014072ECF7: test    byte ptr [rcx+3], 80h
 * 000000014072ECFB: jz      short loc_14072ED0A
 * 000000014072ECFD: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072ED02: test    eax, eax
 * 000000014072ED04: mov     rax, [rbp-50h]
 * 000000014072ED08: jnz     short loc_14072ECCA
 * 000000014072ED0A: test    byte ptr gs:8A0h, 2
 * 000000014072ED13: jz      short loc_14072ED1C
 * 000000014072ED15: xor     ecx, ecx
 * 000000014072ED17: call    KiUpdateStibpPairing
 * 000000014072ED1C: mov     rcx, gs:188h
 * 000000014072ED25: test    dword ptr [rcx], 8000000h
 * 000000014072ED2B: jz      short loc_14072ED32
 * 000000014072ED2D: call    KiRestoreSetContextState
 * 000000014072ED32: mov     rcx, gs:188h
 * 000000014072ED3B: test    dword ptr [rcx], 10000h
 * 000000014072ED41: jz      short loc_14072ED57
 * 000000014072ED43: test    byte ptr [rcx+2], 1
 * 000000014072ED47: jz      short loc_14072ED57
 * 000000014072ED49: call    KiCopyCounters
 * 000000014072ED4E: mov     rcx, gs:188h
 * 000000014072ED57: ldmxcsr dword ptr [rbp-54h]
 * 000000014072ED5B: cmp     word ptr [rbp+80h], 0
 * 000000014072ED63: jz      short loc_14072ED6A
 * 000000014072ED65: call    KiRestoreDebugRegisterState
 * 000000014072ED6A: mov     rcx, gs:188h
 * 000000014072ED73: bt      dword ptr [rcx+74h], 16h
 * 000000014072ED78: jnb     short loc_14072EDA4
 * 000000014072ED7A: xor     ecx, ecx
 * 000000014072ED7C: rdsspq  rcx
 * 000000014072ED81: mov     r8, gs:9D68h
 * 000000014072ED8A: add     r8, 8
 * 000000014072ED8E: cmp     rcx, r8
 * 000000014072ED91: jnz     short loc_14072EDA4
 * 000000014072ED93: mov     rcx, gs:9D60h
 * 000000014072ED9C: rstorssp qword ptr [rcx]
 * 000000014072EDA0: saveprevssp
 * 000000014072EDA4: mov     byte ptr gs:89Eh, 0
 * 000000014072EDAD: movzx   eax, word ptr gs:8ACh
 * 000000014072EDB6: cmp     gs:8A6h, ax
 * 000000014072EDBF: jz      short loc_14072EDD3
 * 000000014072EDC1: mov     gs:8A6h, ax
 * 000000014072EDCA: mov     ecx, 48h ; 'H'
 * 000000014072EDCF: xor     edx, edx
 * 000000014072EDD1: wrmsr
 * 000000014072EDD3: btr     word ptr gs:898h, 2
 * 000000014072EDDE: jnb     short loc_14072EDEE
 * 000000014072EDE0: mov     eax, 1
 * 000000014072EDE5: xor     edx, edx
 * 000000014072EDE7: mov     ecx, 49h ; 'I'
 * 000000014072EDEC: wrmsr
 * 000000014072EDEE: btr     word ptr gs:898h, 5
 * 000000014072EDF9: jnb     loc_14072EF36
 * 000000014072EDFF: call    loc_14072EF12
 * 000000014072EE04: add     rsp, 8
 * 000000014072EE08: call    loc_14072EF1B
 * 000000014072EE0D: add     rsp, 8
 * 000000014072EE11: call    loc_14072EE04
 * 000000014072EE16: add     rsp, 8
 * 000000014072EE1A: call    loc_14072EE0D
 * 000000014072EE1F: add     rsp, 8
 * 000000014072EE23: call    loc_14072EE16
 * 000000014072EE28: add     rsp, 8
 * 000000014072EE2C: call    loc_14072EE1F
 * 000000014072EE31: add     rsp, 8
 * 000000014072EE35: call    loc_14072EE28
 * 000000014072EE3A: add     rsp, 8
 * 000000014072EE3E: call    loc_14072EE31
 * 000000014072EE43: add     rsp, 8
 * 000000014072EE47: call    loc_14072EE3A
 * 000000014072EE4C: add     rsp, 8
 * 000000014072EE50: call    loc_14072EE43
 * 000000014072EE55: add     rsp, 8
 * 000000014072EE59: call    loc_14072EE4C
 * 000000014072EE5E: add     rsp, 8
 * 000000014072EE62: call    loc_14072EE55
 * 000000014072EE67: add     rsp, 8
 * 000000014072EE6B: call    loc_14072EE5E
 * 000000014072EE70: add     rsp, 8
 * 000000014072EE74: call    loc_14072EE67
 * 000000014072EE79: add     rsp, 8
 * 000000014072EE7D: call    loc_14072EE70
 * 000000014072EE82: add     rsp, 8
 * 000000014072EE86: call    loc_14072EE79
 * 000000014072EE8B: add     rsp, 8
 * 000000014072EE8F: call    loc_14072EE82
 * 000000014072EE94: add     rsp, 8
 * 000000014072EE98: call    loc_14072EE8B
 * 000000014072EE9D: add     rsp, 8
 * 000000014072EEA1: call    loc_14072EE94
 * 000000014072EEA6: add     rsp, 8
 * 000000014072EEAA: call    loc_14072EE9D
 * 000000014072EEAF: add     rsp, 8
 * 000000014072EEB3: call    loc_14072EEA6
 * 000000014072EEB8: add     rsp, 8
 * 000000014072EEBC: call    loc_14072EEAF
 * 000000014072EEC1: add     rsp, 8
 * 000000014072EEC5: call    loc_14072EEB8
 * 000000014072EECA: add     rsp, 8
 * 000000014072EECE: call    loc_14072EEC1
 * 000000014072EED3: add     rsp, 8
 * 000000014072EED7: call    loc_14072EECA
 * 000000014072EEDC: add     rsp, 8
 * 000000014072EEE0: call    loc_14072EED3
 * 000000014072EEE5: add     rsp, 8
 * 000000014072EEE9: call    loc_14072EEDC
 * 000000014072EEEE: add     rsp, 8
 * 000000014072EEF2: call    loc_14072EEE5
 * 000000014072EEF7: add     rsp, 8
 * 000000014072EEFB: call    loc_14072EEEE
 * 000000014072EF00: add     rsp, 8
 * 000000014072EF04: call    loc_14072EEF7
 * 000000014072EF09: add     rsp, 8
 * 000000014072EF0D: call    loc_14072EF00
 * 000000014072EF12: add     rsp, 8
 * 000000014072EF16: call    loc_14072EF09
 * 000000014072EF1B: add     rsp, 8
 * 000000014072EF1F: mov     eax, 0DADAh
 * 000000014072EF24: test    byte ptr gs:89Ch, 8
 * 000000014072EF2D: jz      short loc_14072EF36
 * 000000014072EF2F: mov     al, 20h ; ' '
 * 000000014072EF31: incsspq rax
 * 000000014072EF36: test    word ptr gs:898h, 100h
 * 000000014072EF41: jz      short loc_14072EF4F
 * 000000014072EF43: xor     eax, eax
 * 000000014072EF45: xor     edx, edx
 * 000000014072EF47: mov     ecx, 1
 * 000000014072EF4C: div     rcx
 * 000000014072EF4F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072EF53: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072EF57: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072EF5B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072EF5F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072EF63: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072EF67: mov     r11, [rbp-20h]
 * 000000014072EF6B: mov     r10, [rbp-28h]
 * 000000014072EF6F: mov     r9, [rbp-30h]
 * 000000014072EF73: mov     r8, [rbp-38h]
 * 000000014072EF77: mov     rdx, [rbp-40h]
 * 000000014072EF7B: mov     rcx, [rbp-48h]
 * 000000014072EF7F: mov     rax, [rbp-50h]
 * 000000014072EF83: mov     rsp, rbp
 * 000000014072EF86: mov     rbp, [rbp+0D8h]
 * 000000014072EF8D: add     rsp, 0E8h
 * 000000014072EF94: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072EF9B: jz      short loc_14072EFA2
 * 000000014072EF9D: jmp     KiKernelExit
 * 000000014072EFA2: test    word ptr gs:898h, 200h
 * 000000014072EFAD: jz      short loc_14072EFB4
 * 000000014072EFAF: verw    [rsp-1C8h+arg_1E0]
 * 000000014072EFB4: swapgs
 * 000000014072EFB7: iretq
 * 000000014072EFB9: ldmxcsr dword ptr [rbp-54h]
 * 000000014072EFBD: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072EFC1: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072EFC5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072EFC9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072EFCD: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072EFD1: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072EFD5: mov     r11, [rbp-20h]
 * 000000014072EFD9: mov     r10, [rbp-28h]
 * 000000014072EFDD: mov     r9, [rbp-30h]
 * 000000014072EFE1: mov     r8, [rbp-38h]
 * 000000014072EFE5: mov     rdx, [rbp-40h]
 * 000000014072EFE9: mov     rcx, [rbp-48h]
 * 000000014072EFED: mov     rax, [rbp-50h]
 * 000000014072EFF1: mov     rsp, rbp
 * 000000014072EFF4: mov     rbp, [rbp+0D8h]
 * 000000014072EFFB: add     rsp, 0E8h
 * 000000014072F002: iretq
 */
