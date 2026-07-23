/*
 * XREFs of KiApcInterrupt @ 0x140731050
 * Callers:
 *     KiApcInterruptShadow @ 0x140C5FC40 (KiApcInterruptShadow.c)
 * Callees:
 *     KiDeliverApc @ 0x140245350 (KiDeliverApc.c)
 *     HalPerformEndOfInterrupt @ 0x14032FAB0 (HalPerformEndOfInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EE560 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x140731050 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiApcInterrupt @ 0x140731050
 * Reason: Hex-Rays returned no pseudocode for 0x140731050
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140731050: sub     rsp, 8
 * 0000000140731054: push    rbp
 * 0000000140731055: sub     rsp, 158h
 * 000000014073105C: lea     rbp, [rsp+80h]
 * 0000000140731064: mov     [rbp+0E8h+var_18], rsi
 * 000000014073106B: mov     [rbp+0E8h+var_138], rax
 * 000000014073106F: mov     [rbp+0E8h+var_130], rcx
 * 0000000140731073: mov     [rbp+0E8h+var_128], rdx
 * 0000000140731077: mov     [rbp+0E8h+var_120], r8
 * 000000014073107B: mov     [rbp+0E8h+var_118], r9
 * 000000014073107F: mov     [rbp+0E8h+var_110], r10
 * 0000000140731083: mov     [rbp+0E8h+var_108], r11
 * 0000000140731087: test    [rbp+0E8h+arg_0], 1
 * 000000014073108E: jnz     short loc_1407310C8
 * 0000000140731090: xor     edx, edx
 * 0000000140731092: rdsspq  rdx
 * 0000000140731097: mov     [rbp+0E8h+var_90], rdx
 * 000000014073109B: lfence
 * 000000014073109E: test    byte ptr gs:898h, 1
 * 00000001407310A7: jnz     short loc_1407310B1
 * 00000001407310A9: lfence
 * 00000001407310AC: jmp     loc_140731339
 * 00000001407310B1: movzx   eax, word ptr gs:8A6h
 * 00000001407310BA: mov     ecx, 48h ; 'H'
 * 00000001407310BF: xor     edx, edx
 * 00000001407310C1: wrmsr
 * 00000001407310C3: jmp     loc_140731339
 * 00000001407310C8: test    byte ptr cs:KiTrapFeatures, 1
 * 00000001407310CF: jnz     short loc_1407310D4
 * 00000001407310D1: swapgs
 * 00000001407310D4: lfence
 * 00000001407310D7: mov     rcx, gs:9D68h
 * 00000001407310E0: test    rcx, rcx
 * 00000001407310E3: jz      short loc_140731104
 * 00000001407310E5: rdsspq  rdx
 * 00000001407310EA: mov     r10, gs:9D60h
 * 00000001407310F3: add     r10, 8
 * 00000001407310F7: cmp     rdx, r10
 * 00000001407310FA: jnz     short loc_140731104
 * 00000001407310FC: rstorssp qword ptr [rcx]
 * 0000000140731100: saveprevssp
 * 0000000140731104: mov     r10, gs:188h
 * 000000014073110D: mov     rcx, gs:188h
 * 0000000140731116: mov     rcx, [rcx+220h]
 * 000000014073111D: mov     rcx, [rcx+760h]
 * 0000000140731124: mov     gs:890h, rcx
 * 000000014073112D: mov     cx, gs:8A2h
 * 0000000140731136: mov     gs:8A4h, cx
 * 000000014073113F: mov     cl, gs:898h
 * 0000000140731147: mov     gs:89Ah, cl
 * 000000014073114F: movzx   eax, word ptr gs:8A8h
 * 0000000140731158: cmp     gs:8A6h, ax
 * 0000000140731161: jz      short loc_140731175
 * 0000000140731163: mov     gs:8A6h, ax
 * 000000014073116C: mov     ecx, 48h ; 'H'
 * 0000000140731171: xor     edx, edx
 * 0000000140731173: wrmsr
 * 0000000140731175: movzx   edx, byte ptr gs:898h
 * 000000014073117E: test    edx, 8
 * 0000000140731184: jz      short loc_14073119D
 * 0000000140731186: mov     eax, 1
 * 000000014073118B: xor     edx, edx
 * 000000014073118D: mov     ecx, 49h ; 'I'
 * 0000000140731192: wrmsr
 * 0000000140731194: movzx   edx, byte ptr gs:898h
 * 000000014073119D: test    edx, 2
 * 00000001407311A3: jz      loc_1407312E0
 * 00000001407311A9: call    loc_1407312BC
 * 00000001407311AE: add     rsp, 8
 * 00000001407311B2: call    loc_1407312C5
 * 00000001407311B7: add     rsp, 8
 * 00000001407311BB: call    loc_1407311AE
 * 00000001407311C0: add     rsp, 8
 * 00000001407311C4: call    loc_1407311B7
 * 00000001407311C9: add     rsp, 8
 * 00000001407311CD: call    loc_1407311C0
 * 00000001407311D2: add     rsp, 8
 * 00000001407311D6: call    loc_1407311C9
 * 00000001407311DB: add     rsp, 8
 * 00000001407311DF: call    loc_1407311D2
 * 00000001407311E4: add     rsp, 8
 * 00000001407311E8: call    loc_1407311DB
 * 00000001407311ED: add     rsp, 8
 * 00000001407311F1: call    loc_1407311E4
 * 00000001407311F6: add     rsp, 8
 * 00000001407311FA: call    loc_1407311ED
 * 00000001407311FF: add     rsp, 8
 * 0000000140731203: call    loc_1407311F6
 * 0000000140731208: add     rsp, 8
 * 000000014073120C: call    loc_1407311FF
 * 0000000140731211: add     rsp, 8
 * 0000000140731215: call    loc_140731208
 * 000000014073121A: add     rsp, 8
 * 000000014073121E: call    loc_140731211
 * 0000000140731223: add     rsp, 8
 * 0000000140731227: call    loc_14073121A
 * 000000014073122C: add     rsp, 8
 * 0000000140731230: call    loc_140731223
 * 0000000140731235: add     rsp, 8
 * 0000000140731239: call    loc_14073122C
 * 000000014073123E: add     rsp, 8
 * 0000000140731242: call    loc_140731235
 * 0000000140731247: add     rsp, 8
 * 000000014073124B: call    loc_14073123E
 * 0000000140731250: add     rsp, 8
 * 0000000140731254: call    loc_140731247
 * 0000000140731259: add     rsp, 8
 * 000000014073125D: call    loc_140731250
 * 0000000140731262: add     rsp, 8
 * 0000000140731266: call    loc_140731259
 * 000000014073126B: add     rsp, 8
 * 000000014073126F: call    loc_140731262
 * 0000000140731274: add     rsp, 8
 * 0000000140731278: call    loc_14073126B
 * 000000014073127D: add     rsp, 8
 * 0000000140731281: call    loc_140731274
 * 0000000140731286: add     rsp, 8
 * 000000014073128A: call    loc_14073127D
 * 000000014073128F: add     rsp, 8
 * 0000000140731293: call    loc_140731286
 * 0000000140731298: add     rsp, 8
 * 000000014073129C: call    loc_14073128F
 * 00000001407312A1: add     rsp, 8
 * 00000001407312A5: call    loc_140731298
 * 00000001407312AA: add     rsp, 8
 * 00000001407312AE: call    loc_1407312A1
 * 00000001407312B3: add     rsp, 8
 * 00000001407312B7: call    loc_1407312AA
 * 00000001407312BC: add     rsp, 8
 * 00000001407312C0: call    loc_1407312B3
 * 00000001407312C5: add     rsp, 8
 * 00000001407312C9: mov     eax, 0DADAh
 * 00000001407312CE: test    byte ptr gs:89Ch, 8
 * 00000001407312D7: jz      short loc_1407312E0
 * 00000001407312D9: mov     al, 20h ; ' '
 * 00000001407312DB: incsspq rax
 * 00000001407312E0: test    edx, 80h
 * 00000001407312E6: jz      short loc_1407312F0
 * 00000001407312E8: lfence
 * 00000001407312EB: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001407312F0: lfence
 * 00000001407312F3: mov     byte ptr gs:89Eh, 0
 * 00000001407312FC: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140731303: jz      short loc_140731324
 * 0000000140731305: mov     ecx, 6A7h
 * 000000014073130A: rdmsr
 * 000000014073130C: cmp     edx, 0
 * 000000014073130F: jz      short loc_140731324
 * 0000000140731311: mov     ecx, edx
 * 0000000140731313: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140731319: cmp     edx, ecx
 * 000000014073131B: jz      short loc_140731324
 * 000000014073131D: mov     ecx, 6A7h
 * 0000000140731322: wrmsr
 * 0000000140731324: test    byte ptr [r10+3], 3
 * 0000000140731329: mov     [rbp+0E8h+var_68], 0
 * 0000000140731332: jz      short loc_140731339
 * 0000000140731334: call    KiSaveDebugRegisterState
 * 0000000140731339: cld
 * 000000014073133A: stmxcsr [rbp+0E8h+var_13C]
 * 000000014073133E: ldmxcsr dword ptr gs:180h
 * 0000000140731347: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014073134B: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014073134F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140731353: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140731357: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014073135B: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014073135F: test    [rbp+0E8h+arg_0], 1
 * 0000000140731366: jz      short KiApcInterruptDispatchTrap
 * 0000000140731368: mov     r10, gs:188h
 * 0000000140731371: test    byte ptr [r10+3], 80h
 * 0000000140731376: jz      short KiApcInterruptDispatchTrap
 * 0000000140731378: call    KiSynchronizeUserIsolationDomainExit
 * 000000014073137D: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140731384: jz      short loc_14073138D
 * 0000000140731386: mov     [rbp+0E8h+var_18], rsi
 * 000000014073138D: mov     [rbp+0E8h+var_13D], 0
 * 0000000140731391: xor     esi, esi
 * 0000000140731393: inc     dword ptr gs:87C0h
 * 000000014073139B: test    byte ptr cs:KiTrapFeatures, 8
 * 00000001407313A2: jz      short loc_1407313C5
 * 00000001407313A4: test    [rbp+0E8h+arg_0], 1
 * 00000001407313AB: jnz     short loc_1407313C2
 * 00000001407313AD: test    byte ptr cs:KiTrapFeatures, 2
 * 00000001407313B4: jz      short loc_1407313C5
 * 00000001407313B6: test    [rbp+0E8h+arg_8], 40000h
 * 00000001407313C0: jz      short loc_1407313C5
 * 00000001407313C2: stac
 * 00000001407313C5: test    byte ptr cs:KiTrapFeatures, 10h
 * 00000001407313CC: jz      short loc_1407313F2
 * 00000001407313CE: btr     dword ptr gs:228h, 1
 * 00000001407313D8: cmp     dword ptr gs:228h, 0
 * 00000001407313E1: jnz     short loc_1407313F2
 * 00000001407313E3: mov     ecx, 0C0010015h
 * 00000001407313E8: rdmsr
 * 00000001407313EA: btr     edx, 0
 * 00000001407313EE: jnb     short loc_1407313F2
 * 00000001407313F0: wrmsr
 * 00000001407313F2: mov     ecx, 1
 * 00000001407313F7: cmp     cs:KiIrqlFlags, 0
 * 00000001407313FE: jz      short loc_140731407
 * 0000000140731400: call    KzSetIrqlUnsafe
 * 0000000140731405: jmp     short loc_14073140F
 * 0000000140731407: mov     rax, cr8
 * 000000014073140B: mov     cr8, rcx
 * 000000014073140F: mov     [rbp+0E8h+var_13F], al
 * 0000000140731412: mov     rcx, rsi
 * 0000000140731415: call    HalPerformEndOfInterrupt
 * 000000014073141A: sti
 * 000000014073141B: cmp     byte ptr gs:187h, 0
 * 0000000140731424: jnz     short loc_140731436
 * 0000000140731426: mov     ecx, 0
 * 000000014073142B: xor     edx, edx
 * 000000014073142D: lea     r8, [rbp+0E8h+var_168]
 * 0000000140731431: call    KiDeliverApc
 * 0000000140731436: cli
 * 0000000140731437: movzx   ecx, [rbp+0E8h+var_13F]
 * 000000014073143B: cmp     cs:KiIrqlFlags, 0
 * 0000000140731442: jz      short loc_14073144B
 * 0000000140731444: call    KzSetIrqlUnsafe
 * 0000000140731449: jmp     short loc_14073144F
 * 000000014073144B: mov     cr8, rcx
 * 000000014073144F: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140731456: cli
 * 0000000140731457: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073145E: jz      short loc_140731465
 * 0000000140731460: add     rsp, 28h
 * 0000000140731464: retn
 * 0000000140731465: test    [rbp+0E8h+arg_0], 1
 * 000000014073146C: jz      loc_14073176D
 * 0000000140731472: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140731479: jz      short loc_14073147E
 * 000000014073147B: stac
 * 000000014073147E: mov     rcx, gs:188h
 * 0000000140731487: test    byte ptr [rcx+0C2h], 3
 * 000000014073148E: jz      short loc_1407314AB
 * 0000000140731490: mov     ecx, 1
 * 0000000140731495: mov     cr8, rcx
 * 0000000140731499: sti
 * 000000014073149A: call    KiInitiateUserApc
 * 000000014073149F: cli
 * 00000001407314A0: mov     ecx, 0
 * 00000001407314A5: mov     cr8, rcx
 * 00000001407314A9: jmp     short loc_14073147E
 * 00000001407314AB: test    byte ptr [rcx+3], 80h
 * 00000001407314AF: jz      short loc_1407314BE
 * 00000001407314B1: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001407314B6: test    eax, eax
 * 00000001407314B8: mov     rax, [rbp+0E8h+var_138]
 * 00000001407314BC: jnz     short loc_14073147E
 * 00000001407314BE: test    byte ptr gs:8A0h, 2
 * 00000001407314C7: jz      short loc_1407314D0
 * 00000001407314C9: xor     ecx, ecx
 * 00000001407314CB: call    KiUpdateStibpPairing
 * 00000001407314D0: mov     rcx, gs:188h
 * 00000001407314D9: test    dword ptr [rcx], 8000000h
 * 00000001407314DF: jz      short loc_1407314E6
 * 00000001407314E1: call    KiRestoreSetContextState
 * 00000001407314E6: mov     rcx, gs:188h
 * 00000001407314EF: test    dword ptr [rcx], 10000h
 * 00000001407314F5: jz      short loc_14073150B
 * 00000001407314F7: test    byte ptr [rcx+2], 1
 * 00000001407314FB: jz      short loc_14073150B
 * 00000001407314FD: call    KiCopyCounters
 * 0000000140731502: mov     rcx, gs:188h
 * 000000014073150B: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014073150F: cmp     [rbp+0E8h+var_68], 0
 * 0000000140731517: jz      short loc_14073151E
 * 0000000140731519: call    KiRestoreDebugRegisterState
 * 000000014073151E: mov     rcx, gs:188h
 * 0000000140731527: bt      dword ptr [rcx+74h], 16h
 * 000000014073152C: jnb     short loc_140731558
 * 000000014073152E: xor     ecx, ecx
 * 0000000140731530: rdsspq  rcx
 * 0000000140731535: mov     r8, gs:9D68h
 * 000000014073153E: add     r8, 8
 * 0000000140731542: cmp     rcx, r8
 * 0000000140731545: jnz     short loc_140731558
 * 0000000140731547: mov     rcx, gs:9D60h
 * 0000000140731550: rstorssp qword ptr [rcx]
 * 0000000140731554: saveprevssp
 * 0000000140731558: mov     byte ptr gs:89Eh, 0
 * 0000000140731561: movzx   eax, word ptr gs:8ACh
 * 000000014073156A: cmp     gs:8A6h, ax
 * 0000000140731573: jz      short loc_140731587
 * 0000000140731575: mov     gs:8A6h, ax
 * 000000014073157E: mov     ecx, 48h ; 'H'
 * 0000000140731583: xor     edx, edx
 * 0000000140731585: wrmsr
 * 0000000140731587: btr     word ptr gs:898h, 2
 * 0000000140731592: jnb     short loc_1407315A2
 * 0000000140731594: mov     eax, 1
 * 0000000140731599: xor     edx, edx
 * 000000014073159B: mov     ecx, 49h ; 'I'
 * 00000001407315A0: wrmsr
 * 00000001407315A2: btr     word ptr gs:898h, 5
 * 00000001407315AD: jnb     loc_1407316EA
 * 00000001407315B3: call    loc_1407316C6
 * 00000001407315B8: add     rsp, 8
 * 00000001407315BC: call    loc_1407316CF
 * 00000001407315C1: add     rsp, 8
 * 00000001407315C5: call    loc_1407315B8
 * 00000001407315CA: add     rsp, 8
 * 00000001407315CE: call    loc_1407315C1
 * 00000001407315D3: add     rsp, 8
 * 00000001407315D7: call    loc_1407315CA
 * 00000001407315DC: add     rsp, 8
 * 00000001407315E0: call    loc_1407315D3
 * 00000001407315E5: add     rsp, 8
 * 00000001407315E9: call    loc_1407315DC
 * 00000001407315EE: add     rsp, 8
 * 00000001407315F2: call    loc_1407315E5
 * 00000001407315F7: add     rsp, 8
 * 00000001407315FB: call    loc_1407315EE
 * 0000000140731600: add     rsp, 8
 * 0000000140731604: call    loc_1407315F7
 * 0000000140731609: add     rsp, 8
 * 000000014073160D: call    loc_140731600
 * 0000000140731612: add     rsp, 8
 * 0000000140731616: call    loc_140731609
 * 000000014073161B: add     rsp, 8
 * 000000014073161F: call    loc_140731612
 * 0000000140731624: add     rsp, 8
 * 0000000140731628: call    loc_14073161B
 * 000000014073162D: add     rsp, 8
 * 0000000140731631: call    loc_140731624
 * 0000000140731636: add     rsp, 8
 * 000000014073163A: call    loc_14073162D
 * 000000014073163F: add     rsp, 8
 * 0000000140731643: call    loc_140731636
 * 0000000140731648: add     rsp, 8
 * 000000014073164C: call    loc_14073163F
 * 0000000140731651: add     rsp, 8
 * 0000000140731655: call    loc_140731648
 * 000000014073165A: add     rsp, 8
 * 000000014073165E: call    loc_140731651
 * 0000000140731663: add     rsp, 8
 * 0000000140731667: call    loc_14073165A
 * 000000014073166C: add     rsp, 8
 * 0000000140731670: call    loc_140731663
 * 0000000140731675: add     rsp, 8
 * 0000000140731679: call    loc_14073166C
 * 000000014073167E: add     rsp, 8
 * 0000000140731682: call    loc_140731675
 * 0000000140731687: add     rsp, 8
 * 000000014073168B: call    loc_14073167E
 * 0000000140731690: add     rsp, 8
 * 0000000140731694: call    loc_140731687
 * 0000000140731699: add     rsp, 8
 * 000000014073169D: call    loc_140731690
 * 00000001407316A2: add     rsp, 8
 * 00000001407316A6: call    loc_140731699
 * 00000001407316AB: add     rsp, 8
 * 00000001407316AF: call    loc_1407316A2
 * 00000001407316B4: add     rsp, 8
 * 00000001407316B8: call    loc_1407316AB
 * 00000001407316BD: add     rsp, 8
 * 00000001407316C1: call    loc_1407316B4
 * 00000001407316C6: add     rsp, 8
 * 00000001407316CA: call    loc_1407316BD
 * 00000001407316CF: add     rsp, 8
 * 00000001407316D3: mov     eax, 0DADAh
 * 00000001407316D8: test    byte ptr gs:89Ch, 8
 * 00000001407316E1: jz      short loc_1407316EA
 * 00000001407316E3: mov     al, 20h ; ' '
 * 00000001407316E5: incsspq rax
 * 00000001407316EA: test    word ptr gs:898h, 100h
 * 00000001407316F5: jz      short loc_140731703
 * 00000001407316F7: xor     eax, eax
 * 00000001407316F9: xor     edx, edx
 * 00000001407316FB: mov     ecx, 1
 * 0000000140731700: div     rcx
 * 0000000140731703: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140731707: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014073170B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014073170F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140731713: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140731717: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014073171B: mov     r11, [rbp+0E8h+var_108]
 * 000000014073171F: mov     r10, [rbp+0E8h+var_110]
 * 0000000140731723: mov     r9, [rbp+0E8h+var_118]
 * 0000000140731727: mov     r8, [rbp+0E8h+var_120]
 * 000000014073172B: mov     rdx, [rbp+0E8h+var_128]
 * 000000014073172F: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140731733: mov     rax, [rbp+0E8h+var_138]
 * 0000000140731737: mov     rsp, rbp
 * 000000014073173A: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140731741: add     rsp, 0E8h
 * 0000000140731748: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073174F: jz      short loc_140731756
 * 0000000140731751: jmp     KiKernelExit
 * 0000000140731756: test    word ptr gs:898h, 200h
 * 0000000140731761: jz      short loc_140731768
 * 0000000140731763: verw    [rsp+arg_18]
 * 0000000140731768: swapgs
 * 000000014073176B: iretq
 * 000000014073176D: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140731771: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140731775: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140731779: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014073177D: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140731781: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140731785: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140731789: mov     r11, [rbp+0E8h+var_108]
 * 000000014073178D: mov     r10, [rbp+0E8h+var_110]
 * 0000000140731791: mov     r9, [rbp+0E8h+var_118]
 * 0000000140731795: mov     r8, [rbp+0E8h+var_120]
 * 0000000140731799: mov     rdx, [rbp+0E8h+var_128]
 * 000000014073179D: mov     rcx, [rbp+0E8h+var_130]
 * 00000001407317A1: mov     rax, [rbp+0E8h+var_138]
 * 00000001407317A5: mov     rsp, rbp
 * 00000001407317A8: mov     rbp, [rbp+0E8h+var_10]
 * 00000001407317AF: add     rsp, 0E8h
 * 00000001407317B6: iretq
 */
