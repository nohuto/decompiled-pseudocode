/*
 * XREFs of KxStartUserThread @ 0x140729310
 * Callers:
 *     KyStartUserThread @ 0x140728F90 (KyStartUserThread.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KxStartUserThread @ 0x140729310 (KxStartUserThread.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

/*
 * Hex-Rays decompilation failed for KxStartUserThread @ 0x140729310
 * Reason: Hex-Rays returned no pseudocode for 0x140729310
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140729310: sub     rsp, 138h
 * 0000000140729317: lea     rax, [rsp+138h+var_38]
 * 000000014072931F: movaps  [rsp+138h+var_108], xmm6
 * 0000000140729324: movaps  [rsp+138h+var_F8], xmm7
 * 0000000140729329: movaps  [rsp+138h+var_E8], xmm8
 * 000000014072932F: movaps  [rsp+138h+var_D8], xmm9
 * 0000000140729335: movaps  [rsp+138h+var_C8], xmm10
 * 000000014072933B: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140729340: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140729345: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014072934A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014072934F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140729354: mov     [rax], rbx
 * 0000000140729357: mov     [rax+8], rdi
 * 000000014072935B: mov     [rax+10h], rsi
 * 000000014072935F: mov     [rax+18h], r12
 * 0000000140729363: mov     [rax+20h], r13
 * 0000000140729367: mov     [rax+28h], r14
 * 000000014072936B: mov     [rax+30h], r15
 * 000000014072936F: nop
 * 0000000140729370: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140729377: jz      short loc_14072937C
 * 0000000140729379: stac
 * 000000014072937C: mov     ecx, 1
 * 0000000140729381: mov     cr8, rcx
 * 0000000140729385: mov     rdx, [rsp+138h+var_138]
 * 0000000140729389: mov     rcx, [rsp+138h+var_130]
 * 000000014072938E: mov     rax, [rsp+138h+var_128]
 * 0000000140729393: call    _guard_dispatch_icall_no_overrides
 * 0000000140729398: lea     rcx, [rsp+138h+var_38]
 * 00000001407293A0: movaps  xmm6, [rsp+138h+var_108]
 * 00000001407293A5: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001407293AA: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001407293B0: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001407293B6: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001407293BC: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001407293C1: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001407293C6: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001407293CB: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001407293D0: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001407293D5: mov     rbx, [rcx]
 * 00000001407293D8: mov     rdi, [rcx+8]
 * 00000001407293DC: mov     rsi, [rcx+10h]
 * 00000001407293E0: mov     r12, [rcx+18h]
 * 00000001407293E4: mov     r13, [rcx+20h]
 * 00000001407293E8: mov     r14, [rcx+28h]
 * 00000001407293EC: mov     r15, [rcx+30h]
 * 00000001407293F0: test    byte ptr cs:KiTrapFeatures, 2
 * 00000001407293F7: jz      short loc_1407293FF
 * 00000001407293F9: cli
 * 00000001407293FA: jmp     KiExitUserModeEvent
 * 00000001407293FF: cli
 * 0000000140729400: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140729407: jz      short loc_14072940E
 * 0000000140729409: add     rsp, 28h
 * 000000014072940D: retn
 * 000000014072940E: test    byte ptr [rbp+0F0h], 1
 * 0000000140729415: jz      loc_140729716
 * 000000014072941B: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140729422: jz      short loc_140729427
 * 0000000140729424: stac
 * 0000000140729427: mov     rcx, gs:188h
 * 0000000140729430: test    byte ptr [rcx+0C2h], 3
 * 0000000140729437: jz      short loc_140729454
 * 0000000140729439: mov     ecx, 1
 * 000000014072943E: mov     cr8, rcx
 * 0000000140729442: sti
 * 0000000140729443: call    KiInitiateUserApc
 * 0000000140729448: cli
 * 0000000140729449: mov     ecx, 0
 * 000000014072944E: mov     cr8, rcx
 * 0000000140729452: jmp     short loc_140729427
 * 0000000140729454: test    byte ptr [rcx+3], 80h
 * 0000000140729458: jz      short loc_140729467
 * 000000014072945A: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072945F: test    eax, eax
 * 0000000140729461: mov     rax, [rbp-50h]
 * 0000000140729465: jnz     short loc_140729427
 * 0000000140729467: test    byte ptr gs:8A0h, 2
 * 0000000140729470: jz      short loc_140729479
 * 0000000140729472: xor     ecx, ecx
 * 0000000140729474: call    KiUpdateStibpPairing
 * 0000000140729479: mov     rcx, gs:188h
 * 0000000140729482: test    dword ptr [rcx], 8000000h
 * 0000000140729488: jz      short loc_14072948F
 * 000000014072948A: call    KiRestoreSetContextState
 * 000000014072948F: mov     rcx, gs:188h
 * 0000000140729498: test    dword ptr [rcx], 10000h
 * 000000014072949E: jz      short loc_1407294B4
 * 00000001407294A0: test    byte ptr [rcx+2], 1
 * 00000001407294A4: jz      short loc_1407294B4
 * 00000001407294A6: call    KiCopyCounters
 * 00000001407294AB: mov     rcx, gs:188h
 * 00000001407294B4: ldmxcsr dword ptr [rbp-54h]
 * 00000001407294B8: cmp     word ptr [rbp+80h], 0
 * 00000001407294C0: jz      short loc_1407294C7
 * 00000001407294C2: call    KiRestoreDebugRegisterState
 * 00000001407294C7: mov     rcx, gs:188h
 * 00000001407294D0: bt      dword ptr [rcx+74h], 16h
 * 00000001407294D5: jnb     short loc_140729501
 * 00000001407294D7: xor     ecx, ecx
 * 00000001407294D9: rdsspq  rcx
 * 00000001407294DE: mov     r8, gs:9D68h
 * 00000001407294E7: add     r8, 8
 * 00000001407294EB: cmp     rcx, r8
 * 00000001407294EE: jnz     short loc_140729501
 * 00000001407294F0: mov     rcx, gs:9D60h
 * 00000001407294F9: rstorssp qword ptr [rcx]
 * 00000001407294FD: saveprevssp
 * 0000000140729501: mov     byte ptr gs:89Eh, 0
 * 000000014072950A: movzx   eax, word ptr gs:8ACh
 * 0000000140729513: cmp     gs:8A6h, ax
 * 000000014072951C: jz      short loc_140729530
 * 000000014072951E: mov     gs:8A6h, ax
 * 0000000140729527: mov     ecx, 48h ; 'H'
 * 000000014072952C: xor     edx, edx
 * 000000014072952E: wrmsr
 * 0000000140729530: btr     word ptr gs:898h, 2
 * 000000014072953B: jnb     short loc_14072954B
 * 000000014072953D: mov     eax, 1
 * 0000000140729542: xor     edx, edx
 * 0000000140729544: mov     ecx, 49h ; 'I'
 * 0000000140729549: wrmsr
 * 000000014072954B: btr     word ptr gs:898h, 5
 * 0000000140729556: jnb     loc_140729693
 * 000000014072955C: call    loc_14072966F
 * 0000000140729561: add     rsp, 8
 * 0000000140729565: call    loc_140729678
 * 000000014072956A: add     rsp, 8
 * 000000014072956E: call    loc_140729561
 * 0000000140729573: add     rsp, 8
 * 0000000140729577: call    loc_14072956A
 * 000000014072957C: add     rsp, 8
 * 0000000140729580: call    loc_140729573
 * 0000000140729585: add     rsp, 8
 * 0000000140729589: call    loc_14072957C
 * 000000014072958E: add     rsp, 8
 * 0000000140729592: call    loc_140729585
 * 0000000140729597: add     rsp, 8
 * 000000014072959B: call    loc_14072958E
 * 00000001407295A0: add     rsp, 8
 * 00000001407295A4: call    loc_140729597
 * 00000001407295A9: add     rsp, 8
 * 00000001407295AD: call    loc_1407295A0
 * 00000001407295B2: add     rsp, 8
 * 00000001407295B6: call    loc_1407295A9
 * 00000001407295BB: add     rsp, 8
 * 00000001407295BF: call    loc_1407295B2
 * 00000001407295C4: add     rsp, 8
 * 00000001407295C8: call    loc_1407295BB
 * 00000001407295CD: add     rsp, 8
 * 00000001407295D1: call    loc_1407295C4
 * 00000001407295D6: add     rsp, 8
 * 00000001407295DA: call    loc_1407295CD
 * 00000001407295DF: add     rsp, 8
 * 00000001407295E3: call    loc_1407295D6
 * 00000001407295E8: add     rsp, 8
 * 00000001407295EC: call    loc_1407295DF
 * 00000001407295F1: add     rsp, 8
 * 00000001407295F5: call    loc_1407295E8
 * 00000001407295FA: add     rsp, 8
 * 00000001407295FE: call    loc_1407295F1
 * 0000000140729603: add     rsp, 8
 * 0000000140729607: call    loc_1407295FA
 * 000000014072960C: add     rsp, 8
 * 0000000140729610: call    loc_140729603
 * 0000000140729615: add     rsp, 8
 * 0000000140729619: call    loc_14072960C
 * 000000014072961E: add     rsp, 8
 * 0000000140729622: call    loc_140729615
 * 0000000140729627: add     rsp, 8
 * 000000014072962B: call    loc_14072961E
 * 0000000140729630: add     rsp, 8
 * 0000000140729634: call    loc_140729627
 * 0000000140729639: add     rsp, 8
 * 000000014072963D: call    loc_140729630
 * 0000000140729642: add     rsp, 8
 * 0000000140729646: call    loc_140729639
 * 000000014072964B: add     rsp, 8
 * 000000014072964F: call    loc_140729642
 * 0000000140729654: add     rsp, 8
 * 0000000140729658: call    loc_14072964B
 * 000000014072965D: add     rsp, 8
 * 0000000140729661: call    loc_140729654
 * 0000000140729666: add     rsp, 8
 * 000000014072966A: call    loc_14072965D
 * 000000014072966F: add     rsp, 8
 * 0000000140729673: call    loc_140729666
 * 0000000140729678: add     rsp, 8
 * 000000014072967C: mov     eax, 0DADAh
 * 0000000140729681: test    byte ptr gs:89Ch, 8
 * 000000014072968A: jz      short loc_140729693
 * 000000014072968C: mov     al, 20h ; ' '
 * 000000014072968E: incsspq rax
 * 0000000140729693: test    word ptr gs:898h, 100h
 * 000000014072969E: jz      short loc_1407296AC
 * 00000001407296A0: xor     eax, eax
 * 00000001407296A2: xor     edx, edx
 * 00000001407296A4: mov     ecx, 1
 * 00000001407296A9: div     rcx
 * 00000001407296AC: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001407296B0: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001407296B4: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001407296B8: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001407296BC: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001407296C0: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001407296C4: mov     r11, [rbp-20h]
 * 00000001407296C8: mov     r10, [rbp-28h]
 * 00000001407296CC: mov     r9, [rbp-30h]
 * 00000001407296D0: mov     r8, [rbp-38h]
 * 00000001407296D4: mov     rdx, [rbp-40h]
 * 00000001407296D8: mov     rcx, [rbp-48h]
 * 00000001407296DC: mov     rax, [rbp-50h]
 * 00000001407296E0: mov     rsp, rbp
 * 00000001407296E3: mov     rbp, [rbp+0D8h]
 * 00000001407296EA: add     rsp, 0E8h
 * 00000001407296F1: test    byte ptr cs:KiTrapFeatures, 1
 * 00000001407296F8: jz      short loc_1407296FF
 * 00000001407296FA: jmp     KiKernelExit
 * 00000001407296FF: test    word ptr gs:898h, 200h
 * 000000014072970A: jz      short loc_140729711
 * 000000014072970C: verw    [rsp-1E8h+arg_200]
 * 0000000140729711: swapgs
 * 0000000140729714: iretq
 * 0000000140729716: ldmxcsr dword ptr [rbp-54h]
 * 000000014072971A: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072971E: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140729722: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140729726: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072972A: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072972E: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140729732: mov     r11, [rbp-20h]
 * 0000000140729736: mov     r10, [rbp-28h]
 * 000000014072973A: mov     r9, [rbp-30h]
 * 000000014072973E: mov     r8, [rbp-38h]
 * 0000000140729742: mov     rdx, [rbp-40h]
 * 0000000140729746: mov     rcx, [rbp-48h]
 * 000000014072974A: mov     rax, [rbp-50h]
 * 000000014072974E: mov     rsp, rbp
 * 0000000140729751: mov     rbp, [rbp+0D8h]
 * 0000000140729758: add     rsp, 0E8h
 * 000000014072975F: iretq
 */
