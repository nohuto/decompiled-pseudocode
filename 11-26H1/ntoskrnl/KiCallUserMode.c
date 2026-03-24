/*
 * XREFs of KiCallUserMode @ 0x140728580
 * Callers:
 *     KeUserModeCallback @ 0x140A59280 (KeUserModeCallback.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiCallUserMode @ 0x140728580 (KiCallUserMode.c)
 */

/*
 * Hex-Rays decompilation failed for KiCallUserMode @ 0x140728580
 * Reason: Hex-Rays returned no pseudocode for 0x140728580
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140728580: sub     rsp, 138h
 * 0000000140728587: lea     rax, [rsp+138h+var_38]
 * 000000014072858F: movaps  [rsp+138h+var_108], xmm6
 * 0000000140728594: movaps  [rsp+138h+var_F8], xmm7
 * 0000000140728599: movaps  [rsp+138h+var_E8], xmm8
 * 000000014072859F: movaps  [rsp+138h+var_D8], xmm9
 * 00000001407285A5: movaps  [rsp+138h+var_C8], xmm10
 * 00000001407285AB: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001407285B0: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001407285B5: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001407285BA: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001407285BF: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001407285C4: mov     [rax-8], rbp
 * 00000001407285C8: mov     rbp, rsp
 * 00000001407285CB: mov     [rax], rbx
 * 00000001407285CE: mov     [rax+8], rdi
 * 00000001407285D2: mov     [rax+10h], rsi
 * 00000001407285D6: mov     [rax+18h], r12
 * 00000001407285DA: mov     [rax+20h], r13
 * 00000001407285DE: mov     [rax+28h], r14
 * 00000001407285E2: mov     [rax+30h], r15
 * 00000001407285E6: xor     r10, r10
 * 00000001407285E9: xor     r12, r12
 * 00000001407285EC: xor     r13, r13
 * 00000001407285EF: xor     r14, r14
 * 00000001407285F2: xor     r15, r15
 * 00000001407285F5: pxor    xmm6, xmm6
 * 00000001407285F9: pxor    xmm7, xmm7
 * 00000001407285FD: pxor    xmm8, xmm8
 * 0000000140728602: pxor    xmm9, xmm9
 * 0000000140728607: pxor    xmm10, xmm10
 * 000000014072860C: pxor    xmm11, xmm11
 * 0000000140728611: pxor    xmm12, xmm12
 * 0000000140728616: pxor    xmm13, xmm13
 * 000000014072861B: pxor    xmm14, xmm14
 * 0000000140728620: pxor    xmm15, xmm15
 * 0000000140728625: mov     [rbp+0D8h], rcx
 * 000000014072862C: mov     [rbp+0E0h], rdx
 * 0000000140728633: mov     rbx, gs:188h
 * 000000014072863C: mov     [r8+20h], rsp
 * 0000000140728640: mov     rsi, [rbx+90h]
 * 0000000140728647: mov     [rbp+0D0h], rsi
 * 000000014072864E: cli
 * 000000014072864F: mov     [rbx+28h], r8
 * 0000000140728653: mov     [rbx+38h], r9
 * 0000000140728657: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072865E: jnz     short loc_14072866F
 * 0000000140728660: mov     rdi, gs:8
 * 0000000140728669: mov     [rdi+4], r8
 * 000000014072866D: jmp     short loc_140728678
 * 000000014072866F: mov     gs:0B008h, r8
 * 0000000140728678: mov     ecx, cs:KeKernelStackSize
 * 000000014072867E: sub     r9, rcx
 * 0000000140728681: mov     gs:1A8h, r8
 * 000000014072868A: mov     [rbx+30h], r9
 * 000000014072868E: mov     rcx, [rsp+138h+arg_20]
 * 0000000140728696: test    rcx, rcx
 * 0000000140728699: jz      short loc_1407286E5
 * 000000014072869B: mov     [rbx+418h], rcx
 * 00000001407286A2: sub     rcx, 3000h
 * 00000001407286A9: mov     [rbx+420h], rcx
 * 00000001407286B0: or      qword ptr [rbx+420h], 2
 * 00000001407286B8: mov     rcx, [rsp+138h+arg_28]
 * 00000001407286C0: mov     [rbx+410h], rcx
 * 00000001407286C7: mov     gs:9D68h, rcx
 * 00000001407286D0: rdsspq  rdx
 * 00000001407286D5: rstorssp qword ptr [rcx]
 * 00000001407286D9: saveprevssp
 * 00000001407286DD: sub     rdx, 8
 * 00000001407286E1: mov     [r8+40h], rdx
 * 00000001407286E5: mov     ecx, 190h
 * 00000001407286EA: mov     edx, 1A0h
 * 00000001407286EF: test    byte ptr cs:KiTrapFeatures, 2
 * 00000001407286F6: cmovnz  ecx, edx
 * 00000001407286F9: mov     rsp, r8
 * 00000001407286FC: sub     rsp, rcx
 * 00000001407286FF: mov     rdi, rsp
 * 0000000140728702: shr     ecx, 3
 * 0000000140728705: rep movsq
 * 0000000140728708: xor     edi, edi
 * 000000014072870A: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140728711: jz      short loc_14072874C
 * 0000000140728713: mov     ecx, 1CCh
 * 0000000140728718: mov     eax, r8d
 * 000000014072871B: mov     rdx, r8
 * 000000014072871E: shr     rdx, 20h
 * 0000000140728722: wrmsr
 * 0000000140728724: lea     rbp, [rsp+2D8h+var_258]
 * 000000014072872C: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140728735: mov     rax, cs:stru_140FC01F0.KernelWaitTime
 * 000000014072873C: mov     [rbp+0E8h], rax
 * 0000000140728743: xor     ebx, ebx
 * 0000000140728745: xor     esi, esi
 * 0000000140728747: jmp     KiExitUserModeEvent
 * 000000014072874C: test    byte ptr [rbx+0C2h], 3
 * 0000000140728753: jnz     loc_140728A2F
 * 0000000140728759: test    dword ptr [rbx], 8010000h
 * 000000014072875F: jnz     loc_140728A2F
 * 0000000140728765: test    byte ptr gs:8A0h, 2
 * 000000014072876E: jnz     loc_140728A2F
 * 0000000140728774: test    byte ptr [rbx+3], 80h
 * 0000000140728778: jz      short loc_140728787
 * 000000014072877A: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072877F: test    eax, eax
 * 0000000140728781: jnz     loc_140728A2F
 * 0000000140728787: lea     rbp, [rsi-110h]
 * 000000014072878E: ldmxcsr dword ptr [rbp-54h]
 * 0000000140728792: xor     esi, esi
 * 0000000140728794: test    byte ptr [rbx+3], 3
 * 0000000140728798: jnz     loc_140728A04
 * 000000014072879E: mov     r9, cs:stru_140FC01F0.KernelWaitTime
 * 00000001407287A5: mov     rcx, gs:188h
 * 00000001407287AE: bt      dword ptr [rcx+74h], 16h
 * 00000001407287B3: jnb     short loc_1407287DF
 * 00000001407287B5: xor     ecx, ecx
 * 00000001407287B7: rdsspq  rcx
 * 00000001407287BC: mov     r8, gs:9D68h
 * 00000001407287C5: add     r8, 8
 * 00000001407287C9: cmp     rcx, r8
 * 00000001407287CC: jnz     short loc_1407287DF
 * 00000001407287CE: mov     rcx, gs:9D60h
 * 00000001407287D7: rstorssp qword ptr [rcx]
 * 00000001407287DB: saveprevssp
 * 00000001407287DF: mov     byte ptr gs:89Eh, 0
 * 00000001407287E8: movzx   eax, word ptr gs:8ACh
 * 00000001407287F1: cmp     gs:8A6h, ax
 * 00000001407287FA: jz      short loc_14072880E
 * 00000001407287FC: mov     gs:8A6h, ax
 * 0000000140728805: mov     ecx, 48h ; 'H'
 * 000000014072880A: xor     edx, edx
 * 000000014072880C: wrmsr
 * 000000014072880E: btr     word ptr gs:898h, 2
 * 0000000140728819: jnb     short loc_140728829
 * 000000014072881B: mov     eax, 1
 * 0000000140728820: xor     edx, edx
 * 0000000140728822: mov     ecx, 49h ; 'I'
 * 0000000140728827: wrmsr
 * 0000000140728829: btr     word ptr gs:898h, 5
 * 0000000140728834: jnb     loc_140728971
 * 000000014072883A: call    loc_14072894D
 * 000000014072883F: add     rsp, 8
 * 0000000140728843: call    loc_140728956
 * 0000000140728848: add     rsp, 8
 * 000000014072884C: call    loc_14072883F
 * 0000000140728851: add     rsp, 8
 * 0000000140728855: call    loc_140728848
 * 000000014072885A: add     rsp, 8
 * 000000014072885E: call    loc_140728851
 * 0000000140728863: add     rsp, 8
 * 0000000140728867: call    loc_14072885A
 * 000000014072886C: add     rsp, 8
 * 0000000140728870: call    loc_140728863
 * 0000000140728875: add     rsp, 8
 * 0000000140728879: call    loc_14072886C
 * 000000014072887E: add     rsp, 8
 * 0000000140728882: call    loc_140728875
 * 0000000140728887: add     rsp, 8
 * 000000014072888B: call    loc_14072887E
 * 0000000140728890: add     rsp, 8
 * 0000000140728894: call    loc_140728887
 * 0000000140728899: add     rsp, 8
 * 000000014072889D: call    loc_140728890
 * 00000001407288A2: add     rsp, 8
 * 00000001407288A6: call    loc_140728899
 * 00000001407288AB: add     rsp, 8
 * 00000001407288AF: call    loc_1407288A2
 * 00000001407288B4: add     rsp, 8
 * 00000001407288B8: call    loc_1407288AB
 * 00000001407288BD: add     rsp, 8
 * 00000001407288C1: call    loc_1407288B4
 * 00000001407288C6: add     rsp, 8
 * 00000001407288CA: call    loc_1407288BD
 * 00000001407288CF: add     rsp, 8
 * 00000001407288D3: call    loc_1407288C6
 * 00000001407288D8: add     rsp, 8
 * 00000001407288DC: call    loc_1407288CF
 * 00000001407288E1: add     rsp, 8
 * 00000001407288E5: call    loc_1407288D8
 * 00000001407288EA: add     rsp, 8
 * 00000001407288EE: call    loc_1407288E1
 * 00000001407288F3: add     rsp, 8
 * 00000001407288F7: call    loc_1407288EA
 * 00000001407288FC: add     rsp, 8
 * 0000000140728900: call    loc_1407288F3
 * 0000000140728905: add     rsp, 8
 * 0000000140728909: call    loc_1407288FC
 * 000000014072890E: add     rsp, 8
 * 0000000140728912: call    loc_140728905
 * 0000000140728917: add     rsp, 8
 * 000000014072891B: call    loc_14072890E
 * 0000000140728920: add     rsp, 8
 * 0000000140728924: call    loc_140728917
 * 0000000140728929: add     rsp, 8
 * 000000014072892D: call    loc_140728920
 * 0000000140728932: add     rsp, 8
 * 0000000140728936: call    loc_140728929
 * 000000014072893B: add     rsp, 8
 * 000000014072893F: call    loc_140728932
 * 0000000140728944: add     rsp, 8
 * 0000000140728948: call    loc_14072893B
 * 000000014072894D: add     rsp, 8
 * 0000000140728951: call    loc_140728944
 * 0000000140728956: add     rsp, 8
 * 000000014072895A: mov     eax, 0DADAh
 * 000000014072895F: test    byte ptr gs:89Ch, 8
 * 0000000140728968: jz      short loc_140728971
 * 000000014072896A: mov     al, 20h ; ' '
 * 000000014072896C: incsspq rax
 * 0000000140728971: test    word ptr gs:898h, 100h
 * 000000014072897C: jz      short loc_14072898A
 * 000000014072897E: xor     eax, eax
 * 0000000140728980: xor     edx, edx
 * 0000000140728982: mov     ecx, 1
 * 0000000140728987: div     rcx
 * 000000014072898A: mov     rcx, r9
 * 000000014072898D: xor     eax, eax
 * 000000014072898F: xor     edx, edx
 * 0000000140728991: mov     r8, [rbp+100h]
 * 0000000140728998: mov     r9, [rbp+0D8h]
 * 000000014072899F: pxor    xmm0, xmm0
 * 00000001407289A3: pxor    xmm1, xmm1
 * 00000001407289A7: pxor    xmm2, xmm2
 * 00000001407289AB: pxor    xmm3, xmm3
 * 00000001407289AF: pxor    xmm4, xmm4
 * 00000001407289B3: pxor    xmm5, xmm5
 * 00000001407289B7: mov     r11, [rbp+0F8h]
 * 00000001407289BE: xor     ebx, ebx
 * 00000001407289C0: test    byte ptr cs:KiTrapFeatures, 1
 * 00000001407289C7: jnz     KiKernelSysretExit
 * 00000001407289CD: mov     rbp, r9
 * 00000001407289D0: mov     rsp, r8
 * 00000001407289D3: xor     r9, r9
 * 00000001407289D6: rdsspq  r9
 * 00000001407289DB: test    r9, r9
 * 00000001407289DE: jz      short loc_1407289E8
 * 00000001407289E0: clrssbsy qword ptr [r9]
 * 00000001407289E5: xor     r9, r9
 * 00000001407289E8: test    word ptr gs:898h, 200h
 * 00000001407289F3: jz      short loc_1407289FE
 * 00000001407289F5: verw    word ptr gs:0B02Ah
 * 00000001407289FE: swapgs
 * 0000000140728A01: sysret
 * 0000000140728A04: call    KiRestoreDebugRegisterState
 * 0000000140728A09: mov     r10, cs:stru_140FC01F0.KernelWaitTime
 * 0000000140728A10: mov     r9, [rbx+0B8h]
 * 0000000140728A17: mov     r9, [r9+168h]
 * 0000000140728A1E: or      r9, r9
 * 0000000140728A21: jnz     loc_1407287A5
 * 0000000140728A27: xchg    r9, r10
 * 0000000140728A2A: jmp     loc_1407287A5
 * 0000000140728A2F: lea     rbp, [rsp+2D8h+var_258]
 * 0000000140728A37: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140728A40: mov     rax, cs:stru_140FC01F0.KernelWaitTime
 * 0000000140728A47: mov     [rbp+0E8h], rax
 * 0000000140728A4E: lea     rcx, KiSystemServiceExit
 * 0000000140728A55: jmp     rcx
 * 0000000140728A5B: retn
 */
