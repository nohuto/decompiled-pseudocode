/*
 * XREFs of KiCallUserMode @ 0x14072D150
 * Callers:
 *     KeUserModeCallback @ 0x140923D90 (KeUserModeCallback.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiCallUserMode @ 0x14072D150 (KiCallUserMode.c)
 */

/*
 * Hex-Rays decompilation failed for KiCallUserMode @ 0x14072D150
 * Reason: Hex-Rays returned no pseudocode for 0x14072D150
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072D150: sub     rsp, 138h
 * 000000014072D157: lea     rax, [rsp+138h+var_38]
 * 000000014072D15F: movaps  [rsp+138h+var_108], xmm6
 * 000000014072D164: movaps  [rsp+138h+var_F8], xmm7
 * 000000014072D169: movaps  [rsp+138h+var_E8], xmm8
 * 000000014072D16F: movaps  [rsp+138h+var_D8], xmm9
 * 000000014072D175: movaps  [rsp+138h+var_C8], xmm10
 * 000000014072D17B: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014072D180: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014072D185: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014072D18A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014072D18F: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014072D194: mov     [rax-8], rbp
 * 000000014072D198: mov     rbp, rsp
 * 000000014072D19B: mov     [rax], rbx
 * 000000014072D19E: mov     [rax+8], rdi
 * 000000014072D1A2: mov     [rax+10h], rsi
 * 000000014072D1A6: mov     [rax+18h], r12
 * 000000014072D1AA: mov     [rax+20h], r13
 * 000000014072D1AE: mov     [rax+28h], r14
 * 000000014072D1B2: mov     [rax+30h], r15
 * 000000014072D1B6: xor     r10, r10
 * 000000014072D1B9: xor     r12, r12
 * 000000014072D1BC: xor     r13, r13
 * 000000014072D1BF: xor     r14, r14
 * 000000014072D1C2: xor     r15, r15
 * 000000014072D1C5: pxor    xmm6, xmm6
 * 000000014072D1C9: pxor    xmm7, xmm7
 * 000000014072D1CD: pxor    xmm8, xmm8
 * 000000014072D1D2: pxor    xmm9, xmm9
 * 000000014072D1D7: pxor    xmm10, xmm10
 * 000000014072D1DC: pxor    xmm11, xmm11
 * 000000014072D1E1: pxor    xmm12, xmm12
 * 000000014072D1E6: pxor    xmm13, xmm13
 * 000000014072D1EB: pxor    xmm14, xmm14
 * 000000014072D1F0: pxor    xmm15, xmm15
 * 000000014072D1F5: mov     [rbp+0D8h], rcx
 * 000000014072D1FC: mov     [rbp+0E0h], rdx
 * 000000014072D203: mov     rbx, gs:188h
 * 000000014072D20C: mov     [r8+20h], rsp
 * 000000014072D210: mov     rsi, [rbx+90h]
 * 000000014072D217: mov     [rbp+0D0h], rsi
 * 000000014072D21E: cli
 * 000000014072D21F: mov     [rbx+28h], r8
 * 000000014072D223: mov     [rbx+38h], r9
 * 000000014072D227: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072D22E: jnz     short loc_14072D23F
 * 000000014072D230: mov     rdi, gs:8
 * 000000014072D239: mov     [rdi+4], r8
 * 000000014072D23D: jmp     short loc_14072D248
 * 000000014072D23F: mov     gs:0B008h, r8
 * 000000014072D248: mov     ecx, cs:KeKernelStackSize
 * 000000014072D24E: sub     r9, rcx
 * 000000014072D251: mov     gs:1A8h, r8
 * 000000014072D25A: mov     [rbx+30h], r9
 * 000000014072D25E: mov     rcx, [rsp+138h+arg_20]
 * 000000014072D266: test    rcx, rcx
 * 000000014072D269: jz      short loc_14072D2B5
 * 000000014072D26B: mov     [rbx+418h], rcx
 * 000000014072D272: sub     rcx, 3000h
 * 000000014072D279: mov     [rbx+420h], rcx
 * 000000014072D280: or      qword ptr [rbx+420h], 2
 * 000000014072D288: mov     rcx, [rsp+138h+arg_28]
 * 000000014072D290: mov     [rbx+410h], rcx
 * 000000014072D297: mov     gs:9D68h, rcx
 * 000000014072D2A0: rdsspq  rdx
 * 000000014072D2A5: rstorssp qword ptr [rcx]
 * 000000014072D2A9: saveprevssp
 * 000000014072D2AD: sub     rdx, 8
 * 000000014072D2B1: mov     [r8+40h], rdx
 * 000000014072D2B5: mov     ecx, 190h
 * 000000014072D2BA: mov     edx, 1A0h
 * 000000014072D2BF: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072D2C6: cmovnz  ecx, edx
 * 000000014072D2C9: mov     rsp, r8
 * 000000014072D2CC: sub     rsp, rcx
 * 000000014072D2CF: mov     rdi, rsp
 * 000000014072D2D2: shr     ecx, 3
 * 000000014072D2D5: rep movsq
 * 000000014072D2D8: xor     edi, edi
 * 000000014072D2DA: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072D2E1: jz      short loc_14072D31C
 * 000000014072D2E3: mov     ecx, 1CCh
 * 000000014072D2E8: mov     eax, r8d
 * 000000014072D2EB: mov     rdx, r8
 * 000000014072D2EE: shr     rdx, 20h
 * 000000014072D2F2: wrmsr
 * 000000014072D2F4: lea     rbp, [rsp+2D8h+var_258]
 * 000000014072D2FC: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 000000014072D305: mov     rax, cs:stru_140FC11F0.KernelWaitTime
 * 000000014072D30C: mov     [rbp+0E8h], rax
 * 000000014072D313: xor     ebx, ebx
 * 000000014072D315: xor     esi, esi
 * 000000014072D317: jmp     KiExitUserModeEvent
 * 000000014072D31C: test    byte ptr [rbx+0C2h], 3
 * 000000014072D323: jnz     loc_14072D5FF
 * 000000014072D329: test    dword ptr [rbx], 8010000h
 * 000000014072D32F: jnz     loc_14072D5FF
 * 000000014072D335: test    byte ptr gs:8A0h, 2
 * 000000014072D33E: jnz     loc_14072D5FF
 * 000000014072D344: test    byte ptr [rbx+3], 80h
 * 000000014072D348: jz      short loc_14072D357
 * 000000014072D34A: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072D34F: test    eax, eax
 * 000000014072D351: jnz     loc_14072D5FF
 * 000000014072D357: lea     rbp, [rsi-110h]
 * 000000014072D35E: ldmxcsr dword ptr [rbp-54h]
 * 000000014072D362: xor     esi, esi
 * 000000014072D364: test    byte ptr [rbx+3], 3
 * 000000014072D368: jnz     loc_14072D5D4
 * 000000014072D36E: mov     r9, cs:stru_140FC11F0.KernelWaitTime
 * 000000014072D375: mov     rcx, gs:188h
 * 000000014072D37E: bt      dword ptr [rcx+74h], 16h
 * 000000014072D383: jnb     short loc_14072D3AF
 * 000000014072D385: xor     ecx, ecx
 * 000000014072D387: rdsspq  rcx
 * 000000014072D38C: mov     r8, gs:9D68h
 * 000000014072D395: add     r8, 8
 * 000000014072D399: cmp     rcx, r8
 * 000000014072D39C: jnz     short loc_14072D3AF
 * 000000014072D39E: mov     rcx, gs:9D60h
 * 000000014072D3A7: rstorssp qword ptr [rcx]
 * 000000014072D3AB: saveprevssp
 * 000000014072D3AF: mov     byte ptr gs:89Eh, 0
 * 000000014072D3B8: movzx   eax, word ptr gs:8ACh
 * 000000014072D3C1: cmp     gs:8A6h, ax
 * 000000014072D3CA: jz      short loc_14072D3DE
 * 000000014072D3CC: mov     gs:8A6h, ax
 * 000000014072D3D5: mov     ecx, 48h ; 'H'
 * 000000014072D3DA: xor     edx, edx
 * 000000014072D3DC: wrmsr
 * 000000014072D3DE: btr     word ptr gs:898h, 2
 * 000000014072D3E9: jnb     short loc_14072D3F9
 * 000000014072D3EB: mov     eax, 1
 * 000000014072D3F0: xor     edx, edx
 * 000000014072D3F2: mov     ecx, 49h ; 'I'
 * 000000014072D3F7: wrmsr
 * 000000014072D3F9: btr     word ptr gs:898h, 5
 * 000000014072D404: jnb     loc_14072D541
 * 000000014072D40A: call    loc_14072D51D
 * 000000014072D40F: add     rsp, 8
 * 000000014072D413: call    loc_14072D526
 * 000000014072D418: add     rsp, 8
 * 000000014072D41C: call    loc_14072D40F
 * 000000014072D421: add     rsp, 8
 * 000000014072D425: call    loc_14072D418
 * 000000014072D42A: add     rsp, 8
 * 000000014072D42E: call    loc_14072D421
 * 000000014072D433: add     rsp, 8
 * 000000014072D437: call    loc_14072D42A
 * 000000014072D43C: add     rsp, 8
 * 000000014072D440: call    loc_14072D433
 * 000000014072D445: add     rsp, 8
 * 000000014072D449: call    loc_14072D43C
 * 000000014072D44E: add     rsp, 8
 * 000000014072D452: call    loc_14072D445
 * 000000014072D457: add     rsp, 8
 * 000000014072D45B: call    loc_14072D44E
 * 000000014072D460: add     rsp, 8
 * 000000014072D464: call    loc_14072D457
 * 000000014072D469: add     rsp, 8
 * 000000014072D46D: call    loc_14072D460
 * 000000014072D472: add     rsp, 8
 * 000000014072D476: call    loc_14072D469
 * 000000014072D47B: add     rsp, 8
 * 000000014072D47F: call    loc_14072D472
 * 000000014072D484: add     rsp, 8
 * 000000014072D488: call    loc_14072D47B
 * 000000014072D48D: add     rsp, 8
 * 000000014072D491: call    loc_14072D484
 * 000000014072D496: add     rsp, 8
 * 000000014072D49A: call    loc_14072D48D
 * 000000014072D49F: add     rsp, 8
 * 000000014072D4A3: call    loc_14072D496
 * 000000014072D4A8: add     rsp, 8
 * 000000014072D4AC: call    loc_14072D49F
 * 000000014072D4B1: add     rsp, 8
 * 000000014072D4B5: call    loc_14072D4A8
 * 000000014072D4BA: add     rsp, 8
 * 000000014072D4BE: call    loc_14072D4B1
 * 000000014072D4C3: add     rsp, 8
 * 000000014072D4C7: call    loc_14072D4BA
 * 000000014072D4CC: add     rsp, 8
 * 000000014072D4D0: call    loc_14072D4C3
 * 000000014072D4D5: add     rsp, 8
 * 000000014072D4D9: call    loc_14072D4CC
 * 000000014072D4DE: add     rsp, 8
 * 000000014072D4E2: call    loc_14072D4D5
 * 000000014072D4E7: add     rsp, 8
 * 000000014072D4EB: call    loc_14072D4DE
 * 000000014072D4F0: add     rsp, 8
 * 000000014072D4F4: call    loc_14072D4E7
 * 000000014072D4F9: add     rsp, 8
 * 000000014072D4FD: call    loc_14072D4F0
 * 000000014072D502: add     rsp, 8
 * 000000014072D506: call    loc_14072D4F9
 * 000000014072D50B: add     rsp, 8
 * 000000014072D50F: call    loc_14072D502
 * 000000014072D514: add     rsp, 8
 * 000000014072D518: call    loc_14072D50B
 * 000000014072D51D: add     rsp, 8
 * 000000014072D521: call    loc_14072D514
 * 000000014072D526: add     rsp, 8
 * 000000014072D52A: mov     eax, 0DADAh
 * 000000014072D52F: test    byte ptr gs:89Ch, 8
 * 000000014072D538: jz      short loc_14072D541
 * 000000014072D53A: mov     al, 20h ; ' '
 * 000000014072D53C: incsspq rax
 * 000000014072D541: test    word ptr gs:898h, 100h
 * 000000014072D54C: jz      short loc_14072D55A
 * 000000014072D54E: xor     eax, eax
 * 000000014072D550: xor     edx, edx
 * 000000014072D552: mov     ecx, 1
 * 000000014072D557: div     rcx
 * 000000014072D55A: mov     rcx, r9
 * 000000014072D55D: xor     eax, eax
 * 000000014072D55F: xor     edx, edx
 * 000000014072D561: mov     r8, [rbp+100h]
 * 000000014072D568: mov     r9, [rbp+0D8h]
 * 000000014072D56F: pxor    xmm0, xmm0
 * 000000014072D573: pxor    xmm1, xmm1
 * 000000014072D577: pxor    xmm2, xmm2
 * 000000014072D57B: pxor    xmm3, xmm3
 * 000000014072D57F: pxor    xmm4, xmm4
 * 000000014072D583: pxor    xmm5, xmm5
 * 000000014072D587: mov     r11, [rbp+0F8h]
 * 000000014072D58E: xor     ebx, ebx
 * 000000014072D590: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072D597: jnz     KiKernelSysretExit
 * 000000014072D59D: mov     rbp, r9
 * 000000014072D5A0: mov     rsp, r8
 * 000000014072D5A3: xor     r9, r9
 * 000000014072D5A6: rdsspq  r9
 * 000000014072D5AB: test    r9, r9
 * 000000014072D5AE: jz      short loc_14072D5B8
 * 000000014072D5B0: clrssbsy qword ptr [r9]
 * 000000014072D5B5: xor     r9, r9
 * 000000014072D5B8: test    word ptr gs:898h, 200h
 * 000000014072D5C3: jz      short loc_14072D5CE
 * 000000014072D5C5: verw    word ptr gs:0B02Ah
 * 000000014072D5CE: swapgs
 * 000000014072D5D1: sysret
 * 000000014072D5D4: call    KiRestoreDebugRegisterState
 * 000000014072D5D9: mov     r10, cs:stru_140FC11F0.KernelWaitTime
 * 000000014072D5E0: mov     r9, [rbx+0B8h]
 * 000000014072D5E7: mov     r9, [r9+168h]
 * 000000014072D5EE: or      r9, r9
 * 000000014072D5F1: jnz     loc_14072D375
 * 000000014072D5F7: xchg    r9, r10
 * 000000014072D5FA: jmp     loc_14072D375
 * 000000014072D5FF: lea     rbp, [rsp+2D8h+var_258]
 * 000000014072D607: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 000000014072D610: mov     rax, cs:stru_140FC11F0.KernelWaitTime
 * 000000014072D617: mov     [rbp+0E8h], rax
 * 000000014072D61E: lea     rcx, KiSystemServiceExit
 * 000000014072D625: jmp     rcx
 * 000000014072D62B: retn
 */
