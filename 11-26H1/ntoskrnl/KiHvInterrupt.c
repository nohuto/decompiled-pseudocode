/*
 * XREFs of KiHvInterrupt @ 0x14072CCD0
 * Callers:
 *     KiHvInterruptShadow @ 0x140C59FC0 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140422100 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405F0F90 (KeWakeProcessor.c)
 *     KiHvInterrupt @ 0x14072CCD0 (KiHvInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x14072CCD0
 * Reason: Hex-Rays returned no pseudocode for 0x14072CCD0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072CCD0: push    0
 * 000000014072CCD2: push    rbp
 * 000000014072CCD3: sub     rsp, 158h
 * 000000014072CCDA: lea     rbp, [rsp+168h+var_E8]
 * 000000014072CCE2: mov     [rbp+0D0h], rsi
 * 000000014072CCE9: mov     [rbp-50h], rax
 * 000000014072CCED: mov     [rbp-48h], rcx
 * 000000014072CCF1: mov     [rbp-40h], rdx
 * 000000014072CCF5: mov     [rbp-38h], r8
 * 000000014072CCF9: mov     [rbp-30h], r9
 * 000000014072CCFD: mov     [rbp-28h], r10
 * 000000014072CD01: mov     [rbp-20h], r11
 * 000000014072CD05: test    byte ptr [rbp+0F0h], 1
 * 000000014072CD0C: jnz     short loc_14072CD46
 * 000000014072CD0E: xor     edx, edx
 * 000000014072CD10: rdsspq  rdx
 * 000000014072CD15: mov     [rbp+58h], rdx
 * 000000014072CD19: lfence
 * 000000014072CD1C: test    byte ptr gs:898h, 1
 * 000000014072CD25: jnz     short loc_14072CD2F
 * 000000014072CD27: lfence
 * 000000014072CD2A: jmp     loc_14072CFB7
 * 000000014072CD2F: movzx   eax, word ptr gs:8A6h
 * 000000014072CD38: mov     ecx, 48h ; 'H'
 * 000000014072CD3D: xor     edx, edx
 * 000000014072CD3F: wrmsr
 * 000000014072CD41: jmp     loc_14072CFB7
 * 000000014072CD46: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072CD4D: jnz     short loc_14072CD52
 * 000000014072CD4F: swapgs
 * 000000014072CD52: lfence
 * 000000014072CD55: mov     rcx, gs:9D68h
 * 000000014072CD5E: test    rcx, rcx
 * 000000014072CD61: jz      short loc_14072CD82
 * 000000014072CD63: rdsspq  rdx
 * 000000014072CD68: mov     r10, gs:9D60h
 * 000000014072CD71: add     r10, 8
 * 000000014072CD75: cmp     rdx, r10
 * 000000014072CD78: jnz     short loc_14072CD82
 * 000000014072CD7A: rstorssp qword ptr [rcx]
 * 000000014072CD7E: saveprevssp
 * 000000014072CD82: mov     r10, gs:188h
 * 000000014072CD8B: mov     rcx, gs:188h
 * 000000014072CD94: mov     rcx, [rcx+220h]
 * 000000014072CD9B: mov     rcx, [rcx+760h]
 * 000000014072CDA2: mov     gs:890h, rcx
 * 000000014072CDAB: mov     cx, gs:8A2h
 * 000000014072CDB4: mov     gs:8A4h, cx
 * 000000014072CDBD: mov     cl, gs:898h
 * 000000014072CDC5: mov     gs:89Ah, cl
 * 000000014072CDCD: movzx   eax, word ptr gs:8A8h
 * 000000014072CDD6: cmp     gs:8A6h, ax
 * 000000014072CDDF: jz      short loc_14072CDF3
 * 000000014072CDE1: mov     gs:8A6h, ax
 * 000000014072CDEA: mov     ecx, 48h ; 'H'
 * 000000014072CDEF: xor     edx, edx
 * 000000014072CDF1: wrmsr
 * 000000014072CDF3: movzx   edx, byte ptr gs:898h
 * 000000014072CDFC: test    edx, 8
 * 000000014072CE02: jz      short loc_14072CE1B
 * 000000014072CE04: mov     eax, 1
 * 000000014072CE09: xor     edx, edx
 * 000000014072CE0B: mov     ecx, 49h ; 'I'
 * 000000014072CE10: wrmsr
 * 000000014072CE12: movzx   edx, byte ptr gs:898h
 * 000000014072CE1B: test    edx, 2
 * 000000014072CE21: jz      loc_14072CF5E
 * 000000014072CE27: call    loc_14072CF3A
 * 000000014072CE2C: add     rsp, 8
 * 000000014072CE30: call    loc_14072CF43
 * 000000014072CE35: add     rsp, 8
 * 000000014072CE39: call    loc_14072CE2C
 * 000000014072CE3E: add     rsp, 8
 * 000000014072CE42: call    loc_14072CE35
 * 000000014072CE47: add     rsp, 8
 * 000000014072CE4B: call    loc_14072CE3E
 * 000000014072CE50: add     rsp, 8
 * 000000014072CE54: call    loc_14072CE47
 * 000000014072CE59: add     rsp, 8
 * 000000014072CE5D: call    loc_14072CE50
 * 000000014072CE62: add     rsp, 8
 * 000000014072CE66: call    loc_14072CE59
 * 000000014072CE6B: add     rsp, 8
 * 000000014072CE6F: call    loc_14072CE62
 * 000000014072CE74: add     rsp, 8
 * 000000014072CE78: call    loc_14072CE6B
 * 000000014072CE7D: add     rsp, 8
 * 000000014072CE81: call    loc_14072CE74
 * 000000014072CE86: add     rsp, 8
 * 000000014072CE8A: call    loc_14072CE7D
 * 000000014072CE8F: add     rsp, 8
 * 000000014072CE93: call    loc_14072CE86
 * 000000014072CE98: add     rsp, 8
 * 000000014072CE9C: call    loc_14072CE8F
 * 000000014072CEA1: add     rsp, 8
 * 000000014072CEA5: call    loc_14072CE98
 * 000000014072CEAA: add     rsp, 8
 * 000000014072CEAE: call    loc_14072CEA1
 * 000000014072CEB3: add     rsp, 8
 * 000000014072CEB7: call    loc_14072CEAA
 * 000000014072CEBC: add     rsp, 8
 * 000000014072CEC0: call    loc_14072CEB3
 * 000000014072CEC5: add     rsp, 8
 * 000000014072CEC9: call    loc_14072CEBC
 * 000000014072CECE: add     rsp, 8
 * 000000014072CED2: call    loc_14072CEC5
 * 000000014072CED7: add     rsp, 8
 * 000000014072CEDB: call    loc_14072CECE
 * 000000014072CEE0: add     rsp, 8
 * 000000014072CEE4: call    loc_14072CED7
 * 000000014072CEE9: add     rsp, 8
 * 000000014072CEED: call    loc_14072CEE0
 * 000000014072CEF2: add     rsp, 8
 * 000000014072CEF6: call    loc_14072CEE9
 * 000000014072CEFB: add     rsp, 8
 * 000000014072CEFF: call    loc_14072CEF2
 * 000000014072CF04: add     rsp, 8
 * 000000014072CF08: call    loc_14072CEFB
 * 000000014072CF0D: add     rsp, 8
 * 000000014072CF11: call    loc_14072CF04
 * 000000014072CF16: add     rsp, 8
 * 000000014072CF1A: call    loc_14072CF0D
 * 000000014072CF1F: add     rsp, 8
 * 000000014072CF23: call    loc_14072CF16
 * 000000014072CF28: add     rsp, 8
 * 000000014072CF2C: call    loc_14072CF1F
 * 000000014072CF31: add     rsp, 8
 * 000000014072CF35: call    loc_14072CF28
 * 000000014072CF3A: add     rsp, 8
 * 000000014072CF3E: call    loc_14072CF31
 * 000000014072CF43: add     rsp, 8
 * 000000014072CF47: mov     eax, 0DADAh
 * 000000014072CF4C: test    byte ptr gs:89Ch, 8
 * 000000014072CF55: jz      short loc_14072CF5E
 * 000000014072CF57: mov     al, 20h ; ' '
 * 000000014072CF59: incsspq rax
 * 000000014072CF5E: test    edx, 80h
 * 000000014072CF64: jz      short loc_14072CF6E
 * 000000014072CF66: lfence
 * 000000014072CF69: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014072CF6E: lfence
 * 000000014072CF71: mov     byte ptr gs:89Eh, 0
 * 000000014072CF7A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014072CF81: jz      short loc_14072CFA2
 * 000000014072CF83: mov     ecx, 6A7h
 * 000000014072CF88: rdmsr
 * 000000014072CF8A: cmp     edx, 0
 * 000000014072CF8D: jz      short loc_14072CFA2
 * 000000014072CF8F: mov     ecx, edx
 * 000000014072CF91: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014072CF97: cmp     edx, ecx
 * 000000014072CF99: jz      short loc_14072CFA2
 * 000000014072CF9B: mov     ecx, 6A7h
 * 000000014072CFA0: wrmsr
 * 000000014072CFA2: test    byte ptr [r10+3], 3
 * 000000014072CFA7: mov     word ptr [rbp+80h], 0
 * 000000014072CFB0: jz      short loc_14072CFB7
 * 000000014072CFB2: call    KiSaveDebugRegisterState
 * 000000014072CFB7: cld
 * 000000014072CFB8: stmxcsr dword ptr [rbp-54h]
 * 000000014072CFBC: ldmxcsr dword ptr gs:180h
 * 000000014072CFC5: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014072CFC9: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014072CFCD: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014072CFD1: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014072CFD5: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014072CFD9: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014072CFDD: test    byte ptr [rbp+0F0h], 1
 * 000000014072CFE4: jz      short KiHvInterruptDispatchTrap
 * 000000014072CFE6: mov     r10, gs:188h
 * 000000014072CFEF: test    byte ptr [r10+3], 80h
 * 000000014072CFF4: jz      short KiHvInterruptDispatchTrap
 * 000000014072CFF6: call    KiSynchronizeUserIsolationDomainExit
 * 000000014072CFFB: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072D002: jz      short loc_14072D00B
 * 000000014072D004: mov     [rbp+0D0h], rsi
 * 000000014072D00B: mov     byte ptr [rbp-55h], 0
 * 000000014072D00F: cmp     byte ptr gs:87DAh, 0
 * 000000014072D018: jz      short loc_14072D01F
 * 000000014072D01A: call    KeWakeProcessor
 * 000000014072D01F: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014072D026: cmp     rax, [rbp+0E8h]
 * 000000014072D02D: jnb     short loc_14072D048
 * 000000014072D02F: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014072D036: cmp     rax, [rbp+0E8h]
 * 000000014072D03D: jb      short loc_14072D048
 * 000000014072D03F: lea     rcx, [rbp-80h]
 * 000000014072D043: call    KiCheckForSListAddress
 * 000000014072D048: xor     esi, esi
 * 000000014072D04A: inc     dword ptr gs:87C0h
 * 000000014072D052: jmp     KiHvInterruptDispatch
 */
