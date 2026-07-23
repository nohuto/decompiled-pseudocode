/*
 * XREFs of KiExceptionDispatch @ 0x140741140
 * Callers:
 *     KiDivideErrorFault @ 0x140737D00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x140738240 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x140738C80 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x140739040 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x1407393C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140739B00 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14073A200 (KiNpxNotAvailableFault.c)
 *     KiSegmentNotPresentFault @ 0x14073B100 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14073B500 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14073B8C0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14073BC80 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14073C500 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x14073C900 (KiAlignmentFault.c)
 *     KiXmmException @ 0x14073DB40 (KiXmmException.c)
 *     KiControlProtectionFault @ 0x14073E700 (KiControlProtectionFault.c)
 *     KiRaiseAssertion @ 0x14073F2C0 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x14073F680 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x14073FD00 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x140740280 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140C60E40 (KiSystemCall32Shadow.c)
 * Callees:
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiExceptionDispatchOnExceptionStack @ 0x14072CB40 (KiExceptionDispatchOnExceptionStack.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiExceptionDispatch @ 0x140741140
 * Reason: Hex-Rays returned no pseudocode for 0x140741140
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140741140: sub     rsp, 1D8h
 * 0000000140741147: lea     rax, [rsp+1D8h+var_D8]
 * 000000014074114F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 0000000140741154: movaps  [rsp+1D8h+var_198], xmm7
 * 0000000140741159: movaps  [rsp+1D8h+var_188], xmm8
 * 000000014074115F: movaps  [rsp+1D8h+var_178], xmm9
 * 0000000140741165: movaps  [rsp+1D8h+var_168], xmm10
 * 000000014074116B: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140741170: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140741175: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014074117A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014074117F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140741184: mov     [rax], rbx
 * 0000000140741187: mov     [rax+8], rdi
 * 000000014074118B: mov     [rax+10h], rsi
 * 000000014074118F: mov     [rax+18h], r12
 * 0000000140741193: mov     [rax+20h], r13
 * 0000000140741197: mov     [rax+28h], r14
 * 000000014074119B: mov     [rax+30h], r15
 * 000000014074119F: lea     rax, [rsp+1D8h+var_A0]
 * 00000001407411A7: mov     [rax], ecx
 * 00000001407411A9: xor     ecx, ecx
 * 00000001407411AB: mov     [rax+4], ecx
 * 00000001407411AE: mov     [rax+8], rcx
 * 00000001407411B2: mov     [rax+10h], r8
 * 00000001407411B6: mov     [rax+18h], edx
 * 00000001407411B9: mov     [rax+20h], r9
 * 00000001407411BD: mov     [rax+28h], r10
 * 00000001407411C1: mov     [rax+30h], r11
 * 00000001407411C5: bt      rdx, 20h ; ' '
 * 00000001407411CA: setnb   dl
 * 00000001407411CD: mov     [rsp+1D8h+var_1B8], dl; char
 * 00000001407411D1: mov     r9b, [rbp+0F0h]
 * 00000001407411D8: and     r9b, 1
 * 00000001407411DC: lea     r8, [rbp-80h]
 * 00000001407411E0: mov     rdx, rsp
 * 00000001407411E3: mov     rcx, rax; int
 * 00000001407411E6: jnz     loc_140741287
 * 00000001407411EC: mov     r10, cr8
 * 00000001407411F0: mov     r11, 2
 * 00000001407411F7: test    dword ptr [rbp+0F8h], 200h
 * 0000000140741201: cmovz   r10, r11
 * 0000000140741205: cmp     r10, r11
 * 0000000140741208: jb      short loc_140741287
 * 000000014074120A: cmp     byte ptr gs:88E6h, 0
 * 0000000140741213: jnz     short loc_140741287
 * 0000000140741215: mov     r10, gs:88E8h
 * 000000014074121E: add     r10, 50h ; 'P'
 * 0000000140741222: cmp     rsp, r10
 * 0000000140741225: ja      short loc_140741236
 * 0000000140741227: mov     r11d, cs:KeExceptionStackSize
 * 000000014074122E: sub     r10, r11
 * 0000000140741231: cmp     rsp, r10
 * 0000000140741234: jnb     short loc_140741287
 * 0000000140741236: mov     r10, gs:9198h
 * 000000014074123F: cmp     rsp, r10
 * 0000000140741242: ja      short loc_140741253
 * 0000000140741244: mov     r11d, cs:KeIsrStackSize
 * 000000014074124B: sub     r10, r11
 * 000000014074124E: cmp     rsp, r10
 * 0000000140741251: jnb     short loc_140741287
 * 0000000140741253: mov     r10, gs:8
 * 000000014074125C: mov     r10, [r10+24h]
 * 0000000140741260: cmp     rsp, r10
 * 0000000140741263: ja      short loc_140741274
 * 0000000140741265: mov     r11d, cs:KeIstStackSize
 * 000000014074126C: sub     r10, r11
 * 000000014074126F: cmp     rsp, r10
 * 0000000140741272: jnb     short loc_140741287
 * 0000000140741274: cmp     word ptr gs:8526h, 0
 * 000000014074127E: jnz     short loc_140741287
 * 0000000140741280: call    KiExceptionDispatchOnExceptionStack
 * 0000000140741285: jmp     short loc_14074128C
 * 0000000140741287: call    KiDispatchException
 * 000000014074128C: lea     rcx, [rsp+1D8h+var_D8]
 * 0000000140741294: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 0000000140741299: movaps  xmm7, [rsp+1D8h+var_198]
 * 000000014074129E: movaps  xmm8, [rsp+1D8h+var_188]
 * 00000001407412A4: movaps  xmm9, [rsp+1D8h+var_178]
 * 00000001407412AA: movaps  xmm10, [rsp+1D8h+var_168]
 * 00000001407412B0: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001407412B5: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001407412BA: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001407412BF: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001407412C4: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001407412C9: mov     rbx, [rcx]
 * 00000001407412CC: mov     rdi, [rcx+8]
 * 00000001407412D0: mov     rsi, [rcx+10h]
 * 00000001407412D4: mov     r12, [rcx+18h]
 * 00000001407412D8: mov     r13, [rcx+20h]
 * 00000001407412DC: mov     r14, [rcx+28h]
 * 00000001407412E0: mov     r15, [rcx+30h]
 * 00000001407412E4: cli
 * 00000001407412E5: xor     ecx, ecx
 * 00000001407412E7: rdsspq  rcx
 * 00000001407412EC: test    rcx, rcx
 * 00000001407412EF: jz      short loc_1407412FB
 * 00000001407412F1: mov     ecx, 1
 * 00000001407412F6: incsspq rcx
 * 00000001407412FB: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140741302: jz      short loc_14074130C
 * 0000000140741304: lea     rsp, [rbp-88h]
 * 000000014074130B: retn
 * 000000014074130C: test    byte ptr [rbp+0F0h], 1
 * 0000000140741313: jz      loc_140741614
 * 0000000140741319: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140741320: jz      short loc_140741325
 * 0000000140741322: stac
 * 0000000140741325: mov     rcx, gs:188h
 * 000000014074132E: test    byte ptr [rcx+0C2h], 3
 * 0000000140741335: jz      short loc_140741352
 * 0000000140741337: mov     ecx, 1
 * 000000014074133C: mov     cr8, rcx
 * 0000000140741340: sti
 * 0000000140741341: call    KiInitiateUserApc
 * 0000000140741346: cli
 * 0000000140741347: mov     ecx, 0
 * 000000014074134C: mov     cr8, rcx
 * 0000000140741350: jmp     short loc_140741325
 * 0000000140741352: test    byte ptr [rcx+3], 80h
 * 0000000140741356: jz      short loc_140741365
 * 0000000140741358: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014074135D: test    eax, eax
 * 000000014074135F: mov     rax, [rbp-50h]
 * 0000000140741363: jnz     short loc_140741325
 * 0000000140741365: test    byte ptr gs:8A0h, 2
 * 000000014074136E: jz      short loc_140741377
 * 0000000140741370: xor     ecx, ecx
 * 0000000140741372: call    KiUpdateStibpPairing
 * 0000000140741377: mov     rcx, gs:188h
 * 0000000140741380: test    dword ptr [rcx], 8000000h
 * 0000000140741386: jz      short loc_14074138D
 * 0000000140741388: call    KiRestoreSetContextState
 * 000000014074138D: mov     rcx, gs:188h
 * 0000000140741396: test    dword ptr [rcx], 10000h
 * 000000014074139C: jz      short loc_1407413B2
 * 000000014074139E: test    byte ptr [rcx+2], 1
 * 00000001407413A2: jz      short loc_1407413B2
 * 00000001407413A4: call    KiCopyCounters
 * 00000001407413A9: mov     rcx, gs:188h
 * 00000001407413B2: ldmxcsr dword ptr [rbp-54h]
 * 00000001407413B6: cmp     word ptr [rbp+80h], 0
 * 00000001407413BE: jz      short loc_1407413C5
 * 00000001407413C0: call    KiRestoreDebugRegisterState
 * 00000001407413C5: mov     rcx, gs:188h
 * 00000001407413CE: bt      dword ptr [rcx+74h], 16h
 * 00000001407413D3: jnb     short loc_1407413FF
 * 00000001407413D5: xor     ecx, ecx
 * 00000001407413D7: rdsspq  rcx
 * 00000001407413DC: mov     r8, gs:9D68h
 * 00000001407413E5: add     r8, 8
 * 00000001407413E9: cmp     rcx, r8
 * 00000001407413EC: jnz     short loc_1407413FF
 * 00000001407413EE: mov     rcx, gs:9D60h
 * 00000001407413F7: rstorssp qword ptr [rcx]
 * 00000001407413FB: saveprevssp
 * 00000001407413FF: mov     byte ptr gs:89Eh, 0
 * 0000000140741408: movzx   eax, word ptr gs:8ACh
 * 0000000140741411: cmp     gs:8A6h, ax
 * 000000014074141A: jz      short loc_14074142E
 * 000000014074141C: mov     gs:8A6h, ax
 * 0000000140741425: mov     ecx, 48h ; 'H'
 * 000000014074142A: xor     edx, edx
 * 000000014074142C: wrmsr
 * 000000014074142E: btr     word ptr gs:898h, 2
 * 0000000140741439: jnb     short loc_140741449
 * 000000014074143B: mov     eax, 1
 * 0000000140741440: xor     edx, edx
 * 0000000140741442: mov     ecx, 49h ; 'I'
 * 0000000140741447: wrmsr
 * 0000000140741449: btr     word ptr gs:898h, 5
 * 0000000140741454: jnb     loc_140741591
 * 000000014074145A: call    loc_14074156D
 * 000000014074145F: add     rsp, 8
 * 0000000140741463: call    loc_140741576
 * 0000000140741468: add     rsp, 8
 * 000000014074146C: call    loc_14074145F
 * 0000000140741471: add     rsp, 8
 * 0000000140741475: call    loc_140741468
 * 000000014074147A: add     rsp, 8
 * 000000014074147E: call    loc_140741471
 * 0000000140741483: add     rsp, 8
 * 0000000140741487: call    loc_14074147A
 * 000000014074148C: add     rsp, 8
 * 0000000140741490: call    loc_140741483
 * 0000000140741495: add     rsp, 8
 * 0000000140741499: call    loc_14074148C
 * 000000014074149E: add     rsp, 8
 * 00000001407414A2: call    loc_140741495
 * 00000001407414A7: add     rsp, 8
 * 00000001407414AB: call    loc_14074149E
 * 00000001407414B0: add     rsp, 8
 * 00000001407414B4: call    loc_1407414A7
 * 00000001407414B9: add     rsp, 8
 * 00000001407414BD: call    loc_1407414B0
 * 00000001407414C2: add     rsp, 8
 * 00000001407414C6: call    loc_1407414B9
 * 00000001407414CB: add     rsp, 8
 * 00000001407414CF: call    loc_1407414C2
 * 00000001407414D4: add     rsp, 8
 * 00000001407414D8: call    loc_1407414CB
 * 00000001407414DD: add     rsp, 8
 * 00000001407414E1: call    loc_1407414D4
 * 00000001407414E6: add     rsp, 8
 * 00000001407414EA: call    loc_1407414DD
 * 00000001407414EF: add     rsp, 8
 * 00000001407414F3: call    loc_1407414E6
 * 00000001407414F8: add     rsp, 8
 * 00000001407414FC: call    loc_1407414EF
 * 0000000140741501: add     rsp, 8
 * 0000000140741505: call    loc_1407414F8
 * 000000014074150A: add     rsp, 8
 * 000000014074150E: call    loc_140741501
 * 0000000140741513: add     rsp, 8
 * 0000000140741517: call    loc_14074150A
 * 000000014074151C: add     rsp, 8
 * 0000000140741520: call    loc_140741513
 * 0000000140741525: add     rsp, 8
 * 0000000140741529: call    loc_14074151C
 * 000000014074152E: add     rsp, 8
 * 0000000140741532: call    loc_140741525
 * 0000000140741537: add     rsp, 8
 * 000000014074153B: call    loc_14074152E
 * 0000000140741540: add     rsp, 8
 * 0000000140741544: call    loc_140741537
 * 0000000140741549: add     rsp, 8
 * 000000014074154D: call    loc_140741540
 * 0000000140741552: add     rsp, 8
 * 0000000140741556: call    loc_140741549
 * 000000014074155B: add     rsp, 8
 * 000000014074155F: call    loc_140741552
 * 0000000140741564: add     rsp, 8
 * 0000000140741568: call    loc_14074155B
 * 000000014074156D: add     rsp, 8
 * 0000000140741571: call    loc_140741564
 * 0000000140741576: add     rsp, 8
 * 000000014074157A: mov     eax, 0DADAh
 * 000000014074157F: test    byte ptr gs:89Ch, 8
 * 0000000140741588: jz      short loc_140741591
 * 000000014074158A: mov     al, 20h ; ' '
 * 000000014074158C: incsspq rax
 * 0000000140741591: test    word ptr gs:898h, 100h
 * 000000014074159C: jz      short loc_1407415AA
 * 000000014074159E: xor     eax, eax
 * 00000001407415A0: xor     edx, edx
 * 00000001407415A2: mov     ecx, 1
 * 00000001407415A7: div     rcx
 * 00000001407415AA: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001407415AE: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001407415B2: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001407415B6: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001407415BA: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001407415BE: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001407415C2: mov     r11, [rbp-20h]
 * 00000001407415C6: mov     r10, [rbp-28h]
 * 00000001407415CA: mov     r9, [rbp-30h]
 * 00000001407415CE: mov     r8, [rbp-38h]
 * 00000001407415D2: mov     rdx, [rbp-40h]
 * 00000001407415D6: mov     rcx, [rbp-48h]
 * 00000001407415DA: mov     rax, [rbp-50h]
 * 00000001407415DE: mov     rsp, rbp
 * 00000001407415E1: mov     rbp, [rbp+0D8h]
 * 00000001407415E8: add     rsp, 0E8h
 * 00000001407415EF: test    byte ptr cs:KiTrapFeatures, 1
 * 00000001407415F6: jz      short loc_1407415FD
 * 00000001407415F8: jmp     KiKernelExit
 * 00000001407415FD: test    word ptr gs:898h, 200h
 * 0000000140741608: jz      short loc_14074160F
 * 000000014074160A: verw    [rsp-1E8h+arg_200]
 * 000000014074160F: swapgs
 * 0000000140741612: iretq
 * 0000000140741614: ldmxcsr dword ptr [rbp-54h]
 * 0000000140741618: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014074161C: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140741620: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140741624: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140741628: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014074162C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140741630: mov     r11, [rbp-20h]
 * 0000000140741634: mov     r10, [rbp-28h]
 * 0000000140741638: mov     r9, [rbp-30h]
 * 000000014074163C: mov     r8, [rbp-38h]
 * 0000000140741640: mov     rdx, [rbp-40h]
 * 0000000140741644: mov     rcx, [rbp-48h]
 * 0000000140741648: mov     rax, [rbp-50h]
 * 000000014074164C: mov     rsp, rbp
 * 000000014074164F: mov     rbp, [rbp+0D8h]
 * 0000000140741656: add     rsp, 0E8h
 * 000000014074165D: iretq
 */
