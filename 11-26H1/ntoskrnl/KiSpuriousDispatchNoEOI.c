/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x14072B010
 * Callers:
 *     <none>
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14021C910 (KiEndInterruptCycleAccumulation.c)
 *     KiStartInterruptCycleAccumulation @ 0x140228150 (KiStartInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EBBF0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiSpuriousDispatchNoEOI @ 0x14072B010 (KiSpuriousDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x14072F6C0 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiSpuriousDispatchNoEOI @ 0x14072B010
 * Reason: Hex-Rays returned no pseudocode for 0x14072B010
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072B010: mov     ecx, 0Fh
 * 000000014072B015: cmp     cs:KiIrqlFlags, 0
 * 000000014072B01C: jz      short loc_14072B025
 * 000000014072B01E: call    KzSetIrqlUnsafe
 * 000000014072B023: jmp     short loc_14072B02D
 * 000000014072B025: mov     rax, cr8
 * 000000014072B029: mov     cr8, rcx
 * 000000014072B02D: mov     [rbp-57h], al
 * 000000014072B030: mov     rcx, gs:20h
 * 000000014072B039: xor     edx, edx
 * 000000014072B03B: call    KiStartInterruptCycleAccumulation
 * 000000014072B040: sti
 * 000000014072B041: inc     dword ptr [rsi+74h]
 * 000000014072B044: cli
 * 000000014072B045: mov     rcx, gs:20h
 * 000000014072B04E: movzx   edx, byte ptr [rbp-57h]
 * 000000014072B052: call    KiEndInterruptCycleAccumulation
 * 000000014072B057: test    al, al
 * 000000014072B059: jz      short loc_14072B060
 * 000000014072B05B: call    KiDpcInterruptBypass
 * 000000014072B060: movzx   ecx, byte ptr [rbp-57h]
 * 000000014072B064: cmp     cs:KiIrqlFlags, 0
 * 000000014072B06B: jz      short loc_14072B074
 * 000000014072B06D: call    KzSetIrqlUnsafe
 * 000000014072B072: jmp     short loc_14072B078
 * 000000014072B074: mov     cr8, rcx
 * 000000014072B078: mov     rsi, [rbp+0D0h]
 * 000000014072B07F: cli
 * 000000014072B080: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072B087: jz      short loc_14072B08E
 * 000000014072B089: add     rsp, 28h
 * 000000014072B08D: retn
 * 000000014072B08E: test    byte ptr [rbp+0F0h], 1
 * 000000014072B095: jz      loc_14072B396
 * 000000014072B09B: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072B0A2: jz      short loc_14072B0A7
 * 000000014072B0A4: stac
 * 000000014072B0A7: mov     rcx, gs:188h
 * 000000014072B0B0: test    byte ptr [rcx+0C2h], 3
 * 000000014072B0B7: jz      short loc_14072B0D4
 * 000000014072B0B9: mov     ecx, 1
 * 000000014072B0BE: mov     cr8, rcx
 * 000000014072B0C2: sti
 * 000000014072B0C3: call    KiInitiateUserApc
 * 000000014072B0C8: cli
 * 000000014072B0C9: mov     ecx, 0
 * 000000014072B0CE: mov     cr8, rcx
 * 000000014072B0D2: jmp     short loc_14072B0A7
 * 000000014072B0D4: test    byte ptr [rcx+3], 80h
 * 000000014072B0D8: jz      short loc_14072B0E7
 * 000000014072B0DA: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072B0DF: test    eax, eax
 * 000000014072B0E1: mov     rax, [rbp-50h]
 * 000000014072B0E5: jnz     short loc_14072B0A7
 * 000000014072B0E7: test    byte ptr gs:8A0h, 2
 * 000000014072B0F0: jz      short loc_14072B0F9
 * 000000014072B0F2: xor     ecx, ecx
 * 000000014072B0F4: call    KiUpdateStibpPairing
 * 000000014072B0F9: mov     rcx, gs:188h
 * 000000014072B102: test    dword ptr [rcx], 8000000h
 * 000000014072B108: jz      short loc_14072B10F
 * 000000014072B10A: call    KiRestoreSetContextState
 * 000000014072B10F: mov     rcx, gs:188h
 * 000000014072B118: test    dword ptr [rcx], 10000h
 * 000000014072B11E: jz      short loc_14072B134
 * 000000014072B120: test    byte ptr [rcx+2], 1
 * 000000014072B124: jz      short loc_14072B134
 * 000000014072B126: call    KiCopyCounters
 * 000000014072B12B: mov     rcx, gs:188h
 * 000000014072B134: ldmxcsr dword ptr [rbp-54h]
 * 000000014072B138: cmp     word ptr [rbp+80h], 0
 * 000000014072B140: jz      short loc_14072B147
 * 000000014072B142: call    KiRestoreDebugRegisterState
 * 000000014072B147: mov     rcx, gs:188h
 * 000000014072B150: bt      dword ptr [rcx+74h], 16h
 * 000000014072B155: jnb     short loc_14072B181
 * 000000014072B157: xor     ecx, ecx
 * 000000014072B159: rdsspq  rcx
 * 000000014072B15E: mov     r8, gs:9D68h
 * 000000014072B167: add     r8, 8
 * 000000014072B16B: cmp     rcx, r8
 * 000000014072B16E: jnz     short loc_14072B181
 * 000000014072B170: mov     rcx, gs:9D60h
 * 000000014072B179: rstorssp qword ptr [rcx]
 * 000000014072B17D: saveprevssp
 * 000000014072B181: mov     byte ptr gs:89Eh, 0
 * 000000014072B18A: movzx   eax, word ptr gs:8ACh
 * 000000014072B193: cmp     gs:8A6h, ax
 * 000000014072B19C: jz      short loc_14072B1B0
 * 000000014072B19E: mov     gs:8A6h, ax
 * 000000014072B1A7: mov     ecx, 48h ; 'H'
 * 000000014072B1AC: xor     edx, edx
 * 000000014072B1AE: wrmsr
 * 000000014072B1B0: btr     word ptr gs:898h, 2
 * 000000014072B1BB: jnb     short loc_14072B1CB
 * 000000014072B1BD: mov     eax, 1
 * 000000014072B1C2: xor     edx, edx
 * 000000014072B1C4: mov     ecx, 49h ; 'I'
 * 000000014072B1C9: wrmsr
 * 000000014072B1CB: btr     word ptr gs:898h, 5
 * 000000014072B1D6: jnb     loc_14072B313
 * 000000014072B1DC: call    loc_14072B2EF
 * 000000014072B1E1: add     rsp, 8
 * 000000014072B1E5: call    loc_14072B2F8
 * 000000014072B1EA: add     rsp, 8
 * 000000014072B1EE: call    loc_14072B1E1
 * 000000014072B1F3: add     rsp, 8
 * 000000014072B1F7: call    loc_14072B1EA
 * 000000014072B1FC: add     rsp, 8
 * 000000014072B200: call    loc_14072B1F3
 * 000000014072B205: add     rsp, 8
 * 000000014072B209: call    loc_14072B1FC
 * 000000014072B20E: add     rsp, 8
 * 000000014072B212: call    loc_14072B205
 * 000000014072B217: add     rsp, 8
 * 000000014072B21B: call    loc_14072B20E
 * 000000014072B220: add     rsp, 8
 * 000000014072B224: call    loc_14072B217
 * 000000014072B229: add     rsp, 8
 * 000000014072B22D: call    loc_14072B220
 * 000000014072B232: add     rsp, 8
 * 000000014072B236: call    loc_14072B229
 * 000000014072B23B: add     rsp, 8
 * 000000014072B23F: call    loc_14072B232
 * 000000014072B244: add     rsp, 8
 * 000000014072B248: call    loc_14072B23B
 * 000000014072B24D: add     rsp, 8
 * 000000014072B251: call    loc_14072B244
 * 000000014072B256: add     rsp, 8
 * 000000014072B25A: call    loc_14072B24D
 * 000000014072B25F: add     rsp, 8
 * 000000014072B263: call    loc_14072B256
 * 000000014072B268: add     rsp, 8
 * 000000014072B26C: call    loc_14072B25F
 * 000000014072B271: add     rsp, 8
 * 000000014072B275: call    loc_14072B268
 * 000000014072B27A: add     rsp, 8
 * 000000014072B27E: call    loc_14072B271
 * 000000014072B283: add     rsp, 8
 * 000000014072B287: call    loc_14072B27A
 * 000000014072B28C: add     rsp, 8
 * 000000014072B290: call    loc_14072B283
 * 000000014072B295: add     rsp, 8
 * 000000014072B299: call    loc_14072B28C
 * 000000014072B29E: add     rsp, 8
 * 000000014072B2A2: call    loc_14072B295
 * 000000014072B2A7: add     rsp, 8
 * 000000014072B2AB: call    loc_14072B29E
 * 000000014072B2B0: add     rsp, 8
 * 000000014072B2B4: call    loc_14072B2A7
 * 000000014072B2B9: add     rsp, 8
 * 000000014072B2BD: call    loc_14072B2B0
 * 000000014072B2C2: add     rsp, 8
 * 000000014072B2C6: call    loc_14072B2B9
 * 000000014072B2CB: add     rsp, 8
 * 000000014072B2CF: call    loc_14072B2C2
 * 000000014072B2D4: add     rsp, 8
 * 000000014072B2D8: call    loc_14072B2CB
 * 000000014072B2DD: add     rsp, 8
 * 000000014072B2E1: call    loc_14072B2D4
 * 000000014072B2E6: add     rsp, 8
 * 000000014072B2EA: call    loc_14072B2DD
 * 000000014072B2EF: add     rsp, 8
 * 000000014072B2F3: call    loc_14072B2E6
 * 000000014072B2F8: add     rsp, 8
 * 000000014072B2FC: mov     eax, 0DADAh
 * 000000014072B301: test    byte ptr gs:89Ch, 8
 * 000000014072B30A: jz      short loc_14072B313
 * 000000014072B30C: mov     al, 20h ; ' '
 * 000000014072B30E: incsspq rax
 * 000000014072B313: test    word ptr gs:898h, 100h
 * 000000014072B31E: jz      short loc_14072B32C
 * 000000014072B320: xor     eax, eax
 * 000000014072B322: xor     edx, edx
 * 000000014072B324: mov     ecx, 1
 * 000000014072B329: div     rcx
 * 000000014072B32C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072B330: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072B334: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072B338: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072B33C: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072B340: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072B344: mov     r11, [rbp-20h]
 * 000000014072B348: mov     r10, [rbp-28h]
 * 000000014072B34C: mov     r9, [rbp-30h]
 * 000000014072B350: mov     r8, [rbp-38h]
 * 000000014072B354: mov     rdx, [rbp-40h]
 * 000000014072B358: mov     rcx, [rbp-48h]
 * 000000014072B35C: mov     rax, [rbp-50h]
 * 000000014072B360: mov     rsp, rbp
 * 000000014072B363: mov     rbp, [rbp+0D8h]
 * 000000014072B36A: add     rsp, 0E8h
 * 000000014072B371: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072B378: jz      short loc_14072B37F
 * 000000014072B37A: jmp     KiKernelExit
 * 000000014072B37F: test    word ptr gs:898h, 200h
 * 000000014072B38A: jz      short loc_14072B391
 * 000000014072B38C: verw    [rsp-1E8h+arg_200]
 * 000000014072B391: swapgs
 * 000000014072B394: iretq
 * 000000014072B396: ldmxcsr dword ptr [rbp-54h]
 * 000000014072B39A: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014072B39E: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014072B3A2: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014072B3A6: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014072B3AA: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014072B3AE: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014072B3B2: mov     r11, [rbp-20h]
 * 000000014072B3B6: mov     r10, [rbp-28h]
 * 000000014072B3BA: mov     r9, [rbp-30h]
 * 000000014072B3BE: mov     r8, [rbp-38h]
 * 000000014072B3C2: mov     rdx, [rbp-40h]
 * 000000014072B3C6: mov     rcx, [rbp-48h]
 * 000000014072B3CA: mov     rax, [rbp-50h]
 * 000000014072B3CE: mov     rsp, rbp
 * 000000014072B3D1: mov     rbp, [rbp+0D8h]
 * 000000014072B3D8: add     rsp, 0E8h
 * 000000014072B3DF: iretq
 */
