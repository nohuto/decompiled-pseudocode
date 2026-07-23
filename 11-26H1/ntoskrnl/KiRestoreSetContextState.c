/*
 * XREFs of KiRestoreSetContextState @ 0x14072CC60
 * Callers:
 *     NtContinueEx @ 0x14072BFC0 (NtContinueEx.c)
 *     NtRaiseException @ 0x14072C480 (NtRaiseException.c)
 *     KxStartUserThread @ 0x14072DEE0 (KxStartUserThread.c)
 *     KiChainedDispatch @ 0x14072E540 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x14072EC20 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14072F010 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14072F400 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x14072F7F0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x14072FBE0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1407307F0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140731050 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140732A70 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140732E70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1407333C0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140733B40 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1407342D0 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x140735DF0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1407393C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140739B00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14073BC80 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14073D400 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14073DF80 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x14073E700 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140740280 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140741680 (KiFastFailDispatch.c)
 *     KiDispatchUserModeEvent @ 0x140C63200 (KiDispatchUserModeEvent.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KeContextToKframes @ 0x140535F60 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 */

/*
 * Hex-Rays decompilation failed for KiRestoreSetContextState @ 0x14072CC60
 * Reason: Hex-Rays returned no pseudocode for 0x14072CC60
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072CC60: sub     rsp, 138h
 * 000000014072CC67: lea     rax, [rsp+138h+var_38]
 * 000000014072CC6F: movaps  [rsp+138h+var_108], xmm6
 * 000000014072CC74: movaps  [rsp+138h+var_F8], xmm7
 * 000000014072CC79: movaps  [rsp+138h+var_E8], xmm8
 * 000000014072CC7F: movaps  [rsp+138h+var_D8], xmm9
 * 000000014072CC85: movaps  [rsp+138h+var_C8], xmm10
 * 000000014072CC8B: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014072CC90: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014072CC95: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014072CC9A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014072CC9F: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014072CCA4: mov     [rax], rbx
 * 000000014072CCA7: mov     [rax+8], rdi
 * 000000014072CCAB: mov     [rax+10h], rsi
 * 000000014072CCAF: mov     [rax+18h], r12
 * 000000014072CCB3: mov     [rax+20h], r13
 * 000000014072CCB7: mov     [rax+28h], r14
 * 000000014072CCBB: mov     [rax+30h], r15
 * 000000014072CCBF: mov     ecx, 1
 * 000000014072CCC4: mov     cr8, rcx
 * 000000014072CCC8: sti
 * 000000014072CCC9: mov     rcx, gs:188h
 * 000000014072CCD2: mov     rcx, [rcx+6A8h]
 * 000000014072CCD9: mov     [rsp+138h+var_118], 1
 * 000000014072CCE2: mov     r9d, [rcx+30h]
 * 000000014072CCE6: mov     r8, rcx
 * 000000014072CCE9: mov     rdx, rsp
 * 000000014072CCEC: lea     rcx, [rbp-80h]
 * 000000014072CCF0: call    KeContextToKframes
 * 000000014072CCF5: cli
 * 000000014072CCF6: mov     ecx, 0
 * 000000014072CCFB: mov     cr8, rcx
 * 000000014072CCFF: mov     rcx, gs:188h
 * 000000014072CD08: lock btr dword ptr [rcx], 1Bh
 * 000000014072CD0D: lea     rcx, [rsp+138h+var_38]
 * 000000014072CD15: movaps  xmm6, [rsp+138h+var_108]
 * 000000014072CD1A: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014072CD1F: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014072CD25: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014072CD2B: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014072CD31: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014072CD36: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014072CD3B: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014072CD40: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014072CD45: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014072CD4A: mov     rbx, [rcx]
 * 000000014072CD4D: mov     rdi, [rcx+8]
 * 000000014072CD51: mov     rsi, [rcx+10h]
 * 000000014072CD55: mov     r12, [rcx+18h]
 * 000000014072CD59: mov     r13, [rcx+20h]
 * 000000014072CD5D: mov     r14, [rcx+28h]
 * 000000014072CD61: mov     r15, [rcx+30h]
 * 000000014072CD65: test    byte ptr gs:8A0h, 2
 * 000000014072CD6E: jz      short loc_14072CD77
 * 000000014072CD70: xor     ecx, ecx
 * 000000014072CD72: call    KiUpdateStibpPairing
 * 000000014072CD77: xor     ecx, ecx
 * 000000014072CD79: rdsspq  rcx
 * 000000014072CD7E: test    rcx, rcx
 * 000000014072CD81: jz      short loc_14072CD8D
 * 000000014072CD83: mov     ecx, 1
 * 000000014072CD88: incsspq rcx
 * 000000014072CD8D: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072CD94: jz      short loc_14072CD9E
 * 000000014072CD96: lea     rsp, [rbp-88h]
 * 000000014072CD9D: retn
 * 000000014072CD9E: test    byte ptr [rbp+0F0h], 1
 * 000000014072CDA5: jz      loc_14072D03E
 * 000000014072CDAB: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072CDB2: jz      short loc_14072CDB7
 * 000000014072CDB4: stac
 * 000000014072CDB7: mov     rcx, gs:188h
 * 000000014072CDC0: test    dword ptr [rcx], 10000h
 * 000000014072CDC6: jz      short loc_14072CDDC
 * 000000014072CDC8: test    byte ptr [rcx+2], 1
 * 000000014072CDCC: jz      short loc_14072CDDC
 * 000000014072CDCE: call    KiCopyCounters
 * 000000014072CDD3: mov     rcx, gs:188h
 * 000000014072CDDC: ldmxcsr dword ptr [rbp-54h]
 * 000000014072CDE0: cmp     word ptr [rbp+80h], 0
 * 000000014072CDE8: jz      short loc_14072CDEF
 * 000000014072CDEA: call    KiRestoreDebugRegisterState
 * 000000014072CDEF: mov     rcx, gs:188h
 * 000000014072CDF8: bt      dword ptr [rcx+74h], 16h
 * 000000014072CDFD: jnb     short loc_14072CE29
 * 000000014072CDFF: xor     ecx, ecx
 * 000000014072CE01: rdsspq  rcx
 * 000000014072CE06: mov     r8, gs:9D68h
 * 000000014072CE0F: add     r8, 8
 * 000000014072CE13: cmp     rcx, r8
 * 000000014072CE16: jnz     short loc_14072CE29
 * 000000014072CE18: mov     rcx, gs:9D60h
 * 000000014072CE21: rstorssp qword ptr [rcx]
 * 000000014072CE25: saveprevssp
 * 000000014072CE29: mov     byte ptr gs:89Eh, 0
 * 000000014072CE32: movzx   eax, word ptr gs:8ACh
 * 000000014072CE3B: cmp     gs:8A6h, ax
 * 000000014072CE44: jz      short loc_14072CE58
 * 000000014072CE46: mov     gs:8A6h, ax
 * 000000014072CE4F: mov     ecx, 48h ; 'H'
 * 000000014072CE54: xor     edx, edx
 * 000000014072CE56: wrmsr
 * 000000014072CE58: btr     word ptr gs:898h, 2
 * 000000014072CE63: jnb     short loc_14072CE73
 * 000000014072CE65: mov     eax, 1
 * 000000014072CE6A: xor     edx, edx
 * 000000014072CE6C: mov     ecx, 49h ; 'I'
 * 000000014072CE71: wrmsr
 * 000000014072CE73: btr     word ptr gs:898h, 5
 * 000000014072CE7E: jnb     loc_14072CFBB
 * 000000014072CE84: call    loc_14072CF97
 * 000000014072CE89: add     rsp, 8
 * 000000014072CE8D: call    loc_14072CFA0
 * 000000014072CE92: add     rsp, 8
 * 000000014072CE96: call    loc_14072CE89
 * 000000014072CE9B: add     rsp, 8
 * 000000014072CE9F: call    loc_14072CE92
 * 000000014072CEA4: add     rsp, 8
 * 000000014072CEA8: call    loc_14072CE9B
 * 000000014072CEAD: add     rsp, 8
 * 000000014072CEB1: call    loc_14072CEA4
 * 000000014072CEB6: add     rsp, 8
 * 000000014072CEBA: call    loc_14072CEAD
 * 000000014072CEBF: add     rsp, 8
 * 000000014072CEC3: call    loc_14072CEB6
 * 000000014072CEC8: add     rsp, 8
 * 000000014072CECC: call    loc_14072CEBF
 * 000000014072CED1: add     rsp, 8
 * 000000014072CED5: call    loc_14072CEC8
 * 000000014072CEDA: add     rsp, 8
 * 000000014072CEDE: call    loc_14072CED1
 * 000000014072CEE3: add     rsp, 8
 * 000000014072CEE7: call    loc_14072CEDA
 * 000000014072CEEC: add     rsp, 8
 * 000000014072CEF0: call    loc_14072CEE3
 * 000000014072CEF5: add     rsp, 8
 * 000000014072CEF9: call    loc_14072CEEC
 * 000000014072CEFE: add     rsp, 8
 * 000000014072CF02: call    loc_14072CEF5
 * 000000014072CF07: add     rsp, 8
 * 000000014072CF0B: call    loc_14072CEFE
 * 000000014072CF10: add     rsp, 8
 * 000000014072CF14: call    loc_14072CF07
 * 000000014072CF19: add     rsp, 8
 * 000000014072CF1D: call    loc_14072CF10
 * 000000014072CF22: add     rsp, 8
 * 000000014072CF26: call    loc_14072CF19
 * 000000014072CF2B: add     rsp, 8
 * 000000014072CF2F: call    loc_14072CF22
 * 000000014072CF34: add     rsp, 8
 * 000000014072CF38: call    loc_14072CF2B
 * 000000014072CF3D: add     rsp, 8
 * 000000014072CF41: call    loc_14072CF34
 * 000000014072CF46: add     rsp, 8
 * 000000014072CF4A: call    loc_14072CF3D
 * 000000014072CF4F: add     rsp, 8
 * 000000014072CF53: call    loc_14072CF46
 * 000000014072CF58: add     rsp, 8
 * 000000014072CF5C: call    loc_14072CF4F
 * 000000014072CF61: add     rsp, 8
 * 000000014072CF65: call    loc_14072CF58
 * 000000014072CF6A: add     rsp, 8
 * 000000014072CF6E: call    loc_14072CF61
 * 000000014072CF73: add     rsp, 8
 * 000000014072CF77: call    loc_14072CF6A
 * 000000014072CF7C: add     rsp, 8
 * 000000014072CF80: call    loc_14072CF73
 * 000000014072CF85: add     rsp, 8
 * 000000014072CF89: call    loc_14072CF7C
 * 000000014072CF8E: add     rsp, 8
 * 000000014072CF92: call    loc_14072CF85
 * 000000014072CF97: add     rsp, 8
 * 000000014072CF9B: call    loc_14072CF8E
 * 000000014072CFA0: add     rsp, 8
 * 000000014072CFA4: mov     eax, 0DADAh
 * 000000014072CFA9: test    byte ptr gs:89Ch, 8
 * 000000014072CFB2: jz      short loc_14072CFBB
 * 000000014072CFB4: mov     al, 20h ; ' '
 * 000000014072CFB6: incsspq rax
 * 000000014072CFBB: test    word ptr gs:898h, 100h
 * 000000014072CFC6: jz      short loc_14072CFD4
 * 000000014072CFC8: xor     eax, eax
 * 000000014072CFCA: xor     edx, edx
 * 000000014072CFCC: mov     ecx, 1
 * 000000014072CFD1: div     rcx
 * 000000014072CFD4: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072CFD8: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072CFDC: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072CFE0: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072CFE4: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072CFE8: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072CFEC: mov     r11, [rbp-20h]
 * 000000014072CFF0: mov     r10, [rbp-28h]
 * 000000014072CFF4: mov     r9, [rbp-30h]
 * 000000014072CFF8: mov     r8, [rbp-38h]
 * 000000014072CFFC: mov     rdx, [rbp-40h]
 * 000000014072D000: mov     rcx, [rbp-48h]
 * 000000014072D004: mov     rax, [rbp-50h]
 * 000000014072D008: mov     rsp, rbp
 * 000000014072D00B: mov     rbp, [rbp+0D8h]
 * 000000014072D012: add     rsp, 0E8h
 * 000000014072D019: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072D020: jz      short loc_14072D027
 * 000000014072D022: jmp     KiKernelExit
 * 000000014072D027: test    word ptr gs:898h, 200h
 * 000000014072D032: jz      short loc_14072D039
 * 000000014072D034: verw    [rsp-1E8h+arg_200]
 * 000000014072D039: swapgs
 * 000000014072D03C: iretq
 * 000000014072D03E: ldmxcsr dword ptr [rbp-54h]
 * 000000014072D042: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072D046: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072D04A: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072D04E: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072D052: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072D056: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072D05A: mov     r11, [rbp-20h]
 * 000000014072D05E: mov     r10, [rbp-28h]
 * 000000014072D062: mov     r9, [rbp-30h]
 * 000000014072D066: mov     r8, [rbp-38h]
 * 000000014072D06A: mov     rdx, [rbp-40h]
 * 000000014072D06E: mov     rcx, [rbp-48h]
 * 000000014072D072: mov     rax, [rbp-50h]
 * 000000014072D076: mov     rsp, rbp
 * 000000014072D079: mov     rbp, [rbp+0D8h]
 * 000000014072D080: add     rsp, 0E8h
 * 000000014072D087: iretq
 * 000000014072D089: retn
 */
