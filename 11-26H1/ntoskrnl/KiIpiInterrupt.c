/*
 * XREFs of KiIpiInterrupt @ 0x1407342D0
 * Callers:
 *     KiIpiInterruptShadow @ 0x140C60240 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14021E2A0 (KiEndInterruptCycleAccumulation.c)
 *     HalPerformEndOfInterrupt @ 0x14032FAB0 (HalPerformEndOfInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiCheckForSListAddress @ 0x140419940 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EE560 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405F3900 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140734290 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x1407342D0 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x140734A40 (KiIpiInterruptSubDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x1407342D0
 * Reason: Hex-Rays returned no pseudocode for 0x1407342D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407342D0: sub     rsp, 8
 * 00000001407342D4: push    rbp
 * 00000001407342D5: sub     rsp, 158h
 * 00000001407342DC: lea     rbp, [rsp+80h]
 * 00000001407342E4: mov     [rbp+0E8h+var_18], rsi
 * 00000001407342EB: mov     [rbp+0E8h+var_138], rax
 * 00000001407342EF: mov     [rbp+0E8h+var_130], rcx
 * 00000001407342F3: mov     [rbp+0E8h+var_128], rdx
 * 00000001407342F7: mov     [rbp+0E8h+var_120], r8
 * 00000001407342FB: mov     [rbp+0E8h+var_118], r9
 * 00000001407342FF: mov     [rbp+0E8h+var_110], r10
 * 0000000140734303: mov     [rbp+0E8h+var_108], r11
 * 0000000140734307: test    [rbp+0E8h+arg_0], 1
 * 000000014073430E: jnz     short loc_140734348
 * 0000000140734310: xor     edx, edx
 * 0000000140734312: rdsspq  rdx
 * 0000000140734317: mov     [rbp+0E8h+var_90], rdx
 * 000000014073431B: lfence
 * 000000014073431E: test    byte ptr gs:898h, 1
 * 0000000140734327: jnz     short loc_140734331
 * 0000000140734329: lfence
 * 000000014073432C: jmp     loc_1407345B9
 * 0000000140734331: movzx   eax, word ptr gs:8A6h
 * 000000014073433A: mov     ecx, 48h ; 'H'
 * 000000014073433F: xor     edx, edx
 * 0000000140734341: wrmsr
 * 0000000140734343: jmp     loc_1407345B9
 * 0000000140734348: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073434F: jnz     short loc_140734354
 * 0000000140734351: swapgs
 * 0000000140734354: lfence
 * 0000000140734357: mov     rcx, gs:9D68h
 * 0000000140734360: test    rcx, rcx
 * 0000000140734363: jz      short loc_140734384
 * 0000000140734365: rdsspq  rdx
 * 000000014073436A: mov     r10, gs:9D60h
 * 0000000140734373: add     r10, 8
 * 0000000140734377: cmp     rdx, r10
 * 000000014073437A: jnz     short loc_140734384
 * 000000014073437C: rstorssp qword ptr [rcx]
 * 0000000140734380: saveprevssp
 * 0000000140734384: mov     r10, gs:188h
 * 000000014073438D: mov     rcx, gs:188h
 * 0000000140734396: mov     rcx, [rcx+220h]
 * 000000014073439D: mov     rcx, [rcx+760h]
 * 00000001407343A4: mov     gs:890h, rcx
 * 00000001407343AD: mov     cx, gs:8A2h
 * 00000001407343B6: mov     gs:8A4h, cx
 * 00000001407343BF: mov     cl, gs:898h
 * 00000001407343C7: mov     gs:89Ah, cl
 * 00000001407343CF: movzx   eax, word ptr gs:8A8h
 * 00000001407343D8: cmp     gs:8A6h, ax
 * 00000001407343E1: jz      short loc_1407343F5
 * 00000001407343E3: mov     gs:8A6h, ax
 * 00000001407343EC: mov     ecx, 48h ; 'H'
 * 00000001407343F1: xor     edx, edx
 * 00000001407343F3: wrmsr
 * 00000001407343F5: movzx   edx, byte ptr gs:898h
 * 00000001407343FE: test    edx, 8
 * 0000000140734404: jz      short loc_14073441D
 * 0000000140734406: mov     eax, 1
 * 000000014073440B: xor     edx, edx
 * 000000014073440D: mov     ecx, 49h ; 'I'
 * 0000000140734412: wrmsr
 * 0000000140734414: movzx   edx, byte ptr gs:898h
 * 000000014073441D: test    edx, 2
 * 0000000140734423: jz      loc_140734560
 * 0000000140734429: call    loc_14073453C
 * 000000014073442E: add     rsp, 8
 * 0000000140734432: call    loc_140734545
 * 0000000140734437: add     rsp, 8
 * 000000014073443B: call    loc_14073442E
 * 0000000140734440: add     rsp, 8
 * 0000000140734444: call    loc_140734437
 * 0000000140734449: add     rsp, 8
 * 000000014073444D: call    loc_140734440
 * 0000000140734452: add     rsp, 8
 * 0000000140734456: call    loc_140734449
 * 000000014073445B: add     rsp, 8
 * 000000014073445F: call    loc_140734452
 * 0000000140734464: add     rsp, 8
 * 0000000140734468: call    loc_14073445B
 * 000000014073446D: add     rsp, 8
 * 0000000140734471: call    loc_140734464
 * 0000000140734476: add     rsp, 8
 * 000000014073447A: call    loc_14073446D
 * 000000014073447F: add     rsp, 8
 * 0000000140734483: call    loc_140734476
 * 0000000140734488: add     rsp, 8
 * 000000014073448C: call    loc_14073447F
 * 0000000140734491: add     rsp, 8
 * 0000000140734495: call    loc_140734488
 * 000000014073449A: add     rsp, 8
 * 000000014073449E: call    loc_140734491
 * 00000001407344A3: add     rsp, 8
 * 00000001407344A7: call    loc_14073449A
 * 00000001407344AC: add     rsp, 8
 * 00000001407344B0: call    loc_1407344A3
 * 00000001407344B5: add     rsp, 8
 * 00000001407344B9: call    loc_1407344AC
 * 00000001407344BE: add     rsp, 8
 * 00000001407344C2: call    loc_1407344B5
 * 00000001407344C7: add     rsp, 8
 * 00000001407344CB: call    loc_1407344BE
 * 00000001407344D0: add     rsp, 8
 * 00000001407344D4: call    loc_1407344C7
 * 00000001407344D9: add     rsp, 8
 * 00000001407344DD: call    loc_1407344D0
 * 00000001407344E2: add     rsp, 8
 * 00000001407344E6: call    loc_1407344D9
 * 00000001407344EB: add     rsp, 8
 * 00000001407344EF: call    loc_1407344E2
 * 00000001407344F4: add     rsp, 8
 * 00000001407344F8: call    loc_1407344EB
 * 00000001407344FD: add     rsp, 8
 * 0000000140734501: call    loc_1407344F4
 * 0000000140734506: add     rsp, 8
 * 000000014073450A: call    loc_1407344FD
 * 000000014073450F: add     rsp, 8
 * 0000000140734513: call    loc_140734506
 * 0000000140734518: add     rsp, 8
 * 000000014073451C: call    loc_14073450F
 * 0000000140734521: add     rsp, 8
 * 0000000140734525: call    loc_140734518
 * 000000014073452A: add     rsp, 8
 * 000000014073452E: call    loc_140734521
 * 0000000140734533: add     rsp, 8
 * 0000000140734537: call    loc_14073452A
 * 000000014073453C: add     rsp, 8
 * 0000000140734540: call    loc_140734533
 * 0000000140734545: add     rsp, 8
 * 0000000140734549: mov     eax, 0DADAh
 * 000000014073454E: test    byte ptr gs:89Ch, 8
 * 0000000140734557: jz      short loc_140734560
 * 0000000140734559: mov     al, 20h ; ' '
 * 000000014073455B: incsspq rax
 * 0000000140734560: test    edx, 80h
 * 0000000140734566: jz      short loc_140734570
 * 0000000140734568: lfence
 * 000000014073456B: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140734570: lfence
 * 0000000140734573: mov     byte ptr gs:89Eh, 0
 * 000000014073457C: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140734583: jz      short loc_1407345A4
 * 0000000140734585: mov     ecx, 6A7h
 * 000000014073458A: rdmsr
 * 000000014073458C: cmp     edx, 0
 * 000000014073458F: jz      short loc_1407345A4
 * 0000000140734591: mov     ecx, edx
 * 0000000140734593: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140734599: cmp     edx, ecx
 * 000000014073459B: jz      short loc_1407345A4
 * 000000014073459D: mov     ecx, 6A7h
 * 00000001407345A2: wrmsr
 * 00000001407345A4: test    byte ptr [r10+3], 3
 * 00000001407345A9: mov     [rbp+0E8h+var_68], 0
 * 00000001407345B2: jz      short loc_1407345B9
 * 00000001407345B4: call    KiSaveDebugRegisterState
 * 00000001407345B9: cld
 * 00000001407345BA: stmxcsr [rbp+0E8h+var_13C]
 * 00000001407345BE: ldmxcsr dword ptr gs:180h
 * 00000001407345C7: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001407345CB: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001407345CF: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001407345D3: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001407345D7: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001407345DB: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001407345DF: test    [rbp+0E8h+arg_0], 1
 * 00000001407345E6: jz      short KiIpiInterruptDispatchTrap
 * 00000001407345E8: mov     r10, gs:188h
 * 00000001407345F1: test    byte ptr [r10+3], 80h
 * 00000001407345F6: jz      short KiIpiInterruptDispatchTrap
 * 00000001407345F8: call    KiSynchronizeUserIsolationDomainExit
 * 00000001407345FD: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140734604: jz      short loc_14073460D
 * 0000000140734606: mov     [rbp+0E8h+var_18], rsi
 * 000000014073460D: mov     [rbp+0E8h+var_13D], 0
 * 0000000140734611: cmp     byte ptr gs:87DAh, 0
 * 000000014073461A: jz      short loc_140734621
 * 000000014073461C: call    KeWakeProcessor
 * 0000000140734621: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140734628: cmp     rax, [rbp+0E8h]
 * 000000014073462F: jnb     short loc_14073464A
 * 0000000140734631: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140734638: cmp     rax, [rbp+0E8h]
 * 000000014073463F: jb      short loc_14073464A
 * 0000000140734641: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140734645: call    KiCheckForSListAddress
 * 000000014073464A: xor     esi, esi
 * 000000014073464C: inc     dword ptr gs:87C0h
 * 0000000140734654: mov     rcx, gs:9198h
 * 000000014073465D: mov     rax, rcx
 * 0000000140734660: mov     edx, cs:KeIsrStackSize
 * 0000000140734666: sub     rax, rdx
 * 0000000140734669: mov     rdx, rsp
 * 000000014073466C: cmp     rax, rsp
 * 000000014073466F: ja      short loc_140734676
 * 0000000140734671: cmp     rsp, rcx
 * 0000000140734674: jb      short loc_140734682
 * 0000000140734676: cmp     dword ptr cs:KiDpcWatchdogConfigurationLock.InitialStack, 0
 * 000000014073467D: jnz     short loc_140734682
 * 000000014073467F: mov     rsp, rcx
 * 0000000140734682: sub     rsp, 20h
 * 0000000140734686: mov     qword ptr [rsp+108h+var_F8], rdx
 * 000000014073468B: call    KiIpiInterruptSubDispatch
 * 0000000140734690: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 0000000140734695: mov     rcx, rsi
 * 0000000140734698: call    HalPerformEndOfInterrupt
 * 000000014073469D: mov     rcx, gs:20h
 * 00000001407346A6: movzx   edx, [rbp+0E8h+var_13F]
 * 00000001407346AA: call    KiEndInterruptCycleAccumulation
 * 00000001407346AF: test    al, al
 * 00000001407346B1: jz      short loc_1407346B8
 * 00000001407346B3: call    KiDpcInterruptBypass
 * 00000001407346B8: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001407346BC: cmp     cs:KiIrqlFlags, 0
 * 00000001407346C3: jz      short loc_1407346CC
 * 00000001407346C5: call    KzSetIrqlUnsafe
 * 00000001407346CA: jmp     short loc_1407346D0
 * 00000001407346CC: mov     cr8, rcx
 * 00000001407346D0: mov     rsi, [rbp+0E8h+var_18]
 * 00000001407346D7: test    byte ptr cs:KiTrapFeatures, 2
 * 00000001407346DE: jz      short loc_1407346E5
 * 00000001407346E0: add     rsp, 28h
 * 00000001407346E4: retn
 * 00000001407346E5: test    [rbp+0E8h+arg_0], 1
 * 00000001407346EC: jz      loc_1407349ED
 * 00000001407346F2: test    byte ptr cs:KiTrapFeatures, 8
 * 00000001407346F9: jz      short loc_1407346FE
 * 00000001407346FB: stac
 * 00000001407346FE: mov     rcx, gs:188h
 * 0000000140734707: test    byte ptr [rcx+0C2h], 3
 * 000000014073470E: jz      short loc_14073472B
 * 0000000140734710: mov     ecx, 1
 * 0000000140734715: mov     cr8, rcx
 * 0000000140734719: sti
 * 000000014073471A: call    KiInitiateUserApc
 * 000000014073471F: cli
 * 0000000140734720: mov     ecx, 0
 * 0000000140734725: mov     cr8, rcx
 * 0000000140734729: jmp     short loc_1407346FE
 * 000000014073472B: test    byte ptr [rcx+3], 80h
 * 000000014073472F: jz      short loc_14073473E
 * 0000000140734731: call    KiSynchronizeUserIsolationDomainEntry
 * 0000000140734736: test    eax, eax
 * 0000000140734738: mov     rax, [rbp+0E8h+var_138]
 * 000000014073473C: jnz     short loc_1407346FE
 * 000000014073473E: test    byte ptr gs:8A0h, 2
 * 0000000140734747: jz      short loc_140734750
 * 0000000140734749: xor     ecx, ecx
 * 000000014073474B: call    KiUpdateStibpPairing
 * 0000000140734750: mov     rcx, gs:188h
 * 0000000140734759: test    dword ptr [rcx], 8000000h
 * 000000014073475F: jz      short loc_140734766
 * 0000000140734761: call    KiRestoreSetContextState
 * 0000000140734766: mov     rcx, gs:188h
 * 000000014073476F: test    dword ptr [rcx], 10000h
 * 0000000140734775: jz      short loc_14073478B
 * 0000000140734777: test    byte ptr [rcx+2], 1
 * 000000014073477B: jz      short loc_14073478B
 * 000000014073477D: call    KiCopyCounters
 * 0000000140734782: mov     rcx, gs:188h
 * 000000014073478B: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014073478F: cmp     [rbp+0E8h+var_68], 0
 * 0000000140734797: jz      short loc_14073479E
 * 0000000140734799: call    KiRestoreDebugRegisterState
 * 000000014073479E: mov     rcx, gs:188h
 * 00000001407347A7: bt      dword ptr [rcx+74h], 16h
 * 00000001407347AC: jnb     short loc_1407347D8
 * 00000001407347AE: xor     ecx, ecx
 * 00000001407347B0: rdsspq  rcx
 * 00000001407347B5: mov     r8, gs:9D68h
 * 00000001407347BE: add     r8, 8
 * 00000001407347C2: cmp     rcx, r8
 * 00000001407347C5: jnz     short loc_1407347D8
 * 00000001407347C7: mov     rcx, gs:9D60h
 * 00000001407347D0: rstorssp qword ptr [rcx]
 * 00000001407347D4: saveprevssp
 * 00000001407347D8: mov     byte ptr gs:89Eh, 0
 * 00000001407347E1: movzx   eax, word ptr gs:8ACh
 * 00000001407347EA: cmp     gs:8A6h, ax
 * 00000001407347F3: jz      short loc_140734807
 * 00000001407347F5: mov     gs:8A6h, ax
 * 00000001407347FE: mov     ecx, 48h ; 'H'
 * 0000000140734803: xor     edx, edx
 * 0000000140734805: wrmsr
 * 0000000140734807: btr     word ptr gs:898h, 2
 * 0000000140734812: jnb     short loc_140734822
 * 0000000140734814: mov     eax, 1
 * 0000000140734819: xor     edx, edx
 * 000000014073481B: mov     ecx, 49h ; 'I'
 * 0000000140734820: wrmsr
 * 0000000140734822: btr     word ptr gs:898h, 5
 * 000000014073482D: jnb     loc_14073496A
 * 0000000140734833: call    loc_140734946
 * 0000000140734838: add     rsp, 8
 * 000000014073483C: call    loc_14073494F
 * 0000000140734841: add     rsp, 8
 * 0000000140734845: call    loc_140734838
 * 000000014073484A: add     rsp, 8
 * 000000014073484E: call    loc_140734841
 * 0000000140734853: add     rsp, 8
 * 0000000140734857: call    loc_14073484A
 * 000000014073485C: add     rsp, 8
 * 0000000140734860: call    loc_140734853
 * 0000000140734865: add     rsp, 8
 * 0000000140734869: call    loc_14073485C
 * 000000014073486E: add     rsp, 8
 * 0000000140734872: call    loc_140734865
 * 0000000140734877: add     rsp, 8
 * 000000014073487B: call    loc_14073486E
 * 0000000140734880: add     rsp, 8
 * 0000000140734884: call    loc_140734877
 * 0000000140734889: add     rsp, 8
 * 000000014073488D: call    loc_140734880
 * 0000000140734892: add     rsp, 8
 * 0000000140734896: call    loc_140734889
 * 000000014073489B: add     rsp, 8
 * 000000014073489F: call    loc_140734892
 * 00000001407348A4: add     rsp, 8
 * 00000001407348A8: call    loc_14073489B
 * 00000001407348AD: add     rsp, 8
 * 00000001407348B1: call    loc_1407348A4
 * 00000001407348B6: add     rsp, 8
 * 00000001407348BA: call    loc_1407348AD
 * 00000001407348BF: add     rsp, 8
 * 00000001407348C3: call    loc_1407348B6
 * 00000001407348C8: add     rsp, 8
 * 00000001407348CC: call    loc_1407348BF
 * 00000001407348D1: add     rsp, 8
 * 00000001407348D5: call    loc_1407348C8
 * 00000001407348DA: add     rsp, 8
 * 00000001407348DE: call    loc_1407348D1
 * 00000001407348E3: add     rsp, 8
 * 00000001407348E7: call    loc_1407348DA
 * 00000001407348EC: add     rsp, 8
 * 00000001407348F0: call    loc_1407348E3
 * 00000001407348F5: add     rsp, 8
 * 00000001407348F9: call    loc_1407348EC
 * 00000001407348FE: add     rsp, 8
 * 0000000140734902: call    loc_1407348F5
 * 0000000140734907: add     rsp, 8
 * 000000014073490B: call    loc_1407348FE
 * 0000000140734910: add     rsp, 8
 * 0000000140734914: call    loc_140734907
 * 0000000140734919: add     rsp, 8
 * 000000014073491D: call    loc_140734910
 * 0000000140734922: add     rsp, 8
 * 0000000140734926: call    loc_140734919
 * 000000014073492B: add     rsp, 8
 * 000000014073492F: call    loc_140734922
 * 0000000140734934: add     rsp, 8
 * 0000000140734938: call    loc_14073492B
 * 000000014073493D: add     rsp, 8
 * 0000000140734941: call    loc_140734934
 * 0000000140734946: add     rsp, 8
 * 000000014073494A: call    loc_14073493D
 * 000000014073494F: add     rsp, 8
 * 0000000140734953: mov     eax, 0DADAh
 * 0000000140734958: test    byte ptr gs:89Ch, 8
 * 0000000140734961: jz      short loc_14073496A
 * 0000000140734963: mov     al, 20h ; ' '
 * 0000000140734965: incsspq rax
 * 000000014073496A: test    word ptr gs:898h, 100h
 * 0000000140734975: jz      short loc_140734983
 * 0000000140734977: xor     eax, eax
 * 0000000140734979: xor     edx, edx
 * 000000014073497B: mov     ecx, 1
 * 0000000140734980: div     rcx
 * 0000000140734983: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140734987: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014073498B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014073498F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140734993: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140734997: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014073499B: mov     r11, [rbp+0E8h+var_108]
 * 000000014073499F: mov     r10, [rbp+0E8h+var_110]
 * 00000001407349A3: mov     r9, [rbp+0E8h+var_118]
 * 00000001407349A7: mov     r8, [rbp+0E8h+var_120]
 * 00000001407349AB: mov     rdx, [rbp+0E8h+var_128]
 * 00000001407349AF: mov     rcx, [rbp+0E8h+var_130]
 * 00000001407349B3: mov     rax, [rbp+0E8h+var_138]
 * 00000001407349B7: mov     rsp, rbp
 * 00000001407349BA: mov     rbp, [rbp+0E8h+var_10]
 * 00000001407349C1: add     rsp, 0E8h
 * 00000001407349C8: test    byte ptr cs:KiTrapFeatures, 1
 * 00000001407349CF: jz      short loc_1407349D6
 * 00000001407349D1: jmp     KiKernelExit
 * 00000001407349D6: test    word ptr gs:898h, 200h
 * 00000001407349E1: jz      short loc_1407349E8
 * 00000001407349E3: verw    [rsp+arg_18]
 * 00000001407349E8: swapgs
 * 00000001407349EB: iretq
 * 00000001407349ED: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001407349F1: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001407349F5: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001407349F9: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001407349FD: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140734A01: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140734A05: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140734A09: mov     r11, [rbp+0E8h+var_108]
 * 0000000140734A0D: mov     r10, [rbp+0E8h+var_110]
 * 0000000140734A11: mov     r9, [rbp+0E8h+var_118]
 * 0000000140734A15: mov     r8, [rbp+0E8h+var_120]
 * 0000000140734A19: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140734A1D: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140734A21: mov     rax, [rbp+0E8h+var_138]
 * 0000000140734A25: mov     rsp, rbp
 * 0000000140734A28: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140734A2F: add     rsp, 0E8h
 * 0000000140734A36: iretq
 */
