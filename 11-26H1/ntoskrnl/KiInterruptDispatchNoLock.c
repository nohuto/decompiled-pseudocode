/*
 * XREFs of KiInterruptDispatchNoLock @ 0x14072F010
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
 *     KiInterruptSubDispatchNoLock @ 0x14072EB20 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoLock @ 0x14072F010 (KiInterruptDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140734290 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x14072F010
 * Reason: Hex-Rays returned no pseudocode for 0x14072F010
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072F010: mov     rcx, gs:9198h
 * 000000014072F019: mov     rax, rcx
 * 000000014072F01C: mov     edx, cs:KeIsrStackSize
 * 000000014072F022: sub     rax, rdx
 * 000000014072F025: mov     rdx, rsp
 * 000000014072F028: cmp     rax, rsp
 * 000000014072F02B: ja      short loc_14072F032
 * 000000014072F02D: cmp     rsp, rcx
 * 000000014072F030: jb      short loc_14072F03E
 * 000000014072F032: cmp     dword ptr cs:KiDpcWatchdogConfigurationLock.InitialStack, 0
 * 000000014072F039: jnz     short loc_14072F03E
 * 000000014072F03B: mov     rsp, rcx
 * 000000014072F03E: sub     rsp, 20h
 * 000000014072F042: mov     [rsp+20h+var_10], rdx
 * 000000014072F047: call    KiInterruptSubDispatchNoLock
 * 000000014072F04C: mov     rsp, [rsp+20h+var_10]
 * 000000014072F051: mov     rcx, rsi
 * 000000014072F054: call    HalPerformEndOfInterrupt
 * 000000014072F059: mov     rcx, gs:20h
 * 000000014072F062: movzx   edx, byte ptr [rbp-57h]
 * 000000014072F066: call    KiEndInterruptCycleAccumulation
 * 000000014072F06B: test    al, al
 * 000000014072F06D: jz      short loc_14072F074
 * 000000014072F06F: call    KiDpcInterruptBypass
 * 000000014072F074: movzx   ecx, byte ptr [rbp-57h]
 * 000000014072F078: cmp     cs:KiIrqlFlags, 0
 * 000000014072F07F: jz      short loc_14072F088
 * 000000014072F081: call    KzSetIrqlUnsafe
 * 000000014072F086: jmp     short loc_14072F08C
 * 000000014072F088: mov     cr8, rcx
 * 000000014072F08C: mov     rsi, [rbp+0D0h]
 * 000000014072F093: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072F09A: jz      short loc_14072F0A1
 * 000000014072F09C: add     rsp, 28h
 * 000000014072F0A0: retn
 * 000000014072F0A1: test    byte ptr [rbp+0F0h], 1
 * 000000014072F0A8: jz      loc_14072F3A9
 * 000000014072F0AE: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072F0B5: jz      short loc_14072F0BA
 * 000000014072F0B7: stac
 * 000000014072F0BA: mov     rcx, gs:188h
 * 000000014072F0C3: test    byte ptr [rcx+0C2h], 3
 * 000000014072F0CA: jz      short loc_14072F0E7
 * 000000014072F0CC: mov     ecx, 1
 * 000000014072F0D1: mov     cr8, rcx
 * 000000014072F0D5: sti
 * 000000014072F0D6: call    KiInitiateUserApc
 * 000000014072F0DB: cli
 * 000000014072F0DC: mov     ecx, 0
 * 000000014072F0E1: mov     cr8, rcx
 * 000000014072F0E5: jmp     short loc_14072F0BA
 * 000000014072F0E7: test    byte ptr [rcx+3], 80h
 * 000000014072F0EB: jz      short loc_14072F0FA
 * 000000014072F0ED: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072F0F2: test    eax, eax
 * 000000014072F0F4: mov     rax, [rbp-50h]
 * 000000014072F0F8: jnz     short loc_14072F0BA
 * 000000014072F0FA: test    byte ptr gs:8A0h, 2
 * 000000014072F103: jz      short loc_14072F10C
 * 000000014072F105: xor     ecx, ecx
 * 000000014072F107: call    KiUpdateStibpPairing
 * 000000014072F10C: mov     rcx, gs:188h
 * 000000014072F115: test    dword ptr [rcx], 8000000h
 * 000000014072F11B: jz      short loc_14072F122
 * 000000014072F11D: call    KiRestoreSetContextState
 * 000000014072F122: mov     rcx, gs:188h
 * 000000014072F12B: test    dword ptr [rcx], 10000h
 * 000000014072F131: jz      short loc_14072F147
 * 000000014072F133: test    byte ptr [rcx+2], 1
 * 000000014072F137: jz      short loc_14072F147
 * 000000014072F139: call    KiCopyCounters
 * 000000014072F13E: mov     rcx, gs:188h
 * 000000014072F147: ldmxcsr dword ptr [rbp-54h]
 * 000000014072F14B: cmp     word ptr [rbp+80h], 0
 * 000000014072F153: jz      short loc_14072F15A
 * 000000014072F155: call    KiRestoreDebugRegisterState
 * 000000014072F15A: mov     rcx, gs:188h
 * 000000014072F163: bt      dword ptr [rcx+74h], 16h
 * 000000014072F168: jnb     short loc_14072F194
 * 000000014072F16A: xor     ecx, ecx
 * 000000014072F16C: rdsspq  rcx
 * 000000014072F171: mov     r8, gs:9D68h
 * 000000014072F17A: add     r8, 8
 * 000000014072F17E: cmp     rcx, r8
 * 000000014072F181: jnz     short loc_14072F194
 * 000000014072F183: mov     rcx, gs:9D60h
 * 000000014072F18C: rstorssp qword ptr [rcx]
 * 000000014072F190: saveprevssp
 * 000000014072F194: mov     byte ptr gs:89Eh, 0
 * 000000014072F19D: movzx   eax, word ptr gs:8ACh
 * 000000014072F1A6: cmp     gs:8A6h, ax
 * 000000014072F1AF: jz      short loc_14072F1C3
 * 000000014072F1B1: mov     gs:8A6h, ax
 * 000000014072F1BA: mov     ecx, 48h ; 'H'
 * 000000014072F1BF: xor     edx, edx
 * 000000014072F1C1: wrmsr
 * 000000014072F1C3: btr     word ptr gs:898h, 2
 * 000000014072F1CE: jnb     short loc_14072F1DE
 * 000000014072F1D0: mov     eax, 1
 * 000000014072F1D5: xor     edx, edx
 * 000000014072F1D7: mov     ecx, 49h ; 'I'
 * 000000014072F1DC: wrmsr
 * 000000014072F1DE: btr     word ptr gs:898h, 5
 * 000000014072F1E9: jnb     loc_14072F326
 * 000000014072F1EF: call    loc_14072F302
 * 000000014072F1F4: add     rsp, 8
 * 000000014072F1F8: call    loc_14072F30B
 * 000000014072F1FD: add     rsp, 8
 * 000000014072F201: call    loc_14072F1F4
 * 000000014072F206: add     rsp, 8
 * 000000014072F20A: call    loc_14072F1FD
 * 000000014072F20F: add     rsp, 8
 * 000000014072F213: call    loc_14072F206
 * 000000014072F218: add     rsp, 8
 * 000000014072F21C: call    loc_14072F20F
 * 000000014072F221: add     rsp, 8
 * 000000014072F225: call    loc_14072F218
 * 000000014072F22A: add     rsp, 8
 * 000000014072F22E: call    loc_14072F221
 * 000000014072F233: add     rsp, 8
 * 000000014072F237: call    loc_14072F22A
 * 000000014072F23C: add     rsp, 8
 * 000000014072F240: call    loc_14072F233
 * 000000014072F245: add     rsp, 8
 * 000000014072F249: call    loc_14072F23C
 * 000000014072F24E: add     rsp, 8
 * 000000014072F252: call    loc_14072F245
 * 000000014072F257: add     rsp, 8
 * 000000014072F25B: call    loc_14072F24E
 * 000000014072F260: add     rsp, 8
 * 000000014072F264: call    loc_14072F257
 * 000000014072F269: add     rsp, 8
 * 000000014072F26D: call    loc_14072F260
 * 000000014072F272: add     rsp, 8
 * 000000014072F276: call    loc_14072F269
 * 000000014072F27B: add     rsp, 8
 * 000000014072F27F: call    loc_14072F272
 * 000000014072F284: add     rsp, 8
 * 000000014072F288: call    loc_14072F27B
 * 000000014072F28D: add     rsp, 8
 * 000000014072F291: call    loc_14072F284
 * 000000014072F296: add     rsp, 8
 * 000000014072F29A: call    loc_14072F28D
 * 000000014072F29F: add     rsp, 8
 * 000000014072F2A3: call    loc_14072F296
 * 000000014072F2A8: add     rsp, 8
 * 000000014072F2AC: call    loc_14072F29F
 * 000000014072F2B1: add     rsp, 8
 * 000000014072F2B5: call    loc_14072F2A8
 * 000000014072F2BA: add     rsp, 8
 * 000000014072F2BE: call    loc_14072F2B1
 * 000000014072F2C3: add     rsp, 8
 * 000000014072F2C7: call    loc_14072F2BA
 * 000000014072F2CC: add     rsp, 8
 * 000000014072F2D0: call    loc_14072F2C3
 * 000000014072F2D5: add     rsp, 8
 * 000000014072F2D9: call    loc_14072F2CC
 * 000000014072F2DE: add     rsp, 8
 * 000000014072F2E2: call    loc_14072F2D5
 * 000000014072F2E7: add     rsp, 8
 * 000000014072F2EB: call    loc_14072F2DE
 * 000000014072F2F0: add     rsp, 8
 * 000000014072F2F4: call    loc_14072F2E7
 * 000000014072F2F9: add     rsp, 8
 * 000000014072F2FD: call    loc_14072F2F0
 * 000000014072F302: add     rsp, 8
 * 000000014072F306: call    loc_14072F2F9
 * 000000014072F30B: add     rsp, 8
 * 000000014072F30F: mov     eax, 0DADAh
 * 000000014072F314: test    byte ptr gs:89Ch, 8
 * 000000014072F31D: jz      short loc_14072F326
 * 000000014072F31F: mov     al, 20h ; ' '
 * 000000014072F321: incsspq rax
 * 000000014072F326: test    word ptr gs:898h, 100h
 * 000000014072F331: jz      short loc_14072F33F
 * 000000014072F333: xor     eax, eax
 * 000000014072F335: xor     edx, edx
 * 000000014072F337: mov     ecx, 1
 * 000000014072F33C: div     rcx
 * 000000014072F33F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072F343: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072F347: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072F34B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072F34F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072F353: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072F357: mov     r11, [rbp-20h]
 * 000000014072F35B: mov     r10, [rbp-28h]
 * 000000014072F35F: mov     r9, [rbp-30h]
 * 000000014072F363: mov     r8, [rbp-38h]
 * 000000014072F367: mov     rdx, [rbp-40h]
 * 000000014072F36B: mov     rcx, [rbp-48h]
 * 000000014072F36F: mov     rax, [rbp-50h]
 * 000000014072F373: mov     rsp, rbp
 * 000000014072F376: mov     rbp, [rbp+0D8h]
 * 000000014072F37D: add     rsp, 0E8h
 * 000000014072F384: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072F38B: jz      short loc_14072F392
 * 000000014072F38D: jmp     KiKernelExit
 * 000000014072F392: test    word ptr gs:898h, 200h
 * 000000014072F39D: jz      short loc_14072F3A4
 * 000000014072F39F: verw    [rsp-1C8h+arg_1E0]
 * 000000014072F3A4: swapgs
 * 000000014072F3A7: iretq
 * 000000014072F3A9: ldmxcsr dword ptr [rbp-54h]
 * 000000014072F3AD: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072F3B1: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072F3B5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072F3B9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072F3BD: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072F3C1: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072F3C5: mov     r11, [rbp-20h]
 * 000000014072F3C9: mov     r10, [rbp-28h]
 * 000000014072F3CD: mov     r9, [rbp-30h]
 * 000000014072F3D1: mov     r8, [rbp-38h]
 * 000000014072F3D5: mov     rdx, [rbp-40h]
 * 000000014072F3D9: mov     rcx, [rbp-48h]
 * 000000014072F3DD: mov     rax, [rbp-50h]
 * 000000014072F3E1: mov     rsp, rbp
 * 000000014072F3E4: mov     rbp, [rbp+0D8h]
 * 000000014072F3EB: add     rsp, 0E8h
 * 000000014072F3F2: iretq
 */
