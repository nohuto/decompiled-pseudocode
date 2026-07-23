/*
 * XREFs of NtRaiseException @ 0x14072C480
 * Callers:
 *     DifNtRaiseExceptionWrapper @ 0x14068B010 (DifNtRaiseExceptionWrapper.c)
 * Callees:
 *     KiRaiseException @ 0x1403D6BE0 (KiRaiseException.c)
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     NtRaiseException @ 0x14072C480 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 */

/*
 * Hex-Rays decompilation failed for NtRaiseException @ 0x14072C480
 * Reason: Hex-Rays returned no pseudocode for 0x14072C480
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072C480: mov     rbx, [rbp+0C0h]
 * 000000014072C487: mov     rdi, [rbp+0C8h]
 * 000000014072C48E: mov     rsi, [rbp+0D0h]
 * 000000014072C495: xor     eax, eax
 * 000000014072C497: mov     [rbp-50h], rax
 * 000000014072C49B: sub     rsp, 138h
 * 000000014072C4A2: lea     rax, [rsp+138h+var_38]
 * 000000014072C4AA: movaps  [rsp+138h+var_108], xmm6
 * 000000014072C4AF: movaps  [rsp+138h+var_F8], xmm7
 * 000000014072C4B4: movaps  [rsp+138h+var_E8], xmm8
 * 000000014072C4BA: movaps  [rsp+138h+var_D8], xmm9
 * 000000014072C4C0: movaps  [rsp+138h+var_C8], xmm10
 * 000000014072C4C6: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014072C4CB: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014072C4D0: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014072C4D5: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014072C4DA: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014072C4DF: mov     [rax], rbx
 * 000000014072C4E2: mov     [rax+8], rdi
 * 000000014072C4E6: mov     [rax+10h], rsi
 * 000000014072C4EA: mov     [rax+18h], r12
 * 000000014072C4EE: mov     [rax+20h], r13
 * 000000014072C4F2: mov     [rax+28h], r14
 * 000000014072C4F6: mov     [rax+30h], r15
 * 000000014072C4FA: mov     rax, [rbp+0E8h]
 * 000000014072C501: mov     [rbp+50h], rax
 * 000000014072C505: mov     [rsp+138h+var_118], r8b; char
 * 000000014072C50A: mov     r8, rsp
 * 000000014072C50D: lea     r9, [rbp-80h]
 * 000000014072C511: call    KiRaiseException
 * 000000014072C516: test    eax, eax
 * 000000014072C518: jnz     loc_14072C938
 * 000000014072C51E: test    byte ptr [rbp+0F0h], 1
 * 000000014072C525: jnz     short loc_14072C547
 * 000000014072C527: mov     rbx, gs:188h
 * 000000014072C530: mov     rdx, [rbp+0B8h]
 * 000000014072C537: mov     [rbx+90h], rdx
 * 000000014072C53E: mov     dl, [rbp-58h]
 * 000000014072C541: mov     [rbx+232h], dl
 * 000000014072C547: lea     rcx, [rsp+138h+var_38]
 * 000000014072C54F: movaps  xmm6, [rsp+138h+var_108]
 * 000000014072C554: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014072C559: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014072C55F: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014072C565: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014072C56B: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014072C570: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014072C575: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014072C57A: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014072C57F: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014072C584: mov     rbx, [rcx]
 * 000000014072C587: mov     rdi, [rcx+8]
 * 000000014072C58B: mov     rsi, [rcx+10h]
 * 000000014072C58F: mov     r12, [rcx+18h]
 * 000000014072C593: mov     r13, [rcx+20h]
 * 000000014072C597: mov     r14, [rcx+28h]
 * 000000014072C59B: mov     r15, [rcx+30h]
 * 000000014072C59F: cli
 * 000000014072C5A0: xor     ecx, ecx
 * 000000014072C5A2: rdsspq  rcx
 * 000000014072C5A7: test    rcx, rcx
 * 000000014072C5AA: jz      short loc_14072C5B6
 * 000000014072C5AC: mov     ecx, 1
 * 000000014072C5B1: incsspq rcx
 * 000000014072C5B6: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072C5BD: jz      short loc_14072C5E5
 * 000000014072C5BF: test    byte ptr [rbp+0F0h], 1
 * 000000014072C5C6: jz      short loc_14072C5E5
 * 000000014072C5C8: mov     [rbp+0C0h], rbx
 * 000000014072C5CF: mov     [rbp+0D0h], rsi
 * 000000014072C5D6: mov     [rbp+0C8h], rdi
 * 000000014072C5DD: lea     rsp, [rbp-88h]
 * 000000014072C5E4: retn
 * 000000014072C5E5: test    byte ptr [rbp+0F0h], 1
 * 000000014072C5EC: jz      loc_14072C8ED
 * 000000014072C5F2: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072C5F9: jz      short loc_14072C5FE
 * 000000014072C5FB: stac
 * 000000014072C5FE: mov     rcx, gs:188h
 * 000000014072C607: test    byte ptr [rcx+0C2h], 3
 * 000000014072C60E: jz      short loc_14072C62B
 * 000000014072C610: mov     ecx, 1
 * 000000014072C615: mov     cr8, rcx
 * 000000014072C619: sti
 * 000000014072C61A: call    KiInitiateUserApc
 * 000000014072C61F: cli
 * 000000014072C620: mov     ecx, 0
 * 000000014072C625: mov     cr8, rcx
 * 000000014072C629: jmp     short loc_14072C5FE
 * 000000014072C62B: test    byte ptr [rcx+3], 80h
 * 000000014072C62F: jz      short loc_14072C63E
 * 000000014072C631: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072C636: test    eax, eax
 * 000000014072C638: mov     rax, [rbp-50h]
 * 000000014072C63C: jnz     short loc_14072C5FE
 * 000000014072C63E: test    byte ptr gs:8A0h, 2
 * 000000014072C647: jz      short loc_14072C650
 * 000000014072C649: xor     ecx, ecx
 * 000000014072C64B: call    KiUpdateStibpPairing
 * 000000014072C650: mov     rcx, gs:188h
 * 000000014072C659: test    dword ptr [rcx], 8000000h
 * 000000014072C65F: jz      short loc_14072C666
 * 000000014072C661: call    KiRestoreSetContextState
 * 000000014072C666: mov     rcx, gs:188h
 * 000000014072C66F: test    dword ptr [rcx], 10000h
 * 000000014072C675: jz      short loc_14072C68B
 * 000000014072C677: test    byte ptr [rcx+2], 1
 * 000000014072C67B: jz      short loc_14072C68B
 * 000000014072C67D: call    KiCopyCounters
 * 000000014072C682: mov     rcx, gs:188h
 * 000000014072C68B: ldmxcsr dword ptr [rbp-54h]
 * 000000014072C68F: cmp     word ptr [rbp+80h], 0
 * 000000014072C697: jz      short loc_14072C69E
 * 000000014072C699: call    KiRestoreDebugRegisterState
 * 000000014072C69E: mov     rcx, gs:188h
 * 000000014072C6A7: bt      dword ptr [rcx+74h], 16h
 * 000000014072C6AC: jnb     short loc_14072C6D8
 * 000000014072C6AE: xor     ecx, ecx
 * 000000014072C6B0: rdsspq  rcx
 * 000000014072C6B5: mov     r8, gs:9D68h
 * 000000014072C6BE: add     r8, 8
 * 000000014072C6C2: cmp     rcx, r8
 * 000000014072C6C5: jnz     short loc_14072C6D8
 * 000000014072C6C7: mov     rcx, gs:9D60h
 * 000000014072C6D0: rstorssp qword ptr [rcx]
 * 000000014072C6D4: saveprevssp
 * 000000014072C6D8: mov     byte ptr gs:89Eh, 0
 * 000000014072C6E1: movzx   eax, word ptr gs:8ACh
 * 000000014072C6EA: cmp     gs:8A6h, ax
 * 000000014072C6F3: jz      short loc_14072C707
 * 000000014072C6F5: mov     gs:8A6h, ax
 * 000000014072C6FE: mov     ecx, 48h ; 'H'
 * 000000014072C703: xor     edx, edx
 * 000000014072C705: wrmsr
 * 000000014072C707: btr     word ptr gs:898h, 2
 * 000000014072C712: jnb     short loc_14072C722
 * 000000014072C714: mov     eax, 1
 * 000000014072C719: xor     edx, edx
 * 000000014072C71B: mov     ecx, 49h ; 'I'
 * 000000014072C720: wrmsr
 * 000000014072C722: btr     word ptr gs:898h, 5
 * 000000014072C72D: jnb     loc_14072C86A
 * 000000014072C733: call    loc_14072C846
 * 000000014072C738: add     rsp, 8
 * 000000014072C73C: call    loc_14072C84F
 * 000000014072C741: add     rsp, 8
 * 000000014072C745: call    loc_14072C738
 * 000000014072C74A: add     rsp, 8
 * 000000014072C74E: call    loc_14072C741
 * 000000014072C753: add     rsp, 8
 * 000000014072C757: call    loc_14072C74A
 * 000000014072C75C: add     rsp, 8
 * 000000014072C760: call    loc_14072C753
 * 000000014072C765: add     rsp, 8
 * 000000014072C769: call    loc_14072C75C
 * 000000014072C76E: add     rsp, 8
 * 000000014072C772: call    loc_14072C765
 * 000000014072C777: add     rsp, 8
 * 000000014072C77B: call    loc_14072C76E
 * 000000014072C780: add     rsp, 8
 * 000000014072C784: call    loc_14072C777
 * 000000014072C789: add     rsp, 8
 * 000000014072C78D: call    loc_14072C780
 * 000000014072C792: add     rsp, 8
 * 000000014072C796: call    loc_14072C789
 * 000000014072C79B: add     rsp, 8
 * 000000014072C79F: call    loc_14072C792
 * 000000014072C7A4: add     rsp, 8
 * 000000014072C7A8: call    loc_14072C79B
 * 000000014072C7AD: add     rsp, 8
 * 000000014072C7B1: call    loc_14072C7A4
 * 000000014072C7B6: add     rsp, 8
 * 000000014072C7BA: call    loc_14072C7AD
 * 000000014072C7BF: add     rsp, 8
 * 000000014072C7C3: call    loc_14072C7B6
 * 000000014072C7C8: add     rsp, 8
 * 000000014072C7CC: call    loc_14072C7BF
 * 000000014072C7D1: add     rsp, 8
 * 000000014072C7D5: call    loc_14072C7C8
 * 000000014072C7DA: add     rsp, 8
 * 000000014072C7DE: call    loc_14072C7D1
 * 000000014072C7E3: add     rsp, 8
 * 000000014072C7E7: call    loc_14072C7DA
 * 000000014072C7EC: add     rsp, 8
 * 000000014072C7F0: call    loc_14072C7E3
 * 000000014072C7F5: add     rsp, 8
 * 000000014072C7F9: call    loc_14072C7EC
 * 000000014072C7FE: add     rsp, 8
 * 000000014072C802: call    loc_14072C7F5
 * 000000014072C807: add     rsp, 8
 * 000000014072C80B: call    loc_14072C7FE
 * 000000014072C810: add     rsp, 8
 * 000000014072C814: call    loc_14072C807
 * 000000014072C819: add     rsp, 8
 * 000000014072C81D: call    loc_14072C810
 * 000000014072C822: add     rsp, 8
 * 000000014072C826: call    loc_14072C819
 * 000000014072C82B: add     rsp, 8
 * 000000014072C82F: call    loc_14072C822
 * 000000014072C834: add     rsp, 8
 * 000000014072C838: call    loc_14072C82B
 * 000000014072C83D: add     rsp, 8
 * 000000014072C841: call    loc_14072C834
 * 000000014072C846: add     rsp, 8
 * 000000014072C84A: call    loc_14072C83D
 * 000000014072C84F: add     rsp, 8
 * 000000014072C853: mov     eax, 0DADAh
 * 000000014072C858: test    byte ptr gs:89Ch, 8
 * 000000014072C861: jz      short loc_14072C86A
 * 000000014072C863: mov     al, 20h ; ' '
 * 000000014072C865: incsspq rax
 * 000000014072C86A: test    word ptr gs:898h, 100h
 * 000000014072C875: jz      short loc_14072C883
 * 000000014072C877: xor     eax, eax
 * 000000014072C879: xor     edx, edx
 * 000000014072C87B: mov     ecx, 1
 * 000000014072C880: div     rcx
 * 000000014072C883: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072C887: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072C88B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072C88F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072C893: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072C897: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072C89B: mov     r11, [rbp-20h]
 * 000000014072C89F: mov     r10, [rbp-28h]
 * 000000014072C8A3: mov     r9, [rbp-30h]
 * 000000014072C8A7: mov     r8, [rbp-38h]
 * 000000014072C8AB: mov     rdx, [rbp-40h]
 * 000000014072C8AF: mov     rcx, [rbp-48h]
 * 000000014072C8B3: mov     rax, [rbp-50h]
 * 000000014072C8B7: mov     rsp, rbp
 * 000000014072C8BA: mov     rbp, [rbp+0D8h]
 * 000000014072C8C1: add     rsp, 0E8h
 * 000000014072C8C8: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072C8CF: jz      short loc_14072C8D6
 * 000000014072C8D1: jmp     KiKernelExit
 * 000000014072C8D6: test    word ptr gs:898h, 200h
 * 000000014072C8E1: jz      short loc_14072C8E8
 * 000000014072C8E3: verw    [rsp-1E8h+arg_200]
 * 000000014072C8E8: swapgs
 * 000000014072C8EB: iretq
 * 000000014072C8ED: ldmxcsr dword ptr [rbp-54h]
 * 000000014072C8F1: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072C8F5: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072C8F9: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072C8FD: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072C901: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072C905: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072C909: mov     r11, [rbp-20h]
 * 000000014072C90D: mov     r10, [rbp-28h]
 * 000000014072C911: mov     r9, [rbp-30h]
 * 000000014072C915: mov     r8, [rbp-38h]
 * 000000014072C919: mov     rdx, [rbp-40h]
 * 000000014072C91D: mov     rcx, [rbp-48h]
 * 000000014072C921: mov     rax, [rbp-50h]
 * 000000014072C925: mov     rsp, rbp
 * 000000014072C928: mov     rbp, [rbp+0D8h]
 * 000000014072C92F: add     rsp, 0E8h
 * 000000014072C936: iretq
 * 000000014072C938: lea     rcx, [rsp+138h+var_38]
 * 000000014072C940: movaps  xmm6, [rsp+138h+var_108]
 * 000000014072C945: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014072C94A: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014072C950: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014072C956: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014072C95C: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014072C961: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014072C966: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014072C96B: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014072C970: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014072C975: mov     rbx, [rcx]
 * 000000014072C978: mov     rdi, [rcx+8]
 * 000000014072C97C: mov     rsi, [rcx+10h]
 * 000000014072C980: mov     r12, [rcx+18h]
 * 000000014072C984: mov     r13, [rcx+20h]
 * 000000014072C988: mov     r14, [rcx+28h]
 * 000000014072C98C: mov     r15, [rcx+30h]
 * 000000014072C990: add     rsp, 138h
 * 000000014072C997: retn
 */
