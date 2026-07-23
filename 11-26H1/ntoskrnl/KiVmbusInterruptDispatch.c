/*
 * XREFs of KiVmbusInterruptDispatch @ 0x140732E70
 * Callers:
 *     KiVmbusInterrupt0 @ 0x140731C30 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140731FC0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140732350 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1407326E0 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14021E2A0 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EE560 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiVmbusInterruptDispatch @ 0x140732E70 (KiVmbusInterruptDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140733310 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x140734290 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x140732E70
 * Reason: Hex-Rays returned no pseudocode for 0x140732E70
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140732E70: mov     rcx, gs:9198h
 * 0000000140732E79: mov     rax, rcx
 * 0000000140732E7C: mov     edx, cs:KeIsrStackSize
 * 0000000140732E82: sub     rax, rdx
 * 0000000140732E85: mov     rdx, rsp
 * 0000000140732E88: cmp     rax, rsp
 * 0000000140732E8B: ja      short loc_140732E92
 * 0000000140732E8D: cmp     rsp, rcx
 * 0000000140732E90: jb      short loc_140732E9E
 * 0000000140732E92: cmp     dword ptr cs:KiDpcWatchdogConfigurationLock.InitialStack, 0
 * 0000000140732E99: jnz     short loc_140732E9E
 * 0000000140732E9B: mov     rsp, rcx
 * 0000000140732E9E: sub     rsp, 20h
 * 0000000140732EA2: mov     [rsp+20h+var_10], rdx
 * 0000000140732EA7: call    KiVmbusInterruptSubDispatch
 * 0000000140732EAC: mov     rsp, [rsp+20h+var_10]
 * 0000000140732EB1: cli
 * 0000000140732EB2: mov     rcx, gs:20h
 * 0000000140732EBB: movzx   edx, byte ptr [rbp-57h]
 * 0000000140732EBF: call    KiEndInterruptCycleAccumulation
 * 0000000140732EC4: test    al, al
 * 0000000140732EC6: jz      short loc_140732ECD
 * 0000000140732EC8: call    KiDpcInterruptBypass
 * 0000000140732ECD: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140732ED1: cmp     cs:KiIrqlFlags, 0
 * 0000000140732ED8: jz      short loc_140732EE1
 * 0000000140732EDA: call    KzSetIrqlUnsafe
 * 0000000140732EDF: jmp     short loc_140732EE5
 * 0000000140732EE1: mov     cr8, rcx
 * 0000000140732EE5: mov     rsi, [rbp+0D0h]
 * 0000000140732EEC: cli
 * 0000000140732EED: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140732EF4: jz      short loc_140732EFB
 * 0000000140732EF6: add     rsp, 28h
 * 0000000140732EFA: retn
 * 0000000140732EFB: test    byte ptr [rbp+0F0h], 1
 * 0000000140732F02: jz      loc_140733203
 * 0000000140732F08: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140732F0F: jz      short loc_140732F14
 * 0000000140732F11: stac
 * 0000000140732F14: mov     rcx, gs:188h
 * 0000000140732F1D: test    byte ptr [rcx+0C2h], 3
 * 0000000140732F24: jz      short loc_140732F41
 * 0000000140732F26: mov     ecx, 1
 * 0000000140732F2B: mov     cr8, rcx
 * 0000000140732F2F: sti
 * 0000000140732F30: call    KiInitiateUserApc
 * 0000000140732F35: cli
 * 0000000140732F36: mov     ecx, 0
 * 0000000140732F3B: mov     cr8, rcx
 * 0000000140732F3F: jmp     short loc_140732F14
 * 0000000140732F41: test    byte ptr [rcx+3], 80h
 * 0000000140732F45: jz      short loc_140732F54
 * 0000000140732F47: call    KiSynchronizeUserIsolationDomainEntry
 * 0000000140732F4C: test    eax, eax
 * 0000000140732F4E: mov     rax, [rbp-50h]
 * 0000000140732F52: jnz     short loc_140732F14
 * 0000000140732F54: test    byte ptr gs:8A0h, 2
 * 0000000140732F5D: jz      short loc_140732F66
 * 0000000140732F5F: xor     ecx, ecx
 * 0000000140732F61: call    KiUpdateStibpPairing
 * 0000000140732F66: mov     rcx, gs:188h
 * 0000000140732F6F: test    dword ptr [rcx], 8000000h
 * 0000000140732F75: jz      short loc_140732F7C
 * 0000000140732F77: call    KiRestoreSetContextState
 * 0000000140732F7C: mov     rcx, gs:188h
 * 0000000140732F85: test    dword ptr [rcx], 10000h
 * 0000000140732F8B: jz      short loc_140732FA1
 * 0000000140732F8D: test    byte ptr [rcx+2], 1
 * 0000000140732F91: jz      short loc_140732FA1
 * 0000000140732F93: call    KiCopyCounters
 * 0000000140732F98: mov     rcx, gs:188h
 * 0000000140732FA1: ldmxcsr dword ptr [rbp-54h]
 * 0000000140732FA5: cmp     word ptr [rbp+80h], 0
 * 0000000140732FAD: jz      short loc_140732FB4
 * 0000000140732FAF: call    KiRestoreDebugRegisterState
 * 0000000140732FB4: mov     rcx, gs:188h
 * 0000000140732FBD: bt      dword ptr [rcx+74h], 16h
 * 0000000140732FC2: jnb     short loc_140732FEE
 * 0000000140732FC4: xor     ecx, ecx
 * 0000000140732FC6: rdsspq  rcx
 * 0000000140732FCB: mov     r8, gs:9D68h
 * 0000000140732FD4: add     r8, 8
 * 0000000140732FD8: cmp     rcx, r8
 * 0000000140732FDB: jnz     short loc_140732FEE
 * 0000000140732FDD: mov     rcx, gs:9D60h
 * 0000000140732FE6: rstorssp qword ptr [rcx]
 * 0000000140732FEA: saveprevssp
 * 0000000140732FEE: mov     byte ptr gs:89Eh, 0
 * 0000000140732FF7: movzx   eax, word ptr gs:8ACh
 * 0000000140733000: cmp     gs:8A6h, ax
 * 0000000140733009: jz      short loc_14073301D
 * 000000014073300B: mov     gs:8A6h, ax
 * 0000000140733014: mov     ecx, 48h ; 'H'
 * 0000000140733019: xor     edx, edx
 * 000000014073301B: wrmsr
 * 000000014073301D: btr     word ptr gs:898h, 2
 * 0000000140733028: jnb     short loc_140733038
 * 000000014073302A: mov     eax, 1
 * 000000014073302F: xor     edx, edx
 * 0000000140733031: mov     ecx, 49h ; 'I'
 * 0000000140733036: wrmsr
 * 0000000140733038: btr     word ptr gs:898h, 5
 * 0000000140733043: jnb     loc_140733180
 * 0000000140733049: call    loc_14073315C
 * 000000014073304E: add     rsp, 8
 * 0000000140733052: call    loc_140733165
 * 0000000140733057: add     rsp, 8
 * 000000014073305B: call    loc_14073304E
 * 0000000140733060: add     rsp, 8
 * 0000000140733064: call    loc_140733057
 * 0000000140733069: add     rsp, 8
 * 000000014073306D: call    loc_140733060
 * 0000000140733072: add     rsp, 8
 * 0000000140733076: call    loc_140733069
 * 000000014073307B: add     rsp, 8
 * 000000014073307F: call    loc_140733072
 * 0000000140733084: add     rsp, 8
 * 0000000140733088: call    loc_14073307B
 * 000000014073308D: add     rsp, 8
 * 0000000140733091: call    loc_140733084
 * 0000000140733096: add     rsp, 8
 * 000000014073309A: call    loc_14073308D
 * 000000014073309F: add     rsp, 8
 * 00000001407330A3: call    loc_140733096
 * 00000001407330A8: add     rsp, 8
 * 00000001407330AC: call    loc_14073309F
 * 00000001407330B1: add     rsp, 8
 * 00000001407330B5: call    loc_1407330A8
 * 00000001407330BA: add     rsp, 8
 * 00000001407330BE: call    loc_1407330B1
 * 00000001407330C3: add     rsp, 8
 * 00000001407330C7: call    loc_1407330BA
 * 00000001407330CC: add     rsp, 8
 * 00000001407330D0: call    loc_1407330C3
 * 00000001407330D5: add     rsp, 8
 * 00000001407330D9: call    loc_1407330CC
 * 00000001407330DE: add     rsp, 8
 * 00000001407330E2: call    loc_1407330D5
 * 00000001407330E7: add     rsp, 8
 * 00000001407330EB: call    loc_1407330DE
 * 00000001407330F0: add     rsp, 8
 * 00000001407330F4: call    loc_1407330E7
 * 00000001407330F9: add     rsp, 8
 * 00000001407330FD: call    loc_1407330F0
 * 0000000140733102: add     rsp, 8
 * 0000000140733106: call    loc_1407330F9
 * 000000014073310B: add     rsp, 8
 * 000000014073310F: call    loc_140733102
 * 0000000140733114: add     rsp, 8
 * 0000000140733118: call    loc_14073310B
 * 000000014073311D: add     rsp, 8
 * 0000000140733121: call    loc_140733114
 * 0000000140733126: add     rsp, 8
 * 000000014073312A: call    loc_14073311D
 * 000000014073312F: add     rsp, 8
 * 0000000140733133: call    loc_140733126
 * 0000000140733138: add     rsp, 8
 * 000000014073313C: call    loc_14073312F
 * 0000000140733141: add     rsp, 8
 * 0000000140733145: call    loc_140733138
 * 000000014073314A: add     rsp, 8
 * 000000014073314E: call    loc_140733141
 * 0000000140733153: add     rsp, 8
 * 0000000140733157: call    loc_14073314A
 * 000000014073315C: add     rsp, 8
 * 0000000140733160: call    loc_140733153
 * 0000000140733165: add     rsp, 8
 * 0000000140733169: mov     eax, 0DADAh
 * 000000014073316E: test    byte ptr gs:89Ch, 8
 * 0000000140733177: jz      short loc_140733180
 * 0000000140733179: mov     al, 20h ; ' '
 * 000000014073317B: incsspq rax
 * 0000000140733180: test    word ptr gs:898h, 100h
 * 000000014073318B: jz      short loc_140733199
 * 000000014073318D: xor     eax, eax
 * 000000014073318F: xor     edx, edx
 * 0000000140733191: mov     ecx, 1
 * 0000000140733196: div     rcx
 * 0000000140733199: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014073319D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001407331A1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001407331A5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001407331A9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001407331AD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001407331B1: mov     r11, [rbp-20h]
 * 00000001407331B5: mov     r10, [rbp-28h]
 * 00000001407331B9: mov     r9, [rbp-30h]
 * 00000001407331BD: mov     r8, [rbp-38h]
 * 00000001407331C1: mov     rdx, [rbp-40h]
 * 00000001407331C5: mov     rcx, [rbp-48h]
 * 00000001407331C9: mov     rax, [rbp-50h]
 * 00000001407331CD: mov     rsp, rbp
 * 00000001407331D0: mov     rbp, [rbp+0D8h]
 * 00000001407331D7: add     rsp, 0E8h
 * 00000001407331DE: test    byte ptr cs:KiTrapFeatures, 1
 * 00000001407331E5: jz      short loc_1407331EC
 * 00000001407331E7: jmp     KiKernelExit
 * 00000001407331EC: test    word ptr gs:898h, 200h
 * 00000001407331F7: jz      short loc_1407331FE
 * 00000001407331F9: verw    [rsp-1C8h+arg_1E0]
 * 00000001407331FE: swapgs
 * 0000000140733201: iretq
 * 0000000140733203: ldmxcsr dword ptr [rbp-54h]
 * 0000000140733207: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014073320B: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014073320F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140733213: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140733217: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014073321B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014073321F: mov     r11, [rbp-20h]
 * 0000000140733223: mov     r10, [rbp-28h]
 * 0000000140733227: mov     r9, [rbp-30h]
 * 000000014073322B: mov     r8, [rbp-38h]
 * 000000014073322F: mov     rdx, [rbp-40h]
 * 0000000140733233: mov     rcx, [rbp-48h]
 * 0000000140733237: mov     rax, [rbp-50h]
 * 000000014073323B: mov     rsp, rbp
 * 000000014073323E: mov     rbp, [rbp+0D8h]
 * 0000000140733245: add     rsp, 0E8h
 * 000000014073324C: iretq
 */
