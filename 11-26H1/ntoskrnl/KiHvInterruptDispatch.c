/*
 * XREFs of KiHvInterruptDispatch @ 0x140732A70
 * Callers:
 *     KiHvInterrupt @ 0x1407318A0 (KiHvInterrupt.c)
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14021E2A0 (KiEndInterruptCycleAccumulation.c)
 *     HalPerformEndOfInterrupt @ 0x14032FAB0 (HalPerformEndOfInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EE560 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiHvInterruptDispatch @ 0x140732A70 (KiHvInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x140733260 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x140734290 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x140732A70
 * Reason: Hex-Rays returned no pseudocode for 0x140732A70
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140732A70: mov     rcx, gs:9198h
 * 0000000140732A79: mov     rax, rcx
 * 0000000140732A7C: mov     edx, cs:KeIsrStackSize
 * 0000000140732A82: sub     rax, rdx
 * 0000000140732A85: mov     rdx, rsp
 * 0000000140732A88: cmp     rax, rsp
 * 0000000140732A8B: ja      short loc_140732A92
 * 0000000140732A8D: cmp     rsp, rcx
 * 0000000140732A90: jb      short loc_140732A9E
 * 0000000140732A92: cmp     dword ptr cs:KiDpcWatchdogConfigurationLock.InitialStack, 0
 * 0000000140732A99: jnz     short loc_140732A9E
 * 0000000140732A9B: mov     rsp, rcx
 * 0000000140732A9E: sub     rsp, 20h
 * 0000000140732AA2: mov     [rsp+20h+var_10], rdx
 * 0000000140732AA7: call    KiHvInterruptSubDispatch
 * 0000000140732AAC: mov     rsp, [rsp+20h+var_10]
 * 0000000140732AB1: test    cs:HvlEnlightenments, 1000h
 * 0000000140732ABB: jz      short loc_140732AC5
 * 0000000140732ABD: mov     rcx, rsi
 * 0000000140732AC0: call    HalPerformEndOfInterrupt
 * 0000000140732AC5: cli
 * 0000000140732AC6: mov     rcx, gs:20h
 * 0000000140732ACF: movzx   edx, byte ptr [rbp-57h]
 * 0000000140732AD3: call    KiEndInterruptCycleAccumulation
 * 0000000140732AD8: test    al, al
 * 0000000140732ADA: jz      short loc_140732AE1
 * 0000000140732ADC: call    KiDpcInterruptBypass
 * 0000000140732AE1: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140732AE5: cmp     cs:KiIrqlFlags, 0
 * 0000000140732AEC: jz      short loc_140732AF5
 * 0000000140732AEE: call    KzSetIrqlUnsafe
 * 0000000140732AF3: jmp     short loc_140732AF9
 * 0000000140732AF5: mov     cr8, rcx
 * 0000000140732AF9: mov     rsi, [rbp+0D0h]
 * 0000000140732B00: cli
 * 0000000140732B01: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140732B08: jz      short loc_140732B0F
 * 0000000140732B0A: add     rsp, 28h
 * 0000000140732B0E: retn
 * 0000000140732B0F: test    byte ptr [rbp+0F0h], 1
 * 0000000140732B16: jz      loc_140732E17
 * 0000000140732B1C: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140732B23: jz      short loc_140732B28
 * 0000000140732B25: stac
 * 0000000140732B28: mov     rcx, gs:188h
 * 0000000140732B31: test    byte ptr [rcx+0C2h], 3
 * 0000000140732B38: jz      short loc_140732B55
 * 0000000140732B3A: mov     ecx, 1
 * 0000000140732B3F: mov     cr8, rcx
 * 0000000140732B43: sti
 * 0000000140732B44: call    KiInitiateUserApc
 * 0000000140732B49: cli
 * 0000000140732B4A: mov     ecx, 0
 * 0000000140732B4F: mov     cr8, rcx
 * 0000000140732B53: jmp     short loc_140732B28
 * 0000000140732B55: test    byte ptr [rcx+3], 80h
 * 0000000140732B59: jz      short loc_140732B68
 * 0000000140732B5B: call    KiSynchronizeUserIsolationDomainEntry
 * 0000000140732B60: test    eax, eax
 * 0000000140732B62: mov     rax, [rbp-50h]
 * 0000000140732B66: jnz     short loc_140732B28
 * 0000000140732B68: test    byte ptr gs:8A0h, 2
 * 0000000140732B71: jz      short loc_140732B7A
 * 0000000140732B73: xor     ecx, ecx
 * 0000000140732B75: call    KiUpdateStibpPairing
 * 0000000140732B7A: mov     rcx, gs:188h
 * 0000000140732B83: test    dword ptr [rcx], 8000000h
 * 0000000140732B89: jz      short loc_140732B90
 * 0000000140732B8B: call    KiRestoreSetContextState
 * 0000000140732B90: mov     rcx, gs:188h
 * 0000000140732B99: test    dword ptr [rcx], 10000h
 * 0000000140732B9F: jz      short loc_140732BB5
 * 0000000140732BA1: test    byte ptr [rcx+2], 1
 * 0000000140732BA5: jz      short loc_140732BB5
 * 0000000140732BA7: call    KiCopyCounters
 * 0000000140732BAC: mov     rcx, gs:188h
 * 0000000140732BB5: ldmxcsr dword ptr [rbp-54h]
 * 0000000140732BB9: cmp     word ptr [rbp+80h], 0
 * 0000000140732BC1: jz      short loc_140732BC8
 * 0000000140732BC3: call    KiRestoreDebugRegisterState
 * 0000000140732BC8: mov     rcx, gs:188h
 * 0000000140732BD1: bt      dword ptr [rcx+74h], 16h
 * 0000000140732BD6: jnb     short loc_140732C02
 * 0000000140732BD8: xor     ecx, ecx
 * 0000000140732BDA: rdsspq  rcx
 * 0000000140732BDF: mov     r8, gs:9D68h
 * 0000000140732BE8: add     r8, 8
 * 0000000140732BEC: cmp     rcx, r8
 * 0000000140732BEF: jnz     short loc_140732C02
 * 0000000140732BF1: mov     rcx, gs:9D60h
 * 0000000140732BFA: rstorssp qword ptr [rcx]
 * 0000000140732BFE: saveprevssp
 * 0000000140732C02: mov     byte ptr gs:89Eh, 0
 * 0000000140732C0B: movzx   eax, word ptr gs:8ACh
 * 0000000140732C14: cmp     gs:8A6h, ax
 * 0000000140732C1D: jz      short loc_140732C31
 * 0000000140732C1F: mov     gs:8A6h, ax
 * 0000000140732C28: mov     ecx, 48h ; 'H'
 * 0000000140732C2D: xor     edx, edx
 * 0000000140732C2F: wrmsr
 * 0000000140732C31: btr     word ptr gs:898h, 2
 * 0000000140732C3C: jnb     short loc_140732C4C
 * 0000000140732C3E: mov     eax, 1
 * 0000000140732C43: xor     edx, edx
 * 0000000140732C45: mov     ecx, 49h ; 'I'
 * 0000000140732C4A: wrmsr
 * 0000000140732C4C: btr     word ptr gs:898h, 5
 * 0000000140732C57: jnb     loc_140732D94
 * 0000000140732C5D: call    loc_140732D70
 * 0000000140732C62: add     rsp, 8
 * 0000000140732C66: call    loc_140732D79
 * 0000000140732C6B: add     rsp, 8
 * 0000000140732C6F: call    loc_140732C62
 * 0000000140732C74: add     rsp, 8
 * 0000000140732C78: call    loc_140732C6B
 * 0000000140732C7D: add     rsp, 8
 * 0000000140732C81: call    loc_140732C74
 * 0000000140732C86: add     rsp, 8
 * 0000000140732C8A: call    loc_140732C7D
 * 0000000140732C8F: add     rsp, 8
 * 0000000140732C93: call    loc_140732C86
 * 0000000140732C98: add     rsp, 8
 * 0000000140732C9C: call    loc_140732C8F
 * 0000000140732CA1: add     rsp, 8
 * 0000000140732CA5: call    loc_140732C98
 * 0000000140732CAA: add     rsp, 8
 * 0000000140732CAE: call    loc_140732CA1
 * 0000000140732CB3: add     rsp, 8
 * 0000000140732CB7: call    loc_140732CAA
 * 0000000140732CBC: add     rsp, 8
 * 0000000140732CC0: call    loc_140732CB3
 * 0000000140732CC5: add     rsp, 8
 * 0000000140732CC9: call    loc_140732CBC
 * 0000000140732CCE: add     rsp, 8
 * 0000000140732CD2: call    loc_140732CC5
 * 0000000140732CD7: add     rsp, 8
 * 0000000140732CDB: call    loc_140732CCE
 * 0000000140732CE0: add     rsp, 8
 * 0000000140732CE4: call    loc_140732CD7
 * 0000000140732CE9: add     rsp, 8
 * 0000000140732CED: call    loc_140732CE0
 * 0000000140732CF2: add     rsp, 8
 * 0000000140732CF6: call    loc_140732CE9
 * 0000000140732CFB: add     rsp, 8
 * 0000000140732CFF: call    loc_140732CF2
 * 0000000140732D04: add     rsp, 8
 * 0000000140732D08: call    loc_140732CFB
 * 0000000140732D0D: add     rsp, 8
 * 0000000140732D11: call    loc_140732D04
 * 0000000140732D16: add     rsp, 8
 * 0000000140732D1A: call    loc_140732D0D
 * 0000000140732D1F: add     rsp, 8
 * 0000000140732D23: call    loc_140732D16
 * 0000000140732D28: add     rsp, 8
 * 0000000140732D2C: call    loc_140732D1F
 * 0000000140732D31: add     rsp, 8
 * 0000000140732D35: call    loc_140732D28
 * 0000000140732D3A: add     rsp, 8
 * 0000000140732D3E: call    loc_140732D31
 * 0000000140732D43: add     rsp, 8
 * 0000000140732D47: call    loc_140732D3A
 * 0000000140732D4C: add     rsp, 8
 * 0000000140732D50: call    loc_140732D43
 * 0000000140732D55: add     rsp, 8
 * 0000000140732D59: call    loc_140732D4C
 * 0000000140732D5E: add     rsp, 8
 * 0000000140732D62: call    loc_140732D55
 * 0000000140732D67: add     rsp, 8
 * 0000000140732D6B: call    loc_140732D5E
 * 0000000140732D70: add     rsp, 8
 * 0000000140732D74: call    loc_140732D67
 * 0000000140732D79: add     rsp, 8
 * 0000000140732D7D: mov     eax, 0DADAh
 * 0000000140732D82: test    byte ptr gs:89Ch, 8
 * 0000000140732D8B: jz      short loc_140732D94
 * 0000000140732D8D: mov     al, 20h ; ' '
 * 0000000140732D8F: incsspq rax
 * 0000000140732D94: test    word ptr gs:898h, 100h
 * 0000000140732D9F: jz      short loc_140732DAD
 * 0000000140732DA1: xor     eax, eax
 * 0000000140732DA3: xor     edx, edx
 * 0000000140732DA5: mov     ecx, 1
 * 0000000140732DAA: div     rcx
 * 0000000140732DAD: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140732DB1: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140732DB5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140732DB9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140732DBD: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140732DC1: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140732DC5: mov     r11, [rbp-20h]
 * 0000000140732DC9: mov     r10, [rbp-28h]
 * 0000000140732DCD: mov     r9, [rbp-30h]
 * 0000000140732DD1: mov     r8, [rbp-38h]
 * 0000000140732DD5: mov     rdx, [rbp-40h]
 * 0000000140732DD9: mov     rcx, [rbp-48h]
 * 0000000140732DDD: mov     rax, [rbp-50h]
 * 0000000140732DE1: mov     rsp, rbp
 * 0000000140732DE4: mov     rbp, [rbp+0D8h]
 * 0000000140732DEB: add     rsp, 0E8h
 * 0000000140732DF2: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140732DF9: jz      short loc_140732E00
 * 0000000140732DFB: jmp     KiKernelExit
 * 0000000140732E00: test    word ptr gs:898h, 200h
 * 0000000140732E0B: jz      short loc_140732E12
 * 0000000140732E0D: verw    [rsp-1C8h+arg_1E0]
 * 0000000140732E12: swapgs
 * 0000000140732E15: iretq
 * 0000000140732E17: ldmxcsr dword ptr [rbp-54h]
 * 0000000140732E1B: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140732E1F: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140732E23: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140732E27: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140732E2B: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140732E2F: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140732E33: mov     r11, [rbp-20h]
 * 0000000140732E37: mov     r10, [rbp-28h]
 * 0000000140732E3B: mov     r9, [rbp-30h]
 * 0000000140732E3F: mov     r8, [rbp-38h]
 * 0000000140732E43: mov     rdx, [rbp-40h]
 * 0000000140732E47: mov     rcx, [rbp-48h]
 * 0000000140732E4B: mov     rax, [rbp-50h]
 * 0000000140732E4F: mov     rsp, rbp
 * 0000000140732E52: mov     rbp, [rbp+0D8h]
 * 0000000140732E59: add     rsp, 0E8h
 * 0000000140732E60: iretq
 */
