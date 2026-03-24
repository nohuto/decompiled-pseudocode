/*
 * XREFs of KiHvInterruptDispatch @ 0x14072DEA0
 * Callers:
 *     KiHvInterrupt @ 0x14072CCD0 (KiHvInterrupt.c)
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14021C910 (KiEndInterruptCycleAccumulation.c)
 *     HalPerformEndOfInterrupt @ 0x14032DA80 (HalPerformEndOfInterrupt.c)
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EBBF0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiHvInterruptDispatch @ 0x14072DEA0 (KiHvInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x14072E690 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x14072F6C0 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x14072DEA0
 * Reason: Hex-Rays returned no pseudocode for 0x14072DEA0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072DEA0: mov     rcx, gs:9198h
 * 000000014072DEA9: mov     rax, rcx
 * 000000014072DEAC: mov     edx, cs:KeIsrStackSize
 * 000000014072DEB2: sub     rax, rdx
 * 000000014072DEB5: mov     rdx, rsp
 * 000000014072DEB8: cmp     rax, rsp
 * 000000014072DEBB: ja      short loc_14072DEC2
 * 000000014072DEBD: cmp     rsp, rcx
 * 000000014072DEC0: jb      short loc_14072DECE
 * 000000014072DEC2: cmp     dword ptr cs:KiDpcWatchdogConfigurationLock.StackLimit, 0
 * 000000014072DEC9: jnz     short loc_14072DECE
 * 000000014072DECB: mov     rsp, rcx
 * 000000014072DECE: sub     rsp, 20h
 * 000000014072DED2: mov     [rsp+20h+var_10], rdx
 * 000000014072DED7: call    KiHvInterruptSubDispatch
 * 000000014072DEDC: mov     rsp, [rsp+20h+var_10]
 * 000000014072DEE1: test    cs:HvlEnlightenments, 1000h
 * 000000014072DEEB: jz      short loc_14072DEF5
 * 000000014072DEED: mov     rcx, rsi
 * 000000014072DEF0: call    HalPerformEndOfInterrupt
 * 000000014072DEF5: cli
 * 000000014072DEF6: mov     rcx, gs:20h
 * 000000014072DEFF: movzx   edx, byte ptr [rbp-57h]
 * 000000014072DF03: call    KiEndInterruptCycleAccumulation
 * 000000014072DF08: test    al, al
 * 000000014072DF0A: jz      short loc_14072DF11
 * 000000014072DF0C: call    KiDpcInterruptBypass
 * 000000014072DF11: movzx   ecx, byte ptr [rbp-57h]
 * 000000014072DF15: cmp     cs:KiIrqlFlags, 0
 * 000000014072DF1C: jz      short loc_14072DF25
 * 000000014072DF1E: call    KzSetIrqlUnsafe
 * 000000014072DF23: jmp     short loc_14072DF29
 * 000000014072DF25: mov     cr8, rcx
 * 000000014072DF29: mov     rsi, [rbp+0D0h]
 * 000000014072DF30: cli
 * 000000014072DF31: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072DF38: jz      short loc_14072DF3F
 * 000000014072DF3A: add     rsp, 28h
 * 000000014072DF3E: retn
 * 000000014072DF3F: test    byte ptr [rbp+0F0h], 1
 * 000000014072DF46: jz      loc_14072E247
 * 000000014072DF4C: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072DF53: jz      short loc_14072DF58
 * 000000014072DF55: stac
 * 000000014072DF58: mov     rcx, gs:188h
 * 000000014072DF61: test    byte ptr [rcx+0C2h], 3
 * 000000014072DF68: jz      short loc_14072DF85
 * 000000014072DF6A: mov     ecx, 1
 * 000000014072DF6F: mov     cr8, rcx
 * 000000014072DF73: sti
 * 000000014072DF74: call    KiInitiateUserApc
 * 000000014072DF79: cli
 * 000000014072DF7A: mov     ecx, 0
 * 000000014072DF7F: mov     cr8, rcx
 * 000000014072DF83: jmp     short loc_14072DF58
 * 000000014072DF85: test    byte ptr [rcx+3], 80h
 * 000000014072DF89: jz      short loc_14072DF98
 * 000000014072DF8B: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072DF90: test    eax, eax
 * 000000014072DF92: mov     rax, [rbp-50h]
 * 000000014072DF96: jnz     short loc_14072DF58
 * 000000014072DF98: test    byte ptr gs:8A0h, 2
 * 000000014072DFA1: jz      short loc_14072DFAA
 * 000000014072DFA3: xor     ecx, ecx
 * 000000014072DFA5: call    KiUpdateStibpPairing
 * 000000014072DFAA: mov     rcx, gs:188h
 * 000000014072DFB3: test    dword ptr [rcx], 8000000h
 * 000000014072DFB9: jz      short loc_14072DFC0
 * 000000014072DFBB: call    KiRestoreSetContextState
 * 000000014072DFC0: mov     rcx, gs:188h
 * 000000014072DFC9: test    dword ptr [rcx], 10000h
 * 000000014072DFCF: jz      short loc_14072DFE5
 * 000000014072DFD1: test    byte ptr [rcx+2], 1
 * 000000014072DFD5: jz      short loc_14072DFE5
 * 000000014072DFD7: call    KiCopyCounters
 * 000000014072DFDC: mov     rcx, gs:188h
 * 000000014072DFE5: ldmxcsr dword ptr [rbp-54h]
 * 000000014072DFE9: cmp     word ptr [rbp+80h], 0
 * 000000014072DFF1: jz      short loc_14072DFF8
 * 000000014072DFF3: call    KiRestoreDebugRegisterState
 * 000000014072DFF8: mov     rcx, gs:188h
 * 000000014072E001: bt      dword ptr [rcx+74h], 16h
 * 000000014072E006: jnb     short loc_14072E032
 * 000000014072E008: xor     ecx, ecx
 * 000000014072E00A: rdsspq  rcx
 * 000000014072E00F: mov     r8, gs:9D68h
 * 000000014072E018: add     r8, 8
 * 000000014072E01C: cmp     rcx, r8
 * 000000014072E01F: jnz     short loc_14072E032
 * 000000014072E021: mov     rcx, gs:9D60h
 * 000000014072E02A: rstorssp qword ptr [rcx]
 * 000000014072E02E: saveprevssp
 * 000000014072E032: mov     byte ptr gs:89Eh, 0
 * 000000014072E03B: movzx   eax, word ptr gs:8ACh
 * 000000014072E044: cmp     gs:8A6h, ax
 * 000000014072E04D: jz      short loc_14072E061
 * 000000014072E04F: mov     gs:8A6h, ax
 * 000000014072E058: mov     ecx, 48h ; 'H'
 * 000000014072E05D: xor     edx, edx
 * 000000014072E05F: wrmsr
 * 000000014072E061: btr     word ptr gs:898h, 2
 * 000000014072E06C: jnb     short loc_14072E07C
 * 000000014072E06E: mov     eax, 1
 * 000000014072E073: xor     edx, edx
 * 000000014072E075: mov     ecx, 49h ; 'I'
 * 000000014072E07A: wrmsr
 * 000000014072E07C: btr     word ptr gs:898h, 5
 * 000000014072E087: jnb     loc_14072E1C4
 * 000000014072E08D: call    loc_14072E1A0
 * 000000014072E092: add     rsp, 8
 * 000000014072E096: call    loc_14072E1A9
 * 000000014072E09B: add     rsp, 8
 * 000000014072E09F: call    loc_14072E092
 * 000000014072E0A4: add     rsp, 8
 * 000000014072E0A8: call    loc_14072E09B
 * 000000014072E0AD: add     rsp, 8
 * 000000014072E0B1: call    loc_14072E0A4
 * 000000014072E0B6: add     rsp, 8
 * 000000014072E0BA: call    loc_14072E0AD
 * 000000014072E0BF: add     rsp, 8
 * 000000014072E0C3: call    loc_14072E0B6
 * 000000014072E0C8: add     rsp, 8
 * 000000014072E0CC: call    loc_14072E0BF
 * 000000014072E0D1: add     rsp, 8
 * 000000014072E0D5: call    loc_14072E0C8
 * 000000014072E0DA: add     rsp, 8
 * 000000014072E0DE: call    loc_14072E0D1
 * 000000014072E0E3: add     rsp, 8
 * 000000014072E0E7: call    loc_14072E0DA
 * 000000014072E0EC: add     rsp, 8
 * 000000014072E0F0: call    loc_14072E0E3
 * 000000014072E0F5: add     rsp, 8
 * 000000014072E0F9: call    loc_14072E0EC
 * 000000014072E0FE: add     rsp, 8
 * 000000014072E102: call    loc_14072E0F5
 * 000000014072E107: add     rsp, 8
 * 000000014072E10B: call    loc_14072E0FE
 * 000000014072E110: add     rsp, 8
 * 000000014072E114: call    loc_14072E107
 * 000000014072E119: add     rsp, 8
 * 000000014072E11D: call    loc_14072E110
 * 000000014072E122: add     rsp, 8
 * 000000014072E126: call    loc_14072E119
 * 000000014072E12B: add     rsp, 8
 * 000000014072E12F: call    loc_14072E122
 * 000000014072E134: add     rsp, 8
 * 000000014072E138: call    loc_14072E12B
 * 000000014072E13D: add     rsp, 8
 * 000000014072E141: call    loc_14072E134
 * 000000014072E146: add     rsp, 8
 * 000000014072E14A: call    loc_14072E13D
 * 000000014072E14F: add     rsp, 8
 * 000000014072E153: call    loc_14072E146
 * 000000014072E158: add     rsp, 8
 * 000000014072E15C: call    loc_14072E14F
 * 000000014072E161: add     rsp, 8
 * 000000014072E165: call    loc_14072E158
 * 000000014072E16A: add     rsp, 8
 * 000000014072E16E: call    loc_14072E161
 * 000000014072E173: add     rsp, 8
 * 000000014072E177: call    loc_14072E16A
 * 000000014072E17C: add     rsp, 8
 * 000000014072E180: call    loc_14072E173
 * 000000014072E185: add     rsp, 8
 * 000000014072E189: call    loc_14072E17C
 * 000000014072E18E: add     rsp, 8
 * 000000014072E192: call    loc_14072E185
 * 000000014072E197: add     rsp, 8
 * 000000014072E19B: call    loc_14072E18E
 * 000000014072E1A0: add     rsp, 8
 * 000000014072E1A4: call    loc_14072E197
 * 000000014072E1A9: add     rsp, 8
 * 000000014072E1AD: mov     eax, 0DADAh
 * 000000014072E1B2: test    byte ptr gs:89Ch, 8
 * 000000014072E1BB: jz      short loc_14072E1C4
 * 000000014072E1BD: mov     al, 20h ; ' '
 * 000000014072E1BF: incsspq rax
 * 000000014072E1C4: test    word ptr gs:898h, 100h
 * 000000014072E1CF: jz      short loc_14072E1DD
 * 000000014072E1D1: xor     eax, eax
 * 000000014072E1D3: xor     edx, edx
 * 000000014072E1D5: mov     ecx, 1
 * 000000014072E1DA: div     rcx
 * 000000014072E1DD: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072E1E1: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072E1E5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072E1E9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072E1ED: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072E1F1: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072E1F5: mov     r11, [rbp-20h]
 * 000000014072E1F9: mov     r10, [rbp-28h]
 * 000000014072E1FD: mov     r9, [rbp-30h]
 * 000000014072E201: mov     r8, [rbp-38h]
 * 000000014072E205: mov     rdx, [rbp-40h]
 * 000000014072E209: mov     rcx, [rbp-48h]
 * 000000014072E20D: mov     rax, [rbp-50h]
 * 000000014072E211: mov     rsp, rbp
 * 000000014072E214: mov     rbp, [rbp+0D8h]
 * 000000014072E21B: add     rsp, 0E8h
 * 000000014072E222: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072E229: jz      short loc_14072E230
 * 000000014072E22B: jmp     KiKernelExit
 * 000000014072E230: test    word ptr gs:898h, 200h
 * 000000014072E23B: jz      short loc_14072E242
 * 000000014072E23D: verw    [rsp-1C8h+arg_1E0]
 * 000000014072E242: swapgs
 * 000000014072E245: iretq
 * 000000014072E247: ldmxcsr dword ptr [rbp-54h]
 * 000000014072E24B: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072E24F: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072E253: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072E257: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072E25B: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072E25F: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072E263: mov     r11, [rbp-20h]
 * 000000014072E267: mov     r10, [rbp-28h]
 * 000000014072E26B: mov     r9, [rbp-30h]
 * 000000014072E26F: mov     r8, [rbp-38h]
 * 000000014072E273: mov     rdx, [rbp-40h]
 * 000000014072E277: mov     rcx, [rbp-48h]
 * 000000014072E27B: mov     rax, [rbp-50h]
 * 000000014072E27F: mov     rsp, rbp
 * 000000014072E282: mov     rbp, [rbp+0D8h]
 * 000000014072E289: add     rsp, 0E8h
 * 000000014072E290: iretq
 */
