/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x14072A830
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
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140729FF0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14072A830 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x14072F6C0 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x14072A830
 * Reason: Hex-Rays returned no pseudocode for 0x14072A830
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072A830: mov     rcx, gs:9198h
 * 000000014072A839: mov     rax, rcx
 * 000000014072A83C: mov     edx, cs:KeIsrStackSize
 * 000000014072A842: sub     rax, rdx
 * 000000014072A845: mov     rdx, rsp
 * 000000014072A848: cmp     rax, rsp
 * 000000014072A84B: ja      short loc_14072A852
 * 000000014072A84D: cmp     rsp, rcx
 * 000000014072A850: jb      short loc_14072A85E
 * 000000014072A852: cmp     dword ptr cs:KiDpcWatchdogConfigurationLock.StackLimit, 0
 * 000000014072A859: jnz     short loc_14072A85E
 * 000000014072A85B: mov     rsp, rcx
 * 000000014072A85E: sub     rsp, 20h
 * 000000014072A862: mov     [rsp+20h+var_10], rdx
 * 000000014072A867: call    KiInterruptSubDispatchNoLockNoEtw
 * 000000014072A86C: mov     rsp, [rsp+20h+var_10]
 * 000000014072A871: mov     rcx, rsi
 * 000000014072A874: call    HalPerformEndOfInterrupt
 * 000000014072A879: mov     rcx, gs:20h
 * 000000014072A882: movzx   edx, byte ptr [rbp-57h]
 * 000000014072A886: call    KiEndInterruptCycleAccumulation
 * 000000014072A88B: test    al, al
 * 000000014072A88D: jz      short loc_14072A894
 * 000000014072A88F: call    KiDpcInterruptBypass
 * 000000014072A894: movzx   ecx, byte ptr [rbp-57h]
 * 000000014072A898: cmp     cs:KiIrqlFlags, 0
 * 000000014072A89F: jz      short loc_14072A8A8
 * 000000014072A8A1: call    KzSetIrqlUnsafe
 * 000000014072A8A6: jmp     short loc_14072A8AC
 * 000000014072A8A8: mov     cr8, rcx
 * 000000014072A8AC: mov     rsi, [rbp+0D0h]
 * 000000014072A8B3: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072A8BA: jz      short loc_14072A8C1
 * 000000014072A8BC: add     rsp, 28h
 * 000000014072A8C0: retn
 * 000000014072A8C1: test    byte ptr [rbp+0F0h], 1
 * 000000014072A8C8: jz      loc_14072ABC9
 * 000000014072A8CE: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072A8D5: jz      short loc_14072A8DA
 * 000000014072A8D7: stac
 * 000000014072A8DA: mov     rcx, gs:188h
 * 000000014072A8E3: test    byte ptr [rcx+0C2h], 3
 * 000000014072A8EA: jz      short loc_14072A907
 * 000000014072A8EC: mov     ecx, 1
 * 000000014072A8F1: mov     cr8, rcx
 * 000000014072A8F5: sti
 * 000000014072A8F6: call    KiInitiateUserApc
 * 000000014072A8FB: cli
 * 000000014072A8FC: mov     ecx, 0
 * 000000014072A901: mov     cr8, rcx
 * 000000014072A905: jmp     short loc_14072A8DA
 * 000000014072A907: test    byte ptr [rcx+3], 80h
 * 000000014072A90B: jz      short loc_14072A91A
 * 000000014072A90D: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072A912: test    eax, eax
 * 000000014072A914: mov     rax, [rbp-50h]
 * 000000014072A918: jnz     short loc_14072A8DA
 * 000000014072A91A: test    byte ptr gs:8A0h, 2
 * 000000014072A923: jz      short loc_14072A92C
 * 000000014072A925: xor     ecx, ecx
 * 000000014072A927: call    KiUpdateStibpPairing
 * 000000014072A92C: mov     rcx, gs:188h
 * 000000014072A935: test    dword ptr [rcx], 8000000h
 * 000000014072A93B: jz      short loc_14072A942
 * 000000014072A93D: call    KiRestoreSetContextState
 * 000000014072A942: mov     rcx, gs:188h
 * 000000014072A94B: test    dword ptr [rcx], 10000h
 * 000000014072A951: jz      short loc_14072A967
 * 000000014072A953: test    byte ptr [rcx+2], 1
 * 000000014072A957: jz      short loc_14072A967
 * 000000014072A959: call    KiCopyCounters
 * 000000014072A95E: mov     rcx, gs:188h
 * 000000014072A967: ldmxcsr dword ptr [rbp-54h]
 * 000000014072A96B: cmp     word ptr [rbp+80h], 0
 * 000000014072A973: jz      short loc_14072A97A
 * 000000014072A975: call    KiRestoreDebugRegisterState
 * 000000014072A97A: mov     rcx, gs:188h
 * 000000014072A983: bt      dword ptr [rcx+74h], 16h
 * 000000014072A988: jnb     short loc_14072A9B4
 * 000000014072A98A: xor     ecx, ecx
 * 000000014072A98C: rdsspq  rcx
 * 000000014072A991: mov     r8, gs:9D68h
 * 000000014072A99A: add     r8, 8
 * 000000014072A99E: cmp     rcx, r8
 * 000000014072A9A1: jnz     short loc_14072A9B4
 * 000000014072A9A3: mov     rcx, gs:9D60h
 * 000000014072A9AC: rstorssp qword ptr [rcx]
 * 000000014072A9B0: saveprevssp
 * 000000014072A9B4: mov     byte ptr gs:89Eh, 0
 * 000000014072A9BD: movzx   eax, word ptr gs:8ACh
 * 000000014072A9C6: cmp     gs:8A6h, ax
 * 000000014072A9CF: jz      short loc_14072A9E3
 * 000000014072A9D1: mov     gs:8A6h, ax
 * 000000014072A9DA: mov     ecx, 48h ; 'H'
 * 000000014072A9DF: xor     edx, edx
 * 000000014072A9E1: wrmsr
 * 000000014072A9E3: btr     word ptr gs:898h, 2
 * 000000014072A9EE: jnb     short loc_14072A9FE
 * 000000014072A9F0: mov     eax, 1
 * 000000014072A9F5: xor     edx, edx
 * 000000014072A9F7: mov     ecx, 49h ; 'I'
 * 000000014072A9FC: wrmsr
 * 000000014072A9FE: btr     word ptr gs:898h, 5
 * 000000014072AA09: jnb     loc_14072AB46
 * 000000014072AA0F: call    loc_14072AB22
 * 000000014072AA14: add     rsp, 8
 * 000000014072AA18: call    loc_14072AB2B
 * 000000014072AA1D: add     rsp, 8
 * 000000014072AA21: call    loc_14072AA14
 * 000000014072AA26: add     rsp, 8
 * 000000014072AA2A: call    loc_14072AA1D
 * 000000014072AA2F: add     rsp, 8
 * 000000014072AA33: call    loc_14072AA26
 * 000000014072AA38: add     rsp, 8
 * 000000014072AA3C: call    loc_14072AA2F
 * 000000014072AA41: add     rsp, 8
 * 000000014072AA45: call    loc_14072AA38
 * 000000014072AA4A: add     rsp, 8
 * 000000014072AA4E: call    loc_14072AA41
 * 000000014072AA53: add     rsp, 8
 * 000000014072AA57: call    loc_14072AA4A
 * 000000014072AA5C: add     rsp, 8
 * 000000014072AA60: call    loc_14072AA53
 * 000000014072AA65: add     rsp, 8
 * 000000014072AA69: call    loc_14072AA5C
 * 000000014072AA6E: add     rsp, 8
 * 000000014072AA72: call    loc_14072AA65
 * 000000014072AA77: add     rsp, 8
 * 000000014072AA7B: call    loc_14072AA6E
 * 000000014072AA80: add     rsp, 8
 * 000000014072AA84: call    loc_14072AA77
 * 000000014072AA89: add     rsp, 8
 * 000000014072AA8D: call    loc_14072AA80
 * 000000014072AA92: add     rsp, 8
 * 000000014072AA96: call    loc_14072AA89
 * 000000014072AA9B: add     rsp, 8
 * 000000014072AA9F: call    loc_14072AA92
 * 000000014072AAA4: add     rsp, 8
 * 000000014072AAA8: call    loc_14072AA9B
 * 000000014072AAAD: add     rsp, 8
 * 000000014072AAB1: call    loc_14072AAA4
 * 000000014072AAB6: add     rsp, 8
 * 000000014072AABA: call    loc_14072AAAD
 * 000000014072AABF: add     rsp, 8
 * 000000014072AAC3: call    loc_14072AAB6
 * 000000014072AAC8: add     rsp, 8
 * 000000014072AACC: call    loc_14072AABF
 * 000000014072AAD1: add     rsp, 8
 * 000000014072AAD5: call    loc_14072AAC8
 * 000000014072AADA: add     rsp, 8
 * 000000014072AADE: call    loc_14072AAD1
 * 000000014072AAE3: add     rsp, 8
 * 000000014072AAE7: call    loc_14072AADA
 * 000000014072AAEC: add     rsp, 8
 * 000000014072AAF0: call    loc_14072AAE3
 * 000000014072AAF5: add     rsp, 8
 * 000000014072AAF9: call    loc_14072AAEC
 * 000000014072AAFE: add     rsp, 8
 * 000000014072AB02: call    loc_14072AAF5
 * 000000014072AB07: add     rsp, 8
 * 000000014072AB0B: call    loc_14072AAFE
 * 000000014072AB10: add     rsp, 8
 * 000000014072AB14: call    loc_14072AB07
 * 000000014072AB19: add     rsp, 8
 * 000000014072AB1D: call    loc_14072AB10
 * 000000014072AB22: add     rsp, 8
 * 000000014072AB26: call    loc_14072AB19
 * 000000014072AB2B: add     rsp, 8
 * 000000014072AB2F: mov     eax, 0DADAh
 * 000000014072AB34: test    byte ptr gs:89Ch, 8
 * 000000014072AB3D: jz      short loc_14072AB46
 * 000000014072AB3F: mov     al, 20h ; ' '
 * 000000014072AB41: incsspq rax
 * 000000014072AB46: test    word ptr gs:898h, 100h
 * 000000014072AB51: jz      short loc_14072AB5F
 * 000000014072AB53: xor     eax, eax
 * 000000014072AB55: xor     edx, edx
 * 000000014072AB57: mov     ecx, 1
 * 000000014072AB5C: div     rcx
 * 000000014072AB5F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072AB63: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072AB67: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072AB6B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072AB6F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072AB73: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072AB77: mov     r11, [rbp-20h]
 * 000000014072AB7B: mov     r10, [rbp-28h]
 * 000000014072AB7F: mov     r9, [rbp-30h]
 * 000000014072AB83: mov     r8, [rbp-38h]
 * 000000014072AB87: mov     rdx, [rbp-40h]
 * 000000014072AB8B: mov     rcx, [rbp-48h]
 * 000000014072AB8F: mov     rax, [rbp-50h]
 * 000000014072AB93: mov     rsp, rbp
 * 000000014072AB96: mov     rbp, [rbp+0D8h]
 * 000000014072AB9D: add     rsp, 0E8h
 * 000000014072ABA4: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072ABAB: jz      short loc_14072ABB2
 * 000000014072ABAD: jmp     KiKernelExit
 * 000000014072ABB2: test    word ptr gs:898h, 200h
 * 000000014072ABBD: jz      short loc_14072ABC4
 * 000000014072ABBF: verw    [rsp-1C8h+arg_1E0]
 * 000000014072ABC4: swapgs
 * 000000014072ABC7: iretq
 * 000000014072ABC9: ldmxcsr dword ptr [rbp-54h]
 * 000000014072ABCD: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072ABD1: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072ABD5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072ABD9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072ABDD: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072ABE1: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072ABE5: mov     r11, [rbp-20h]
 * 000000014072ABE9: mov     r10, [rbp-28h]
 * 000000014072ABED: mov     r9, [rbp-30h]
 * 000000014072ABF1: mov     r8, [rbp-38h]
 * 000000014072ABF5: mov     rdx, [rbp-40h]
 * 000000014072ABF9: mov     rcx, [rbp-48h]
 * 000000014072ABFD: mov     rax, [rbp-50h]
 * 000000014072AC01: mov     rsp, rbp
 * 000000014072AC04: mov     rbp, [rbp+0D8h]
 * 000000014072AC0B: add     rsp, 0E8h
 * 000000014072AC12: iretq
 */
