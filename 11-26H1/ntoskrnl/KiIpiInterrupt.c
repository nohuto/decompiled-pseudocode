/*
 * XREFs of KiIpiInterrupt @ 0x14072F700
 * Callers:
 *     KiIpiInterruptShadow @ 0x140C5A240 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14021C910 (KiEndInterruptCycleAccumulation.c)
 *     HalPerformEndOfInterrupt @ 0x14032DA80 (HalPerformEndOfInterrupt.c)
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiCheckForSListAddress @ 0x140422100 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EBBF0 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405F0F90 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x14072F6C0 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x14072F700 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x14072FE70 (KiIpiInterruptSubDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x14072F700
 * Reason: Hex-Rays returned no pseudocode for 0x14072F700
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072F700: sub     rsp, 8
 * 000000014072F704: push    rbp
 * 000000014072F705: sub     rsp, 158h
 * 000000014072F70C: lea     rbp, [rsp+80h]
 * 000000014072F714: mov     [rbp+0E8h+var_18], rsi
 * 000000014072F71B: mov     [rbp+0E8h+var_138], rax
 * 000000014072F71F: mov     [rbp+0E8h+var_130], rcx
 * 000000014072F723: mov     [rbp+0E8h+var_128], rdx
 * 000000014072F727: mov     [rbp+0E8h+var_120], r8
 * 000000014072F72B: mov     [rbp+0E8h+var_118], r9
 * 000000014072F72F: mov     [rbp+0E8h+var_110], r10
 * 000000014072F733: mov     [rbp+0E8h+var_108], r11
 * 000000014072F737: test    [rbp+0E8h+arg_0], 1
 * 000000014072F73E: jnz     short loc_14072F778
 * 000000014072F740: xor     edx, edx
 * 000000014072F742: rdsspq  rdx
 * 000000014072F747: mov     [rbp+0E8h+var_90], rdx
 * 000000014072F74B: lfence
 * 000000014072F74E: test    byte ptr gs:898h, 1
 * 000000014072F757: jnz     short loc_14072F761
 * 000000014072F759: lfence
 * 000000014072F75C: jmp     loc_14072F9E9
 * 000000014072F761: movzx   eax, word ptr gs:8A6h
 * 000000014072F76A: mov     ecx, 48h ; 'H'
 * 000000014072F76F: xor     edx, edx
 * 000000014072F771: wrmsr
 * 000000014072F773: jmp     loc_14072F9E9
 * 000000014072F778: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072F77F: jnz     short loc_14072F784
 * 000000014072F781: swapgs
 * 000000014072F784: lfence
 * 000000014072F787: mov     rcx, gs:9D68h
 * 000000014072F790: test    rcx, rcx
 * 000000014072F793: jz      short loc_14072F7B4
 * 000000014072F795: rdsspq  rdx
 * 000000014072F79A: mov     r10, gs:9D60h
 * 000000014072F7A3: add     r10, 8
 * 000000014072F7A7: cmp     rdx, r10
 * 000000014072F7AA: jnz     short loc_14072F7B4
 * 000000014072F7AC: rstorssp qword ptr [rcx]
 * 000000014072F7B0: saveprevssp
 * 000000014072F7B4: mov     r10, gs:188h
 * 000000014072F7BD: mov     rcx, gs:188h
 * 000000014072F7C6: mov     rcx, [rcx+220h]
 * 000000014072F7CD: mov     rcx, [rcx+760h]
 * 000000014072F7D4: mov     gs:890h, rcx
 * 000000014072F7DD: mov     cx, gs:8A2h
 * 000000014072F7E6: mov     gs:8A4h, cx
 * 000000014072F7EF: mov     cl, gs:898h
 * 000000014072F7F7: mov     gs:89Ah, cl
 * 000000014072F7FF: movzx   eax, word ptr gs:8A8h
 * 000000014072F808: cmp     gs:8A6h, ax
 * 000000014072F811: jz      short loc_14072F825
 * 000000014072F813: mov     gs:8A6h, ax
 * 000000014072F81C: mov     ecx, 48h ; 'H'
 * 000000014072F821: xor     edx, edx
 * 000000014072F823: wrmsr
 * 000000014072F825: movzx   edx, byte ptr gs:898h
 * 000000014072F82E: test    edx, 8
 * 000000014072F834: jz      short loc_14072F84D
 * 000000014072F836: mov     eax, 1
 * 000000014072F83B: xor     edx, edx
 * 000000014072F83D: mov     ecx, 49h ; 'I'
 * 000000014072F842: wrmsr
 * 000000014072F844: movzx   edx, byte ptr gs:898h
 * 000000014072F84D: test    edx, 2
 * 000000014072F853: jz      loc_14072F990
 * 000000014072F859: call    loc_14072F96C
 * 000000014072F85E: add     rsp, 8
 * 000000014072F862: call    loc_14072F975
 * 000000014072F867: add     rsp, 8
 * 000000014072F86B: call    loc_14072F85E
 * 000000014072F870: add     rsp, 8
 * 000000014072F874: call    loc_14072F867
 * 000000014072F879: add     rsp, 8
 * 000000014072F87D: call    loc_14072F870
 * 000000014072F882: add     rsp, 8
 * 000000014072F886: call    loc_14072F879
 * 000000014072F88B: add     rsp, 8
 * 000000014072F88F: call    loc_14072F882
 * 000000014072F894: add     rsp, 8
 * 000000014072F898: call    loc_14072F88B
 * 000000014072F89D: add     rsp, 8
 * 000000014072F8A1: call    loc_14072F894
 * 000000014072F8A6: add     rsp, 8
 * 000000014072F8AA: call    loc_14072F89D
 * 000000014072F8AF: add     rsp, 8
 * 000000014072F8B3: call    loc_14072F8A6
 * 000000014072F8B8: add     rsp, 8
 * 000000014072F8BC: call    loc_14072F8AF
 * 000000014072F8C1: add     rsp, 8
 * 000000014072F8C5: call    loc_14072F8B8
 * 000000014072F8CA: add     rsp, 8
 * 000000014072F8CE: call    loc_14072F8C1
 * 000000014072F8D3: add     rsp, 8
 * 000000014072F8D7: call    loc_14072F8CA
 * 000000014072F8DC: add     rsp, 8
 * 000000014072F8E0: call    loc_14072F8D3
 * 000000014072F8E5: add     rsp, 8
 * 000000014072F8E9: call    loc_14072F8DC
 * 000000014072F8EE: add     rsp, 8
 * 000000014072F8F2: call    loc_14072F8E5
 * 000000014072F8F7: add     rsp, 8
 * 000000014072F8FB: call    loc_14072F8EE
 * 000000014072F900: add     rsp, 8
 * 000000014072F904: call    loc_14072F8F7
 * 000000014072F909: add     rsp, 8
 * 000000014072F90D: call    loc_14072F900
 * 000000014072F912: add     rsp, 8
 * 000000014072F916: call    loc_14072F909
 * 000000014072F91B: add     rsp, 8
 * 000000014072F91F: call    loc_14072F912
 * 000000014072F924: add     rsp, 8
 * 000000014072F928: call    loc_14072F91B
 * 000000014072F92D: add     rsp, 8
 * 000000014072F931: call    loc_14072F924
 * 000000014072F936: add     rsp, 8
 * 000000014072F93A: call    loc_14072F92D
 * 000000014072F93F: add     rsp, 8
 * 000000014072F943: call    loc_14072F936
 * 000000014072F948: add     rsp, 8
 * 000000014072F94C: call    loc_14072F93F
 * 000000014072F951: add     rsp, 8
 * 000000014072F955: call    loc_14072F948
 * 000000014072F95A: add     rsp, 8
 * 000000014072F95E: call    loc_14072F951
 * 000000014072F963: add     rsp, 8
 * 000000014072F967: call    loc_14072F95A
 * 000000014072F96C: add     rsp, 8
 * 000000014072F970: call    loc_14072F963
 * 000000014072F975: add     rsp, 8
 * 000000014072F979: mov     eax, 0DADAh
 * 000000014072F97E: test    byte ptr gs:89Ch, 8
 * 000000014072F987: jz      short loc_14072F990
 * 000000014072F989: mov     al, 20h ; ' '
 * 000000014072F98B: incsspq rax
 * 000000014072F990: test    edx, 80h
 * 000000014072F996: jz      short loc_14072F9A0
 * 000000014072F998: lfence
 * 000000014072F99B: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014072F9A0: lfence
 * 000000014072F9A3: mov     byte ptr gs:89Eh, 0
 * 000000014072F9AC: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014072F9B3: jz      short loc_14072F9D4
 * 000000014072F9B5: mov     ecx, 6A7h
 * 000000014072F9BA: rdmsr
 * 000000014072F9BC: cmp     edx, 0
 * 000000014072F9BF: jz      short loc_14072F9D4
 * 000000014072F9C1: mov     ecx, edx
 * 000000014072F9C3: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014072F9C9: cmp     edx, ecx
 * 000000014072F9CB: jz      short loc_14072F9D4
 * 000000014072F9CD: mov     ecx, 6A7h
 * 000000014072F9D2: wrmsr
 * 000000014072F9D4: test    byte ptr [r10+3], 3
 * 000000014072F9D9: mov     [rbp+0E8h+var_68], 0
 * 000000014072F9E2: jz      short loc_14072F9E9
 * 000000014072F9E4: call    KiSaveDebugRegisterState
 * 000000014072F9E9: cld
 * 000000014072F9EA: stmxcsr [rbp+0E8h+var_13C]
 * 000000014072F9EE: ldmxcsr dword ptr gs:180h
 * 000000014072F9F7: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014072F9FB: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014072F9FF: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014072FA03: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014072FA07: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014072FA0B: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014072FA0F: test    [rbp+0E8h+arg_0], 1
 * 000000014072FA16: jz      short KiIpiInterruptDispatchTrap
 * 000000014072FA18: mov     r10, gs:188h
 * 000000014072FA21: test    byte ptr [r10+3], 80h
 * 000000014072FA26: jz      short KiIpiInterruptDispatchTrap
 * 000000014072FA28: call    KiSynchronizeUserIsolationDomainExit
 * 000000014072FA2D: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072FA34: jz      short loc_14072FA3D
 * 000000014072FA36: mov     [rbp+0E8h+var_18], rsi
 * 000000014072FA3D: mov     [rbp+0E8h+var_13D], 0
 * 000000014072FA41: cmp     byte ptr gs:87DAh, 0
 * 000000014072FA4A: jz      short loc_14072FA51
 * 000000014072FA4C: call    KeWakeProcessor
 * 000000014072FA51: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014072FA58: cmp     rax, [rbp+0E8h]
 * 000000014072FA5F: jnb     short loc_14072FA7A
 * 000000014072FA61: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014072FA68: cmp     rax, [rbp+0E8h]
 * 000000014072FA6F: jb      short loc_14072FA7A
 * 000000014072FA71: lea     rcx, [rbp+0E8h+var_168]
 * 000000014072FA75: call    KiCheckForSListAddress
 * 000000014072FA7A: xor     esi, esi
 * 000000014072FA7C: inc     dword ptr gs:87C0h
 * 000000014072FA84: mov     rcx, gs:9198h
 * 000000014072FA8D: mov     rax, rcx
 * 000000014072FA90: mov     edx, cs:KeIsrStackSize
 * 000000014072FA96: sub     rax, rdx
 * 000000014072FA99: mov     rdx, rsp
 * 000000014072FA9C: cmp     rax, rsp
 * 000000014072FA9F: ja      short loc_14072FAA6
 * 000000014072FAA1: cmp     rsp, rcx
 * 000000014072FAA4: jb      short loc_14072FAB2
 * 000000014072FAA6: cmp     dword ptr cs:KiDpcWatchdogConfigurationLock.StackLimit, 0
 * 000000014072FAAD: jnz     short loc_14072FAB2
 * 000000014072FAAF: mov     rsp, rcx
 * 000000014072FAB2: sub     rsp, 20h
 * 000000014072FAB6: mov     qword ptr [rsp+108h+var_F8], rdx
 * 000000014072FABB: call    KiIpiInterruptSubDispatch
 * 000000014072FAC0: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 000000014072FAC5: mov     rcx, rsi
 * 000000014072FAC8: call    HalPerformEndOfInterrupt
 * 000000014072FACD: mov     rcx, gs:20h
 * 000000014072FAD6: movzx   edx, [rbp+0E8h+var_13F]
 * 000000014072FADA: call    KiEndInterruptCycleAccumulation
 * 000000014072FADF: test    al, al
 * 000000014072FAE1: jz      short loc_14072FAE8
 * 000000014072FAE3: call    KiDpcInterruptBypass
 * 000000014072FAE8: movzx   ecx, [rbp+0E8h+var_13F]
 * 000000014072FAEC: cmp     cs:KiIrqlFlags, 0
 * 000000014072FAF3: jz      short loc_14072FAFC
 * 000000014072FAF5: call    KzSetIrqlUnsafe
 * 000000014072FAFA: jmp     short loc_14072FB00
 * 000000014072FAFC: mov     cr8, rcx
 * 000000014072FB00: mov     rsi, [rbp+0E8h+var_18]
 * 000000014072FB07: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072FB0E: jz      short loc_14072FB15
 * 000000014072FB10: add     rsp, 28h
 * 000000014072FB14: retn
 * 000000014072FB15: test    [rbp+0E8h+arg_0], 1
 * 000000014072FB1C: jz      loc_14072FE1D
 * 000000014072FB22: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072FB29: jz      short loc_14072FB2E
 * 000000014072FB2B: stac
 * 000000014072FB2E: mov     rcx, gs:188h
 * 000000014072FB37: test    byte ptr [rcx+0C2h], 3
 * 000000014072FB3E: jz      short loc_14072FB5B
 * 000000014072FB40: mov     ecx, 1
 * 000000014072FB45: mov     cr8, rcx
 * 000000014072FB49: sti
 * 000000014072FB4A: call    KiInitiateUserApc
 * 000000014072FB4F: cli
 * 000000014072FB50: mov     ecx, 0
 * 000000014072FB55: mov     cr8, rcx
 * 000000014072FB59: jmp     short loc_14072FB2E
 * 000000014072FB5B: test    byte ptr [rcx+3], 80h
 * 000000014072FB5F: jz      short loc_14072FB6E
 * 000000014072FB61: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072FB66: test    eax, eax
 * 000000014072FB68: mov     rax, [rbp+0E8h+var_138]
 * 000000014072FB6C: jnz     short loc_14072FB2E
 * 000000014072FB6E: test    byte ptr gs:8A0h, 2
 * 000000014072FB77: jz      short loc_14072FB80
 * 000000014072FB79: xor     ecx, ecx
 * 000000014072FB7B: call    KiUpdateStibpPairing
 * 000000014072FB80: mov     rcx, gs:188h
 * 000000014072FB89: test    dword ptr [rcx], 8000000h
 * 000000014072FB8F: jz      short loc_14072FB96
 * 000000014072FB91: call    KiRestoreSetContextState
 * 000000014072FB96: mov     rcx, gs:188h
 * 000000014072FB9F: test    dword ptr [rcx], 10000h
 * 000000014072FBA5: jz      short loc_14072FBBB
 * 000000014072FBA7: test    byte ptr [rcx+2], 1
 * 000000014072FBAB: jz      short loc_14072FBBB
 * 000000014072FBAD: call    KiCopyCounters
 * 000000014072FBB2: mov     rcx, gs:188h
 * 000000014072FBBB: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014072FBBF: cmp     [rbp+0E8h+var_68], 0
 * 000000014072FBC7: jz      short loc_14072FBCE
 * 000000014072FBC9: call    KiRestoreDebugRegisterState
 * 000000014072FBCE: mov     rcx, gs:188h
 * 000000014072FBD7: bt      dword ptr [rcx+74h], 16h
 * 000000014072FBDC: jnb     short loc_14072FC08
 * 000000014072FBDE: xor     ecx, ecx
 * 000000014072FBE0: rdsspq  rcx
 * 000000014072FBE5: mov     r8, gs:9D68h
 * 000000014072FBEE: add     r8, 8
 * 000000014072FBF2: cmp     rcx, r8
 * 000000014072FBF5: jnz     short loc_14072FC08
 * 000000014072FBF7: mov     rcx, gs:9D60h
 * 000000014072FC00: rstorssp qword ptr [rcx]
 * 000000014072FC04: saveprevssp
 * 000000014072FC08: mov     byte ptr gs:89Eh, 0
 * 000000014072FC11: movzx   eax, word ptr gs:8ACh
 * 000000014072FC1A: cmp     gs:8A6h, ax
 * 000000014072FC23: jz      short loc_14072FC37
 * 000000014072FC25: mov     gs:8A6h, ax
 * 000000014072FC2E: mov     ecx, 48h ; 'H'
 * 000000014072FC33: xor     edx, edx
 * 000000014072FC35: wrmsr
 * 000000014072FC37: btr     word ptr gs:898h, 2
 * 000000014072FC42: jnb     short loc_14072FC52
 * 000000014072FC44: mov     eax, 1
 * 000000014072FC49: xor     edx, edx
 * 000000014072FC4B: mov     ecx, 49h ; 'I'
 * 000000014072FC50: wrmsr
 * 000000014072FC52: btr     word ptr gs:898h, 5
 * 000000014072FC5D: jnb     loc_14072FD9A
 * 000000014072FC63: call    loc_14072FD76
 * 000000014072FC68: add     rsp, 8
 * 000000014072FC6C: call    loc_14072FD7F
 * 000000014072FC71: add     rsp, 8
 * 000000014072FC75: call    loc_14072FC68
 * 000000014072FC7A: add     rsp, 8
 * 000000014072FC7E: call    loc_14072FC71
 * 000000014072FC83: add     rsp, 8
 * 000000014072FC87: call    loc_14072FC7A
 * 000000014072FC8C: add     rsp, 8
 * 000000014072FC90: call    loc_14072FC83
 * 000000014072FC95: add     rsp, 8
 * 000000014072FC99: call    loc_14072FC8C
 * 000000014072FC9E: add     rsp, 8
 * 000000014072FCA2: call    loc_14072FC95
 * 000000014072FCA7: add     rsp, 8
 * 000000014072FCAB: call    loc_14072FC9E
 * 000000014072FCB0: add     rsp, 8
 * 000000014072FCB4: call    loc_14072FCA7
 * 000000014072FCB9: add     rsp, 8
 * 000000014072FCBD: call    loc_14072FCB0
 * 000000014072FCC2: add     rsp, 8
 * 000000014072FCC6: call    loc_14072FCB9
 * 000000014072FCCB: add     rsp, 8
 * 000000014072FCCF: call    loc_14072FCC2
 * 000000014072FCD4: add     rsp, 8
 * 000000014072FCD8: call    loc_14072FCCB
 * 000000014072FCDD: add     rsp, 8
 * 000000014072FCE1: call    loc_14072FCD4
 * 000000014072FCE6: add     rsp, 8
 * 000000014072FCEA: call    loc_14072FCDD
 * 000000014072FCEF: add     rsp, 8
 * 000000014072FCF3: call    loc_14072FCE6
 * 000000014072FCF8: add     rsp, 8
 * 000000014072FCFC: call    loc_14072FCEF
 * 000000014072FD01: add     rsp, 8
 * 000000014072FD05: call    loc_14072FCF8
 * 000000014072FD0A: add     rsp, 8
 * 000000014072FD0E: call    loc_14072FD01
 * 000000014072FD13: add     rsp, 8
 * 000000014072FD17: call    loc_14072FD0A
 * 000000014072FD1C: add     rsp, 8
 * 000000014072FD20: call    loc_14072FD13
 * 000000014072FD25: add     rsp, 8
 * 000000014072FD29: call    loc_14072FD1C
 * 000000014072FD2E: add     rsp, 8
 * 000000014072FD32: call    loc_14072FD25
 * 000000014072FD37: add     rsp, 8
 * 000000014072FD3B: call    loc_14072FD2E
 * 000000014072FD40: add     rsp, 8
 * 000000014072FD44: call    loc_14072FD37
 * 000000014072FD49: add     rsp, 8
 * 000000014072FD4D: call    loc_14072FD40
 * 000000014072FD52: add     rsp, 8
 * 000000014072FD56: call    loc_14072FD49
 * 000000014072FD5B: add     rsp, 8
 * 000000014072FD5F: call    loc_14072FD52
 * 000000014072FD64: add     rsp, 8
 * 000000014072FD68: call    loc_14072FD5B
 * 000000014072FD6D: add     rsp, 8
 * 000000014072FD71: call    loc_14072FD64
 * 000000014072FD76: add     rsp, 8
 * 000000014072FD7A: call    loc_14072FD6D
 * 000000014072FD7F: add     rsp, 8
 * 000000014072FD83: mov     eax, 0DADAh
 * 000000014072FD88: test    byte ptr gs:89Ch, 8
 * 000000014072FD91: jz      short loc_14072FD9A
 * 000000014072FD93: mov     al, 20h ; ' '
 * 000000014072FD95: incsspq rax
 * 000000014072FD9A: test    word ptr gs:898h, 100h
 * 000000014072FDA5: jz      short loc_14072FDB3
 * 000000014072FDA7: xor     eax, eax
 * 000000014072FDA9: xor     edx, edx
 * 000000014072FDAB: mov     ecx, 1
 * 000000014072FDB0: div     rcx
 * 000000014072FDB3: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014072FDB7: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014072FDBB: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014072FDBF: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014072FDC3: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014072FDC7: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014072FDCB: mov     r11, [rbp+0E8h+var_108]
 * 000000014072FDCF: mov     r10, [rbp+0E8h+var_110]
 * 000000014072FDD3: mov     r9, [rbp+0E8h+var_118]
 * 000000014072FDD7: mov     r8, [rbp+0E8h+var_120]
 * 000000014072FDDB: mov     rdx, [rbp+0E8h+var_128]
 * 000000014072FDDF: mov     rcx, [rbp+0E8h+var_130]
 * 000000014072FDE3: mov     rax, [rbp+0E8h+var_138]
 * 000000014072FDE7: mov     rsp, rbp
 * 000000014072FDEA: mov     rbp, [rbp+0E8h+var_10]
 * 000000014072FDF1: add     rsp, 0E8h
 * 000000014072FDF8: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072FDFF: jz      short loc_14072FE06
 * 000000014072FE01: jmp     KiKernelExit
 * 000000014072FE06: test    word ptr gs:898h, 200h
 * 000000014072FE11: jz      short loc_14072FE18
 * 000000014072FE13: verw    [rsp+arg_18]
 * 000000014072FE18: swapgs
 * 000000014072FE1B: iretq
 * 000000014072FE1D: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014072FE21: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014072FE25: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014072FE29: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014072FE2D: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014072FE31: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014072FE35: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014072FE39: mov     r11, [rbp+0E8h+var_108]
 * 000000014072FE3D: mov     r10, [rbp+0E8h+var_110]
 * 000000014072FE41: mov     r9, [rbp+0E8h+var_118]
 * 000000014072FE45: mov     r8, [rbp+0E8h+var_120]
 * 000000014072FE49: mov     rdx, [rbp+0E8h+var_128]
 * 000000014072FE4D: mov     rcx, [rbp+0E8h+var_130]
 * 000000014072FE51: mov     rax, [rbp+0E8h+var_138]
 * 000000014072FE55: mov     rsp, rbp
 * 000000014072FE58: mov     rbp, [rbp+0E8h+var_10]
 * 000000014072FE5F: add     rsp, 0E8h
 * 000000014072FE66: iretq
 */
