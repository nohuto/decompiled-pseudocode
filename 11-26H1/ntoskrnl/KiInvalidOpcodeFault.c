/*
 * XREFs of KiInvalidOpcodeFault @ 0x140734F00
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x140C59440 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x140734F00 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiInvalidOpcodeFault @ 0x140734F00
 * Reason: Hex-Rays returned no pseudocode for 0x140734F00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140734F00: sub     rsp, 8
 * 0000000140734F04: push    rbp
 * 0000000140734F05: sub     rsp, 158h
 * 0000000140734F0C: lea     rbp, [rsp+80h]
 * 0000000140734F14: mov     [rbp+0E8h+var_138], rax
 * 0000000140734F18: mov     [rbp+0E8h+var_130], rcx
 * 0000000140734F1C: mov     [rbp+0E8h+var_128], rdx
 * 0000000140734F20: mov     [rbp+0E8h+var_120], r8
 * 0000000140734F24: mov     [rbp+0E8h+var_118], r9
 * 0000000140734F28: mov     [rbp+0E8h+var_110], r10
 * 0000000140734F2C: mov     [rbp+0E8h+var_108], r11
 * 0000000140734F30: test    [rbp+0E8h+arg_0], 1
 * 0000000140734F37: jnz     short loc_140734F71
 * 0000000140734F39: xor     edx, edx
 * 0000000140734F3B: rdsspq  rdx
 * 0000000140734F40: mov     [rbp+0E8h+var_90], rdx
 * 0000000140734F44: lfence
 * 0000000140734F47: test    byte ptr gs:898h, 1
 * 0000000140734F50: jnz     short loc_140734F5A
 * 0000000140734F52: lfence
 * 0000000140734F55: jmp     loc_1407351E2
 * 0000000140734F5A: movzx   eax, word ptr gs:8A6h
 * 0000000140734F63: mov     ecx, 48h ; 'H'
 * 0000000140734F68: xor     edx, edx
 * 0000000140734F6A: wrmsr
 * 0000000140734F6C: jmp     loc_1407351E2
 * 0000000140734F71: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140734F78: jnz     short loc_140734F7D
 * 0000000140734F7A: swapgs
 * 0000000140734F7D: lfence
 * 0000000140734F80: mov     rcx, gs:9D68h
 * 0000000140734F89: test    rcx, rcx
 * 0000000140734F8C: jz      short loc_140734FAD
 * 0000000140734F8E: rdsspq  rdx
 * 0000000140734F93: mov     r10, gs:9D60h
 * 0000000140734F9C: add     r10, 8
 * 0000000140734FA0: cmp     rdx, r10
 * 0000000140734FA3: jnz     short loc_140734FAD
 * 0000000140734FA5: rstorssp qword ptr [rcx]
 * 0000000140734FA9: saveprevssp
 * 0000000140734FAD: mov     r10, gs:188h
 * 0000000140734FB6: mov     rcx, gs:188h
 * 0000000140734FBF: mov     rcx, [rcx+220h]
 * 0000000140734FC6: mov     rcx, [rcx+760h]
 * 0000000140734FCD: mov     gs:890h, rcx
 * 0000000140734FD6: mov     cx, gs:8A2h
 * 0000000140734FDF: mov     gs:8A4h, cx
 * 0000000140734FE8: mov     cl, gs:898h
 * 0000000140734FF0: mov     gs:89Ah, cl
 * 0000000140734FF8: movzx   eax, word ptr gs:8A8h
 * 0000000140735001: cmp     gs:8A6h, ax
 * 000000014073500A: jz      short loc_14073501E
 * 000000014073500C: mov     gs:8A6h, ax
 * 0000000140735015: mov     ecx, 48h ; 'H'
 * 000000014073501A: xor     edx, edx
 * 000000014073501C: wrmsr
 * 000000014073501E: movzx   edx, byte ptr gs:898h
 * 0000000140735027: test    edx, 8
 * 000000014073502D: jz      short loc_140735046
 * 000000014073502F: mov     eax, 1
 * 0000000140735034: xor     edx, edx
 * 0000000140735036: mov     ecx, 49h ; 'I'
 * 000000014073503B: wrmsr
 * 000000014073503D: movzx   edx, byte ptr gs:898h
 * 0000000140735046: test    edx, 2
 * 000000014073504C: jz      loc_140735189
 * 0000000140735052: call    loc_140735165
 * 0000000140735057: add     rsp, 8
 * 000000014073505B: call    loc_14073516E
 * 0000000140735060: add     rsp, 8
 * 0000000140735064: call    loc_140735057
 * 0000000140735069: add     rsp, 8
 * 000000014073506D: call    loc_140735060
 * 0000000140735072: add     rsp, 8
 * 0000000140735076: call    loc_140735069
 * 000000014073507B: add     rsp, 8
 * 000000014073507F: call    loc_140735072
 * 0000000140735084: add     rsp, 8
 * 0000000140735088: call    loc_14073507B
 * 000000014073508D: add     rsp, 8
 * 0000000140735091: call    loc_140735084
 * 0000000140735096: add     rsp, 8
 * 000000014073509A: call    loc_14073508D
 * 000000014073509F: add     rsp, 8
 * 00000001407350A3: call    loc_140735096
 * 00000001407350A8: add     rsp, 8
 * 00000001407350AC: call    loc_14073509F
 * 00000001407350B1: add     rsp, 8
 * 00000001407350B5: call    loc_1407350A8
 * 00000001407350BA: add     rsp, 8
 * 00000001407350BE: call    loc_1407350B1
 * 00000001407350C3: add     rsp, 8
 * 00000001407350C7: call    loc_1407350BA
 * 00000001407350CC: add     rsp, 8
 * 00000001407350D0: call    loc_1407350C3
 * 00000001407350D5: add     rsp, 8
 * 00000001407350D9: call    loc_1407350CC
 * 00000001407350DE: add     rsp, 8
 * 00000001407350E2: call    loc_1407350D5
 * 00000001407350E7: add     rsp, 8
 * 00000001407350EB: call    loc_1407350DE
 * 00000001407350F0: add     rsp, 8
 * 00000001407350F4: call    loc_1407350E7
 * 00000001407350F9: add     rsp, 8
 * 00000001407350FD: call    loc_1407350F0
 * 0000000140735102: add     rsp, 8
 * 0000000140735106: call    loc_1407350F9
 * 000000014073510B: add     rsp, 8
 * 000000014073510F: call    loc_140735102
 * 0000000140735114: add     rsp, 8
 * 0000000140735118: call    loc_14073510B
 * 000000014073511D: add     rsp, 8
 * 0000000140735121: call    loc_140735114
 * 0000000140735126: add     rsp, 8
 * 000000014073512A: call    loc_14073511D
 * 000000014073512F: add     rsp, 8
 * 0000000140735133: call    loc_140735126
 * 0000000140735138: add     rsp, 8
 * 000000014073513C: call    loc_14073512F
 * 0000000140735141: add     rsp, 8
 * 0000000140735145: call    loc_140735138
 * 000000014073514A: add     rsp, 8
 * 000000014073514E: call    loc_140735141
 * 0000000140735153: add     rsp, 8
 * 0000000140735157: call    loc_14073514A
 * 000000014073515C: add     rsp, 8
 * 0000000140735160: call    loc_140735153
 * 0000000140735165: add     rsp, 8
 * 0000000140735169: call    loc_14073515C
 * 000000014073516E: add     rsp, 8
 * 0000000140735172: mov     eax, 0DADAh
 * 0000000140735177: test    byte ptr gs:89Ch, 8
 * 0000000140735180: jz      short loc_140735189
 * 0000000140735182: mov     al, 20h ; ' '
 * 0000000140735184: incsspq rax
 * 0000000140735189: test    edx, 80h
 * 000000014073518F: jz      short loc_140735199
 * 0000000140735191: lfence
 * 0000000140735194: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140735199: lfence
 * 000000014073519C: mov     byte ptr gs:89Eh, 0
 * 00000001407351A5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001407351AC: jz      short loc_1407351CD
 * 00000001407351AE: mov     ecx, 6A7h
 * 00000001407351B3: rdmsr
 * 00000001407351B5: cmp     edx, 0
 * 00000001407351B8: jz      short loc_1407351CD
 * 00000001407351BA: mov     ecx, edx
 * 00000001407351BC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001407351C2: cmp     edx, ecx
 * 00000001407351C4: jz      short loc_1407351CD
 * 00000001407351C6: mov     ecx, 6A7h
 * 00000001407351CB: wrmsr
 * 00000001407351CD: test    byte ptr [r10+3], 3
 * 00000001407351D2: mov     [rbp+0E8h+var_68], 0
 * 00000001407351DB: jz      short loc_1407351E2
 * 00000001407351DD: call    KiSaveDebugRegisterState
 * 00000001407351E2: cld
 * 00000001407351E3: stmxcsr [rbp+0E8h+var_13C]
 * 00000001407351E7: ldmxcsr dword ptr gs:180h
 * 00000001407351F0: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001407351F4: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001407351F8: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001407351FC: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140735200: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140735204: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140735208: test    [rbp+0E8h+arg_0], 1
 * 000000014073520F: jz      short KiInvalidOpcodeFaultDispatchTrap
 * 0000000140735211: mov     r10, gs:188h
 * 000000014073521A: test    byte ptr [r10+3], 80h
 * 000000014073521F: jz      short KiInvalidOpcodeFaultDispatchTrap
 * 0000000140735221: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140735226: mov     [rbp+0E8h+var_13D], 1
 * 000000014073522A: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140735231: jz      short loc_140735254
 * 0000000140735233: test    [rbp+0E8h+arg_0], 1
 * 000000014073523A: jnz     short loc_140735251
 * 000000014073523C: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140735243: jz      short loc_140735254
 * 0000000140735245: test    [rbp+0E8h+arg_8], 40000h
 * 000000014073524F: jz      short loc_140735254
 * 0000000140735251: stac
 * 0000000140735254: test    [rbp+0E8h+arg_8], 200h
 * 000000014073525E: jz      short loc_140735261
 * 0000000140735260: sti
 * 0000000140735261: mov     ecx, 10000002h
 * 0000000140735266: xor     edx, edx
 * 0000000140735268: mov     r8, [rbp+0E8h]
 * 000000014073526F: call    KiExceptionDispatch
 * 0000000140735274: nop
 * 0000000140735275: cli
 * 0000000140735276: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073527D: jz      short loc_140735284
 * 000000014073527F: add     rsp, 28h
 * 0000000140735283: retn
 * 0000000140735284: test    [rbp+0E8h+arg_0], 1
 * 000000014073528B: jz      loc_14073558C
 * 0000000140735291: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140735298: jz      short loc_14073529D
 * 000000014073529A: stac
 * 000000014073529D: mov     rcx, gs:188h
 * 00000001407352A6: test    byte ptr [rcx+0C2h], 3
 * 00000001407352AD: jz      short loc_1407352CA
 * 00000001407352AF: mov     ecx, 1
 * 00000001407352B4: mov     cr8, rcx
 * 00000001407352B8: sti
 * 00000001407352B9: call    KiInitiateUserApc
 * 00000001407352BE: cli
 * 00000001407352BF: mov     ecx, 0
 * 00000001407352C4: mov     cr8, rcx
 * 00000001407352C8: jmp     short loc_14073529D
 * 00000001407352CA: test    byte ptr [rcx+3], 80h
 * 00000001407352CE: jz      short loc_1407352DD
 * 00000001407352D0: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001407352D5: test    eax, eax
 * 00000001407352D7: mov     rax, [rbp+0E8h+var_138]
 * 00000001407352DB: jnz     short loc_14073529D
 * 00000001407352DD: test    byte ptr gs:8A0h, 2
 * 00000001407352E6: jz      short loc_1407352EF
 * 00000001407352E8: xor     ecx, ecx
 * 00000001407352EA: call    KiUpdateStibpPairing
 * 00000001407352EF: mov     rcx, gs:188h
 * 00000001407352F8: test    dword ptr [rcx], 8000000h
 * 00000001407352FE: jz      short loc_140735305
 * 0000000140735300: call    KiRestoreSetContextState
 * 0000000140735305: mov     rcx, gs:188h
 * 000000014073530E: test    dword ptr [rcx], 10000h
 * 0000000140735314: jz      short loc_14073532A
 * 0000000140735316: test    byte ptr [rcx+2], 1
 * 000000014073531A: jz      short loc_14073532A
 * 000000014073531C: call    KiCopyCounters
 * 0000000140735321: mov     rcx, gs:188h
 * 000000014073532A: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014073532E: cmp     [rbp+0E8h+var_68], 0
 * 0000000140735336: jz      short loc_14073533D
 * 0000000140735338: call    KiRestoreDebugRegisterState
 * 000000014073533D: mov     rcx, gs:188h
 * 0000000140735346: bt      dword ptr [rcx+74h], 16h
 * 000000014073534B: jnb     short loc_140735377
 * 000000014073534D: xor     ecx, ecx
 * 000000014073534F: rdsspq  rcx
 * 0000000140735354: mov     r8, gs:9D68h
 * 000000014073535D: add     r8, 8
 * 0000000140735361: cmp     rcx, r8
 * 0000000140735364: jnz     short loc_140735377
 * 0000000140735366: mov     rcx, gs:9D60h
 * 000000014073536F: rstorssp qword ptr [rcx]
 * 0000000140735373: saveprevssp
 * 0000000140735377: mov     byte ptr gs:89Eh, 0
 * 0000000140735380: movzx   eax, word ptr gs:8ACh
 * 0000000140735389: cmp     gs:8A6h, ax
 * 0000000140735392: jz      short loc_1407353A6
 * 0000000140735394: mov     gs:8A6h, ax
 * 000000014073539D: mov     ecx, 48h ; 'H'
 * 00000001407353A2: xor     edx, edx
 * 00000001407353A4: wrmsr
 * 00000001407353A6: btr     word ptr gs:898h, 2
 * 00000001407353B1: jnb     short loc_1407353C1
 * 00000001407353B3: mov     eax, 1
 * 00000001407353B8: xor     edx, edx
 * 00000001407353BA: mov     ecx, 49h ; 'I'
 * 00000001407353BF: wrmsr
 * 00000001407353C1: btr     word ptr gs:898h, 5
 * 00000001407353CC: jnb     loc_140735509
 * 00000001407353D2: call    loc_1407354E5
 * 00000001407353D7: add     rsp, 8
 * 00000001407353DB: call    loc_1407354EE
 * 00000001407353E0: add     rsp, 8
 * 00000001407353E4: call    loc_1407353D7
 * 00000001407353E9: add     rsp, 8
 * 00000001407353ED: call    loc_1407353E0
 * 00000001407353F2: add     rsp, 8
 * 00000001407353F6: call    loc_1407353E9
 * 00000001407353FB: add     rsp, 8
 * 00000001407353FF: call    loc_1407353F2
 * 0000000140735404: add     rsp, 8
 * 0000000140735408: call    loc_1407353FB
 * 000000014073540D: add     rsp, 8
 * 0000000140735411: call    loc_140735404
 * 0000000140735416: add     rsp, 8
 * 000000014073541A: call    loc_14073540D
 * 000000014073541F: add     rsp, 8
 * 0000000140735423: call    loc_140735416
 * 0000000140735428: add     rsp, 8
 * 000000014073542C: call    loc_14073541F
 * 0000000140735431: add     rsp, 8
 * 0000000140735435: call    loc_140735428
 * 000000014073543A: add     rsp, 8
 * 000000014073543E: call    loc_140735431
 * 0000000140735443: add     rsp, 8
 * 0000000140735447: call    loc_14073543A
 * 000000014073544C: add     rsp, 8
 * 0000000140735450: call    loc_140735443
 * 0000000140735455: add     rsp, 8
 * 0000000140735459: call    loc_14073544C
 * 000000014073545E: add     rsp, 8
 * 0000000140735462: call    loc_140735455
 * 0000000140735467: add     rsp, 8
 * 000000014073546B: call    loc_14073545E
 * 0000000140735470: add     rsp, 8
 * 0000000140735474: call    loc_140735467
 * 0000000140735479: add     rsp, 8
 * 000000014073547D: call    loc_140735470
 * 0000000140735482: add     rsp, 8
 * 0000000140735486: call    loc_140735479
 * 000000014073548B: add     rsp, 8
 * 000000014073548F: call    loc_140735482
 * 0000000140735494: add     rsp, 8
 * 0000000140735498: call    loc_14073548B
 * 000000014073549D: add     rsp, 8
 * 00000001407354A1: call    loc_140735494
 * 00000001407354A6: add     rsp, 8
 * 00000001407354AA: call    loc_14073549D
 * 00000001407354AF: add     rsp, 8
 * 00000001407354B3: call    loc_1407354A6
 * 00000001407354B8: add     rsp, 8
 * 00000001407354BC: call    loc_1407354AF
 * 00000001407354C1: add     rsp, 8
 * 00000001407354C5: call    loc_1407354B8
 * 00000001407354CA: add     rsp, 8
 * 00000001407354CE: call    loc_1407354C1
 * 00000001407354D3: add     rsp, 8
 * 00000001407354D7: call    loc_1407354CA
 * 00000001407354DC: add     rsp, 8
 * 00000001407354E0: call    loc_1407354D3
 * 00000001407354E5: add     rsp, 8
 * 00000001407354E9: call    loc_1407354DC
 * 00000001407354EE: add     rsp, 8
 * 00000001407354F2: mov     eax, 0DADAh
 * 00000001407354F7: test    byte ptr gs:89Ch, 8
 * 0000000140735500: jz      short loc_140735509
 * 0000000140735502: mov     al, 20h ; ' '
 * 0000000140735504: incsspq rax
 * 0000000140735509: test    word ptr gs:898h, 100h
 * 0000000140735514: jz      short loc_140735522
 * 0000000140735516: xor     eax, eax
 * 0000000140735518: xor     edx, edx
 * 000000014073551A: mov     ecx, 1
 * 000000014073551F: div     rcx
 * 0000000140735522: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140735526: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014073552A: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014073552E: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140735532: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140735536: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014073553A: mov     r11, [rbp+0E8h+var_108]
 * 000000014073553E: mov     r10, [rbp+0E8h+var_110]
 * 0000000140735542: mov     r9, [rbp+0E8h+var_118]
 * 0000000140735546: mov     r8, [rbp+0E8h+var_120]
 * 000000014073554A: mov     rdx, [rbp+0E8h+var_128]
 * 000000014073554E: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140735552: mov     rax, [rbp+0E8h+var_138]
 * 0000000140735556: mov     rsp, rbp
 * 0000000140735559: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140735560: add     rsp, 0E8h
 * 0000000140735567: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073556E: jz      short loc_140735575
 * 0000000140735570: jmp     KiKernelExit
 * 0000000140735575: test    word ptr gs:898h, 200h
 * 0000000140735580: jz      short loc_140735587
 * 0000000140735582: verw    [rsp+arg_18]
 * 0000000140735587: swapgs
 * 000000014073558A: iretq
 * 000000014073558C: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140735590: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140735594: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140735598: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014073559C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001407355A0: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001407355A4: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001407355A8: mov     r11, [rbp+0E8h+var_108]
 * 00000001407355AC: mov     r10, [rbp+0E8h+var_110]
 * 00000001407355B0: mov     r9, [rbp+0E8h+var_118]
 * 00000001407355B4: mov     r8, [rbp+0E8h+var_120]
 * 00000001407355B8: mov     rdx, [rbp+0E8h+var_128]
 * 00000001407355BC: mov     rcx, [rbp+0E8h+var_130]
 * 00000001407355C0: mov     rax, [rbp+0E8h+var_138]
 * 00000001407355C4: mov     rsp, rbp
 * 00000001407355C7: mov     rbp, [rbp+0E8h+var_10]
 * 00000001407355CE: add     rsp, 0E8h
 * 00000001407355D5: iretq
 */
