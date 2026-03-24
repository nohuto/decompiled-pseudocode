/*
 * XREFs of KiDpcInterrupt @ 0x14072EF70
 * Callers:
 *     KiDpcInterruptShadow @ 0x140C59F40 (KiDpcInterruptShadow.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140223290 (KiDispatchInterrupt.c)
 *     HalPerformEndOfInterrupt @ 0x14032DA80 (HalPerformEndOfInterrupt.c)
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EBBF0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x14072EF70 (KiDpcInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x14072EF70
 * Reason: Hex-Rays returned no pseudocode for 0x14072EF70
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072EF70: sub     rsp, 8
 * 000000014072EF74: push    rbp
 * 000000014072EF75: sub     rsp, 158h
 * 000000014072EF7C: lea     rbp, [rsp+80h]
 * 000000014072EF84: mov     [rbp+0E8h+var_18], rsi
 * 000000014072EF8B: mov     [rbp+0E8h+var_13F+7], rax
 * 000000014072EF8F: mov     [rbp+0E8h+var_130], rcx
 * 000000014072EF93: mov     [rbp+0E8h+var_128], rdx
 * 000000014072EF97: mov     [rbp+0E8h+var_120], r8
 * 000000014072EF9B: mov     [rbp+0E8h+var_118], r9
 * 000000014072EF9F: mov     [rbp+0E8h+var_110], r10
 * 000000014072EFA3: mov     [rbp+0E8h+var_108], r11
 * 000000014072EFA7: test    [rbp+0E8h+arg_0], 1
 * 000000014072EFAE: jnz     short loc_14072EFE8
 * 000000014072EFB0: xor     edx, edx
 * 000000014072EFB2: rdsspq  rdx
 * 000000014072EFB7: mov     [rbp+0E8h+var_90], rdx
 * 000000014072EFBB: lfence
 * 000000014072EFBE: test    byte ptr gs:898h, 1
 * 000000014072EFC7: jnz     short loc_14072EFD1
 * 000000014072EFC9: lfence
 * 000000014072EFCC: jmp     loc_14072F259
 * 000000014072EFD1: movzx   eax, word ptr gs:8A6h
 * 000000014072EFDA: mov     ecx, 48h ; 'H'
 * 000000014072EFDF: xor     edx, edx
 * 000000014072EFE1: wrmsr
 * 000000014072EFE3: jmp     loc_14072F259
 * 000000014072EFE8: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072EFEF: jnz     short loc_14072EFF4
 * 000000014072EFF1: swapgs
 * 000000014072EFF4: lfence
 * 000000014072EFF7: mov     rcx, gs:9D68h
 * 000000014072F000: test    rcx, rcx
 * 000000014072F003: jz      short loc_14072F024
 * 000000014072F005: rdsspq  rdx
 * 000000014072F00A: mov     r10, gs:9D60h
 * 000000014072F013: add     r10, 8
 * 000000014072F017: cmp     rdx, r10
 * 000000014072F01A: jnz     short loc_14072F024
 * 000000014072F01C: rstorssp qword ptr [rcx]
 * 000000014072F020: saveprevssp
 * 000000014072F024: mov     r10, gs:188h
 * 000000014072F02D: mov     rcx, gs:188h
 * 000000014072F036: mov     rcx, [rcx+220h]
 * 000000014072F03D: mov     rcx, [rcx+760h]
 * 000000014072F044: mov     gs:890h, rcx
 * 000000014072F04D: mov     cx, gs:8A2h
 * 000000014072F056: mov     gs:8A4h, cx
 * 000000014072F05F: mov     cl, gs:898h
 * 000000014072F067: mov     gs:89Ah, cl
 * 000000014072F06F: movzx   eax, word ptr gs:8A8h
 * 000000014072F078: cmp     gs:8A6h, ax
 * 000000014072F081: jz      short loc_14072F095
 * 000000014072F083: mov     gs:8A6h, ax
 * 000000014072F08C: mov     ecx, 48h ; 'H'
 * 000000014072F091: xor     edx, edx
 * 000000014072F093: wrmsr
 * 000000014072F095: movzx   edx, byte ptr gs:898h
 * 000000014072F09E: test    edx, 8
 * 000000014072F0A4: jz      short loc_14072F0BD
 * 000000014072F0A6: mov     eax, 1
 * 000000014072F0AB: xor     edx, edx
 * 000000014072F0AD: mov     ecx, 49h ; 'I'
 * 000000014072F0B2: wrmsr
 * 000000014072F0B4: movzx   edx, byte ptr gs:898h
 * 000000014072F0BD: test    edx, 2
 * 000000014072F0C3: jz      loc_14072F200
 * 000000014072F0C9: call    loc_14072F1DC
 * 000000014072F0CE: add     rsp, 8
 * 000000014072F0D2: call    loc_14072F1E5
 * 000000014072F0D7: add     rsp, 8
 * 000000014072F0DB: call    loc_14072F0CE
 * 000000014072F0E0: add     rsp, 8
 * 000000014072F0E4: call    loc_14072F0D7
 * 000000014072F0E9: add     rsp, 8
 * 000000014072F0ED: call    loc_14072F0E0
 * 000000014072F0F2: add     rsp, 8
 * 000000014072F0F6: call    loc_14072F0E9
 * 000000014072F0FB: add     rsp, 8
 * 000000014072F0FF: call    loc_14072F0F2
 * 000000014072F104: add     rsp, 8
 * 000000014072F108: call    loc_14072F0FB
 * 000000014072F10D: add     rsp, 8
 * 000000014072F111: call    loc_14072F104
 * 000000014072F116: add     rsp, 8
 * 000000014072F11A: call    loc_14072F10D
 * 000000014072F11F: add     rsp, 8
 * 000000014072F123: call    loc_14072F116
 * 000000014072F128: add     rsp, 8
 * 000000014072F12C: call    loc_14072F11F
 * 000000014072F131: add     rsp, 8
 * 000000014072F135: call    loc_14072F128
 * 000000014072F13A: add     rsp, 8
 * 000000014072F13E: call    loc_14072F131
 * 000000014072F143: add     rsp, 8
 * 000000014072F147: call    loc_14072F13A
 * 000000014072F14C: add     rsp, 8
 * 000000014072F150: call    loc_14072F143
 * 000000014072F155: add     rsp, 8
 * 000000014072F159: call    loc_14072F14C
 * 000000014072F15E: add     rsp, 8
 * 000000014072F162: call    loc_14072F155
 * 000000014072F167: add     rsp, 8
 * 000000014072F16B: call    loc_14072F15E
 * 000000014072F170: add     rsp, 8
 * 000000014072F174: call    loc_14072F167
 * 000000014072F179: add     rsp, 8
 * 000000014072F17D: call    loc_14072F170
 * 000000014072F182: add     rsp, 8
 * 000000014072F186: call    loc_14072F179
 * 000000014072F18B: add     rsp, 8
 * 000000014072F18F: call    loc_14072F182
 * 000000014072F194: add     rsp, 8
 * 000000014072F198: call    loc_14072F18B
 * 000000014072F19D: add     rsp, 8
 * 000000014072F1A1: call    loc_14072F194
 * 000000014072F1A6: add     rsp, 8
 * 000000014072F1AA: call    loc_14072F19D
 * 000000014072F1AF: add     rsp, 8
 * 000000014072F1B3: call    loc_14072F1A6
 * 000000014072F1B8: add     rsp, 8
 * 000000014072F1BC: call    loc_14072F1AF
 * 000000014072F1C1: add     rsp, 8
 * 000000014072F1C5: call    loc_14072F1B8
 * 000000014072F1CA: add     rsp, 8
 * 000000014072F1CE: call    loc_14072F1C1
 * 000000014072F1D3: add     rsp, 8
 * 000000014072F1D7: call    loc_14072F1CA
 * 000000014072F1DC: add     rsp, 8
 * 000000014072F1E0: call    loc_14072F1D3
 * 000000014072F1E5: add     rsp, 8
 * 000000014072F1E9: mov     eax, 0DADAh
 * 000000014072F1EE: test    byte ptr gs:89Ch, 8
 * 000000014072F1F7: jz      short loc_14072F200
 * 000000014072F1F9: mov     al, 20h ; ' '
 * 000000014072F1FB: incsspq rax
 * 000000014072F200: test    edx, 80h
 * 000000014072F206: jz      short loc_14072F210
 * 000000014072F208: lfence
 * 000000014072F20B: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014072F210: lfence
 * 000000014072F213: mov     byte ptr gs:89Eh, 0
 * 000000014072F21C: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014072F223: jz      short loc_14072F244
 * 000000014072F225: mov     ecx, 6A7h
 * 000000014072F22A: rdmsr
 * 000000014072F22C: cmp     edx, 0
 * 000000014072F22F: jz      short loc_14072F244
 * 000000014072F231: mov     ecx, edx
 * 000000014072F233: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014072F239: cmp     edx, ecx
 * 000000014072F23B: jz      short loc_14072F244
 * 000000014072F23D: mov     ecx, 6A7h
 * 000000014072F242: wrmsr
 * 000000014072F244: test    byte ptr [r10+3], 3
 * 000000014072F249: mov     [rbp+0E8h+var_68], 0
 * 000000014072F252: jz      short loc_14072F259
 * 000000014072F254: call    KiSaveDebugRegisterState
 * 000000014072F259: cld
 * 000000014072F25A: stmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 000000014072F25E: ldmxcsr dword ptr gs:180h
 * 000000014072F267: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014072F26B: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014072F26F: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014072F273: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014072F277: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014072F27B: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014072F27F: test    [rbp+0E8h+arg_0], 1
 * 000000014072F286: jz      short KiDpcInterruptDispatchTrap
 * 000000014072F288: mov     r10, gs:188h
 * 000000014072F291: test    byte ptr [r10+3], 80h
 * 000000014072F296: jz      short KiDpcInterruptDispatchTrap
 * 000000014072F298: call    KiSynchronizeUserIsolationDomainExit
 * 000000014072F29D: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072F2A4: jz      short loc_14072F2AD
 * 000000014072F2A6: mov     [rbp+0E8h+var_18], rsi
 * 000000014072F2AD: mov     byte ptr [rbp+0E8h+var_13F+2], 0
 * 000000014072F2B1: xor     esi, esi
 * 000000014072F2B3: inc     dword ptr gs:87C0h
 * 000000014072F2BB: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072F2C2: jz      short loc_14072F2C7
 * 000000014072F2C4: clac
 * 000000014072F2C7: test    byte ptr cs:KiTrapFeatures, 10h
 * 000000014072F2CE: jz      short loc_14072F2F4
 * 000000014072F2D0: btr     dword ptr gs:228h, 2
 * 000000014072F2DA: cmp     dword ptr gs:228h, 0
 * 000000014072F2E3: jnz     short loc_14072F2F4
 * 000000014072F2E5: mov     ecx, 0C0010015h
 * 000000014072F2EA: rdmsr
 * 000000014072F2EC: btr     edx, 0
 * 000000014072F2F0: jnb     short loc_14072F2F4
 * 000000014072F2F2: wrmsr
 * 000000014072F2F4: mov     ecx, 2
 * 000000014072F2F9: cmp     cs:KiIrqlFlags, 0
 * 000000014072F300: jz      short loc_14072F309
 * 000000014072F302: call    KzSetIrqlUnsafe
 * 000000014072F307: jmp     short loc_14072F311
 * 000000014072F309: mov     rax, cr8
 * 000000014072F30D: mov     cr8, rcx
 * 000000014072F311: mov     byte ptr [rbp+0E8h+var_13F], al
 * 000000014072F314: mov     rcx, rsi
 * 000000014072F317: call    HalPerformEndOfInterrupt
 * 000000014072F31C: sti
 * 000000014072F31D: cmp     byte ptr gs:187h, 0
 * 000000014072F326: jnz     short loc_14072F335
 * 000000014072F328: mov     rcx, [rbp+0E8h+var_13F]
 * 000000014072F32C: lea     rdx, [rbp+0E8h+var_168]
 * 000000014072F330: call    KiDispatchInterrupt
 * 000000014072F335: cli
 * 000000014072F336: movzx   ecx, byte ptr [rbp+0E8h+var_13F]
 * 000000014072F33A: cmp     cs:KiIrqlFlags, 0
 * 000000014072F341: jz      short loc_14072F34A
 * 000000014072F343: call    KzSetIrqlUnsafe
 * 000000014072F348: jmp     short loc_14072F34E
 * 000000014072F34A: mov     cr8, rcx
 * 000000014072F34E: mov     rsi, [rbp+0E8h+var_18]
 * 000000014072F355: cli
 * 000000014072F356: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072F35D: jz      short loc_14072F364
 * 000000014072F35F: add     rsp, 28h
 * 000000014072F363: retn
 * 000000014072F364: test    [rbp+0E8h+arg_0], 1
 * 000000014072F36B: jz      loc_14072F66C
 * 000000014072F371: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072F378: jz      short loc_14072F37D
 * 000000014072F37A: stac
 * 000000014072F37D: mov     rcx, gs:188h
 * 000000014072F386: test    byte ptr [rcx+0C2h], 3
 * 000000014072F38D: jz      short loc_14072F3AA
 * 000000014072F38F: mov     ecx, 1
 * 000000014072F394: mov     cr8, rcx
 * 000000014072F398: sti
 * 000000014072F399: call    KiInitiateUserApc
 * 000000014072F39E: cli
 * 000000014072F39F: mov     ecx, 0
 * 000000014072F3A4: mov     cr8, rcx
 * 000000014072F3A8: jmp     short loc_14072F37D
 * 000000014072F3AA: test    byte ptr [rcx+3], 80h
 * 000000014072F3AE: jz      short loc_14072F3BD
 * 000000014072F3B0: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072F3B5: test    eax, eax
 * 000000014072F3B7: mov     rax, [rbp+0E8h+var_13F+7]
 * 000000014072F3BB: jnz     short loc_14072F37D
 * 000000014072F3BD: test    byte ptr gs:8A0h, 2
 * 000000014072F3C6: jz      short loc_14072F3CF
 * 000000014072F3C8: xor     ecx, ecx
 * 000000014072F3CA: call    KiUpdateStibpPairing
 * 000000014072F3CF: mov     rcx, gs:188h
 * 000000014072F3D8: test    dword ptr [rcx], 8000000h
 * 000000014072F3DE: jz      short loc_14072F3E5
 * 000000014072F3E0: call    KiRestoreSetContextState
 * 000000014072F3E5: mov     rcx, gs:188h
 * 000000014072F3EE: test    dword ptr [rcx], 10000h
 * 000000014072F3F4: jz      short loc_14072F40A
 * 000000014072F3F6: test    byte ptr [rcx+2], 1
 * 000000014072F3FA: jz      short loc_14072F40A
 * 000000014072F3FC: call    KiCopyCounters
 * 000000014072F401: mov     rcx, gs:188h
 * 000000014072F40A: ldmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 000000014072F40E: cmp     [rbp+0E8h+var_68], 0
 * 000000014072F416: jz      short loc_14072F41D
 * 000000014072F418: call    KiRestoreDebugRegisterState
 * 000000014072F41D: mov     rcx, gs:188h
 * 000000014072F426: bt      dword ptr [rcx+74h], 16h
 * 000000014072F42B: jnb     short loc_14072F457
 * 000000014072F42D: xor     ecx, ecx
 * 000000014072F42F: rdsspq  rcx
 * 000000014072F434: mov     r8, gs:9D68h
 * 000000014072F43D: add     r8, 8
 * 000000014072F441: cmp     rcx, r8
 * 000000014072F444: jnz     short loc_14072F457
 * 000000014072F446: mov     rcx, gs:9D60h
 * 000000014072F44F: rstorssp qword ptr [rcx]
 * 000000014072F453: saveprevssp
 * 000000014072F457: mov     byte ptr gs:89Eh, 0
 * 000000014072F460: movzx   eax, word ptr gs:8ACh
 * 000000014072F469: cmp     gs:8A6h, ax
 * 000000014072F472: jz      short loc_14072F486
 * 000000014072F474: mov     gs:8A6h, ax
 * 000000014072F47D: mov     ecx, 48h ; 'H'
 * 000000014072F482: xor     edx, edx
 * 000000014072F484: wrmsr
 * 000000014072F486: btr     word ptr gs:898h, 2
 * 000000014072F491: jnb     short loc_14072F4A1
 * 000000014072F493: mov     eax, 1
 * 000000014072F498: xor     edx, edx
 * 000000014072F49A: mov     ecx, 49h ; 'I'
 * 000000014072F49F: wrmsr
 * 000000014072F4A1: btr     word ptr gs:898h, 5
 * 000000014072F4AC: jnb     loc_14072F5E9
 * 000000014072F4B2: call    loc_14072F5C5
 * 000000014072F4B7: add     rsp, 8
 * 000000014072F4BB: call    loc_14072F5CE
 * 000000014072F4C0: add     rsp, 8
 * 000000014072F4C4: call    loc_14072F4B7
 * 000000014072F4C9: add     rsp, 8
 * 000000014072F4CD: call    loc_14072F4C0
 * 000000014072F4D2: add     rsp, 8
 * 000000014072F4D6: call    loc_14072F4C9
 * 000000014072F4DB: add     rsp, 8
 * 000000014072F4DF: call    loc_14072F4D2
 * 000000014072F4E4: add     rsp, 8
 * 000000014072F4E8: call    loc_14072F4DB
 * 000000014072F4ED: add     rsp, 8
 * 000000014072F4F1: call    loc_14072F4E4
 * 000000014072F4F6: add     rsp, 8
 * 000000014072F4FA: call    loc_14072F4ED
 * 000000014072F4FF: add     rsp, 8
 * 000000014072F503: call    loc_14072F4F6
 * 000000014072F508: add     rsp, 8
 * 000000014072F50C: call    loc_14072F4FF
 * 000000014072F511: add     rsp, 8
 * 000000014072F515: call    loc_14072F508
 * 000000014072F51A: add     rsp, 8
 * 000000014072F51E: call    loc_14072F511
 * 000000014072F523: add     rsp, 8
 * 000000014072F527: call    loc_14072F51A
 * 000000014072F52C: add     rsp, 8
 * 000000014072F530: call    loc_14072F523
 * 000000014072F535: add     rsp, 8
 * 000000014072F539: call    loc_14072F52C
 * 000000014072F53E: add     rsp, 8
 * 000000014072F542: call    loc_14072F535
 * 000000014072F547: add     rsp, 8
 * 000000014072F54B: call    loc_14072F53E
 * 000000014072F550: add     rsp, 8
 * 000000014072F554: call    loc_14072F547
 * 000000014072F559: add     rsp, 8
 * 000000014072F55D: call    loc_14072F550
 * 000000014072F562: add     rsp, 8
 * 000000014072F566: call    loc_14072F559
 * 000000014072F56B: add     rsp, 8
 * 000000014072F56F: call    loc_14072F562
 * 000000014072F574: add     rsp, 8
 * 000000014072F578: call    loc_14072F56B
 * 000000014072F57D: add     rsp, 8
 * 000000014072F581: call    loc_14072F574
 * 000000014072F586: add     rsp, 8
 * 000000014072F58A: call    loc_14072F57D
 * 000000014072F58F: add     rsp, 8
 * 000000014072F593: call    loc_14072F586
 * 000000014072F598: add     rsp, 8
 * 000000014072F59C: call    loc_14072F58F
 * 000000014072F5A1: add     rsp, 8
 * 000000014072F5A5: call    loc_14072F598
 * 000000014072F5AA: add     rsp, 8
 * 000000014072F5AE: call    loc_14072F5A1
 * 000000014072F5B3: add     rsp, 8
 * 000000014072F5B7: call    loc_14072F5AA
 * 000000014072F5BC: add     rsp, 8
 * 000000014072F5C0: call    loc_14072F5B3
 * 000000014072F5C5: add     rsp, 8
 * 000000014072F5C9: call    loc_14072F5BC
 * 000000014072F5CE: add     rsp, 8
 * 000000014072F5D2: mov     eax, 0DADAh
 * 000000014072F5D7: test    byte ptr gs:89Ch, 8
 * 000000014072F5E0: jz      short loc_14072F5E9
 * 000000014072F5E2: mov     al, 20h ; ' '
 * 000000014072F5E4: incsspq rax
 * 000000014072F5E9: test    word ptr gs:898h, 100h
 * 000000014072F5F4: jz      short loc_14072F602
 * 000000014072F5F6: xor     eax, eax
 * 000000014072F5F8: xor     edx, edx
 * 000000014072F5FA: mov     ecx, 1
 * 000000014072F5FF: div     rcx
 * 000000014072F602: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014072F606: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014072F60A: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014072F60E: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014072F612: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014072F616: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014072F61A: mov     r11, [rbp+0E8h+var_108]
 * 000000014072F61E: mov     r10, [rbp+0E8h+var_110]
 * 000000014072F622: mov     r9, [rbp+0E8h+var_118]
 * 000000014072F626: mov     r8, [rbp+0E8h+var_120]
 * 000000014072F62A: mov     rdx, [rbp+0E8h+var_128]
 * 000000014072F62E: mov     rcx, [rbp+0E8h+var_130]
 * 000000014072F632: mov     rax, [rbp+0E8h+var_13F+7]
 * 000000014072F636: mov     rsp, rbp
 * 000000014072F639: mov     rbp, [rbp+0E8h+var_10]
 * 000000014072F640: add     rsp, 0E8h
 * 000000014072F647: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072F64E: jz      short loc_14072F655
 * 000000014072F650: jmp     KiKernelExit
 * 000000014072F655: test    word ptr gs:898h, 200h
 * 000000014072F660: jz      short loc_14072F667
 * 000000014072F662: verw    [rsp+arg_18]
 * 000000014072F667: swapgs
 * 000000014072F66A: iretq
 * 000000014072F66C: ldmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 000000014072F670: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014072F674: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014072F678: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014072F67C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014072F680: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014072F684: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014072F688: mov     r11, [rbp+0E8h+var_108]
 * 000000014072F68C: mov     r10, [rbp+0E8h+var_110]
 * 000000014072F690: mov     r9, [rbp+0E8h+var_118]
 * 000000014072F694: mov     r8, [rbp+0E8h+var_120]
 * 000000014072F698: mov     rdx, [rbp+0E8h+var_128]
 * 000000014072F69C: mov     rcx, [rbp+0E8h+var_130]
 * 000000014072F6A0: mov     rax, [rbp+0E8h+var_13F+7]
 * 000000014072F6A4: mov     rsp, rbp
 * 000000014072F6A7: mov     rbp, [rbp+0E8h+var_10]
 * 000000014072F6AE: add     rsp, 0E8h
 * 000000014072F6B5: iretq
 */
