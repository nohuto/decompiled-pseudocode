/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x14072AC20
 * Callers:
 *     <none>
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14021C910 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EBBF0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x140729F50 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x14072AC20 (KiInterruptDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x14072F6C0 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x14072AC20
 * Reason: Hex-Rays returned no pseudocode for 0x14072AC20
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072AC20: mov     rcx, gs:9198h
 * 000000014072AC29: mov     rax, rcx
 * 000000014072AC2C: mov     edx, cs:KeIsrStackSize
 * 000000014072AC32: sub     rax, rdx
 * 000000014072AC35: mov     rdx, rsp
 * 000000014072AC38: cmp     rax, rsp
 * 000000014072AC3B: ja      short loc_14072AC42
 * 000000014072AC3D: cmp     rsp, rcx
 * 000000014072AC40: jb      short loc_14072AC4E
 * 000000014072AC42: cmp     dword ptr cs:KiDpcWatchdogConfigurationLock.StackLimit, 0
 * 000000014072AC49: jnz     short loc_14072AC4E
 * 000000014072AC4B: mov     rsp, rcx
 * 000000014072AC4E: sub     rsp, 20h
 * 000000014072AC52: mov     [rsp+20h+var_10], rdx
 * 000000014072AC57: call    KiInterruptSubDispatchNoLock
 * 000000014072AC5C: mov     rsp, [rsp+20h+var_10]
 * 000000014072AC61: mov     rcx, gs:20h
 * 000000014072AC6A: movzx   edx, byte ptr [rbp-57h]
 * 000000014072AC6E: call    KiEndInterruptCycleAccumulation
 * 000000014072AC73: test    al, al
 * 000000014072AC75: jz      short loc_14072AC7C
 * 000000014072AC77: call    KiDpcInterruptBypass
 * 000000014072AC7C: movzx   ecx, byte ptr [rbp-57h]
 * 000000014072AC80: cmp     cs:KiIrqlFlags, 0
 * 000000014072AC87: jz      short loc_14072AC90
 * 000000014072AC89: call    KzSetIrqlUnsafe
 * 000000014072AC8E: jmp     short loc_14072AC94
 * 000000014072AC90: mov     cr8, rcx
 * 000000014072AC94: mov     rsi, [rbp+0D0h]
 * 000000014072AC9B: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072ACA2: jz      short loc_14072ACA9
 * 000000014072ACA4: add     rsp, 28h
 * 000000014072ACA8: retn
 * 000000014072ACA9: test    byte ptr [rbp+0F0h], 1
 * 000000014072ACB0: jz      loc_14072AFB1
 * 000000014072ACB6: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072ACBD: jz      short loc_14072ACC2
 * 000000014072ACBF: stac
 * 000000014072ACC2: mov     rcx, gs:188h
 * 000000014072ACCB: test    byte ptr [rcx+0C2h], 3
 * 000000014072ACD2: jz      short loc_14072ACEF
 * 000000014072ACD4: mov     ecx, 1
 * 000000014072ACD9: mov     cr8, rcx
 * 000000014072ACDD: sti
 * 000000014072ACDE: call    KiInitiateUserApc
 * 000000014072ACE3: cli
 * 000000014072ACE4: mov     ecx, 0
 * 000000014072ACE9: mov     cr8, rcx
 * 000000014072ACED: jmp     short loc_14072ACC2
 * 000000014072ACEF: test    byte ptr [rcx+3], 80h
 * 000000014072ACF3: jz      short loc_14072AD02
 * 000000014072ACF5: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072ACFA: test    eax, eax
 * 000000014072ACFC: mov     rax, [rbp-50h]
 * 000000014072AD00: jnz     short loc_14072ACC2
 * 000000014072AD02: test    byte ptr gs:8A0h, 2
 * 000000014072AD0B: jz      short loc_14072AD14
 * 000000014072AD0D: xor     ecx, ecx
 * 000000014072AD0F: call    KiUpdateStibpPairing
 * 000000014072AD14: mov     rcx, gs:188h
 * 000000014072AD1D: test    dword ptr [rcx], 8000000h
 * 000000014072AD23: jz      short loc_14072AD2A
 * 000000014072AD25: call    KiRestoreSetContextState
 * 000000014072AD2A: mov     rcx, gs:188h
 * 000000014072AD33: test    dword ptr [rcx], 10000h
 * 000000014072AD39: jz      short loc_14072AD4F
 * 000000014072AD3B: test    byte ptr [rcx+2], 1
 * 000000014072AD3F: jz      short loc_14072AD4F
 * 000000014072AD41: call    KiCopyCounters
 * 000000014072AD46: mov     rcx, gs:188h
 * 000000014072AD4F: ldmxcsr dword ptr [rbp-54h]
 * 000000014072AD53: cmp     word ptr [rbp+80h], 0
 * 000000014072AD5B: jz      short loc_14072AD62
 * 000000014072AD5D: call    KiRestoreDebugRegisterState
 * 000000014072AD62: mov     rcx, gs:188h
 * 000000014072AD6B: bt      dword ptr [rcx+74h], 16h
 * 000000014072AD70: jnb     short loc_14072AD9C
 * 000000014072AD72: xor     ecx, ecx
 * 000000014072AD74: rdsspq  rcx
 * 000000014072AD79: mov     r8, gs:9D68h
 * 000000014072AD82: add     r8, 8
 * 000000014072AD86: cmp     rcx, r8
 * 000000014072AD89: jnz     short loc_14072AD9C
 * 000000014072AD8B: mov     rcx, gs:9D60h
 * 000000014072AD94: rstorssp qword ptr [rcx]
 * 000000014072AD98: saveprevssp
 * 000000014072AD9C: mov     byte ptr gs:89Eh, 0
 * 000000014072ADA5: movzx   eax, word ptr gs:8ACh
 * 000000014072ADAE: cmp     gs:8A6h, ax
 * 000000014072ADB7: jz      short loc_14072ADCB
 * 000000014072ADB9: mov     gs:8A6h, ax
 * 000000014072ADC2: mov     ecx, 48h ; 'H'
 * 000000014072ADC7: xor     edx, edx
 * 000000014072ADC9: wrmsr
 * 000000014072ADCB: btr     word ptr gs:898h, 2
 * 000000014072ADD6: jnb     short loc_14072ADE6
 * 000000014072ADD8: mov     eax, 1
 * 000000014072ADDD: xor     edx, edx
 * 000000014072ADDF: mov     ecx, 49h ; 'I'
 * 000000014072ADE4: wrmsr
 * 000000014072ADE6: btr     word ptr gs:898h, 5
 * 000000014072ADF1: jnb     loc_14072AF2E
 * 000000014072ADF7: call    loc_14072AF0A
 * 000000014072ADFC: add     rsp, 8
 * 000000014072AE00: call    loc_14072AF13
 * 000000014072AE05: add     rsp, 8
 * 000000014072AE09: call    loc_14072ADFC
 * 000000014072AE0E: add     rsp, 8
 * 000000014072AE12: call    loc_14072AE05
 * 000000014072AE17: add     rsp, 8
 * 000000014072AE1B: call    loc_14072AE0E
 * 000000014072AE20: add     rsp, 8
 * 000000014072AE24: call    loc_14072AE17
 * 000000014072AE29: add     rsp, 8
 * 000000014072AE2D: call    loc_14072AE20
 * 000000014072AE32: add     rsp, 8
 * 000000014072AE36: call    loc_14072AE29
 * 000000014072AE3B: add     rsp, 8
 * 000000014072AE3F: call    loc_14072AE32
 * 000000014072AE44: add     rsp, 8
 * 000000014072AE48: call    loc_14072AE3B
 * 000000014072AE4D: add     rsp, 8
 * 000000014072AE51: call    loc_14072AE44
 * 000000014072AE56: add     rsp, 8
 * 000000014072AE5A: call    loc_14072AE4D
 * 000000014072AE5F: add     rsp, 8
 * 000000014072AE63: call    loc_14072AE56
 * 000000014072AE68: add     rsp, 8
 * 000000014072AE6C: call    loc_14072AE5F
 * 000000014072AE71: add     rsp, 8
 * 000000014072AE75: call    loc_14072AE68
 * 000000014072AE7A: add     rsp, 8
 * 000000014072AE7E: call    loc_14072AE71
 * 000000014072AE83: add     rsp, 8
 * 000000014072AE87: call    loc_14072AE7A
 * 000000014072AE8C: add     rsp, 8
 * 000000014072AE90: call    loc_14072AE83
 * 000000014072AE95: add     rsp, 8
 * 000000014072AE99: call    loc_14072AE8C
 * 000000014072AE9E: add     rsp, 8
 * 000000014072AEA2: call    loc_14072AE95
 * 000000014072AEA7: add     rsp, 8
 * 000000014072AEAB: call    loc_14072AE9E
 * 000000014072AEB0: add     rsp, 8
 * 000000014072AEB4: call    loc_14072AEA7
 * 000000014072AEB9: add     rsp, 8
 * 000000014072AEBD: call    loc_14072AEB0
 * 000000014072AEC2: add     rsp, 8
 * 000000014072AEC6: call    loc_14072AEB9
 * 000000014072AECB: add     rsp, 8
 * 000000014072AECF: call    loc_14072AEC2
 * 000000014072AED4: add     rsp, 8
 * 000000014072AED8: call    loc_14072AECB
 * 000000014072AEDD: add     rsp, 8
 * 000000014072AEE1: call    loc_14072AED4
 * 000000014072AEE6: add     rsp, 8
 * 000000014072AEEA: call    loc_14072AEDD
 * 000000014072AEEF: add     rsp, 8
 * 000000014072AEF3: call    loc_14072AEE6
 * 000000014072AEF8: add     rsp, 8
 * 000000014072AEFC: call    loc_14072AEEF
 * 000000014072AF01: add     rsp, 8
 * 000000014072AF05: call    loc_14072AEF8
 * 000000014072AF0A: add     rsp, 8
 * 000000014072AF0E: call    loc_14072AF01
 * 000000014072AF13: add     rsp, 8
 * 000000014072AF17: mov     eax, 0DADAh
 * 000000014072AF1C: test    byte ptr gs:89Ch, 8
 * 000000014072AF25: jz      short loc_14072AF2E
 * 000000014072AF27: mov     al, 20h ; ' '
 * 000000014072AF29: incsspq rax
 * 000000014072AF2E: test    word ptr gs:898h, 100h
 * 000000014072AF39: jz      short loc_14072AF47
 * 000000014072AF3B: xor     eax, eax
 * 000000014072AF3D: xor     edx, edx
 * 000000014072AF3F: mov     ecx, 1
 * 000000014072AF44: div     rcx
 * 000000014072AF47: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072AF4B: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072AF4F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072AF53: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072AF57: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072AF5B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072AF5F: mov     r11, [rbp-20h]
 * 000000014072AF63: mov     r10, [rbp-28h]
 * 000000014072AF67: mov     r9, [rbp-30h]
 * 000000014072AF6B: mov     r8, [rbp-38h]
 * 000000014072AF6F: mov     rdx, [rbp-40h]
 * 000000014072AF73: mov     rcx, [rbp-48h]
 * 000000014072AF77: mov     rax, [rbp-50h]
 * 000000014072AF7B: mov     rsp, rbp
 * 000000014072AF7E: mov     rbp, [rbp+0D8h]
 * 000000014072AF85: add     rsp, 0E8h
 * 000000014072AF8C: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072AF93: jz      short loc_14072AF9A
 * 000000014072AF95: jmp     KiKernelExit
 * 000000014072AF9A: test    word ptr gs:898h, 200h
 * 000000014072AFA5: jz      short loc_14072AFAC
 * 000000014072AFA7: verw    [rsp-1C8h+arg_1E0]
 * 000000014072AFAC: swapgs
 * 000000014072AFAF: iretq
 * 000000014072AFB1: ldmxcsr dword ptr [rbp-54h]
 * 000000014072AFB5: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072AFB9: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072AFBD: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072AFC1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072AFC5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072AFC9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072AFCD: mov     r11, [rbp-20h]
 * 000000014072AFD1: mov     r10, [rbp-28h]
 * 000000014072AFD5: mov     r9, [rbp-30h]
 * 000000014072AFD9: mov     r8, [rbp-38h]
 * 000000014072AFDD: mov     rdx, [rbp-40h]
 * 000000014072AFE1: mov     rcx, [rbp-48h]
 * 000000014072AFE5: mov     rax, [rbp-50h]
 * 000000014072AFE9: mov     rsp, rbp
 * 000000014072AFEC: mov     rbp, [rbp+0D8h]
 * 000000014072AFF3: add     rsp, 0E8h
 * 000000014072AFFA: iretq
 */
