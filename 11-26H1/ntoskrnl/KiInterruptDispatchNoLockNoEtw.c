/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x14072F400
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
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x14072EBC0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14072F400 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140734290 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x14072F400
 * Reason: Hex-Rays returned no pseudocode for 0x14072F400
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072F400: mov     rcx, gs:9198h
 * 000000014072F409: mov     rax, rcx
 * 000000014072F40C: mov     edx, cs:KeIsrStackSize
 * 000000014072F412: sub     rax, rdx
 * 000000014072F415: mov     rdx, rsp
 * 000000014072F418: cmp     rax, rsp
 * 000000014072F41B: ja      short loc_14072F422
 * 000000014072F41D: cmp     rsp, rcx
 * 000000014072F420: jb      short loc_14072F42E
 * 000000014072F422: cmp     dword ptr cs:KiDpcWatchdogConfigurationLock.InitialStack, 0
 * 000000014072F429: jnz     short loc_14072F42E
 * 000000014072F42B: mov     rsp, rcx
 * 000000014072F42E: sub     rsp, 20h
 * 000000014072F432: mov     [rsp+20h+var_10], rdx
 * 000000014072F437: call    KiInterruptSubDispatchNoLockNoEtw
 * 000000014072F43C: mov     rsp, [rsp+20h+var_10]
 * 000000014072F441: mov     rcx, rsi
 * 000000014072F444: call    HalPerformEndOfInterrupt
 * 000000014072F449: mov     rcx, gs:20h
 * 000000014072F452: movzx   edx, byte ptr [rbp-57h]
 * 000000014072F456: call    KiEndInterruptCycleAccumulation
 * 000000014072F45B: test    al, al
 * 000000014072F45D: jz      short loc_14072F464
 * 000000014072F45F: call    KiDpcInterruptBypass
 * 000000014072F464: movzx   ecx, byte ptr [rbp-57h]
 * 000000014072F468: cmp     cs:KiIrqlFlags, 0
 * 000000014072F46F: jz      short loc_14072F478
 * 000000014072F471: call    KzSetIrqlUnsafe
 * 000000014072F476: jmp     short loc_14072F47C
 * 000000014072F478: mov     cr8, rcx
 * 000000014072F47C: mov     rsi, [rbp+0D0h]
 * 000000014072F483: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072F48A: jz      short loc_14072F491
 * 000000014072F48C: add     rsp, 28h
 * 000000014072F490: retn
 * 000000014072F491: test    byte ptr [rbp+0F0h], 1
 * 000000014072F498: jz      loc_14072F799
 * 000000014072F49E: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072F4A5: jz      short loc_14072F4AA
 * 000000014072F4A7: stac
 * 000000014072F4AA: mov     rcx, gs:188h
 * 000000014072F4B3: test    byte ptr [rcx+0C2h], 3
 * 000000014072F4BA: jz      short loc_14072F4D7
 * 000000014072F4BC: mov     ecx, 1
 * 000000014072F4C1: mov     cr8, rcx
 * 000000014072F4C5: sti
 * 000000014072F4C6: call    KiInitiateUserApc
 * 000000014072F4CB: cli
 * 000000014072F4CC: mov     ecx, 0
 * 000000014072F4D1: mov     cr8, rcx
 * 000000014072F4D5: jmp     short loc_14072F4AA
 * 000000014072F4D7: test    byte ptr [rcx+3], 80h
 * 000000014072F4DB: jz      short loc_14072F4EA
 * 000000014072F4DD: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072F4E2: test    eax, eax
 * 000000014072F4E4: mov     rax, [rbp-50h]
 * 000000014072F4E8: jnz     short loc_14072F4AA
 * 000000014072F4EA: test    byte ptr gs:8A0h, 2
 * 000000014072F4F3: jz      short loc_14072F4FC
 * 000000014072F4F5: xor     ecx, ecx
 * 000000014072F4F7: call    KiUpdateStibpPairing
 * 000000014072F4FC: mov     rcx, gs:188h
 * 000000014072F505: test    dword ptr [rcx], 8000000h
 * 000000014072F50B: jz      short loc_14072F512
 * 000000014072F50D: call    KiRestoreSetContextState
 * 000000014072F512: mov     rcx, gs:188h
 * 000000014072F51B: test    dword ptr [rcx], 10000h
 * 000000014072F521: jz      short loc_14072F537
 * 000000014072F523: test    byte ptr [rcx+2], 1
 * 000000014072F527: jz      short loc_14072F537
 * 000000014072F529: call    KiCopyCounters
 * 000000014072F52E: mov     rcx, gs:188h
 * 000000014072F537: ldmxcsr dword ptr [rbp-54h]
 * 000000014072F53B: cmp     word ptr [rbp+80h], 0
 * 000000014072F543: jz      short loc_14072F54A
 * 000000014072F545: call    KiRestoreDebugRegisterState
 * 000000014072F54A: mov     rcx, gs:188h
 * 000000014072F553: bt      dword ptr [rcx+74h], 16h
 * 000000014072F558: jnb     short loc_14072F584
 * 000000014072F55A: xor     ecx, ecx
 * 000000014072F55C: rdsspq  rcx
 * 000000014072F561: mov     r8, gs:9D68h
 * 000000014072F56A: add     r8, 8
 * 000000014072F56E: cmp     rcx, r8
 * 000000014072F571: jnz     short loc_14072F584
 * 000000014072F573: mov     rcx, gs:9D60h
 * 000000014072F57C: rstorssp qword ptr [rcx]
 * 000000014072F580: saveprevssp
 * 000000014072F584: mov     byte ptr gs:89Eh, 0
 * 000000014072F58D: movzx   eax, word ptr gs:8ACh
 * 000000014072F596: cmp     gs:8A6h, ax
 * 000000014072F59F: jz      short loc_14072F5B3
 * 000000014072F5A1: mov     gs:8A6h, ax
 * 000000014072F5AA: mov     ecx, 48h ; 'H'
 * 000000014072F5AF: xor     edx, edx
 * 000000014072F5B1: wrmsr
 * 000000014072F5B3: btr     word ptr gs:898h, 2
 * 000000014072F5BE: jnb     short loc_14072F5CE
 * 000000014072F5C0: mov     eax, 1
 * 000000014072F5C5: xor     edx, edx
 * 000000014072F5C7: mov     ecx, 49h ; 'I'
 * 000000014072F5CC: wrmsr
 * 000000014072F5CE: btr     word ptr gs:898h, 5
 * 000000014072F5D9: jnb     loc_14072F716
 * 000000014072F5DF: call    loc_14072F6F2
 * 000000014072F5E4: add     rsp, 8
 * 000000014072F5E8: call    loc_14072F6FB
 * 000000014072F5ED: add     rsp, 8
 * 000000014072F5F1: call    loc_14072F5E4
 * 000000014072F5F6: add     rsp, 8
 * 000000014072F5FA: call    loc_14072F5ED
 * 000000014072F5FF: add     rsp, 8
 * 000000014072F603: call    loc_14072F5F6
 * 000000014072F608: add     rsp, 8
 * 000000014072F60C: call    loc_14072F5FF
 * 000000014072F611: add     rsp, 8
 * 000000014072F615: call    loc_14072F608
 * 000000014072F61A: add     rsp, 8
 * 000000014072F61E: call    loc_14072F611
 * 000000014072F623: add     rsp, 8
 * 000000014072F627: call    loc_14072F61A
 * 000000014072F62C: add     rsp, 8
 * 000000014072F630: call    loc_14072F623
 * 000000014072F635: add     rsp, 8
 * 000000014072F639: call    loc_14072F62C
 * 000000014072F63E: add     rsp, 8
 * 000000014072F642: call    loc_14072F635
 * 000000014072F647: add     rsp, 8
 * 000000014072F64B: call    loc_14072F63E
 * 000000014072F650: add     rsp, 8
 * 000000014072F654: call    loc_14072F647
 * 000000014072F659: add     rsp, 8
 * 000000014072F65D: call    loc_14072F650
 * 000000014072F662: add     rsp, 8
 * 000000014072F666: call    loc_14072F659
 * 000000014072F66B: add     rsp, 8
 * 000000014072F66F: call    loc_14072F662
 * 000000014072F674: add     rsp, 8
 * 000000014072F678: call    loc_14072F66B
 * 000000014072F67D: add     rsp, 8
 * 000000014072F681: call    loc_14072F674
 * 000000014072F686: add     rsp, 8
 * 000000014072F68A: call    loc_14072F67D
 * 000000014072F68F: add     rsp, 8
 * 000000014072F693: call    loc_14072F686
 * 000000014072F698: add     rsp, 8
 * 000000014072F69C: call    loc_14072F68F
 * 000000014072F6A1: add     rsp, 8
 * 000000014072F6A5: call    loc_14072F698
 * 000000014072F6AA: add     rsp, 8
 * 000000014072F6AE: call    loc_14072F6A1
 * 000000014072F6B3: add     rsp, 8
 * 000000014072F6B7: call    loc_14072F6AA
 * 000000014072F6BC: add     rsp, 8
 * 000000014072F6C0: call    loc_14072F6B3
 * 000000014072F6C5: add     rsp, 8
 * 000000014072F6C9: call    loc_14072F6BC
 * 000000014072F6CE: add     rsp, 8
 * 000000014072F6D2: call    loc_14072F6C5
 * 000000014072F6D7: add     rsp, 8
 * 000000014072F6DB: call    loc_14072F6CE
 * 000000014072F6E0: add     rsp, 8
 * 000000014072F6E4: call    loc_14072F6D7
 * 000000014072F6E9: add     rsp, 8
 * 000000014072F6ED: call    loc_14072F6E0
 * 000000014072F6F2: add     rsp, 8
 * 000000014072F6F6: call    loc_14072F6E9
 * 000000014072F6FB: add     rsp, 8
 * 000000014072F6FF: mov     eax, 0DADAh
 * 000000014072F704: test    byte ptr gs:89Ch, 8
 * 000000014072F70D: jz      short loc_14072F716
 * 000000014072F70F: mov     al, 20h ; ' '
 * 000000014072F711: incsspq rax
 * 000000014072F716: test    word ptr gs:898h, 100h
 * 000000014072F721: jz      short loc_14072F72F
 * 000000014072F723: xor     eax, eax
 * 000000014072F725: xor     edx, edx
 * 000000014072F727: mov     ecx, 1
 * 000000014072F72C: div     rcx
 * 000000014072F72F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072F733: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072F737: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072F73B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072F73F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072F743: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072F747: mov     r11, [rbp-20h]
 * 000000014072F74B: mov     r10, [rbp-28h]
 * 000000014072F74F: mov     r9, [rbp-30h]
 * 000000014072F753: mov     r8, [rbp-38h]
 * 000000014072F757: mov     rdx, [rbp-40h]
 * 000000014072F75B: mov     rcx, [rbp-48h]
 * 000000014072F75F: mov     rax, [rbp-50h]
 * 000000014072F763: mov     rsp, rbp
 * 000000014072F766: mov     rbp, [rbp+0D8h]
 * 000000014072F76D: add     rsp, 0E8h
 * 000000014072F774: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072F77B: jz      short loc_14072F782
 * 000000014072F77D: jmp     KiKernelExit
 * 000000014072F782: test    word ptr gs:898h, 200h
 * 000000014072F78D: jz      short loc_14072F794
 * 000000014072F78F: verw    [rsp-1C8h+arg_1E0]
 * 000000014072F794: swapgs
 * 000000014072F797: iretq
 * 000000014072F799: ldmxcsr dword ptr [rbp-54h]
 * 000000014072F79D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072F7A1: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072F7A5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072F7A9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072F7AD: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072F7B1: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072F7B5: mov     r11, [rbp-20h]
 * 000000014072F7B9: mov     r10, [rbp-28h]
 * 000000014072F7BD: mov     r9, [rbp-30h]
 * 000000014072F7C1: mov     r8, [rbp-38h]
 * 000000014072F7C5: mov     rdx, [rbp-40h]
 * 000000014072F7C9: mov     rcx, [rbp-48h]
 * 000000014072F7CD: mov     rax, [rbp-50h]
 * 000000014072F7D1: mov     rsp, rbp
 * 000000014072F7D4: mov     rbp, [rbp+0D8h]
 * 000000014072F7DB: add     rsp, 0E8h
 * 000000014072F7E2: iretq
 */
