/*
 * XREFs of KxStartUserThread @ 0x14072DEE0
 * Callers:
 *     KyStartUserThread @ 0x14072DB60 (KyStartUserThread.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KxStartUserThread @ 0x14072DEE0 (KxStartUserThread.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

/*
 * Hex-Rays decompilation failed for KxStartUserThread @ 0x14072DEE0
 * Reason: Hex-Rays returned no pseudocode for 0x14072DEE0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072DEE0: sub     rsp, 138h
 * 000000014072DEE7: lea     rax, [rsp+138h+var_38]
 * 000000014072DEEF: movaps  [rsp+138h+var_108], xmm6
 * 000000014072DEF4: movaps  [rsp+138h+var_F8], xmm7
 * 000000014072DEF9: movaps  [rsp+138h+var_E8], xmm8
 * 000000014072DEFF: movaps  [rsp+138h+var_D8], xmm9
 * 000000014072DF05: movaps  [rsp+138h+var_C8], xmm10
 * 000000014072DF0B: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014072DF10: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014072DF15: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014072DF1A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014072DF1F: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014072DF24: mov     [rax], rbx
 * 000000014072DF27: mov     [rax+8], rdi
 * 000000014072DF2B: mov     [rax+10h], rsi
 * 000000014072DF2F: mov     [rax+18h], r12
 * 000000014072DF33: mov     [rax+20h], r13
 * 000000014072DF37: mov     [rax+28h], r14
 * 000000014072DF3B: mov     [rax+30h], r15
 * 000000014072DF3F: nop
 * 000000014072DF40: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072DF47: jz      short loc_14072DF4C
 * 000000014072DF49: stac
 * 000000014072DF4C: mov     ecx, 1
 * 000000014072DF51: mov     cr8, rcx
 * 000000014072DF55: mov     rdx, [rsp+138h+var_138]
 * 000000014072DF59: mov     rcx, [rsp+138h+var_130]
 * 000000014072DF5E: mov     rax, [rsp+138h+var_128]
 * 000000014072DF63: call    _guard_dispatch_icall_no_overrides
 * 000000014072DF68: lea     rcx, [rsp+138h+var_38]
 * 000000014072DF70: movaps  xmm6, [rsp+138h+var_108]
 * 000000014072DF75: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014072DF7A: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014072DF80: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014072DF86: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014072DF8C: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014072DF91: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014072DF96: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014072DF9B: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014072DFA0: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014072DFA5: mov     rbx, [rcx]
 * 000000014072DFA8: mov     rdi, [rcx+8]
 * 000000014072DFAC: mov     rsi, [rcx+10h]
 * 000000014072DFB0: mov     r12, [rcx+18h]
 * 000000014072DFB4: mov     r13, [rcx+20h]
 * 000000014072DFB8: mov     r14, [rcx+28h]
 * 000000014072DFBC: mov     r15, [rcx+30h]
 * 000000014072DFC0: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072DFC7: jz      short loc_14072DFCF
 * 000000014072DFC9: cli
 * 000000014072DFCA: jmp     KiExitUserModeEvent
 * 000000014072DFCF: cli
 * 000000014072DFD0: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072DFD7: jz      short loc_14072DFDE
 * 000000014072DFD9: add     rsp, 28h
 * 000000014072DFDD: retn
 * 000000014072DFDE: test    byte ptr [rbp+0F0h], 1
 * 000000014072DFE5: jz      loc_14072E2E6
 * 000000014072DFEB: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072DFF2: jz      short loc_14072DFF7
 * 000000014072DFF4: stac
 * 000000014072DFF7: mov     rcx, gs:188h
 * 000000014072E000: test    byte ptr [rcx+0C2h], 3
 * 000000014072E007: jz      short loc_14072E024
 * 000000014072E009: mov     ecx, 1
 * 000000014072E00E: mov     cr8, rcx
 * 000000014072E012: sti
 * 000000014072E013: call    KiInitiateUserApc
 * 000000014072E018: cli
 * 000000014072E019: mov     ecx, 0
 * 000000014072E01E: mov     cr8, rcx
 * 000000014072E022: jmp     short loc_14072DFF7
 * 000000014072E024: test    byte ptr [rcx+3], 80h
 * 000000014072E028: jz      short loc_14072E037
 * 000000014072E02A: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072E02F: test    eax, eax
 * 000000014072E031: mov     rax, [rbp-50h]
 * 000000014072E035: jnz     short loc_14072DFF7
 * 000000014072E037: test    byte ptr gs:8A0h, 2
 * 000000014072E040: jz      short loc_14072E049
 * 000000014072E042: xor     ecx, ecx
 * 000000014072E044: call    KiUpdateStibpPairing
 * 000000014072E049: mov     rcx, gs:188h
 * 000000014072E052: test    dword ptr [rcx], 8000000h
 * 000000014072E058: jz      short loc_14072E05F
 * 000000014072E05A: call    KiRestoreSetContextState
 * 000000014072E05F: mov     rcx, gs:188h
 * 000000014072E068: test    dword ptr [rcx], 10000h
 * 000000014072E06E: jz      short loc_14072E084
 * 000000014072E070: test    byte ptr [rcx+2], 1
 * 000000014072E074: jz      short loc_14072E084
 * 000000014072E076: call    KiCopyCounters
 * 000000014072E07B: mov     rcx, gs:188h
 * 000000014072E084: ldmxcsr dword ptr [rbp-54h]
 * 000000014072E088: cmp     word ptr [rbp+80h], 0
 * 000000014072E090: jz      short loc_14072E097
 * 000000014072E092: call    KiRestoreDebugRegisterState
 * 000000014072E097: mov     rcx, gs:188h
 * 000000014072E0A0: bt      dword ptr [rcx+74h], 16h
 * 000000014072E0A5: jnb     short loc_14072E0D1
 * 000000014072E0A7: xor     ecx, ecx
 * 000000014072E0A9: rdsspq  rcx
 * 000000014072E0AE: mov     r8, gs:9D68h
 * 000000014072E0B7: add     r8, 8
 * 000000014072E0BB: cmp     rcx, r8
 * 000000014072E0BE: jnz     short loc_14072E0D1
 * 000000014072E0C0: mov     rcx, gs:9D60h
 * 000000014072E0C9: rstorssp qword ptr [rcx]
 * 000000014072E0CD: saveprevssp
 * 000000014072E0D1: mov     byte ptr gs:89Eh, 0
 * 000000014072E0DA: movzx   eax, word ptr gs:8ACh
 * 000000014072E0E3: cmp     gs:8A6h, ax
 * 000000014072E0EC: jz      short loc_14072E100
 * 000000014072E0EE: mov     gs:8A6h, ax
 * 000000014072E0F7: mov     ecx, 48h ; 'H'
 * 000000014072E0FC: xor     edx, edx
 * 000000014072E0FE: wrmsr
 * 000000014072E100: btr     word ptr gs:898h, 2
 * 000000014072E10B: jnb     short loc_14072E11B
 * 000000014072E10D: mov     eax, 1
 * 000000014072E112: xor     edx, edx
 * 000000014072E114: mov     ecx, 49h ; 'I'
 * 000000014072E119: wrmsr
 * 000000014072E11B: btr     word ptr gs:898h, 5
 * 000000014072E126: jnb     loc_14072E263
 * 000000014072E12C: call    loc_14072E23F
 * 000000014072E131: add     rsp, 8
 * 000000014072E135: call    loc_14072E248
 * 000000014072E13A: add     rsp, 8
 * 000000014072E13E: call    loc_14072E131
 * 000000014072E143: add     rsp, 8
 * 000000014072E147: call    loc_14072E13A
 * 000000014072E14C: add     rsp, 8
 * 000000014072E150: call    loc_14072E143
 * 000000014072E155: add     rsp, 8
 * 000000014072E159: call    loc_14072E14C
 * 000000014072E15E: add     rsp, 8
 * 000000014072E162: call    loc_14072E155
 * 000000014072E167: add     rsp, 8
 * 000000014072E16B: call    loc_14072E15E
 * 000000014072E170: add     rsp, 8
 * 000000014072E174: call    loc_14072E167
 * 000000014072E179: add     rsp, 8
 * 000000014072E17D: call    loc_14072E170
 * 000000014072E182: add     rsp, 8
 * 000000014072E186: call    loc_14072E179
 * 000000014072E18B: add     rsp, 8
 * 000000014072E18F: call    loc_14072E182
 * 000000014072E194: add     rsp, 8
 * 000000014072E198: call    loc_14072E18B
 * 000000014072E19D: add     rsp, 8
 * 000000014072E1A1: call    loc_14072E194
 * 000000014072E1A6: add     rsp, 8
 * 000000014072E1AA: call    loc_14072E19D
 * 000000014072E1AF: add     rsp, 8
 * 000000014072E1B3: call    loc_14072E1A6
 * 000000014072E1B8: add     rsp, 8
 * 000000014072E1BC: call    loc_14072E1AF
 * 000000014072E1C1: add     rsp, 8
 * 000000014072E1C5: call    loc_14072E1B8
 * 000000014072E1CA: add     rsp, 8
 * 000000014072E1CE: call    loc_14072E1C1
 * 000000014072E1D3: add     rsp, 8
 * 000000014072E1D7: call    loc_14072E1CA
 * 000000014072E1DC: add     rsp, 8
 * 000000014072E1E0: call    loc_14072E1D3
 * 000000014072E1E5: add     rsp, 8
 * 000000014072E1E9: call    loc_14072E1DC
 * 000000014072E1EE: add     rsp, 8
 * 000000014072E1F2: call    loc_14072E1E5
 * 000000014072E1F7: add     rsp, 8
 * 000000014072E1FB: call    loc_14072E1EE
 * 000000014072E200: add     rsp, 8
 * 000000014072E204: call    loc_14072E1F7
 * 000000014072E209: add     rsp, 8
 * 000000014072E20D: call    loc_14072E200
 * 000000014072E212: add     rsp, 8
 * 000000014072E216: call    loc_14072E209
 * 000000014072E21B: add     rsp, 8
 * 000000014072E21F: call    loc_14072E212
 * 000000014072E224: add     rsp, 8
 * 000000014072E228: call    loc_14072E21B
 * 000000014072E22D: add     rsp, 8
 * 000000014072E231: call    loc_14072E224
 * 000000014072E236: add     rsp, 8
 * 000000014072E23A: call    loc_14072E22D
 * 000000014072E23F: add     rsp, 8
 * 000000014072E243: call    loc_14072E236
 * 000000014072E248: add     rsp, 8
 * 000000014072E24C: mov     eax, 0DADAh
 * 000000014072E251: test    byte ptr gs:89Ch, 8
 * 000000014072E25A: jz      short loc_14072E263
 * 000000014072E25C: mov     al, 20h ; ' '
 * 000000014072E25E: incsspq rax
 * 000000014072E263: test    word ptr gs:898h, 100h
 * 000000014072E26E: jz      short loc_14072E27C
 * 000000014072E270: xor     eax, eax
 * 000000014072E272: xor     edx, edx
 * 000000014072E274: mov     ecx, 1
 * 000000014072E279: div     rcx
 * 000000014072E27C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072E280: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072E284: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072E288: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072E28C: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072E290: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072E294: mov     r11, [rbp-20h]
 * 000000014072E298: mov     r10, [rbp-28h]
 * 000000014072E29C: mov     r9, [rbp-30h]
 * 000000014072E2A0: mov     r8, [rbp-38h]
 * 000000014072E2A4: mov     rdx, [rbp-40h]
 * 000000014072E2A8: mov     rcx, [rbp-48h]
 * 000000014072E2AC: mov     rax, [rbp-50h]
 * 000000014072E2B0: mov     rsp, rbp
 * 000000014072E2B3: mov     rbp, [rbp+0D8h]
 * 000000014072E2BA: add     rsp, 0E8h
 * 000000014072E2C1: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072E2C8: jz      short loc_14072E2CF
 * 000000014072E2CA: jmp     KiKernelExit
 * 000000014072E2CF: test    word ptr gs:898h, 200h
 * 000000014072E2DA: jz      short loc_14072E2E1
 * 000000014072E2DC: verw    [rsp-1E8h+arg_200]
 * 000000014072E2E1: swapgs
 * 000000014072E2E4: iretq
 * 000000014072E2E6: ldmxcsr dword ptr [rbp-54h]
 * 000000014072E2EA: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072E2EE: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072E2F2: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072E2F6: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072E2FA: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072E2FE: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072E302: mov     r11, [rbp-20h]
 * 000000014072E306: mov     r10, [rbp-28h]
 * 000000014072E30A: mov     r9, [rbp-30h]
 * 000000014072E30E: mov     r8, [rbp-38h]
 * 000000014072E312: mov     rdx, [rbp-40h]
 * 000000014072E316: mov     rcx, [rbp-48h]
 * 000000014072E31A: mov     rax, [rbp-50h]
 * 000000014072E31E: mov     rsp, rbp
 * 000000014072E321: mov     rbp, [rbp+0D8h]
 * 000000014072E328: add     rsp, 0E8h
 * 000000014072E32F: iretq
 */
