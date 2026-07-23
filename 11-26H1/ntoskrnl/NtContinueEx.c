/*
 * XREFs of NtContinueEx @ 0x14072BFC0
 * Callers:
 *     DifNtContinueExWrapper @ 0x140673180 (DifNtContinueExWrapper.c)
 *     NtContinue @ 0x14072BFB0 (NtContinue.c)
 * Callees:
 *     KiContinueEx @ 0x1403D8880 (KiContinueEx.c)
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     NtContinueEx @ 0x14072BFC0 (NtContinueEx.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 */

/*
 * Hex-Rays decompilation failed for NtContinueEx @ 0x14072BFC0
 * Reason: Hex-Rays returned no pseudocode for 0x14072BFC0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072BFC0: mov     rbx, [rbp+0C0h]
 * 000000014072BFC7: mov     rdi, [rbp+0C8h]
 * 000000014072BFCE: mov     rsi, [rbp+0D0h]
 * 000000014072BFD5: xor     eax, eax
 * 000000014072BFD7: mov     [rbp-50h], rax
 * 000000014072BFDB: sub     rsp, 138h
 * 000000014072BFE2: lea     rax, [rsp+138h+var_38]
 * 000000014072BFEA: movaps  [rsp+138h+var_108], xmm6
 * 000000014072BFEF: movaps  [rsp+138h+var_F8], xmm7
 * 000000014072BFF4: movaps  [rsp+138h+var_E8], xmm8
 * 000000014072BFFA: movaps  [rsp+138h+var_D8], xmm9
 * 000000014072C000: movaps  [rsp+138h+var_C8], xmm10
 * 000000014072C006: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014072C00B: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014072C010: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014072C015: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014072C01A: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014072C01F: mov     [rax], rbx
 * 000000014072C022: mov     [rax+8], rdi
 * 000000014072C026: mov     [rax+10h], rsi
 * 000000014072C02A: mov     [rax+18h], r12
 * 000000014072C02E: mov     [rax+20h], r13
 * 000000014072C032: mov     [rax+28h], r14
 * 000000014072C036: mov     [rax+30h], r15
 * 000000014072C03A: mov     r8, rsp
 * 000000014072C03D: lea     r9, [rbp-80h]
 * 000000014072C041: call    KiContinueEx
 * 000000014072C046: test    eax, eax
 * 000000014072C048: jle     loc_14072C468
 * 000000014072C04E: mov     rcx, gs:188h
 * 000000014072C057: test    byte ptr [rbp+0F0h], 1
 * 000000014072C05E: jnz     short loc_14072C077
 * 000000014072C060: mov     rdx, [rbp+0B8h]
 * 000000014072C067: mov     [rcx+90h], rdx
 * 000000014072C06E: mov     dl, [rbp-58h]
 * 000000014072C071: mov     [rcx+232h], dl
 * 000000014072C077: lea     rcx, [rsp+138h+var_38]
 * 000000014072C07F: movaps  xmm6, [rsp+138h+var_108]
 * 000000014072C084: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014072C089: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014072C08F: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014072C095: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014072C09B: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014072C0A0: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014072C0A5: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014072C0AA: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014072C0AF: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014072C0B4: mov     rbx, [rcx]
 * 000000014072C0B7: mov     rdi, [rcx+8]
 * 000000014072C0BB: mov     rsi, [rcx+10h]
 * 000000014072C0BF: mov     r12, [rcx+18h]
 * 000000014072C0C3: mov     r13, [rcx+20h]
 * 000000014072C0C7: mov     r14, [rcx+28h]
 * 000000014072C0CB: mov     r15, [rcx+30h]
 * 000000014072C0CF: cli
 * 000000014072C0D0: xor     ecx, ecx
 * 000000014072C0D2: rdsspq  rcx
 * 000000014072C0D7: test    rcx, rcx
 * 000000014072C0DA: jz      short loc_14072C0E6
 * 000000014072C0DC: mov     ecx, 1
 * 000000014072C0E1: incsspq rcx
 * 000000014072C0E6: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072C0ED: jz      short loc_14072C115
 * 000000014072C0EF: test    byte ptr [rbp+0F0h], 1
 * 000000014072C0F6: jz      short loc_14072C115
 * 000000014072C0F8: mov     [rbp+0C0h], rbx
 * 000000014072C0FF: mov     [rbp+0D0h], rsi
 * 000000014072C106: mov     [rbp+0C8h], rdi
 * 000000014072C10D: lea     rsp, [rbp-88h]
 * 000000014072C114: retn
 * 000000014072C115: test    byte ptr [rbp+0F0h], 1
 * 000000014072C11C: jz      loc_14072C41D
 * 000000014072C122: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072C129: jz      short loc_14072C12E
 * 000000014072C12B: stac
 * 000000014072C12E: mov     rcx, gs:188h
 * 000000014072C137: test    byte ptr [rcx+0C2h], 3
 * 000000014072C13E: jz      short loc_14072C15B
 * 000000014072C140: mov     ecx, 1
 * 000000014072C145: mov     cr8, rcx
 * 000000014072C149: sti
 * 000000014072C14A: call    KiInitiateUserApc
 * 000000014072C14F: cli
 * 000000014072C150: mov     ecx, 0
 * 000000014072C155: mov     cr8, rcx
 * 000000014072C159: jmp     short loc_14072C12E
 * 000000014072C15B: test    byte ptr [rcx+3], 80h
 * 000000014072C15F: jz      short loc_14072C16E
 * 000000014072C161: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072C166: test    eax, eax
 * 000000014072C168: mov     rax, [rbp-50h]
 * 000000014072C16C: jnz     short loc_14072C12E
 * 000000014072C16E: test    byte ptr gs:8A0h, 2
 * 000000014072C177: jz      short loc_14072C180
 * 000000014072C179: xor     ecx, ecx
 * 000000014072C17B: call    KiUpdateStibpPairing
 * 000000014072C180: mov     rcx, gs:188h
 * 000000014072C189: test    dword ptr [rcx], 8000000h
 * 000000014072C18F: jz      short loc_14072C196
 * 000000014072C191: call    KiRestoreSetContextState
 * 000000014072C196: mov     rcx, gs:188h
 * 000000014072C19F: test    dword ptr [rcx], 10000h
 * 000000014072C1A5: jz      short loc_14072C1BB
 * 000000014072C1A7: test    byte ptr [rcx+2], 1
 * 000000014072C1AB: jz      short loc_14072C1BB
 * 000000014072C1AD: call    KiCopyCounters
 * 000000014072C1B2: mov     rcx, gs:188h
 * 000000014072C1BB: ldmxcsr dword ptr [rbp-54h]
 * 000000014072C1BF: cmp     word ptr [rbp+80h], 0
 * 000000014072C1C7: jz      short loc_14072C1CE
 * 000000014072C1C9: call    KiRestoreDebugRegisterState
 * 000000014072C1CE: mov     rcx, gs:188h
 * 000000014072C1D7: bt      dword ptr [rcx+74h], 16h
 * 000000014072C1DC: jnb     short loc_14072C208
 * 000000014072C1DE: xor     ecx, ecx
 * 000000014072C1E0: rdsspq  rcx
 * 000000014072C1E5: mov     r8, gs:9D68h
 * 000000014072C1EE: add     r8, 8
 * 000000014072C1F2: cmp     rcx, r8
 * 000000014072C1F5: jnz     short loc_14072C208
 * 000000014072C1F7: mov     rcx, gs:9D60h
 * 000000014072C200: rstorssp qword ptr [rcx]
 * 000000014072C204: saveprevssp
 * 000000014072C208: mov     byte ptr gs:89Eh, 0
 * 000000014072C211: movzx   eax, word ptr gs:8ACh
 * 000000014072C21A: cmp     gs:8A6h, ax
 * 000000014072C223: jz      short loc_14072C237
 * 000000014072C225: mov     gs:8A6h, ax
 * 000000014072C22E: mov     ecx, 48h ; 'H'
 * 000000014072C233: xor     edx, edx
 * 000000014072C235: wrmsr
 * 000000014072C237: btr     word ptr gs:898h, 2
 * 000000014072C242: jnb     short loc_14072C252
 * 000000014072C244: mov     eax, 1
 * 000000014072C249: xor     edx, edx
 * 000000014072C24B: mov     ecx, 49h ; 'I'
 * 000000014072C250: wrmsr
 * 000000014072C252: btr     word ptr gs:898h, 5
 * 000000014072C25D: jnb     loc_14072C39A
 * 000000014072C263: call    loc_14072C376
 * 000000014072C268: add     rsp, 8
 * 000000014072C26C: call    loc_14072C37F
 * 000000014072C271: add     rsp, 8
 * 000000014072C275: call    loc_14072C268
 * 000000014072C27A: add     rsp, 8
 * 000000014072C27E: call    loc_14072C271
 * 000000014072C283: add     rsp, 8
 * 000000014072C287: call    loc_14072C27A
 * 000000014072C28C: add     rsp, 8
 * 000000014072C290: call    loc_14072C283
 * 000000014072C295: add     rsp, 8
 * 000000014072C299: call    loc_14072C28C
 * 000000014072C29E: add     rsp, 8
 * 000000014072C2A2: call    loc_14072C295
 * 000000014072C2A7: add     rsp, 8
 * 000000014072C2AB: call    loc_14072C29E
 * 000000014072C2B0: add     rsp, 8
 * 000000014072C2B4: call    loc_14072C2A7
 * 000000014072C2B9: add     rsp, 8
 * 000000014072C2BD: call    loc_14072C2B0
 * 000000014072C2C2: add     rsp, 8
 * 000000014072C2C6: call    loc_14072C2B9
 * 000000014072C2CB: add     rsp, 8
 * 000000014072C2CF: call    loc_14072C2C2
 * 000000014072C2D4: add     rsp, 8
 * 000000014072C2D8: call    loc_14072C2CB
 * 000000014072C2DD: add     rsp, 8
 * 000000014072C2E1: call    loc_14072C2D4
 * 000000014072C2E6: add     rsp, 8
 * 000000014072C2EA: call    loc_14072C2DD
 * 000000014072C2EF: add     rsp, 8
 * 000000014072C2F3: call    loc_14072C2E6
 * 000000014072C2F8: add     rsp, 8
 * 000000014072C2FC: call    loc_14072C2EF
 * 000000014072C301: add     rsp, 8
 * 000000014072C305: call    loc_14072C2F8
 * 000000014072C30A: add     rsp, 8
 * 000000014072C30E: call    loc_14072C301
 * 000000014072C313: add     rsp, 8
 * 000000014072C317: call    loc_14072C30A
 * 000000014072C31C: add     rsp, 8
 * 000000014072C320: call    loc_14072C313
 * 000000014072C325: add     rsp, 8
 * 000000014072C329: call    loc_14072C31C
 * 000000014072C32E: add     rsp, 8
 * 000000014072C332: call    loc_14072C325
 * 000000014072C337: add     rsp, 8
 * 000000014072C33B: call    loc_14072C32E
 * 000000014072C340: add     rsp, 8
 * 000000014072C344: call    loc_14072C337
 * 000000014072C349: add     rsp, 8
 * 000000014072C34D: call    loc_14072C340
 * 000000014072C352: add     rsp, 8
 * 000000014072C356: call    loc_14072C349
 * 000000014072C35B: add     rsp, 8
 * 000000014072C35F: call    loc_14072C352
 * 000000014072C364: add     rsp, 8
 * 000000014072C368: call    loc_14072C35B
 * 000000014072C36D: add     rsp, 8
 * 000000014072C371: call    loc_14072C364
 * 000000014072C376: add     rsp, 8
 * 000000014072C37A: call    loc_14072C36D
 * 000000014072C37F: add     rsp, 8
 * 000000014072C383: mov     eax, 0DADAh
 * 000000014072C388: test    byte ptr gs:89Ch, 8
 * 000000014072C391: jz      short loc_14072C39A
 * 000000014072C393: mov     al, 20h ; ' '
 * 000000014072C395: incsspq rax
 * 000000014072C39A: test    word ptr gs:898h, 100h
 * 000000014072C3A5: jz      short loc_14072C3B3
 * 000000014072C3A7: xor     eax, eax
 * 000000014072C3A9: xor     edx, edx
 * 000000014072C3AB: mov     ecx, 1
 * 000000014072C3B0: div     rcx
 * 000000014072C3B3: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072C3B7: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072C3BB: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072C3BF: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072C3C3: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072C3C7: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072C3CB: mov     r11, [rbp-20h]
 * 000000014072C3CF: mov     r10, [rbp-28h]
 * 000000014072C3D3: mov     r9, [rbp-30h]
 * 000000014072C3D7: mov     r8, [rbp-38h]
 * 000000014072C3DB: mov     rdx, [rbp-40h]
 * 000000014072C3DF: mov     rcx, [rbp-48h]
 * 000000014072C3E3: mov     rax, [rbp-50h]
 * 000000014072C3E7: mov     rsp, rbp
 * 000000014072C3EA: mov     rbp, [rbp+0D8h]
 * 000000014072C3F1: add     rsp, 0E8h
 * 000000014072C3F8: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072C3FF: jz      short loc_14072C406
 * 000000014072C401: jmp     KiKernelExit
 * 000000014072C406: test    word ptr gs:898h, 200h
 * 000000014072C411: jz      short loc_14072C418
 * 000000014072C413: verw    [rsp-1E8h+arg_200]
 * 000000014072C418: swapgs
 * 000000014072C41B: iretq
 * 000000014072C41D: ldmxcsr dword ptr [rbp-54h]
 * 000000014072C421: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072C425: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072C429: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072C42D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072C431: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072C435: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072C439: mov     r11, [rbp-20h]
 * 000000014072C43D: mov     r10, [rbp-28h]
 * 000000014072C441: mov     r9, [rbp-30h]
 * 000000014072C445: mov     r8, [rbp-38h]
 * 000000014072C449: mov     rdx, [rbp-40h]
 * 000000014072C44D: mov     rcx, [rbp-48h]
 * 000000014072C451: mov     rax, [rbp-50h]
 * 000000014072C455: mov     rsp, rbp
 * 000000014072C458: mov     rbp, [rbp+0D8h]
 * 000000014072C45F: add     rsp, 0E8h
 * 000000014072C466: iretq
 * 000000014072C468: add     rsp, 138h
 * 000000014072C46F: retn
 */
