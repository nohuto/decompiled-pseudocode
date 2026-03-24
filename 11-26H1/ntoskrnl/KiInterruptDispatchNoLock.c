/*
 * XREFs of KiInterruptDispatchNoLock @ 0x14072A440
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
 *     KiInterruptSubDispatchNoLock @ 0x140729F50 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoLock @ 0x14072A440 (KiInterruptDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x14072F6C0 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x14072A440
 * Reason: Hex-Rays returned no pseudocode for 0x14072A440
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072A440: mov     rcx, gs:9198h
 * 000000014072A449: mov     rax, rcx
 * 000000014072A44C: mov     edx, cs:KeIsrStackSize
 * 000000014072A452: sub     rax, rdx
 * 000000014072A455: mov     rdx, rsp
 * 000000014072A458: cmp     rax, rsp
 * 000000014072A45B: ja      short loc_14072A462
 * 000000014072A45D: cmp     rsp, rcx
 * 000000014072A460: jb      short loc_14072A46E
 * 000000014072A462: cmp     dword ptr cs:KiDpcWatchdogConfigurationLock.StackLimit, 0
 * 000000014072A469: jnz     short loc_14072A46E
 * 000000014072A46B: mov     rsp, rcx
 * 000000014072A46E: sub     rsp, 20h
 * 000000014072A472: mov     [rsp+20h+var_10], rdx
 * 000000014072A477: call    KiInterruptSubDispatchNoLock
 * 000000014072A47C: mov     rsp, [rsp+20h+var_10]
 * 000000014072A481: mov     rcx, rsi
 * 000000014072A484: call    HalPerformEndOfInterrupt
 * 000000014072A489: mov     rcx, gs:20h
 * 000000014072A492: movzx   edx, byte ptr [rbp-57h]
 * 000000014072A496: call    KiEndInterruptCycleAccumulation
 * 000000014072A49B: test    al, al
 * 000000014072A49D: jz      short loc_14072A4A4
 * 000000014072A49F: call    KiDpcInterruptBypass
 * 000000014072A4A4: movzx   ecx, byte ptr [rbp-57h]
 * 000000014072A4A8: cmp     cs:KiIrqlFlags, 0
 * 000000014072A4AF: jz      short loc_14072A4B8
 * 000000014072A4B1: call    KzSetIrqlUnsafe
 * 000000014072A4B6: jmp     short loc_14072A4BC
 * 000000014072A4B8: mov     cr8, rcx
 * 000000014072A4BC: mov     rsi, [rbp+0D0h]
 * 000000014072A4C3: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072A4CA: jz      short loc_14072A4D1
 * 000000014072A4CC: add     rsp, 28h
 * 000000014072A4D0: retn
 * 000000014072A4D1: test    byte ptr [rbp+0F0h], 1
 * 000000014072A4D8: jz      loc_14072A7D9
 * 000000014072A4DE: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072A4E5: jz      short loc_14072A4EA
 * 000000014072A4E7: stac
 * 000000014072A4EA: mov     rcx, gs:188h
 * 000000014072A4F3: test    byte ptr [rcx+0C2h], 3
 * 000000014072A4FA: jz      short loc_14072A517
 * 000000014072A4FC: mov     ecx, 1
 * 000000014072A501: mov     cr8, rcx
 * 000000014072A505: sti
 * 000000014072A506: call    KiInitiateUserApc
 * 000000014072A50B: cli
 * 000000014072A50C: mov     ecx, 0
 * 000000014072A511: mov     cr8, rcx
 * 000000014072A515: jmp     short loc_14072A4EA
 * 000000014072A517: test    byte ptr [rcx+3], 80h
 * 000000014072A51B: jz      short loc_14072A52A
 * 000000014072A51D: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072A522: test    eax, eax
 * 000000014072A524: mov     rax, [rbp-50h]
 * 000000014072A528: jnz     short loc_14072A4EA
 * 000000014072A52A: test    byte ptr gs:8A0h, 2
 * 000000014072A533: jz      short loc_14072A53C
 * 000000014072A535: xor     ecx, ecx
 * 000000014072A537: call    KiUpdateStibpPairing
 * 000000014072A53C: mov     rcx, gs:188h
 * 000000014072A545: test    dword ptr [rcx], 8000000h
 * 000000014072A54B: jz      short loc_14072A552
 * 000000014072A54D: call    KiRestoreSetContextState
 * 000000014072A552: mov     rcx, gs:188h
 * 000000014072A55B: test    dword ptr [rcx], 10000h
 * 000000014072A561: jz      short loc_14072A577
 * 000000014072A563: test    byte ptr [rcx+2], 1
 * 000000014072A567: jz      short loc_14072A577
 * 000000014072A569: call    KiCopyCounters
 * 000000014072A56E: mov     rcx, gs:188h
 * 000000014072A577: ldmxcsr dword ptr [rbp-54h]
 * 000000014072A57B: cmp     word ptr [rbp+80h], 0
 * 000000014072A583: jz      short loc_14072A58A
 * 000000014072A585: call    KiRestoreDebugRegisterState
 * 000000014072A58A: mov     rcx, gs:188h
 * 000000014072A593: bt      dword ptr [rcx+74h], 16h
 * 000000014072A598: jnb     short loc_14072A5C4
 * 000000014072A59A: xor     ecx, ecx
 * 000000014072A59C: rdsspq  rcx
 * 000000014072A5A1: mov     r8, gs:9D68h
 * 000000014072A5AA: add     r8, 8
 * 000000014072A5AE: cmp     rcx, r8
 * 000000014072A5B1: jnz     short loc_14072A5C4
 * 000000014072A5B3: mov     rcx, gs:9D60h
 * 000000014072A5BC: rstorssp qword ptr [rcx]
 * 000000014072A5C0: saveprevssp
 * 000000014072A5C4: mov     byte ptr gs:89Eh, 0
 * 000000014072A5CD: movzx   eax, word ptr gs:8ACh
 * 000000014072A5D6: cmp     gs:8A6h, ax
 * 000000014072A5DF: jz      short loc_14072A5F3
 * 000000014072A5E1: mov     gs:8A6h, ax
 * 000000014072A5EA: mov     ecx, 48h ; 'H'
 * 000000014072A5EF: xor     edx, edx
 * 000000014072A5F1: wrmsr
 * 000000014072A5F3: btr     word ptr gs:898h, 2
 * 000000014072A5FE: jnb     short loc_14072A60E
 * 000000014072A600: mov     eax, 1
 * 000000014072A605: xor     edx, edx
 * 000000014072A607: mov     ecx, 49h ; 'I'
 * 000000014072A60C: wrmsr
 * 000000014072A60E: btr     word ptr gs:898h, 5
 * 000000014072A619: jnb     loc_14072A756
 * 000000014072A61F: call    loc_14072A732
 * 000000014072A624: add     rsp, 8
 * 000000014072A628: call    loc_14072A73B
 * 000000014072A62D: add     rsp, 8
 * 000000014072A631: call    loc_14072A624
 * 000000014072A636: add     rsp, 8
 * 000000014072A63A: call    loc_14072A62D
 * 000000014072A63F: add     rsp, 8
 * 000000014072A643: call    loc_14072A636
 * 000000014072A648: add     rsp, 8
 * 000000014072A64C: call    loc_14072A63F
 * 000000014072A651: add     rsp, 8
 * 000000014072A655: call    loc_14072A648
 * 000000014072A65A: add     rsp, 8
 * 000000014072A65E: call    loc_14072A651
 * 000000014072A663: add     rsp, 8
 * 000000014072A667: call    loc_14072A65A
 * 000000014072A66C: add     rsp, 8
 * 000000014072A670: call    loc_14072A663
 * 000000014072A675: add     rsp, 8
 * 000000014072A679: call    loc_14072A66C
 * 000000014072A67E: add     rsp, 8
 * 000000014072A682: call    loc_14072A675
 * 000000014072A687: add     rsp, 8
 * 000000014072A68B: call    loc_14072A67E
 * 000000014072A690: add     rsp, 8
 * 000000014072A694: call    loc_14072A687
 * 000000014072A699: add     rsp, 8
 * 000000014072A69D: call    loc_14072A690
 * 000000014072A6A2: add     rsp, 8
 * 000000014072A6A6: call    loc_14072A699
 * 000000014072A6AB: add     rsp, 8
 * 000000014072A6AF: call    loc_14072A6A2
 * 000000014072A6B4: add     rsp, 8
 * 000000014072A6B8: call    loc_14072A6AB
 * 000000014072A6BD: add     rsp, 8
 * 000000014072A6C1: call    loc_14072A6B4
 * 000000014072A6C6: add     rsp, 8
 * 000000014072A6CA: call    loc_14072A6BD
 * 000000014072A6CF: add     rsp, 8
 * 000000014072A6D3: call    loc_14072A6C6
 * 000000014072A6D8: add     rsp, 8
 * 000000014072A6DC: call    loc_14072A6CF
 * 000000014072A6E1: add     rsp, 8
 * 000000014072A6E5: call    loc_14072A6D8
 * 000000014072A6EA: add     rsp, 8
 * 000000014072A6EE: call    loc_14072A6E1
 * 000000014072A6F3: add     rsp, 8
 * 000000014072A6F7: call    loc_14072A6EA
 * 000000014072A6FC: add     rsp, 8
 * 000000014072A700: call    loc_14072A6F3
 * 000000014072A705: add     rsp, 8
 * 000000014072A709: call    loc_14072A6FC
 * 000000014072A70E: add     rsp, 8
 * 000000014072A712: call    loc_14072A705
 * 000000014072A717: add     rsp, 8
 * 000000014072A71B: call    loc_14072A70E
 * 000000014072A720: add     rsp, 8
 * 000000014072A724: call    loc_14072A717
 * 000000014072A729: add     rsp, 8
 * 000000014072A72D: call    loc_14072A720
 * 000000014072A732: add     rsp, 8
 * 000000014072A736: call    loc_14072A729
 * 000000014072A73B: add     rsp, 8
 * 000000014072A73F: mov     eax, 0DADAh
 * 000000014072A744: test    byte ptr gs:89Ch, 8
 * 000000014072A74D: jz      short loc_14072A756
 * 000000014072A74F: mov     al, 20h ; ' '
 * 000000014072A751: incsspq rax
 * 000000014072A756: test    word ptr gs:898h, 100h
 * 000000014072A761: jz      short loc_14072A76F
 * 000000014072A763: xor     eax, eax
 * 000000014072A765: xor     edx, edx
 * 000000014072A767: mov     ecx, 1
 * 000000014072A76C: div     rcx
 * 000000014072A76F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072A773: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072A777: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072A77B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072A77F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072A783: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072A787: mov     r11, [rbp-20h]
 * 000000014072A78B: mov     r10, [rbp-28h]
 * 000000014072A78F: mov     r9, [rbp-30h]
 * 000000014072A793: mov     r8, [rbp-38h]
 * 000000014072A797: mov     rdx, [rbp-40h]
 * 000000014072A79B: mov     rcx, [rbp-48h]
 * 000000014072A79F: mov     rax, [rbp-50h]
 * 000000014072A7A3: mov     rsp, rbp
 * 000000014072A7A6: mov     rbp, [rbp+0D8h]
 * 000000014072A7AD: add     rsp, 0E8h
 * 000000014072A7B4: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072A7BB: jz      short loc_14072A7C2
 * 000000014072A7BD: jmp     KiKernelExit
 * 000000014072A7C2: test    word ptr gs:898h, 200h
 * 000000014072A7CD: jz      short loc_14072A7D4
 * 000000014072A7CF: verw    [rsp-1C8h+arg_1E0]
 * 000000014072A7D4: swapgs
 * 000000014072A7D7: iretq
 * 000000014072A7D9: ldmxcsr dword ptr [rbp-54h]
 * 000000014072A7DD: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072A7E1: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072A7E5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072A7E9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072A7ED: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072A7F1: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072A7F5: mov     r11, [rbp-20h]
 * 000000014072A7F9: mov     r10, [rbp-28h]
 * 000000014072A7FD: mov     r9, [rbp-30h]
 * 000000014072A801: mov     r8, [rbp-38h]
 * 000000014072A805: mov     rdx, [rbp-40h]
 * 000000014072A809: mov     rcx, [rbp-48h]
 * 000000014072A80D: mov     rax, [rbp-50h]
 * 000000014072A811: mov     rsp, rbp
 * 000000014072A814: mov     rbp, [rbp+0D8h]
 * 000000014072A81B: add     rsp, 0E8h
 * 000000014072A822: iretq
 */
