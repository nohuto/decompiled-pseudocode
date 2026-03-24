/*
 * XREFs of KiVmbusInterruptDispatch @ 0x14072E2A0
 * Callers:
 *     KiVmbusInterrupt0 @ 0x14072D060 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x14072D3F0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x14072D780 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x14072DB10 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14021C910 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EBBF0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiVmbusInterruptDispatch @ 0x14072E2A0 (KiVmbusInterruptDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x14072E740 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x14072F6C0 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x14072E2A0
 * Reason: Hex-Rays returned no pseudocode for 0x14072E2A0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072E2A0: mov     rcx, gs:9198h
 * 000000014072E2A9: mov     rax, rcx
 * 000000014072E2AC: mov     edx, cs:KeIsrStackSize
 * 000000014072E2B2: sub     rax, rdx
 * 000000014072E2B5: mov     rdx, rsp
 * 000000014072E2B8: cmp     rax, rsp
 * 000000014072E2BB: ja      short loc_14072E2C2
 * 000000014072E2BD: cmp     rsp, rcx
 * 000000014072E2C0: jb      short loc_14072E2CE
 * 000000014072E2C2: cmp     dword ptr cs:KiDpcWatchdogConfigurationLock.StackLimit, 0
 * 000000014072E2C9: jnz     short loc_14072E2CE
 * 000000014072E2CB: mov     rsp, rcx
 * 000000014072E2CE: sub     rsp, 20h
 * 000000014072E2D2: mov     [rsp+20h+var_10], rdx
 * 000000014072E2D7: call    KiVmbusInterruptSubDispatch
 * 000000014072E2DC: mov     rsp, [rsp+20h+var_10]
 * 000000014072E2E1: cli
 * 000000014072E2E2: mov     rcx, gs:20h
 * 000000014072E2EB: movzx   edx, byte ptr [rbp-57h]
 * 000000014072E2EF: call    KiEndInterruptCycleAccumulation
 * 000000014072E2F4: test    al, al
 * 000000014072E2F6: jz      short loc_14072E2FD
 * 000000014072E2F8: call    KiDpcInterruptBypass
 * 000000014072E2FD: movzx   ecx, byte ptr [rbp-57h]
 * 000000014072E301: cmp     cs:KiIrqlFlags, 0
 * 000000014072E308: jz      short loc_14072E311
 * 000000014072E30A: call    KzSetIrqlUnsafe
 * 000000014072E30F: jmp     short loc_14072E315
 * 000000014072E311: mov     cr8, rcx
 * 000000014072E315: mov     rsi, [rbp+0D0h]
 * 000000014072E31C: cli
 * 000000014072E31D: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072E324: jz      short loc_14072E32B
 * 000000014072E326: add     rsp, 28h
 * 000000014072E32A: retn
 * 000000014072E32B: test    byte ptr [rbp+0F0h], 1
 * 000000014072E332: jz      loc_14072E633
 * 000000014072E338: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072E33F: jz      short loc_14072E344
 * 000000014072E341: stac
 * 000000014072E344: mov     rcx, gs:188h
 * 000000014072E34D: test    byte ptr [rcx+0C2h], 3
 * 000000014072E354: jz      short loc_14072E371
 * 000000014072E356: mov     ecx, 1
 * 000000014072E35B: mov     cr8, rcx
 * 000000014072E35F: sti
 * 000000014072E360: call    KiInitiateUserApc
 * 000000014072E365: cli
 * 000000014072E366: mov     ecx, 0
 * 000000014072E36B: mov     cr8, rcx
 * 000000014072E36F: jmp     short loc_14072E344
 * 000000014072E371: test    byte ptr [rcx+3], 80h
 * 000000014072E375: jz      short loc_14072E384
 * 000000014072E377: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072E37C: test    eax, eax
 * 000000014072E37E: mov     rax, [rbp-50h]
 * 000000014072E382: jnz     short loc_14072E344
 * 000000014072E384: test    byte ptr gs:8A0h, 2
 * 000000014072E38D: jz      short loc_14072E396
 * 000000014072E38F: xor     ecx, ecx
 * 000000014072E391: call    KiUpdateStibpPairing
 * 000000014072E396: mov     rcx, gs:188h
 * 000000014072E39F: test    dword ptr [rcx], 8000000h
 * 000000014072E3A5: jz      short loc_14072E3AC
 * 000000014072E3A7: call    KiRestoreSetContextState
 * 000000014072E3AC: mov     rcx, gs:188h
 * 000000014072E3B5: test    dword ptr [rcx], 10000h
 * 000000014072E3BB: jz      short loc_14072E3D1
 * 000000014072E3BD: test    byte ptr [rcx+2], 1
 * 000000014072E3C1: jz      short loc_14072E3D1
 * 000000014072E3C3: call    KiCopyCounters
 * 000000014072E3C8: mov     rcx, gs:188h
 * 000000014072E3D1: ldmxcsr dword ptr [rbp-54h]
 * 000000014072E3D5: cmp     word ptr [rbp+80h], 0
 * 000000014072E3DD: jz      short loc_14072E3E4
 * 000000014072E3DF: call    KiRestoreDebugRegisterState
 * 000000014072E3E4: mov     rcx, gs:188h
 * 000000014072E3ED: bt      dword ptr [rcx+74h], 16h
 * 000000014072E3F2: jnb     short loc_14072E41E
 * 000000014072E3F4: xor     ecx, ecx
 * 000000014072E3F6: rdsspq  rcx
 * 000000014072E3FB: mov     r8, gs:9D68h
 * 000000014072E404: add     r8, 8
 * 000000014072E408: cmp     rcx, r8
 * 000000014072E40B: jnz     short loc_14072E41E
 * 000000014072E40D: mov     rcx, gs:9D60h
 * 000000014072E416: rstorssp qword ptr [rcx]
 * 000000014072E41A: saveprevssp
 * 000000014072E41E: mov     byte ptr gs:89Eh, 0
 * 000000014072E427: movzx   eax, word ptr gs:8ACh
 * 000000014072E430: cmp     gs:8A6h, ax
 * 000000014072E439: jz      short loc_14072E44D
 * 000000014072E43B: mov     gs:8A6h, ax
 * 000000014072E444: mov     ecx, 48h ; 'H'
 * 000000014072E449: xor     edx, edx
 * 000000014072E44B: wrmsr
 * 000000014072E44D: btr     word ptr gs:898h, 2
 * 000000014072E458: jnb     short loc_14072E468
 * 000000014072E45A: mov     eax, 1
 * 000000014072E45F: xor     edx, edx
 * 000000014072E461: mov     ecx, 49h ; 'I'
 * 000000014072E466: wrmsr
 * 000000014072E468: btr     word ptr gs:898h, 5
 * 000000014072E473: jnb     loc_14072E5B0
 * 000000014072E479: call    loc_14072E58C
 * 000000014072E47E: add     rsp, 8
 * 000000014072E482: call    loc_14072E595
 * 000000014072E487: add     rsp, 8
 * 000000014072E48B: call    loc_14072E47E
 * 000000014072E490: add     rsp, 8
 * 000000014072E494: call    loc_14072E487
 * 000000014072E499: add     rsp, 8
 * 000000014072E49D: call    loc_14072E490
 * 000000014072E4A2: add     rsp, 8
 * 000000014072E4A6: call    loc_14072E499
 * 000000014072E4AB: add     rsp, 8
 * 000000014072E4AF: call    loc_14072E4A2
 * 000000014072E4B4: add     rsp, 8
 * 000000014072E4B8: call    loc_14072E4AB
 * 000000014072E4BD: add     rsp, 8
 * 000000014072E4C1: call    loc_14072E4B4
 * 000000014072E4C6: add     rsp, 8
 * 000000014072E4CA: call    loc_14072E4BD
 * 000000014072E4CF: add     rsp, 8
 * 000000014072E4D3: call    loc_14072E4C6
 * 000000014072E4D8: add     rsp, 8
 * 000000014072E4DC: call    loc_14072E4CF
 * 000000014072E4E1: add     rsp, 8
 * 000000014072E4E5: call    loc_14072E4D8
 * 000000014072E4EA: add     rsp, 8
 * 000000014072E4EE: call    loc_14072E4E1
 * 000000014072E4F3: add     rsp, 8
 * 000000014072E4F7: call    loc_14072E4EA
 * 000000014072E4FC: add     rsp, 8
 * 000000014072E500: call    loc_14072E4F3
 * 000000014072E505: add     rsp, 8
 * 000000014072E509: call    loc_14072E4FC
 * 000000014072E50E: add     rsp, 8
 * 000000014072E512: call    loc_14072E505
 * 000000014072E517: add     rsp, 8
 * 000000014072E51B: call    loc_14072E50E
 * 000000014072E520: add     rsp, 8
 * 000000014072E524: call    loc_14072E517
 * 000000014072E529: add     rsp, 8
 * 000000014072E52D: call    loc_14072E520
 * 000000014072E532: add     rsp, 8
 * 000000014072E536: call    loc_14072E529
 * 000000014072E53B: add     rsp, 8
 * 000000014072E53F: call    loc_14072E532
 * 000000014072E544: add     rsp, 8
 * 000000014072E548: call    loc_14072E53B
 * 000000014072E54D: add     rsp, 8
 * 000000014072E551: call    loc_14072E544
 * 000000014072E556: add     rsp, 8
 * 000000014072E55A: call    loc_14072E54D
 * 000000014072E55F: add     rsp, 8
 * 000000014072E563: call    loc_14072E556
 * 000000014072E568: add     rsp, 8
 * 000000014072E56C: call    loc_14072E55F
 * 000000014072E571: add     rsp, 8
 * 000000014072E575: call    loc_14072E568
 * 000000014072E57A: add     rsp, 8
 * 000000014072E57E: call    loc_14072E571
 * 000000014072E583: add     rsp, 8
 * 000000014072E587: call    loc_14072E57A
 * 000000014072E58C: add     rsp, 8
 * 000000014072E590: call    loc_14072E583
 * 000000014072E595: add     rsp, 8
 * 000000014072E599: mov     eax, 0DADAh
 * 000000014072E59E: test    byte ptr gs:89Ch, 8
 * 000000014072E5A7: jz      short loc_14072E5B0
 * 000000014072E5A9: mov     al, 20h ; ' '
 * 000000014072E5AB: incsspq rax
 * 000000014072E5B0: test    word ptr gs:898h, 100h
 * 000000014072E5BB: jz      short loc_14072E5C9
 * 000000014072E5BD: xor     eax, eax
 * 000000014072E5BF: xor     edx, edx
 * 000000014072E5C1: mov     ecx, 1
 * 000000014072E5C6: div     rcx
 * 000000014072E5C9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072E5CD: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072E5D1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072E5D5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072E5D9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072E5DD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072E5E1: mov     r11, [rbp-20h]
 * 000000014072E5E5: mov     r10, [rbp-28h]
 * 000000014072E5E9: mov     r9, [rbp-30h]
 * 000000014072E5ED: mov     r8, [rbp-38h]
 * 000000014072E5F1: mov     rdx, [rbp-40h]
 * 000000014072E5F5: mov     rcx, [rbp-48h]
 * 000000014072E5F9: mov     rax, [rbp-50h]
 * 000000014072E5FD: mov     rsp, rbp
 * 000000014072E600: mov     rbp, [rbp+0D8h]
 * 000000014072E607: add     rsp, 0E8h
 * 000000014072E60E: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072E615: jz      short loc_14072E61C
 * 000000014072E617: jmp     KiKernelExit
 * 000000014072E61C: test    word ptr gs:898h, 200h
 * 000000014072E627: jz      short loc_14072E62E
 * 000000014072E629: verw    [rsp-1C8h+arg_1E0]
 * 000000014072E62E: swapgs
 * 000000014072E631: iretq
 * 000000014072E633: ldmxcsr dword ptr [rbp-54h]
 * 000000014072E637: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072E63B: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072E63F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072E643: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072E647: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072E64B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072E64F: mov     r11, [rbp-20h]
 * 000000014072E653: mov     r10, [rbp-28h]
 * 000000014072E657: mov     r9, [rbp-30h]
 * 000000014072E65B: mov     r8, [rbp-38h]
 * 000000014072E65F: mov     rdx, [rbp-40h]
 * 000000014072E663: mov     rcx, [rbp-48h]
 * 000000014072E667: mov     rax, [rbp-50h]
 * 000000014072E66B: mov     rsp, rbp
 * 000000014072E66E: mov     rbp, [rbp+0D8h]
 * 000000014072E675: add     rsp, 0E8h
 * 000000014072E67C: iretq
 */
