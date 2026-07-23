/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x14072F7F0
 * Callers:
 *     <none>
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14021E2A0 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EE560 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x14072EB20 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x14072F7F0 (KiInterruptDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140734290 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x14072F7F0
 * Reason: Hex-Rays returned no pseudocode for 0x14072F7F0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072F7F0: mov     rcx, gs:9198h
 * 000000014072F7F9: mov     rax, rcx
 * 000000014072F7FC: mov     edx, cs:KeIsrStackSize
 * 000000014072F802: sub     rax, rdx
 * 000000014072F805: mov     rdx, rsp
 * 000000014072F808: cmp     rax, rsp
 * 000000014072F80B: ja      short loc_14072F812
 * 000000014072F80D: cmp     rsp, rcx
 * 000000014072F810: jb      short loc_14072F81E
 * 000000014072F812: cmp     dword ptr cs:KiDpcWatchdogConfigurationLock.InitialStack, 0
 * 000000014072F819: jnz     short loc_14072F81E
 * 000000014072F81B: mov     rsp, rcx
 * 000000014072F81E: sub     rsp, 20h
 * 000000014072F822: mov     [rsp+20h+var_10], rdx
 * 000000014072F827: call    KiInterruptSubDispatchNoLock
 * 000000014072F82C: mov     rsp, [rsp+20h+var_10]
 * 000000014072F831: mov     rcx, gs:20h
 * 000000014072F83A: movzx   edx, byte ptr [rbp-57h]
 * 000000014072F83E: call    KiEndInterruptCycleAccumulation
 * 000000014072F843: test    al, al
 * 000000014072F845: jz      short loc_14072F84C
 * 000000014072F847: call    KiDpcInterruptBypass
 * 000000014072F84C: movzx   ecx, byte ptr [rbp-57h]
 * 000000014072F850: cmp     cs:KiIrqlFlags, 0
 * 000000014072F857: jz      short loc_14072F860
 * 000000014072F859: call    KzSetIrqlUnsafe
 * 000000014072F85E: jmp     short loc_14072F864
 * 000000014072F860: mov     cr8, rcx
 * 000000014072F864: mov     rsi, [rbp+0D0h]
 * 000000014072F86B: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072F872: jz      short loc_14072F879
 * 000000014072F874: add     rsp, 28h
 * 000000014072F878: retn
 * 000000014072F879: test    byte ptr [rbp+0F0h], 1
 * 000000014072F880: jz      loc_14072FB81
 * 000000014072F886: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072F88D: jz      short loc_14072F892
 * 000000014072F88F: stac
 * 000000014072F892: mov     rcx, gs:188h
 * 000000014072F89B: test    byte ptr [rcx+0C2h], 3
 * 000000014072F8A2: jz      short loc_14072F8BF
 * 000000014072F8A4: mov     ecx, 1
 * 000000014072F8A9: mov     cr8, rcx
 * 000000014072F8AD: sti
 * 000000014072F8AE: call    KiInitiateUserApc
 * 000000014072F8B3: cli
 * 000000014072F8B4: mov     ecx, 0
 * 000000014072F8B9: mov     cr8, rcx
 * 000000014072F8BD: jmp     short loc_14072F892
 * 000000014072F8BF: test    byte ptr [rcx+3], 80h
 * 000000014072F8C3: jz      short loc_14072F8D2
 * 000000014072F8C5: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072F8CA: test    eax, eax
 * 000000014072F8CC: mov     rax, [rbp-50h]
 * 000000014072F8D0: jnz     short loc_14072F892
 * 000000014072F8D2: test    byte ptr gs:8A0h, 2
 * 000000014072F8DB: jz      short loc_14072F8E4
 * 000000014072F8DD: xor     ecx, ecx
 * 000000014072F8DF: call    KiUpdateStibpPairing
 * 000000014072F8E4: mov     rcx, gs:188h
 * 000000014072F8ED: test    dword ptr [rcx], 8000000h
 * 000000014072F8F3: jz      short loc_14072F8FA
 * 000000014072F8F5: call    KiRestoreSetContextState
 * 000000014072F8FA: mov     rcx, gs:188h
 * 000000014072F903: test    dword ptr [rcx], 10000h
 * 000000014072F909: jz      short loc_14072F91F
 * 000000014072F90B: test    byte ptr [rcx+2], 1
 * 000000014072F90F: jz      short loc_14072F91F
 * 000000014072F911: call    KiCopyCounters
 * 000000014072F916: mov     rcx, gs:188h
 * 000000014072F91F: ldmxcsr dword ptr [rbp-54h]
 * 000000014072F923: cmp     word ptr [rbp+80h], 0
 * 000000014072F92B: jz      short loc_14072F932
 * 000000014072F92D: call    KiRestoreDebugRegisterState
 * 000000014072F932: mov     rcx, gs:188h
 * 000000014072F93B: bt      dword ptr [rcx+74h], 16h
 * 000000014072F940: jnb     short loc_14072F96C
 * 000000014072F942: xor     ecx, ecx
 * 000000014072F944: rdsspq  rcx
 * 000000014072F949: mov     r8, gs:9D68h
 * 000000014072F952: add     r8, 8
 * 000000014072F956: cmp     rcx, r8
 * 000000014072F959: jnz     short loc_14072F96C
 * 000000014072F95B: mov     rcx, gs:9D60h
 * 000000014072F964: rstorssp qword ptr [rcx]
 * 000000014072F968: saveprevssp
 * 000000014072F96C: mov     byte ptr gs:89Eh, 0
 * 000000014072F975: movzx   eax, word ptr gs:8ACh
 * 000000014072F97E: cmp     gs:8A6h, ax
 * 000000014072F987: jz      short loc_14072F99B
 * 000000014072F989: mov     gs:8A6h, ax
 * 000000014072F992: mov     ecx, 48h ; 'H'
 * 000000014072F997: xor     edx, edx
 * 000000014072F999: wrmsr
 * 000000014072F99B: btr     word ptr gs:898h, 2
 * 000000014072F9A6: jnb     short loc_14072F9B6
 * 000000014072F9A8: mov     eax, 1
 * 000000014072F9AD: xor     edx, edx
 * 000000014072F9AF: mov     ecx, 49h ; 'I'
 * 000000014072F9B4: wrmsr
 * 000000014072F9B6: btr     word ptr gs:898h, 5
 * 000000014072F9C1: jnb     loc_14072FAFE
 * 000000014072F9C7: call    loc_14072FADA
 * 000000014072F9CC: add     rsp, 8
 * 000000014072F9D0: call    loc_14072FAE3
 * 000000014072F9D5: add     rsp, 8
 * 000000014072F9D9: call    loc_14072F9CC
 * 000000014072F9DE: add     rsp, 8
 * 000000014072F9E2: call    loc_14072F9D5
 * 000000014072F9E7: add     rsp, 8
 * 000000014072F9EB: call    loc_14072F9DE
 * 000000014072F9F0: add     rsp, 8
 * 000000014072F9F4: call    loc_14072F9E7
 * 000000014072F9F9: add     rsp, 8
 * 000000014072F9FD: call    loc_14072F9F0
 * 000000014072FA02: add     rsp, 8
 * 000000014072FA06: call    loc_14072F9F9
 * 000000014072FA0B: add     rsp, 8
 * 000000014072FA0F: call    loc_14072FA02
 * 000000014072FA14: add     rsp, 8
 * 000000014072FA18: call    loc_14072FA0B
 * 000000014072FA1D: add     rsp, 8
 * 000000014072FA21: call    loc_14072FA14
 * 000000014072FA26: add     rsp, 8
 * 000000014072FA2A: call    loc_14072FA1D
 * 000000014072FA2F: add     rsp, 8
 * 000000014072FA33: call    loc_14072FA26
 * 000000014072FA38: add     rsp, 8
 * 000000014072FA3C: call    loc_14072FA2F
 * 000000014072FA41: add     rsp, 8
 * 000000014072FA45: call    loc_14072FA38
 * 000000014072FA4A: add     rsp, 8
 * 000000014072FA4E: call    loc_14072FA41
 * 000000014072FA53: add     rsp, 8
 * 000000014072FA57: call    loc_14072FA4A
 * 000000014072FA5C: add     rsp, 8
 * 000000014072FA60: call    loc_14072FA53
 * 000000014072FA65: add     rsp, 8
 * 000000014072FA69: call    loc_14072FA5C
 * 000000014072FA6E: add     rsp, 8
 * 000000014072FA72: call    loc_14072FA65
 * 000000014072FA77: add     rsp, 8
 * 000000014072FA7B: call    loc_14072FA6E
 * 000000014072FA80: add     rsp, 8
 * 000000014072FA84: call    loc_14072FA77
 * 000000014072FA89: add     rsp, 8
 * 000000014072FA8D: call    loc_14072FA80
 * 000000014072FA92: add     rsp, 8
 * 000000014072FA96: call    loc_14072FA89
 * 000000014072FA9B: add     rsp, 8
 * 000000014072FA9F: call    loc_14072FA92
 * 000000014072FAA4: add     rsp, 8
 * 000000014072FAA8: call    loc_14072FA9B
 * 000000014072FAAD: add     rsp, 8
 * 000000014072FAB1: call    loc_14072FAA4
 * 000000014072FAB6: add     rsp, 8
 * 000000014072FABA: call    loc_14072FAAD
 * 000000014072FABF: add     rsp, 8
 * 000000014072FAC3: call    loc_14072FAB6
 * 000000014072FAC8: add     rsp, 8
 * 000000014072FACC: call    loc_14072FABF
 * 000000014072FAD1: add     rsp, 8
 * 000000014072FAD5: call    loc_14072FAC8
 * 000000014072FADA: add     rsp, 8
 * 000000014072FADE: call    loc_14072FAD1
 * 000000014072FAE3: add     rsp, 8
 * 000000014072FAE7: mov     eax, 0DADAh
 * 000000014072FAEC: test    byte ptr gs:89Ch, 8
 * 000000014072FAF5: jz      short loc_14072FAFE
 * 000000014072FAF7: mov     al, 20h ; ' '
 * 000000014072FAF9: incsspq rax
 * 000000014072FAFE: test    word ptr gs:898h, 100h
 * 000000014072FB09: jz      short loc_14072FB17
 * 000000014072FB0B: xor     eax, eax
 * 000000014072FB0D: xor     edx, edx
 * 000000014072FB0F: mov     ecx, 1
 * 000000014072FB14: div     rcx
 * 000000014072FB17: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072FB1B: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072FB1F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072FB23: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072FB27: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072FB2B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072FB2F: mov     r11, [rbp-20h]
 * 000000014072FB33: mov     r10, [rbp-28h]
 * 000000014072FB37: mov     r9, [rbp-30h]
 * 000000014072FB3B: mov     r8, [rbp-38h]
 * 000000014072FB3F: mov     rdx, [rbp-40h]
 * 000000014072FB43: mov     rcx, [rbp-48h]
 * 000000014072FB47: mov     rax, [rbp-50h]
 * 000000014072FB4B: mov     rsp, rbp
 * 000000014072FB4E: mov     rbp, [rbp+0D8h]
 * 000000014072FB55: add     rsp, 0E8h
 * 000000014072FB5C: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072FB63: jz      short loc_14072FB6A
 * 000000014072FB65: jmp     KiKernelExit
 * 000000014072FB6A: test    word ptr gs:898h, 200h
 * 000000014072FB75: jz      short loc_14072FB7C
 * 000000014072FB77: verw    [rsp-1C8h+arg_1E0]
 * 000000014072FB7C: swapgs
 * 000000014072FB7F: iretq
 * 000000014072FB81: ldmxcsr dword ptr [rbp-54h]
 * 000000014072FB85: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072FB89: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072FB8D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072FB91: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072FB95: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072FB99: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072FB9D: mov     r11, [rbp-20h]
 * 000000014072FBA1: mov     r10, [rbp-28h]
 * 000000014072FBA5: mov     r9, [rbp-30h]
 * 000000014072FBA9: mov     r8, [rbp-38h]
 * 000000014072FBAD: mov     rdx, [rbp-40h]
 * 000000014072FBB1: mov     rcx, [rbp-48h]
 * 000000014072FBB5: mov     rax, [rbp-50h]
 * 000000014072FBB9: mov     rsp, rbp
 * 000000014072FBBC: mov     rbp, [rbp+0D8h]
 * 000000014072FBC3: add     rsp, 0E8h
 * 000000014072FBCA: iretq
 */
