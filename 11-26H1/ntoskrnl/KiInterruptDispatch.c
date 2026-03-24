/*
 * XREFs of KiInterruptDispatch @ 0x14072A050
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
 *     KiInterruptSubDispatch @ 0x140729EA0 (KiInterruptSubDispatch.c)
 *     KiInterruptDispatch @ 0x14072A050 (KiInterruptDispatch.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x14072F6C0 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x14072A050
 * Reason: Hex-Rays returned no pseudocode for 0x14072A050
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072A050: mov     rcx, gs:9198h
 * 000000014072A059: mov     rax, rcx
 * 000000014072A05C: mov     edx, cs:KeIsrStackSize
 * 000000014072A062: sub     rax, rdx
 * 000000014072A065: mov     rdx, rsp
 * 000000014072A068: cmp     rax, rsp
 * 000000014072A06B: ja      short loc_14072A072
 * 000000014072A06D: cmp     rsp, rcx
 * 000000014072A070: jb      short loc_14072A07E
 * 000000014072A072: cmp     dword ptr cs:KiDpcWatchdogConfigurationLock.StackLimit, 0
 * 000000014072A079: jnz     short loc_14072A07E
 * 000000014072A07B: mov     rsp, rcx
 * 000000014072A07E: sub     rsp, 20h
 * 000000014072A082: mov     [rsp+20h+var_10], rdx
 * 000000014072A087: call    KiInterruptSubDispatch
 * 000000014072A08C: mov     rsp, [rsp+20h+var_10]
 * 000000014072A091: mov     rcx, rsi
 * 000000014072A094: call    HalPerformEndOfInterrupt
 * 000000014072A099: mov     rcx, gs:20h
 * 000000014072A0A2: movzx   edx, byte ptr [rbp-57h]
 * 000000014072A0A6: call    KiEndInterruptCycleAccumulation
 * 000000014072A0AB: test    al, al
 * 000000014072A0AD: jz      short loc_14072A0B4
 * 000000014072A0AF: call    KiDpcInterruptBypass
 * 000000014072A0B4: movzx   ecx, byte ptr [rbp-57h]
 * 000000014072A0B8: cmp     cs:KiIrqlFlags, 0
 * 000000014072A0BF: jz      short loc_14072A0C8
 * 000000014072A0C1: call    KzSetIrqlUnsafe
 * 000000014072A0C6: jmp     short loc_14072A0CC
 * 000000014072A0C8: mov     cr8, rcx
 * 000000014072A0CC: mov     rsi, [rbp+0D0h]
 * 000000014072A0D3: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072A0DA: jz      short loc_14072A0E1
 * 000000014072A0DC: add     rsp, 28h
 * 000000014072A0E0: retn
 * 000000014072A0E1: test    byte ptr [rbp+0F0h], 1
 * 000000014072A0E8: jz      loc_14072A3E9
 * 000000014072A0EE: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072A0F5: jz      short loc_14072A0FA
 * 000000014072A0F7: stac
 * 000000014072A0FA: mov     rcx, gs:188h
 * 000000014072A103: test    byte ptr [rcx+0C2h], 3
 * 000000014072A10A: jz      short loc_14072A127
 * 000000014072A10C: mov     ecx, 1
 * 000000014072A111: mov     cr8, rcx
 * 000000014072A115: sti
 * 000000014072A116: call    KiInitiateUserApc
 * 000000014072A11B: cli
 * 000000014072A11C: mov     ecx, 0
 * 000000014072A121: mov     cr8, rcx
 * 000000014072A125: jmp     short loc_14072A0FA
 * 000000014072A127: test    byte ptr [rcx+3], 80h
 * 000000014072A12B: jz      short loc_14072A13A
 * 000000014072A12D: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072A132: test    eax, eax
 * 000000014072A134: mov     rax, [rbp-50h]
 * 000000014072A138: jnz     short loc_14072A0FA
 * 000000014072A13A: test    byte ptr gs:8A0h, 2
 * 000000014072A143: jz      short loc_14072A14C
 * 000000014072A145: xor     ecx, ecx
 * 000000014072A147: call    KiUpdateStibpPairing
 * 000000014072A14C: mov     rcx, gs:188h
 * 000000014072A155: test    dword ptr [rcx], 8000000h
 * 000000014072A15B: jz      short loc_14072A162
 * 000000014072A15D: call    KiRestoreSetContextState
 * 000000014072A162: mov     rcx, gs:188h
 * 000000014072A16B: test    dword ptr [rcx], 10000h
 * 000000014072A171: jz      short loc_14072A187
 * 000000014072A173: test    byte ptr [rcx+2], 1
 * 000000014072A177: jz      short loc_14072A187
 * 000000014072A179: call    KiCopyCounters
 * 000000014072A17E: mov     rcx, gs:188h
 * 000000014072A187: ldmxcsr dword ptr [rbp-54h]
 * 000000014072A18B: cmp     word ptr [rbp+80h], 0
 * 000000014072A193: jz      short loc_14072A19A
 * 000000014072A195: call    KiRestoreDebugRegisterState
 * 000000014072A19A: mov     rcx, gs:188h
 * 000000014072A1A3: bt      dword ptr [rcx+74h], 16h
 * 000000014072A1A8: jnb     short loc_14072A1D4
 * 000000014072A1AA: xor     ecx, ecx
 * 000000014072A1AC: rdsspq  rcx
 * 000000014072A1B1: mov     r8, gs:9D68h
 * 000000014072A1BA: add     r8, 8
 * 000000014072A1BE: cmp     rcx, r8
 * 000000014072A1C1: jnz     short loc_14072A1D4
 * 000000014072A1C3: mov     rcx, gs:9D60h
 * 000000014072A1CC: rstorssp qword ptr [rcx]
 * 000000014072A1D0: saveprevssp
 * 000000014072A1D4: mov     byte ptr gs:89Eh, 0
 * 000000014072A1DD: movzx   eax, word ptr gs:8ACh
 * 000000014072A1E6: cmp     gs:8A6h, ax
 * 000000014072A1EF: jz      short loc_14072A203
 * 000000014072A1F1: mov     gs:8A6h, ax
 * 000000014072A1FA: mov     ecx, 48h ; 'H'
 * 000000014072A1FF: xor     edx, edx
 * 000000014072A201: wrmsr
 * 000000014072A203: btr     word ptr gs:898h, 2
 * 000000014072A20E: jnb     short loc_14072A21E
 * 000000014072A210: mov     eax, 1
 * 000000014072A215: xor     edx, edx
 * 000000014072A217: mov     ecx, 49h ; 'I'
 * 000000014072A21C: wrmsr
 * 000000014072A21E: btr     word ptr gs:898h, 5
 * 000000014072A229: jnb     loc_14072A366
 * 000000014072A22F: call    loc_14072A342
 * 000000014072A234: add     rsp, 8
 * 000000014072A238: call    loc_14072A34B
 * 000000014072A23D: add     rsp, 8
 * 000000014072A241: call    loc_14072A234
 * 000000014072A246: add     rsp, 8
 * 000000014072A24A: call    loc_14072A23D
 * 000000014072A24F: add     rsp, 8
 * 000000014072A253: call    loc_14072A246
 * 000000014072A258: add     rsp, 8
 * 000000014072A25C: call    loc_14072A24F
 * 000000014072A261: add     rsp, 8
 * 000000014072A265: call    loc_14072A258
 * 000000014072A26A: add     rsp, 8
 * 000000014072A26E: call    loc_14072A261
 * 000000014072A273: add     rsp, 8
 * 000000014072A277: call    loc_14072A26A
 * 000000014072A27C: add     rsp, 8
 * 000000014072A280: call    loc_14072A273
 * 000000014072A285: add     rsp, 8
 * 000000014072A289: call    loc_14072A27C
 * 000000014072A28E: add     rsp, 8
 * 000000014072A292: call    loc_14072A285
 * 000000014072A297: add     rsp, 8
 * 000000014072A29B: call    loc_14072A28E
 * 000000014072A2A0: add     rsp, 8
 * 000000014072A2A4: call    loc_14072A297
 * 000000014072A2A9: add     rsp, 8
 * 000000014072A2AD: call    loc_14072A2A0
 * 000000014072A2B2: add     rsp, 8
 * 000000014072A2B6: call    loc_14072A2A9
 * 000000014072A2BB: add     rsp, 8
 * 000000014072A2BF: call    loc_14072A2B2
 * 000000014072A2C4: add     rsp, 8
 * 000000014072A2C8: call    loc_14072A2BB
 * 000000014072A2CD: add     rsp, 8
 * 000000014072A2D1: call    loc_14072A2C4
 * 000000014072A2D6: add     rsp, 8
 * 000000014072A2DA: call    loc_14072A2CD
 * 000000014072A2DF: add     rsp, 8
 * 000000014072A2E3: call    loc_14072A2D6
 * 000000014072A2E8: add     rsp, 8
 * 000000014072A2EC: call    loc_14072A2DF
 * 000000014072A2F1: add     rsp, 8
 * 000000014072A2F5: call    loc_14072A2E8
 * 000000014072A2FA: add     rsp, 8
 * 000000014072A2FE: call    loc_14072A2F1
 * 000000014072A303: add     rsp, 8
 * 000000014072A307: call    loc_14072A2FA
 * 000000014072A30C: add     rsp, 8
 * 000000014072A310: call    loc_14072A303
 * 000000014072A315: add     rsp, 8
 * 000000014072A319: call    loc_14072A30C
 * 000000014072A31E: add     rsp, 8
 * 000000014072A322: call    loc_14072A315
 * 000000014072A327: add     rsp, 8
 * 000000014072A32B: call    loc_14072A31E
 * 000000014072A330: add     rsp, 8
 * 000000014072A334: call    loc_14072A327
 * 000000014072A339: add     rsp, 8
 * 000000014072A33D: call    loc_14072A330
 * 000000014072A342: add     rsp, 8
 * 000000014072A346: call    loc_14072A339
 * 000000014072A34B: add     rsp, 8
 * 000000014072A34F: mov     eax, 0DADAh
 * 000000014072A354: test    byte ptr gs:89Ch, 8
 * 000000014072A35D: jz      short loc_14072A366
 * 000000014072A35F: mov     al, 20h ; ' '
 * 000000014072A361: incsspq rax
 * 000000014072A366: test    word ptr gs:898h, 100h
 * 000000014072A371: jz      short loc_14072A37F
 * 000000014072A373: xor     eax, eax
 * 000000014072A375: xor     edx, edx
 * 000000014072A377: mov     ecx, 1
 * 000000014072A37C: div     rcx
 * 000000014072A37F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072A383: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072A387: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072A38B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072A38F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072A393: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072A397: mov     r11, [rbp-20h]
 * 000000014072A39B: mov     r10, [rbp-28h]
 * 000000014072A39F: mov     r9, [rbp-30h]
 * 000000014072A3A3: mov     r8, [rbp-38h]
 * 000000014072A3A7: mov     rdx, [rbp-40h]
 * 000000014072A3AB: mov     rcx, [rbp-48h]
 * 000000014072A3AF: mov     rax, [rbp-50h]
 * 000000014072A3B3: mov     rsp, rbp
 * 000000014072A3B6: mov     rbp, [rbp+0D8h]
 * 000000014072A3BD: add     rsp, 0E8h
 * 000000014072A3C4: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072A3CB: jz      short loc_14072A3D2
 * 000000014072A3CD: jmp     KiKernelExit
 * 000000014072A3D2: test    word ptr gs:898h, 200h
 * 000000014072A3DD: jz      short loc_14072A3E4
 * 000000014072A3DF: verw    [rsp-1C8h+arg_1E0]
 * 000000014072A3E4: swapgs
 * 000000014072A3E7: iretq
 * 000000014072A3E9: ldmxcsr dword ptr [rbp-54h]
 * 000000014072A3ED: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072A3F1: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072A3F5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072A3F9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072A3FD: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072A401: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072A405: mov     r11, [rbp-20h]
 * 000000014072A409: mov     r10, [rbp-28h]
 * 000000014072A40D: mov     r9, [rbp-30h]
 * 000000014072A411: mov     r8, [rbp-38h]
 * 000000014072A415: mov     rdx, [rbp-40h]
 * 000000014072A419: mov     rcx, [rbp-48h]
 * 000000014072A41D: mov     rax, [rbp-50h]
 * 000000014072A421: mov     rsp, rbp
 * 000000014072A424: mov     rbp, [rbp+0D8h]
 * 000000014072A42B: add     rsp, 0E8h
 * 000000014072A432: iretq
 */
