/*
 * XREFs of KiChainedDispatch @ 0x14072E540
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
 *     KiChainedDispatch @ 0x14072E540 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x14072E930 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140734290 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x14072E540
 * Reason: Hex-Rays returned no pseudocode for 0x14072E540
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072E540: mov     rcx, gs:9198h
 * 000000014072E549: mov     rax, rcx
 * 000000014072E54C: mov     edx, cs:KeIsrStackSize
 * 000000014072E552: sub     rax, rdx
 * 000000014072E555: mov     rdx, rsp
 * 000000014072E558: cmp     rax, rsp
 * 000000014072E55B: ja      short loc_14072E562
 * 000000014072E55D: cmp     rsp, rcx
 * 000000014072E560: jb      short loc_14072E56E
 * 000000014072E562: cmp     dword ptr cs:KiDpcWatchdogConfigurationLock.InitialStack, 0
 * 000000014072E569: jnz     short loc_14072E56E
 * 000000014072E56B: mov     rsp, rcx
 * 000000014072E56E: sub     rsp, 20h
 * 000000014072E572: mov     [rsp+20h+var_10], rdx
 * 000000014072E577: call    KiScanInterruptObjectList
 * 000000014072E57C: mov     rsp, [rsp+20h+var_10]
 * 000000014072E581: mov     rcx, rsi
 * 000000014072E584: call    HalPerformEndOfInterrupt
 * 000000014072E589: mov     rcx, gs:20h
 * 000000014072E592: movzx   edx, byte ptr [rbp-57h]
 * 000000014072E596: call    KiEndInterruptCycleAccumulation
 * 000000014072E59B: test    al, al
 * 000000014072E59D: jz      short loc_14072E5A4
 * 000000014072E59F: call    KiDpcInterruptBypass
 * 000000014072E5A4: movzx   ecx, byte ptr [rbp-57h]
 * 000000014072E5A8: cmp     cs:KiIrqlFlags, 0
 * 000000014072E5AF: jz      short loc_14072E5B8
 * 000000014072E5B1: call    KzSetIrqlUnsafe
 * 000000014072E5B6: jmp     short loc_14072E5BC
 * 000000014072E5B8: mov     cr8, rcx
 * 000000014072E5BC: mov     rsi, [rbp+0D0h]
 * 000000014072E5C3: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072E5CA: jz      short loc_14072E5D1
 * 000000014072E5CC: add     rsp, 28h
 * 000000014072E5D0: retn
 * 000000014072E5D1: test    byte ptr [rbp+0F0h], 1
 * 000000014072E5D8: jz      loc_14072E8D9
 * 000000014072E5DE: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072E5E5: jz      short loc_14072E5EA
 * 000000014072E5E7: stac
 * 000000014072E5EA: mov     rcx, gs:188h
 * 000000014072E5F3: test    byte ptr [rcx+0C2h], 3
 * 000000014072E5FA: jz      short loc_14072E617
 * 000000014072E5FC: mov     ecx, 1
 * 000000014072E601: mov     cr8, rcx
 * 000000014072E605: sti
 * 000000014072E606: call    KiInitiateUserApc
 * 000000014072E60B: cli
 * 000000014072E60C: mov     ecx, 0
 * 000000014072E611: mov     cr8, rcx
 * 000000014072E615: jmp     short loc_14072E5EA
 * 000000014072E617: test    byte ptr [rcx+3], 80h
 * 000000014072E61B: jz      short loc_14072E62A
 * 000000014072E61D: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072E622: test    eax, eax
 * 000000014072E624: mov     rax, [rbp-50h]
 * 000000014072E628: jnz     short loc_14072E5EA
 * 000000014072E62A: test    byte ptr gs:8A0h, 2
 * 000000014072E633: jz      short loc_14072E63C
 * 000000014072E635: xor     ecx, ecx
 * 000000014072E637: call    KiUpdateStibpPairing
 * 000000014072E63C: mov     rcx, gs:188h
 * 000000014072E645: test    dword ptr [rcx], 8000000h
 * 000000014072E64B: jz      short loc_14072E652
 * 000000014072E64D: call    KiRestoreSetContextState
 * 000000014072E652: mov     rcx, gs:188h
 * 000000014072E65B: test    dword ptr [rcx], 10000h
 * 000000014072E661: jz      short loc_14072E677
 * 000000014072E663: test    byte ptr [rcx+2], 1
 * 000000014072E667: jz      short loc_14072E677
 * 000000014072E669: call    KiCopyCounters
 * 000000014072E66E: mov     rcx, gs:188h
 * 000000014072E677: ldmxcsr dword ptr [rbp-54h]
 * 000000014072E67B: cmp     word ptr [rbp+80h], 0
 * 000000014072E683: jz      short loc_14072E68A
 * 000000014072E685: call    KiRestoreDebugRegisterState
 * 000000014072E68A: mov     rcx, gs:188h
 * 000000014072E693: bt      dword ptr [rcx+74h], 16h
 * 000000014072E698: jnb     short loc_14072E6C4
 * 000000014072E69A: xor     ecx, ecx
 * 000000014072E69C: rdsspq  rcx
 * 000000014072E6A1: mov     r8, gs:9D68h
 * 000000014072E6AA: add     r8, 8
 * 000000014072E6AE: cmp     rcx, r8
 * 000000014072E6B1: jnz     short loc_14072E6C4
 * 000000014072E6B3: mov     rcx, gs:9D60h
 * 000000014072E6BC: rstorssp qword ptr [rcx]
 * 000000014072E6C0: saveprevssp
 * 000000014072E6C4: mov     byte ptr gs:89Eh, 0
 * 000000014072E6CD: movzx   eax, word ptr gs:8ACh
 * 000000014072E6D6: cmp     gs:8A6h, ax
 * 000000014072E6DF: jz      short loc_14072E6F3
 * 000000014072E6E1: mov     gs:8A6h, ax
 * 000000014072E6EA: mov     ecx, 48h ; 'H'
 * 000000014072E6EF: xor     edx, edx
 * 000000014072E6F1: wrmsr
 * 000000014072E6F3: btr     word ptr gs:898h, 2
 * 000000014072E6FE: jnb     short loc_14072E70E
 * 000000014072E700: mov     eax, 1
 * 000000014072E705: xor     edx, edx
 * 000000014072E707: mov     ecx, 49h ; 'I'
 * 000000014072E70C: wrmsr
 * 000000014072E70E: btr     word ptr gs:898h, 5
 * 000000014072E719: jnb     loc_14072E856
 * 000000014072E71F: call    loc_14072E832
 * 000000014072E724: add     rsp, 8
 * 000000014072E728: call    loc_14072E83B
 * 000000014072E72D: add     rsp, 8
 * 000000014072E731: call    loc_14072E724
 * 000000014072E736: add     rsp, 8
 * 000000014072E73A: call    loc_14072E72D
 * 000000014072E73F: add     rsp, 8
 * 000000014072E743: call    loc_14072E736
 * 000000014072E748: add     rsp, 8
 * 000000014072E74C: call    loc_14072E73F
 * 000000014072E751: add     rsp, 8
 * 000000014072E755: call    loc_14072E748
 * 000000014072E75A: add     rsp, 8
 * 000000014072E75E: call    loc_14072E751
 * 000000014072E763: add     rsp, 8
 * 000000014072E767: call    loc_14072E75A
 * 000000014072E76C: add     rsp, 8
 * 000000014072E770: call    loc_14072E763
 * 000000014072E775: add     rsp, 8
 * 000000014072E779: call    loc_14072E76C
 * 000000014072E77E: add     rsp, 8
 * 000000014072E782: call    loc_14072E775
 * 000000014072E787: add     rsp, 8
 * 000000014072E78B: call    loc_14072E77E
 * 000000014072E790: add     rsp, 8
 * 000000014072E794: call    loc_14072E787
 * 000000014072E799: add     rsp, 8
 * 000000014072E79D: call    loc_14072E790
 * 000000014072E7A2: add     rsp, 8
 * 000000014072E7A6: call    loc_14072E799
 * 000000014072E7AB: add     rsp, 8
 * 000000014072E7AF: call    loc_14072E7A2
 * 000000014072E7B4: add     rsp, 8
 * 000000014072E7B8: call    loc_14072E7AB
 * 000000014072E7BD: add     rsp, 8
 * 000000014072E7C1: call    loc_14072E7B4
 * 000000014072E7C6: add     rsp, 8
 * 000000014072E7CA: call    loc_14072E7BD
 * 000000014072E7CF: add     rsp, 8
 * 000000014072E7D3: call    loc_14072E7C6
 * 000000014072E7D8: add     rsp, 8
 * 000000014072E7DC: call    loc_14072E7CF
 * 000000014072E7E1: add     rsp, 8
 * 000000014072E7E5: call    loc_14072E7D8
 * 000000014072E7EA: add     rsp, 8
 * 000000014072E7EE: call    loc_14072E7E1
 * 000000014072E7F3: add     rsp, 8
 * 000000014072E7F7: call    loc_14072E7EA
 * 000000014072E7FC: add     rsp, 8
 * 000000014072E800: call    loc_14072E7F3
 * 000000014072E805: add     rsp, 8
 * 000000014072E809: call    loc_14072E7FC
 * 000000014072E80E: add     rsp, 8
 * 000000014072E812: call    loc_14072E805
 * 000000014072E817: add     rsp, 8
 * 000000014072E81B: call    loc_14072E80E
 * 000000014072E820: add     rsp, 8
 * 000000014072E824: call    loc_14072E817
 * 000000014072E829: add     rsp, 8
 * 000000014072E82D: call    loc_14072E820
 * 000000014072E832: add     rsp, 8
 * 000000014072E836: call    loc_14072E829
 * 000000014072E83B: add     rsp, 8
 * 000000014072E83F: mov     eax, 0DADAh
 * 000000014072E844: test    byte ptr gs:89Ch, 8
 * 000000014072E84D: jz      short loc_14072E856
 * 000000014072E84F: mov     al, 20h ; ' '
 * 000000014072E851: incsspq rax
 * 000000014072E856: test    word ptr gs:898h, 100h
 * 000000014072E861: jz      short loc_14072E86F
 * 000000014072E863: xor     eax, eax
 * 000000014072E865: xor     edx, edx
 * 000000014072E867: mov     ecx, 1
 * 000000014072E86C: div     rcx
 * 000000014072E86F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072E873: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072E877: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072E87B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072E87F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072E883: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072E887: mov     r11, [rbp-20h]
 * 000000014072E88B: mov     r10, [rbp-28h]
 * 000000014072E88F: mov     r9, [rbp-30h]
 * 000000014072E893: mov     r8, [rbp-38h]
 * 000000014072E897: mov     rdx, [rbp-40h]
 * 000000014072E89B: mov     rcx, [rbp-48h]
 * 000000014072E89F: mov     rax, [rbp-50h]
 * 000000014072E8A3: mov     rsp, rbp
 * 000000014072E8A6: mov     rbp, [rbp+0D8h]
 * 000000014072E8AD: add     rsp, 0E8h
 * 000000014072E8B4: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072E8BB: jz      short loc_14072E8C2
 * 000000014072E8BD: jmp     KiKernelExit
 * 000000014072E8C2: test    word ptr gs:898h, 200h
 * 000000014072E8CD: jz      short loc_14072E8D4
 * 000000014072E8CF: verw    [rsp-1C8h+arg_1E0]
 * 000000014072E8D4: swapgs
 * 000000014072E8D7: iretq
 * 000000014072E8D9: ldmxcsr dword ptr [rbp-54h]
 * 000000014072E8DD: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072E8E1: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072E8E5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072E8E9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072E8ED: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072E8F1: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072E8F5: mov     r11, [rbp-20h]
 * 000000014072E8F9: mov     r10, [rbp-28h]
 * 000000014072E8FD: mov     r9, [rbp-30h]
 * 000000014072E901: mov     r8, [rbp-38h]
 * 000000014072E905: mov     rdx, [rbp-40h]
 * 000000014072E909: mov     rcx, [rbp-48h]
 * 000000014072E90D: mov     rax, [rbp-50h]
 * 000000014072E911: mov     rsp, rbp
 * 000000014072E914: mov     rbp, [rbp+0D8h]
 * 000000014072E91B: add     rsp, 0E8h
 * 000000014072E922: iretq
 */
