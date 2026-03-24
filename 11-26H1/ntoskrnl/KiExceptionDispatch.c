/*
 * XREFs of KiExceptionDispatch @ 0x14073C540
 * Callers:
 *     KiDivideErrorFault @ 0x140733100 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x140733640 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x140734080 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x140734440 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1407347C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140734F00 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x140735600 (KiNpxNotAvailableFault.c)
 *     KiSegmentNotPresentFault @ 0x140736500 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x140736900 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x140736CC0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x140737080 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140737900 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x140737D00 (KiAlignmentFault.c)
 *     KiXmmException @ 0x140738F40 (KiXmmException.c)
 *     KiControlProtectionFault @ 0x140739B00 (KiControlProtectionFault.c)
 *     KiRaiseAssertion @ 0x14073A6C0 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x14073AA80 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x14073B100 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x14073B680 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140C5AE40 (KiSystemCall32Shadow.c)
 * Callees:
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiExceptionDispatchOnExceptionStack @ 0x140727F70 (KiExceptionDispatchOnExceptionStack.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiExceptionDispatch @ 0x14073C540
 * Reason: Hex-Rays returned no pseudocode for 0x14073C540
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073C540: sub     rsp, 1D8h
 * 000000014073C547: lea     rax, [rsp+1D8h+var_D8]
 * 000000014073C54F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 000000014073C554: movaps  [rsp+1D8h+var_198], xmm7
 * 000000014073C559: movaps  [rsp+1D8h+var_188], xmm8
 * 000000014073C55F: movaps  [rsp+1D8h+var_178], xmm9
 * 000000014073C565: movaps  [rsp+1D8h+var_168], xmm10
 * 000000014073C56B: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014073C570: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014073C575: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014073C57A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014073C57F: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014073C584: mov     [rax], rbx
 * 000000014073C587: mov     [rax+8], rdi
 * 000000014073C58B: mov     [rax+10h], rsi
 * 000000014073C58F: mov     [rax+18h], r12
 * 000000014073C593: mov     [rax+20h], r13
 * 000000014073C597: mov     [rax+28h], r14
 * 000000014073C59B: mov     [rax+30h], r15
 * 000000014073C59F: lea     rax, [rsp+1D8h+var_A0]
 * 000000014073C5A7: mov     [rax], ecx
 * 000000014073C5A9: xor     ecx, ecx
 * 000000014073C5AB: mov     [rax+4], ecx
 * 000000014073C5AE: mov     [rax+8], rcx
 * 000000014073C5B2: mov     [rax+10h], r8
 * 000000014073C5B6: mov     [rax+18h], edx
 * 000000014073C5B9: mov     [rax+20h], r9
 * 000000014073C5BD: mov     [rax+28h], r10
 * 000000014073C5C1: mov     [rax+30h], r11
 * 000000014073C5C5: bt      rdx, 20h ; ' '
 * 000000014073C5CA: setnb   dl
 * 000000014073C5CD: mov     [rsp+1D8h+var_1B8], dl; char
 * 000000014073C5D1: mov     r9b, [rbp+0F0h]
 * 000000014073C5D8: and     r9b, 1
 * 000000014073C5DC: lea     r8, [rbp-80h]
 * 000000014073C5E0: mov     rdx, rsp
 * 000000014073C5E3: mov     rcx, rax; int
 * 000000014073C5E6: jnz     loc_14073C687
 * 000000014073C5EC: mov     r10, cr8
 * 000000014073C5F0: mov     r11, 2
 * 000000014073C5F7: test    dword ptr [rbp+0F8h], 200h
 * 000000014073C601: cmovz   r10, r11
 * 000000014073C605: cmp     r10, r11
 * 000000014073C608: jb      short loc_14073C687
 * 000000014073C60A: cmp     byte ptr gs:88E6h, 0
 * 000000014073C613: jnz     short loc_14073C687
 * 000000014073C615: mov     r10, gs:88E8h
 * 000000014073C61E: add     r10, 50h ; 'P'
 * 000000014073C622: cmp     rsp, r10
 * 000000014073C625: ja      short loc_14073C636
 * 000000014073C627: mov     r11d, cs:KeExceptionStackSize
 * 000000014073C62E: sub     r10, r11
 * 000000014073C631: cmp     rsp, r10
 * 000000014073C634: jnb     short loc_14073C687
 * 000000014073C636: mov     r10, gs:9198h
 * 000000014073C63F: cmp     rsp, r10
 * 000000014073C642: ja      short loc_14073C653
 * 000000014073C644: mov     r11d, cs:KeIsrStackSize
 * 000000014073C64B: sub     r10, r11
 * 000000014073C64E: cmp     rsp, r10
 * 000000014073C651: jnb     short loc_14073C687
 * 000000014073C653: mov     r10, gs:8
 * 000000014073C65C: mov     r10, [r10+24h]
 * 000000014073C660: cmp     rsp, r10
 * 000000014073C663: ja      short loc_14073C674
 * 000000014073C665: mov     r11d, cs:KeIstStackSize
 * 000000014073C66C: sub     r10, r11
 * 000000014073C66F: cmp     rsp, r10
 * 000000014073C672: jnb     short loc_14073C687
 * 000000014073C674: cmp     word ptr gs:8526h, 0
 * 000000014073C67E: jnz     short loc_14073C687
 * 000000014073C680: call    KiExceptionDispatchOnExceptionStack
 * 000000014073C685: jmp     short loc_14073C68C
 * 000000014073C687: call    KiDispatchException
 * 000000014073C68C: lea     rcx, [rsp+1D8h+var_D8]
 * 000000014073C694: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 000000014073C699: movaps  xmm7, [rsp+1D8h+var_198]
 * 000000014073C69E: movaps  xmm8, [rsp+1D8h+var_188]
 * 000000014073C6A4: movaps  xmm9, [rsp+1D8h+var_178]
 * 000000014073C6AA: movaps  xmm10, [rsp+1D8h+var_168]
 * 000000014073C6B0: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014073C6B5: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014073C6BA: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014073C6BF: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014073C6C4: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014073C6C9: mov     rbx, [rcx]
 * 000000014073C6CC: mov     rdi, [rcx+8]
 * 000000014073C6D0: mov     rsi, [rcx+10h]
 * 000000014073C6D4: mov     r12, [rcx+18h]
 * 000000014073C6D8: mov     r13, [rcx+20h]
 * 000000014073C6DC: mov     r14, [rcx+28h]
 * 000000014073C6E0: mov     r15, [rcx+30h]
 * 000000014073C6E4: cli
 * 000000014073C6E5: xor     ecx, ecx
 * 000000014073C6E7: rdsspq  rcx
 * 000000014073C6EC: test    rcx, rcx
 * 000000014073C6EF: jz      short loc_14073C6FB
 * 000000014073C6F1: mov     ecx, 1
 * 000000014073C6F6: incsspq rcx
 * 000000014073C6FB: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073C702: jz      short loc_14073C70C
 * 000000014073C704: lea     rsp, [rbp-88h]
 * 000000014073C70B: retn
 * 000000014073C70C: test    byte ptr [rbp+0F0h], 1
 * 000000014073C713: jz      loc_14073CA14
 * 000000014073C719: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073C720: jz      short loc_14073C725
 * 000000014073C722: stac
 * 000000014073C725: mov     rcx, gs:188h
 * 000000014073C72E: test    byte ptr [rcx+0C2h], 3
 * 000000014073C735: jz      short loc_14073C752
 * 000000014073C737: mov     ecx, 1
 * 000000014073C73C: mov     cr8, rcx
 * 000000014073C740: sti
 * 000000014073C741: call    KiInitiateUserApc
 * 000000014073C746: cli
 * 000000014073C747: mov     ecx, 0
 * 000000014073C74C: mov     cr8, rcx
 * 000000014073C750: jmp     short loc_14073C725
 * 000000014073C752: test    byte ptr [rcx+3], 80h
 * 000000014073C756: jz      short loc_14073C765
 * 000000014073C758: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014073C75D: test    eax, eax
 * 000000014073C75F: mov     rax, [rbp-50h]
 * 000000014073C763: jnz     short loc_14073C725
 * 000000014073C765: test    byte ptr gs:8A0h, 2
 * 000000014073C76E: jz      short loc_14073C777
 * 000000014073C770: xor     ecx, ecx
 * 000000014073C772: call    KiUpdateStibpPairing
 * 000000014073C777: mov     rcx, gs:188h
 * 000000014073C780: test    dword ptr [rcx], 8000000h
 * 000000014073C786: jz      short loc_14073C78D
 * 000000014073C788: call    KiRestoreSetContextState
 * 000000014073C78D: mov     rcx, gs:188h
 * 000000014073C796: test    dword ptr [rcx], 10000h
 * 000000014073C79C: jz      short loc_14073C7B2
 * 000000014073C79E: test    byte ptr [rcx+2], 1
 * 000000014073C7A2: jz      short loc_14073C7B2
 * 000000014073C7A4: call    KiCopyCounters
 * 000000014073C7A9: mov     rcx, gs:188h
 * 000000014073C7B2: ldmxcsr dword ptr [rbp-54h]
 * 000000014073C7B6: cmp     word ptr [rbp+80h], 0
 * 000000014073C7BE: jz      short loc_14073C7C5
 * 000000014073C7C0: call    KiRestoreDebugRegisterState
 * 000000014073C7C5: mov     rcx, gs:188h
 * 000000014073C7CE: bt      dword ptr [rcx+74h], 16h
 * 000000014073C7D3: jnb     short loc_14073C7FF
 * 000000014073C7D5: xor     ecx, ecx
 * 000000014073C7D7: rdsspq  rcx
 * 000000014073C7DC: mov     r8, gs:9D68h
 * 000000014073C7E5: add     r8, 8
 * 000000014073C7E9: cmp     rcx, r8
 * 000000014073C7EC: jnz     short loc_14073C7FF
 * 000000014073C7EE: mov     rcx, gs:9D60h
 * 000000014073C7F7: rstorssp qword ptr [rcx]
 * 000000014073C7FB: saveprevssp
 * 000000014073C7FF: mov     byte ptr gs:89Eh, 0
 * 000000014073C808: movzx   eax, word ptr gs:8ACh
 * 000000014073C811: cmp     gs:8A6h, ax
 * 000000014073C81A: jz      short loc_14073C82E
 * 000000014073C81C: mov     gs:8A6h, ax
 * 000000014073C825: mov     ecx, 48h ; 'H'
 * 000000014073C82A: xor     edx, edx
 * 000000014073C82C: wrmsr
 * 000000014073C82E: btr     word ptr gs:898h, 2
 * 000000014073C839: jnb     short loc_14073C849
 * 000000014073C83B: mov     eax, 1
 * 000000014073C840: xor     edx, edx
 * 000000014073C842: mov     ecx, 49h ; 'I'
 * 000000014073C847: wrmsr
 * 000000014073C849: btr     word ptr gs:898h, 5
 * 000000014073C854: jnb     loc_14073C991
 * 000000014073C85A: call    loc_14073C96D
 * 000000014073C85F: add     rsp, 8
 * 000000014073C863: call    loc_14073C976
 * 000000014073C868: add     rsp, 8
 * 000000014073C86C: call    loc_14073C85F
 * 000000014073C871: add     rsp, 8
 * 000000014073C875: call    loc_14073C868
 * 000000014073C87A: add     rsp, 8
 * 000000014073C87E: call    loc_14073C871
 * 000000014073C883: add     rsp, 8
 * 000000014073C887: call    loc_14073C87A
 * 000000014073C88C: add     rsp, 8
 * 000000014073C890: call    loc_14073C883
 * 000000014073C895: add     rsp, 8
 * 000000014073C899: call    loc_14073C88C
 * 000000014073C89E: add     rsp, 8
 * 000000014073C8A2: call    loc_14073C895
 * 000000014073C8A7: add     rsp, 8
 * 000000014073C8AB: call    loc_14073C89E
 * 000000014073C8B0: add     rsp, 8
 * 000000014073C8B4: call    loc_14073C8A7
 * 000000014073C8B9: add     rsp, 8
 * 000000014073C8BD: call    loc_14073C8B0
 * 000000014073C8C2: add     rsp, 8
 * 000000014073C8C6: call    loc_14073C8B9
 * 000000014073C8CB: add     rsp, 8
 * 000000014073C8CF: call    loc_14073C8C2
 * 000000014073C8D4: add     rsp, 8
 * 000000014073C8D8: call    loc_14073C8CB
 * 000000014073C8DD: add     rsp, 8
 * 000000014073C8E1: call    loc_14073C8D4
 * 000000014073C8E6: add     rsp, 8
 * 000000014073C8EA: call    loc_14073C8DD
 * 000000014073C8EF: add     rsp, 8
 * 000000014073C8F3: call    loc_14073C8E6
 * 000000014073C8F8: add     rsp, 8
 * 000000014073C8FC: call    loc_14073C8EF
 * 000000014073C901: add     rsp, 8
 * 000000014073C905: call    loc_14073C8F8
 * 000000014073C90A: add     rsp, 8
 * 000000014073C90E: call    loc_14073C901
 * 000000014073C913: add     rsp, 8
 * 000000014073C917: call    loc_14073C90A
 * 000000014073C91C: add     rsp, 8
 * 000000014073C920: call    loc_14073C913
 * 000000014073C925: add     rsp, 8
 * 000000014073C929: call    loc_14073C91C
 * 000000014073C92E: add     rsp, 8
 * 000000014073C932: call    loc_14073C925
 * 000000014073C937: add     rsp, 8
 * 000000014073C93B: call    loc_14073C92E
 * 000000014073C940: add     rsp, 8
 * 000000014073C944: call    loc_14073C937
 * 000000014073C949: add     rsp, 8
 * 000000014073C94D: call    loc_14073C940
 * 000000014073C952: add     rsp, 8
 * 000000014073C956: call    loc_14073C949
 * 000000014073C95B: add     rsp, 8
 * 000000014073C95F: call    loc_14073C952
 * 000000014073C964: add     rsp, 8
 * 000000014073C968: call    loc_14073C95B
 * 000000014073C96D: add     rsp, 8
 * 000000014073C971: call    loc_14073C964
 * 000000014073C976: add     rsp, 8
 * 000000014073C97A: mov     eax, 0DADAh
 * 000000014073C97F: test    byte ptr gs:89Ch, 8
 * 000000014073C988: jz      short loc_14073C991
 * 000000014073C98A: mov     al, 20h ; ' '
 * 000000014073C98C: incsspq rax
 * 000000014073C991: test    word ptr gs:898h, 100h
 * 000000014073C99C: jz      short loc_14073C9AA
 * 000000014073C99E: xor     eax, eax
 * 000000014073C9A0: xor     edx, edx
 * 000000014073C9A2: mov     ecx, 1
 * 000000014073C9A7: div     rcx
 * 000000014073C9AA: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014073C9AE: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014073C9B2: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014073C9B6: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014073C9BA: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014073C9BE: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014073C9C2: mov     r11, [rbp-20h]
 * 000000014073C9C6: mov     r10, [rbp-28h]
 * 000000014073C9CA: mov     r9, [rbp-30h]
 * 000000014073C9CE: mov     r8, [rbp-38h]
 * 000000014073C9D2: mov     rdx, [rbp-40h]
 * 000000014073C9D6: mov     rcx, [rbp-48h]
 * 000000014073C9DA: mov     rax, [rbp-50h]
 * 000000014073C9DE: mov     rsp, rbp
 * 000000014073C9E1: mov     rbp, [rbp+0D8h]
 * 000000014073C9E8: add     rsp, 0E8h
 * 000000014073C9EF: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073C9F6: jz      short loc_14073C9FD
 * 000000014073C9F8: jmp     KiKernelExit
 * 000000014073C9FD: test    word ptr gs:898h, 200h
 * 000000014073CA08: jz      short loc_14073CA0F
 * 000000014073CA0A: verw    [rsp-1E8h+arg_200]
 * 000000014073CA0F: swapgs
 * 000000014073CA12: iretq
 * 000000014073CA14: ldmxcsr dword ptr [rbp-54h]
 * 000000014073CA18: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014073CA1C: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014073CA20: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014073CA24: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014073CA28: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014073CA2C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014073CA30: mov     r11, [rbp-20h]
 * 000000014073CA34: mov     r10, [rbp-28h]
 * 000000014073CA38: mov     r9, [rbp-30h]
 * 000000014073CA3C: mov     r8, [rbp-38h]
 * 000000014073CA40: mov     rdx, [rbp-40h]
 * 000000014073CA44: mov     rcx, [rbp-48h]
 * 000000014073CA48: mov     rax, [rbp-50h]
 * 000000014073CA4C: mov     rsp, rbp
 * 000000014073CA4F: mov     rbp, [rbp+0D8h]
 * 000000014073CA56: add     rsp, 0E8h
 * 000000014073CA5D: iretq
 */
