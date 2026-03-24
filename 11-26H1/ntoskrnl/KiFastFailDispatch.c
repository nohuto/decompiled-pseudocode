/*
 * XREFs of KiFastFailDispatch @ 0x14073CA80
 * Callers:
 *     KiBoundFault @ 0x1407347C0 (KiBoundFault.c)
 *     KiControlProtectionFault @ 0x140739B00 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x14073A2C0 (KiRaiseSecurityCheckFailure.c)
 * Callees:
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x14073C4C0 (KiBugCheckDispatch.c)
 *     KiFastFailDispatch @ 0x14073CA80 (KiFastFailDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiFastFailDispatch @ 0x14073CA80
 * Reason: Hex-Rays returned no pseudocode for 0x14073CA80
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073CA80: sub     rsp, 1D8h
 * 000000014073CA87: lea     rax, [rsp+1D8h+var_D8]
 * 000000014073CA8F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 000000014073CA94: movaps  [rsp+1D8h+var_198], xmm7
 * 000000014073CA99: movaps  [rsp+1D8h+var_188], xmm8
 * 000000014073CA9F: movaps  [rsp+1D8h+var_178], xmm9
 * 000000014073CAA5: movaps  [rsp+1D8h+var_168], xmm10
 * 000000014073CAAB: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014073CAB0: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014073CAB5: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014073CABA: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014073CABF: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014073CAC4: mov     [rax], rbx
 * 000000014073CAC7: mov     [rax+8], rdi
 * 000000014073CACB: mov     [rax+10h], rsi
 * 000000014073CACF: mov     [rax+18h], r12
 * 000000014073CAD3: mov     [rax+20h], r13
 * 000000014073CAD7: mov     [rax+28h], r14
 * 000000014073CADB: mov     [rax+30h], r15
 * 000000014073CADF: lea     rax, [rsp+1D8h+var_A0]
 * 000000014073CAE7: mov     [rax], ecx
 * 000000014073CAE9: xor     ecx, ecx
 * 000000014073CAEB: mov     dword ptr [rax+4], 1
 * 000000014073CAF2: mov     [rax+8], rcx
 * 000000014073CAF6: mov     [rax+10h], r8
 * 000000014073CAFA: mov     [rax+18h], edx
 * 000000014073CAFD: mov     [rax+20h], r9
 * 000000014073CB01: mov     [rax+28h], r10
 * 000000014073CB05: mov     [rax+30h], r11
 * 000000014073CB09: mov     r9b, [rbp+0F0h]
 * 000000014073CB10: and     r9b, 1
 * 000000014073CB14: cmp     r9b, 0
 * 000000014073CB18: jnz     short loc_14073CB32
 * 000000014073CB1A: mov     rdx, [rax+20h]
 * 000000014073CB1E: xor     r10, r10
 * 000000014073CB21: mov     r9, rax
 * 000000014073CB24: lea     r8, [rbp-80h]
 * 000000014073CB28: mov     ecx, 139h
 * 000000014073CB2D: call    KiBugCheckDispatch
 * 000000014073CB32: mov     [rsp+1D8h+var_1B8], 0; char
 * 000000014073CB37: lea     r8, [rbp-80h]
 * 000000014073CB3B: mov     rdx, rsp
 * 000000014073CB3E: mov     rcx, rax; int
 * 000000014073CB41: call    KiDispatchException
 * 000000014073CB46: lea     rcx, [rsp+1D8h+var_D8]
 * 000000014073CB4E: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 000000014073CB53: movaps  xmm7, [rsp+1D8h+var_198]
 * 000000014073CB58: movaps  xmm8, [rsp+1D8h+var_188]
 * 000000014073CB5E: movaps  xmm9, [rsp+1D8h+var_178]
 * 000000014073CB64: movaps  xmm10, [rsp+1D8h+var_168]
 * 000000014073CB6A: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014073CB6F: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014073CB74: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014073CB79: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014073CB7E: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014073CB83: mov     rbx, [rcx]
 * 000000014073CB86: mov     rdi, [rcx+8]
 * 000000014073CB8A: mov     rsi, [rcx+10h]
 * 000000014073CB8E: mov     r12, [rcx+18h]
 * 000000014073CB92: mov     r13, [rcx+20h]
 * 000000014073CB96: mov     r14, [rcx+28h]
 * 000000014073CB9A: mov     r15, [rcx+30h]
 * 000000014073CB9E: cli
 * 000000014073CB9F: xor     ecx, ecx
 * 000000014073CBA1: rdsspq  rcx
 * 000000014073CBA6: test    rcx, rcx
 * 000000014073CBA9: jz      short loc_14073CBB5
 * 000000014073CBAB: mov     ecx, 1
 * 000000014073CBB0: incsspq rcx
 * 000000014073CBB5: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073CBBC: jz      short loc_14073CBC6
 * 000000014073CBBE: lea     rsp, [rbp-88h]
 * 000000014073CBC5: retn
 * 000000014073CBC6: test    byte ptr [rbp+0F0h], 1
 * 000000014073CBCD: jz      loc_14073CECE
 * 000000014073CBD3: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073CBDA: jz      short loc_14073CBDF
 * 000000014073CBDC: stac
 * 000000014073CBDF: mov     rcx, gs:188h
 * 000000014073CBE8: test    byte ptr [rcx+0C2h], 3
 * 000000014073CBEF: jz      short loc_14073CC0C
 * 000000014073CBF1: mov     ecx, 1
 * 000000014073CBF6: mov     cr8, rcx
 * 000000014073CBFA: sti
 * 000000014073CBFB: call    KiInitiateUserApc
 * 000000014073CC00: cli
 * 000000014073CC01: mov     ecx, 0
 * 000000014073CC06: mov     cr8, rcx
 * 000000014073CC0A: jmp     short loc_14073CBDF
 * 000000014073CC0C: test    byte ptr [rcx+3], 80h
 * 000000014073CC10: jz      short loc_14073CC1F
 * 000000014073CC12: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014073CC17: test    eax, eax
 * 000000014073CC19: mov     rax, [rbp-50h]
 * 000000014073CC1D: jnz     short loc_14073CBDF
 * 000000014073CC1F: test    byte ptr gs:8A0h, 2
 * 000000014073CC28: jz      short loc_14073CC31
 * 000000014073CC2A: xor     ecx, ecx
 * 000000014073CC2C: call    KiUpdateStibpPairing
 * 000000014073CC31: mov     rcx, gs:188h
 * 000000014073CC3A: test    dword ptr [rcx], 8000000h
 * 000000014073CC40: jz      short loc_14073CC47
 * 000000014073CC42: call    KiRestoreSetContextState
 * 000000014073CC47: mov     rcx, gs:188h
 * 000000014073CC50: test    dword ptr [rcx], 10000h
 * 000000014073CC56: jz      short loc_14073CC6C
 * 000000014073CC58: test    byte ptr [rcx+2], 1
 * 000000014073CC5C: jz      short loc_14073CC6C
 * 000000014073CC5E: call    KiCopyCounters
 * 000000014073CC63: mov     rcx, gs:188h
 * 000000014073CC6C: ldmxcsr dword ptr [rbp-54h]
 * 000000014073CC70: cmp     word ptr [rbp+80h], 0
 * 000000014073CC78: jz      short loc_14073CC7F
 * 000000014073CC7A: call    KiRestoreDebugRegisterState
 * 000000014073CC7F: mov     rcx, gs:188h
 * 000000014073CC88: bt      dword ptr [rcx+74h], 16h
 * 000000014073CC8D: jnb     short loc_14073CCB9
 * 000000014073CC8F: xor     ecx, ecx
 * 000000014073CC91: rdsspq  rcx
 * 000000014073CC96: mov     r8, gs:9D68h
 * 000000014073CC9F: add     r8, 8
 * 000000014073CCA3: cmp     rcx, r8
 * 000000014073CCA6: jnz     short loc_14073CCB9
 * 000000014073CCA8: mov     rcx, gs:9D60h
 * 000000014073CCB1: rstorssp qword ptr [rcx]
 * 000000014073CCB5: saveprevssp
 * 000000014073CCB9: mov     byte ptr gs:89Eh, 0
 * 000000014073CCC2: movzx   eax, word ptr gs:8ACh
 * 000000014073CCCB: cmp     gs:8A6h, ax
 * 000000014073CCD4: jz      short loc_14073CCE8
 * 000000014073CCD6: mov     gs:8A6h, ax
 * 000000014073CCDF: mov     ecx, 48h ; 'H'
 * 000000014073CCE4: xor     edx, edx
 * 000000014073CCE6: wrmsr
 * 000000014073CCE8: btr     word ptr gs:898h, 2
 * 000000014073CCF3: jnb     short loc_14073CD03
 * 000000014073CCF5: mov     eax, 1
 * 000000014073CCFA: xor     edx, edx
 * 000000014073CCFC: mov     ecx, 49h ; 'I'
 * 000000014073CD01: wrmsr
 * 000000014073CD03: btr     word ptr gs:898h, 5
 * 000000014073CD0E: jnb     loc_14073CE4B
 * 000000014073CD14: call    loc_14073CE27
 * 000000014073CD19: add     rsp, 8
 * 000000014073CD1D: call    loc_14073CE30
 * 000000014073CD22: add     rsp, 8
 * 000000014073CD26: call    loc_14073CD19
 * 000000014073CD2B: add     rsp, 8
 * 000000014073CD2F: call    loc_14073CD22
 * 000000014073CD34: add     rsp, 8
 * 000000014073CD38: call    loc_14073CD2B
 * 000000014073CD3D: add     rsp, 8
 * 000000014073CD41: call    loc_14073CD34
 * 000000014073CD46: add     rsp, 8
 * 000000014073CD4A: call    loc_14073CD3D
 * 000000014073CD4F: add     rsp, 8
 * 000000014073CD53: call    loc_14073CD46
 * 000000014073CD58: add     rsp, 8
 * 000000014073CD5C: call    loc_14073CD4F
 * 000000014073CD61: add     rsp, 8
 * 000000014073CD65: call    loc_14073CD58
 * 000000014073CD6A: add     rsp, 8
 * 000000014073CD6E: call    loc_14073CD61
 * 000000014073CD73: add     rsp, 8
 * 000000014073CD77: call    loc_14073CD6A
 * 000000014073CD7C: add     rsp, 8
 * 000000014073CD80: call    loc_14073CD73
 * 000000014073CD85: add     rsp, 8
 * 000000014073CD89: call    loc_14073CD7C
 * 000000014073CD8E: add     rsp, 8
 * 000000014073CD92: call    loc_14073CD85
 * 000000014073CD97: add     rsp, 8
 * 000000014073CD9B: call    loc_14073CD8E
 * 000000014073CDA0: add     rsp, 8
 * 000000014073CDA4: call    loc_14073CD97
 * 000000014073CDA9: add     rsp, 8
 * 000000014073CDAD: call    loc_14073CDA0
 * 000000014073CDB2: add     rsp, 8
 * 000000014073CDB6: call    loc_14073CDA9
 * 000000014073CDBB: add     rsp, 8
 * 000000014073CDBF: call    loc_14073CDB2
 * 000000014073CDC4: add     rsp, 8
 * 000000014073CDC8: call    loc_14073CDBB
 * 000000014073CDCD: add     rsp, 8
 * 000000014073CDD1: call    loc_14073CDC4
 * 000000014073CDD6: add     rsp, 8
 * 000000014073CDDA: call    loc_14073CDCD
 * 000000014073CDDF: add     rsp, 8
 * 000000014073CDE3: call    loc_14073CDD6
 * 000000014073CDE8: add     rsp, 8
 * 000000014073CDEC: call    loc_14073CDDF
 * 000000014073CDF1: add     rsp, 8
 * 000000014073CDF5: call    loc_14073CDE8
 * 000000014073CDFA: add     rsp, 8
 * 000000014073CDFE: call    loc_14073CDF1
 * 000000014073CE03: add     rsp, 8
 * 000000014073CE07: call    loc_14073CDFA
 * 000000014073CE0C: add     rsp, 8
 * 000000014073CE10: call    loc_14073CE03
 * 000000014073CE15: add     rsp, 8
 * 000000014073CE19: call    loc_14073CE0C
 * 000000014073CE1E: add     rsp, 8
 * 000000014073CE22: call    loc_14073CE15
 * 000000014073CE27: add     rsp, 8
 * 000000014073CE2B: call    loc_14073CE1E
 * 000000014073CE30: add     rsp, 8
 * 000000014073CE34: mov     eax, 0DADAh
 * 000000014073CE39: test    byte ptr gs:89Ch, 8
 * 000000014073CE42: jz      short loc_14073CE4B
 * 000000014073CE44: mov     al, 20h ; ' '
 * 000000014073CE46: incsspq rax
 * 000000014073CE4B: test    word ptr gs:898h, 100h
 * 000000014073CE56: jz      short loc_14073CE64
 * 000000014073CE58: xor     eax, eax
 * 000000014073CE5A: xor     edx, edx
 * 000000014073CE5C: mov     ecx, 1
 * 000000014073CE61: div     rcx
 * 000000014073CE64: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014073CE68: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014073CE6C: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014073CE70: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014073CE74: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014073CE78: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014073CE7C: mov     r11, [rbp-20h]
 * 000000014073CE80: mov     r10, [rbp-28h]
 * 000000014073CE84: mov     r9, [rbp-30h]
 * 000000014073CE88: mov     r8, [rbp-38h]
 * 000000014073CE8C: mov     rdx, [rbp-40h]
 * 000000014073CE90: mov     rcx, [rbp-48h]
 * 000000014073CE94: mov     rax, [rbp-50h]
 * 000000014073CE98: mov     rsp, rbp
 * 000000014073CE9B: mov     rbp, [rbp+0D8h]
 * 000000014073CEA2: add     rsp, 0E8h
 * 000000014073CEA9: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073CEB0: jz      short loc_14073CEB7
 * 000000014073CEB2: jmp     KiKernelExit
 * 000000014073CEB7: test    word ptr gs:898h, 200h
 * 000000014073CEC2: jz      short loc_14073CEC9
 * 000000014073CEC4: verw    [rsp-1E8h+arg_200]
 * 000000014073CEC9: swapgs
 * 000000014073CECC: iretq
 * 000000014073CECE: ldmxcsr dword ptr [rbp-54h]
 * 000000014073CED2: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014073CED6: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014073CEDA: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014073CEDE: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014073CEE2: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014073CEE6: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014073CEEA: mov     r11, [rbp-20h]
 * 000000014073CEEE: mov     r10, [rbp-28h]
 * 000000014073CEF2: mov     r9, [rbp-30h]
 * 000000014073CEF6: mov     r8, [rbp-38h]
 * 000000014073CEFA: mov     rdx, [rbp-40h]
 * 000000014073CEFE: mov     rcx, [rbp-48h]
 * 000000014073CF02: mov     rax, [rbp-50h]
 * 000000014073CF06: mov     rsp, rbp
 * 000000014073CF09: mov     rbp, [rbp+0D8h]
 * 000000014073CF10: add     rsp, 0E8h
 * 000000014073CF17: iretq
 */
