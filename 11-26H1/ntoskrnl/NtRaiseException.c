/*
 * XREFs of NtRaiseException @ 0x1407278B0
 * Callers:
 *     DifNtRaiseExceptionWrapper @ 0x140687430 (DifNtRaiseExceptionWrapper.c)
 * Callees:
 *     KiRaiseException @ 0x1403D3C10 (KiRaiseException.c)
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     NtRaiseException @ 0x1407278B0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 */

/*
 * Hex-Rays decompilation failed for NtRaiseException @ 0x1407278B0
 * Reason: Hex-Rays returned no pseudocode for 0x1407278B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407278B0: mov     rbx, [rbp+0C0h]
 * 00000001407278B7: mov     rdi, [rbp+0C8h]
 * 00000001407278BE: mov     rsi, [rbp+0D0h]
 * 00000001407278C5: xor     eax, eax
 * 00000001407278C7: mov     [rbp-50h], rax
 * 00000001407278CB: sub     rsp, 138h
 * 00000001407278D2: lea     rax, [rsp+138h+var_38]
 * 00000001407278DA: movaps  [rsp+138h+var_108], xmm6
 * 00000001407278DF: movaps  [rsp+138h+var_F8], xmm7
 * 00000001407278E4: movaps  [rsp+138h+var_E8], xmm8
 * 00000001407278EA: movaps  [rsp+138h+var_D8], xmm9
 * 00000001407278F0: movaps  [rsp+138h+var_C8], xmm10
 * 00000001407278F6: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001407278FB: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140727900: movaps  xmmword ptr [rax-60h], xmm13
 * 0000000140727905: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014072790A: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014072790F: mov     [rax], rbx
 * 0000000140727912: mov     [rax+8], rdi
 * 0000000140727916: mov     [rax+10h], rsi
 * 000000014072791A: mov     [rax+18h], r12
 * 000000014072791E: mov     [rax+20h], r13
 * 0000000140727922: mov     [rax+28h], r14
 * 0000000140727926: mov     [rax+30h], r15
 * 000000014072792A: mov     rax, [rbp+0E8h]
 * 0000000140727931: mov     [rbp+50h], rax
 * 0000000140727935: mov     [rsp+138h+var_118], r8b; char
 * 000000014072793A: mov     r8, rsp
 * 000000014072793D: lea     r9, [rbp-80h]
 * 0000000140727941: call    KiRaiseException
 * 0000000140727946: test    eax, eax
 * 0000000140727948: jnz     loc_140727D68
 * 000000014072794E: test    byte ptr [rbp+0F0h], 1
 * 0000000140727955: jnz     short loc_140727977
 * 0000000140727957: mov     rbx, gs:188h
 * 0000000140727960: mov     rdx, [rbp+0B8h]
 * 0000000140727967: mov     [rbx+90h], rdx
 * 000000014072796E: mov     dl, [rbp-58h]
 * 0000000140727971: mov     [rbx+232h], dl
 * 0000000140727977: lea     rcx, [rsp+138h+var_38]
 * 000000014072797F: movaps  xmm6, [rsp+138h+var_108]
 * 0000000140727984: movaps  xmm7, [rsp+138h+var_F8]
 * 0000000140727989: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014072798F: movaps  xmm9, [rsp+138h+var_D8]
 * 0000000140727995: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014072799B: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001407279A0: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001407279A5: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001407279AA: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001407279AF: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001407279B4: mov     rbx, [rcx]
 * 00000001407279B7: mov     rdi, [rcx+8]
 * 00000001407279BB: mov     rsi, [rcx+10h]
 * 00000001407279BF: mov     r12, [rcx+18h]
 * 00000001407279C3: mov     r13, [rcx+20h]
 * 00000001407279C7: mov     r14, [rcx+28h]
 * 00000001407279CB: mov     r15, [rcx+30h]
 * 00000001407279CF: cli
 * 00000001407279D0: xor     ecx, ecx
 * 00000001407279D2: rdsspq  rcx
 * 00000001407279D7: test    rcx, rcx
 * 00000001407279DA: jz      short loc_1407279E6
 * 00000001407279DC: mov     ecx, 1
 * 00000001407279E1: incsspq rcx
 * 00000001407279E6: test    byte ptr cs:KiTrapFeatures, 2
 * 00000001407279ED: jz      short loc_140727A15
 * 00000001407279EF: test    byte ptr [rbp+0F0h], 1
 * 00000001407279F6: jz      short loc_140727A15
 * 00000001407279F8: mov     [rbp+0C0h], rbx
 * 00000001407279FF: mov     [rbp+0D0h], rsi
 * 0000000140727A06: mov     [rbp+0C8h], rdi
 * 0000000140727A0D: lea     rsp, [rbp-88h]
 * 0000000140727A14: retn
 * 0000000140727A15: test    byte ptr [rbp+0F0h], 1
 * 0000000140727A1C: jz      loc_140727D1D
 * 0000000140727A22: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140727A29: jz      short loc_140727A2E
 * 0000000140727A2B: stac
 * 0000000140727A2E: mov     rcx, gs:188h
 * 0000000140727A37: test    byte ptr [rcx+0C2h], 3
 * 0000000140727A3E: jz      short loc_140727A5B
 * 0000000140727A40: mov     ecx, 1
 * 0000000140727A45: mov     cr8, rcx
 * 0000000140727A49: sti
 * 0000000140727A4A: call    KiInitiateUserApc
 * 0000000140727A4F: cli
 * 0000000140727A50: mov     ecx, 0
 * 0000000140727A55: mov     cr8, rcx
 * 0000000140727A59: jmp     short loc_140727A2E
 * 0000000140727A5B: test    byte ptr [rcx+3], 80h
 * 0000000140727A5F: jz      short loc_140727A6E
 * 0000000140727A61: call    KiSynchronizeUserIsolationDomainEntry
 * 0000000140727A66: test    eax, eax
 * 0000000140727A68: mov     rax, [rbp-50h]
 * 0000000140727A6C: jnz     short loc_140727A2E
 * 0000000140727A6E: test    byte ptr gs:8A0h, 2
 * 0000000140727A77: jz      short loc_140727A80
 * 0000000140727A79: xor     ecx, ecx
 * 0000000140727A7B: call    KiUpdateStibpPairing
 * 0000000140727A80: mov     rcx, gs:188h
 * 0000000140727A89: test    dword ptr [rcx], 8000000h
 * 0000000140727A8F: jz      short loc_140727A96
 * 0000000140727A91: call    KiRestoreSetContextState
 * 0000000140727A96: mov     rcx, gs:188h
 * 0000000140727A9F: test    dword ptr [rcx], 10000h
 * 0000000140727AA5: jz      short loc_140727ABB
 * 0000000140727AA7: test    byte ptr [rcx+2], 1
 * 0000000140727AAB: jz      short loc_140727ABB
 * 0000000140727AAD: call    KiCopyCounters
 * 0000000140727AB2: mov     rcx, gs:188h
 * 0000000140727ABB: ldmxcsr dword ptr [rbp-54h]
 * 0000000140727ABF: cmp     word ptr [rbp+80h], 0
 * 0000000140727AC7: jz      short loc_140727ACE
 * 0000000140727AC9: call    KiRestoreDebugRegisterState
 * 0000000140727ACE: mov     rcx, gs:188h
 * 0000000140727AD7: bt      dword ptr [rcx+74h], 16h
 * 0000000140727ADC: jnb     short loc_140727B08
 * 0000000140727ADE: xor     ecx, ecx
 * 0000000140727AE0: rdsspq  rcx
 * 0000000140727AE5: mov     r8, gs:9D68h
 * 0000000140727AEE: add     r8, 8
 * 0000000140727AF2: cmp     rcx, r8
 * 0000000140727AF5: jnz     short loc_140727B08
 * 0000000140727AF7: mov     rcx, gs:9D60h
 * 0000000140727B00: rstorssp qword ptr [rcx]
 * 0000000140727B04: saveprevssp
 * 0000000140727B08: mov     byte ptr gs:89Eh, 0
 * 0000000140727B11: movzx   eax, word ptr gs:8ACh
 * 0000000140727B1A: cmp     gs:8A6h, ax
 * 0000000140727B23: jz      short loc_140727B37
 * 0000000140727B25: mov     gs:8A6h, ax
 * 0000000140727B2E: mov     ecx, 48h ; 'H'
 * 0000000140727B33: xor     edx, edx
 * 0000000140727B35: wrmsr
 * 0000000140727B37: btr     word ptr gs:898h, 2
 * 0000000140727B42: jnb     short loc_140727B52
 * 0000000140727B44: mov     eax, 1
 * 0000000140727B49: xor     edx, edx
 * 0000000140727B4B: mov     ecx, 49h ; 'I'
 * 0000000140727B50: wrmsr
 * 0000000140727B52: btr     word ptr gs:898h, 5
 * 0000000140727B5D: jnb     loc_140727C9A
 * 0000000140727B63: call    loc_140727C76
 * 0000000140727B68: add     rsp, 8
 * 0000000140727B6C: call    loc_140727C7F
 * 0000000140727B71: add     rsp, 8
 * 0000000140727B75: call    loc_140727B68
 * 0000000140727B7A: add     rsp, 8
 * 0000000140727B7E: call    loc_140727B71
 * 0000000140727B83: add     rsp, 8
 * 0000000140727B87: call    loc_140727B7A
 * 0000000140727B8C: add     rsp, 8
 * 0000000140727B90: call    loc_140727B83
 * 0000000140727B95: add     rsp, 8
 * 0000000140727B99: call    loc_140727B8C
 * 0000000140727B9E: add     rsp, 8
 * 0000000140727BA2: call    loc_140727B95
 * 0000000140727BA7: add     rsp, 8
 * 0000000140727BAB: call    loc_140727B9E
 * 0000000140727BB0: add     rsp, 8
 * 0000000140727BB4: call    loc_140727BA7
 * 0000000140727BB9: add     rsp, 8
 * 0000000140727BBD: call    loc_140727BB0
 * 0000000140727BC2: add     rsp, 8
 * 0000000140727BC6: call    loc_140727BB9
 * 0000000140727BCB: add     rsp, 8
 * 0000000140727BCF: call    loc_140727BC2
 * 0000000140727BD4: add     rsp, 8
 * 0000000140727BD8: call    loc_140727BCB
 * 0000000140727BDD: add     rsp, 8
 * 0000000140727BE1: call    loc_140727BD4
 * 0000000140727BE6: add     rsp, 8
 * 0000000140727BEA: call    loc_140727BDD
 * 0000000140727BEF: add     rsp, 8
 * 0000000140727BF3: call    loc_140727BE6
 * 0000000140727BF8: add     rsp, 8
 * 0000000140727BFC: call    loc_140727BEF
 * 0000000140727C01: add     rsp, 8
 * 0000000140727C05: call    loc_140727BF8
 * 0000000140727C0A: add     rsp, 8
 * 0000000140727C0E: call    loc_140727C01
 * 0000000140727C13: add     rsp, 8
 * 0000000140727C17: call    loc_140727C0A
 * 0000000140727C1C: add     rsp, 8
 * 0000000140727C20: call    loc_140727C13
 * 0000000140727C25: add     rsp, 8
 * 0000000140727C29: call    loc_140727C1C
 * 0000000140727C2E: add     rsp, 8
 * 0000000140727C32: call    loc_140727C25
 * 0000000140727C37: add     rsp, 8
 * 0000000140727C3B: call    loc_140727C2E
 * 0000000140727C40: add     rsp, 8
 * 0000000140727C44: call    loc_140727C37
 * 0000000140727C49: add     rsp, 8
 * 0000000140727C4D: call    loc_140727C40
 * 0000000140727C52: add     rsp, 8
 * 0000000140727C56: call    loc_140727C49
 * 0000000140727C5B: add     rsp, 8
 * 0000000140727C5F: call    loc_140727C52
 * 0000000140727C64: add     rsp, 8
 * 0000000140727C68: call    loc_140727C5B
 * 0000000140727C6D: add     rsp, 8
 * 0000000140727C71: call    loc_140727C64
 * 0000000140727C76: add     rsp, 8
 * 0000000140727C7A: call    loc_140727C6D
 * 0000000140727C7F: add     rsp, 8
 * 0000000140727C83: mov     eax, 0DADAh
 * 0000000140727C88: test    byte ptr gs:89Ch, 8
 * 0000000140727C91: jz      short loc_140727C9A
 * 0000000140727C93: mov     al, 20h ; ' '
 * 0000000140727C95: incsspq rax
 * 0000000140727C9A: test    word ptr gs:898h, 100h
 * 0000000140727CA5: jz      short loc_140727CB3
 * 0000000140727CA7: xor     eax, eax
 * 0000000140727CA9: xor     edx, edx
 * 0000000140727CAB: mov     ecx, 1
 * 0000000140727CB0: div     rcx
 * 0000000140727CB3: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140727CB7: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140727CBB: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140727CBF: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140727CC3: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140727CC7: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140727CCB: mov     r11, [rbp-20h]
 * 0000000140727CCF: mov     r10, [rbp-28h]
 * 0000000140727CD3: mov     r9, [rbp-30h]
 * 0000000140727CD7: mov     r8, [rbp-38h]
 * 0000000140727CDB: mov     rdx, [rbp-40h]
 * 0000000140727CDF: mov     rcx, [rbp-48h]
 * 0000000140727CE3: mov     rax, [rbp-50h]
 * 0000000140727CE7: mov     rsp, rbp
 * 0000000140727CEA: mov     rbp, [rbp+0D8h]
 * 0000000140727CF1: add     rsp, 0E8h
 * 0000000140727CF8: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140727CFF: jz      short loc_140727D06
 * 0000000140727D01: jmp     KiKernelExit
 * 0000000140727D06: test    word ptr gs:898h, 200h
 * 0000000140727D11: jz      short loc_140727D18
 * 0000000140727D13: verw    [rsp-1E8h+arg_200]
 * 0000000140727D18: swapgs
 * 0000000140727D1B: iretq
 * 0000000140727D1D: ldmxcsr dword ptr [rbp-54h]
 * 0000000140727D21: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140727D25: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140727D29: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140727D2D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140727D31: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140727D35: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140727D39: mov     r11, [rbp-20h]
 * 0000000140727D3D: mov     r10, [rbp-28h]
 * 0000000140727D41: mov     r9, [rbp-30h]
 * 0000000140727D45: mov     r8, [rbp-38h]
 * 0000000140727D49: mov     rdx, [rbp-40h]
 * 0000000140727D4D: mov     rcx, [rbp-48h]
 * 0000000140727D51: mov     rax, [rbp-50h]
 * 0000000140727D55: mov     rsp, rbp
 * 0000000140727D58: mov     rbp, [rbp+0D8h]
 * 0000000140727D5F: add     rsp, 0E8h
 * 0000000140727D66: iretq
 * 0000000140727D68: lea     rcx, [rsp+138h+var_38]
 * 0000000140727D70: movaps  xmm6, [rsp+138h+var_108]
 * 0000000140727D75: movaps  xmm7, [rsp+138h+var_F8]
 * 0000000140727D7A: movaps  xmm8, [rsp+138h+var_E8]
 * 0000000140727D80: movaps  xmm9, [rsp+138h+var_D8]
 * 0000000140727D86: movaps  xmm10, [rsp+138h+var_C8]
 * 0000000140727D8C: movaps  xmm11, xmmword ptr [rcx-80h]
 * 0000000140727D91: movaps  xmm12, xmmword ptr [rcx-70h]
 * 0000000140727D96: movaps  xmm13, xmmword ptr [rcx-60h]
 * 0000000140727D9B: movaps  xmm14, xmmword ptr [rcx-50h]
 * 0000000140727DA0: movaps  xmm15, xmmword ptr [rcx-40h]
 * 0000000140727DA5: mov     rbx, [rcx]
 * 0000000140727DA8: mov     rdi, [rcx+8]
 * 0000000140727DAC: mov     rsi, [rcx+10h]
 * 0000000140727DB0: mov     r12, [rcx+18h]
 * 0000000140727DB4: mov     r13, [rcx+20h]
 * 0000000140727DB8: mov     r14, [rcx+28h]
 * 0000000140727DBC: mov     r15, [rcx+30h]
 * 0000000140727DC0: add     rsp, 138h
 * 0000000140727DC7: retn
 */
