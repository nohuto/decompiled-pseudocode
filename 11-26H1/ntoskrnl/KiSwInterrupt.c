/*
 * XREFs of KiSwInterrupt @ 0x1407333C0
 * Callers:
 *     KiSwInterruptShadow @ 0x140C5FCC0 (KiSwInterruptShadow.c)
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14021E2A0 (KiEndInterruptCycleAccumulation.c)
 *     KiStartInterruptCycleAccumulation @ 0x140229AE0 (KiStartInterruptCycleAccumulation.c)
 *     HalPerformEndOfInterrupt @ 0x14032FAB0 (HalPerformEndOfInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiCheckForSListAddress @ 0x140419940 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiSwInterruptDispatch @ 0x1405430B0 (KiSwInterruptDispatch.c)
 *     KzSetIrqlUnsafe @ 0x1405EE560 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405F3900 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x1407333C0 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140734290 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x1407333C0
 * Reason: Hex-Rays returned no pseudocode for 0x1407333C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407333C0: sub     rsp, 8
 * 00000001407333C4: push    rbp
 * 00000001407333C5: sub     rsp, 158h
 * 00000001407333CC: lea     rbp, [rsp+80h]
 * 00000001407333D4: mov     [rbp+0E8h+var_18], rsi
 * 00000001407333DB: mov     [rbp+0E8h+var_138], rax
 * 00000001407333DF: mov     [rbp+0E8h+var_130], rcx
 * 00000001407333E3: mov     [rbp+0E8h+var_128], rdx
 * 00000001407333E7: mov     [rbp+0E8h+var_120], r8
 * 00000001407333EB: mov     [rbp+0E8h+var_118], r9
 * 00000001407333EF: mov     [rbp+0E8h+var_110], r10
 * 00000001407333F3: mov     [rbp+0E8h+var_108], r11
 * 00000001407333F7: test    [rbp+0E8h+arg_0], 1
 * 00000001407333FE: jnz     short loc_140733438
 * 0000000140733400: xor     edx, edx
 * 0000000140733402: rdsspq  rdx
 * 0000000140733407: mov     [rbp+0E8h+var_90], rdx
 * 000000014073340B: lfence
 * 000000014073340E: test    byte ptr gs:898h, 1
 * 0000000140733417: jnz     short loc_140733421
 * 0000000140733419: lfence
 * 000000014073341C: jmp     loc_1407336A9
 * 0000000140733421: movzx   eax, word ptr gs:8A6h
 * 000000014073342A: mov     ecx, 48h ; 'H'
 * 000000014073342F: xor     edx, edx
 * 0000000140733431: wrmsr
 * 0000000140733433: jmp     loc_1407336A9
 * 0000000140733438: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073343F: jnz     short loc_140733444
 * 0000000140733441: swapgs
 * 0000000140733444: lfence
 * 0000000140733447: mov     rcx, gs:9D68h
 * 0000000140733450: test    rcx, rcx
 * 0000000140733453: jz      short loc_140733474
 * 0000000140733455: rdsspq  rdx
 * 000000014073345A: mov     r10, gs:9D60h
 * 0000000140733463: add     r10, 8
 * 0000000140733467: cmp     rdx, r10
 * 000000014073346A: jnz     short loc_140733474
 * 000000014073346C: rstorssp qword ptr [rcx]
 * 0000000140733470: saveprevssp
 * 0000000140733474: mov     r10, gs:188h
 * 000000014073347D: mov     rcx, gs:188h
 * 0000000140733486: mov     rcx, [rcx+220h]
 * 000000014073348D: mov     rcx, [rcx+760h]
 * 0000000140733494: mov     gs:890h, rcx
 * 000000014073349D: mov     cx, gs:8A2h
 * 00000001407334A6: mov     gs:8A4h, cx
 * 00000001407334AF: mov     cl, gs:898h
 * 00000001407334B7: mov     gs:89Ah, cl
 * 00000001407334BF: movzx   eax, word ptr gs:8A8h
 * 00000001407334C8: cmp     gs:8A6h, ax
 * 00000001407334D1: jz      short loc_1407334E5
 * 00000001407334D3: mov     gs:8A6h, ax
 * 00000001407334DC: mov     ecx, 48h ; 'H'
 * 00000001407334E1: xor     edx, edx
 * 00000001407334E3: wrmsr
 * 00000001407334E5: movzx   edx, byte ptr gs:898h
 * 00000001407334EE: test    edx, 8
 * 00000001407334F4: jz      short loc_14073350D
 * 00000001407334F6: mov     eax, 1
 * 00000001407334FB: xor     edx, edx
 * 00000001407334FD: mov     ecx, 49h ; 'I'
 * 0000000140733502: wrmsr
 * 0000000140733504: movzx   edx, byte ptr gs:898h
 * 000000014073350D: test    edx, 2
 * 0000000140733513: jz      loc_140733650
 * 0000000140733519: call    loc_14073362C
 * 000000014073351E: add     rsp, 8
 * 0000000140733522: call    loc_140733635
 * 0000000140733527: add     rsp, 8
 * 000000014073352B: call    loc_14073351E
 * 0000000140733530: add     rsp, 8
 * 0000000140733534: call    loc_140733527
 * 0000000140733539: add     rsp, 8
 * 000000014073353D: call    loc_140733530
 * 0000000140733542: add     rsp, 8
 * 0000000140733546: call    loc_140733539
 * 000000014073354B: add     rsp, 8
 * 000000014073354F: call    loc_140733542
 * 0000000140733554: add     rsp, 8
 * 0000000140733558: call    loc_14073354B
 * 000000014073355D: add     rsp, 8
 * 0000000140733561: call    loc_140733554
 * 0000000140733566: add     rsp, 8
 * 000000014073356A: call    loc_14073355D
 * 000000014073356F: add     rsp, 8
 * 0000000140733573: call    loc_140733566
 * 0000000140733578: add     rsp, 8
 * 000000014073357C: call    loc_14073356F
 * 0000000140733581: add     rsp, 8
 * 0000000140733585: call    loc_140733578
 * 000000014073358A: add     rsp, 8
 * 000000014073358E: call    loc_140733581
 * 0000000140733593: add     rsp, 8
 * 0000000140733597: call    loc_14073358A
 * 000000014073359C: add     rsp, 8
 * 00000001407335A0: call    loc_140733593
 * 00000001407335A5: add     rsp, 8
 * 00000001407335A9: call    loc_14073359C
 * 00000001407335AE: add     rsp, 8
 * 00000001407335B2: call    loc_1407335A5
 * 00000001407335B7: add     rsp, 8
 * 00000001407335BB: call    loc_1407335AE
 * 00000001407335C0: add     rsp, 8
 * 00000001407335C4: call    loc_1407335B7
 * 00000001407335C9: add     rsp, 8
 * 00000001407335CD: call    loc_1407335C0
 * 00000001407335D2: add     rsp, 8
 * 00000001407335D6: call    loc_1407335C9
 * 00000001407335DB: add     rsp, 8
 * 00000001407335DF: call    loc_1407335D2
 * 00000001407335E4: add     rsp, 8
 * 00000001407335E8: call    loc_1407335DB
 * 00000001407335ED: add     rsp, 8
 * 00000001407335F1: call    loc_1407335E4
 * 00000001407335F6: add     rsp, 8
 * 00000001407335FA: call    loc_1407335ED
 * 00000001407335FF: add     rsp, 8
 * 0000000140733603: call    loc_1407335F6
 * 0000000140733608: add     rsp, 8
 * 000000014073360C: call    loc_1407335FF
 * 0000000140733611: add     rsp, 8
 * 0000000140733615: call    loc_140733608
 * 000000014073361A: add     rsp, 8
 * 000000014073361E: call    loc_140733611
 * 0000000140733623: add     rsp, 8
 * 0000000140733627: call    loc_14073361A
 * 000000014073362C: add     rsp, 8
 * 0000000140733630: call    loc_140733623
 * 0000000140733635: add     rsp, 8
 * 0000000140733639: mov     eax, 0DADAh
 * 000000014073363E: test    byte ptr gs:89Ch, 8
 * 0000000140733647: jz      short loc_140733650
 * 0000000140733649: mov     al, 20h ; ' '
 * 000000014073364B: incsspq rax
 * 0000000140733650: test    edx, 80h
 * 0000000140733656: jz      short loc_140733660
 * 0000000140733658: lfence
 * 000000014073365B: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140733660: lfence
 * 0000000140733663: mov     byte ptr gs:89Eh, 0
 * 000000014073366C: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140733673: jz      short loc_140733694
 * 0000000140733675: mov     ecx, 6A7h
 * 000000014073367A: rdmsr
 * 000000014073367C: cmp     edx, 0
 * 000000014073367F: jz      short loc_140733694
 * 0000000140733681: mov     ecx, edx
 * 0000000140733683: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140733689: cmp     edx, ecx
 * 000000014073368B: jz      short loc_140733694
 * 000000014073368D: mov     ecx, 6A7h
 * 0000000140733692: wrmsr
 * 0000000140733694: test    byte ptr [r10+3], 3
 * 0000000140733699: mov     [rbp+0E8h+var_68], 0
 * 00000001407336A2: jz      short loc_1407336A9
 * 00000001407336A4: call    KiSaveDebugRegisterState
 * 00000001407336A9: cld
 * 00000001407336AA: stmxcsr [rbp+0E8h+var_13C]
 * 00000001407336AE: ldmxcsr dword ptr gs:180h
 * 00000001407336B7: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001407336BB: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001407336BF: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001407336C3: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001407336C7: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001407336CB: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001407336CF: test    [rbp+0E8h+arg_0], 1
 * 00000001407336D6: jz      short KiSwInterruptDispatchTrap
 * 00000001407336D8: mov     r10, gs:188h
 * 00000001407336E1: test    byte ptr [r10+3], 80h
 * 00000001407336E6: jz      short KiSwInterruptDispatchTrap
 * 00000001407336E8: call    KiSynchronizeUserIsolationDomainExit
 * 00000001407336ED: test    byte ptr cs:KiTrapFeatures, 2
 * 00000001407336F4: jz      short loc_1407336FD
 * 00000001407336F6: mov     [rbp+0E8h+var_18], rsi
 * 00000001407336FD: mov     [rbp+0E8h+var_13D], 0
 * 0000000140733701: cmp     byte ptr gs:87DAh, 0
 * 000000014073370A: jz      short loc_140733711
 * 000000014073370C: call    KeWakeProcessor
 * 0000000140733711: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140733718: cmp     rax, [rbp+0E8h]
 * 000000014073371F: jnb     short loc_14073373A
 * 0000000140733721: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140733728: cmp     rax, [rbp+0E8h]
 * 000000014073372F: jb      short loc_14073373A
 * 0000000140733731: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140733735: call    KiCheckForSListAddress
 * 000000014073373A: xor     esi, esi
 * 000000014073373C: inc     dword ptr gs:87C0h
 * 0000000140733744: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073374B: jz      short loc_140733750
 * 000000014073374D: clac
 * 0000000140733750: mov     ecx, 2
 * 0000000140733755: cmp     cs:KiIrqlFlags, 0
 * 000000014073375C: jz      short loc_140733765
 * 000000014073375E: call    KzSetIrqlUnsafe
 * 0000000140733763: jmp     short loc_14073376D
 * 0000000140733765: mov     rax, cr8
 * 0000000140733769: mov     cr8, rcx
 * 000000014073376D: mov     [rbp+0E8h+var_13F], al
 * 0000000140733770: mov     rcx, gs:20h
 * 0000000140733779: xor     edx, edx
 * 000000014073377B: call    KiStartInterruptCycleAccumulation
 * 0000000140733780: sti
 * 0000000140733781: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140733785: call    KiSwInterruptDispatch
 * 000000014073378A: cli
 * 000000014073378B: mov     rcx, rsi
 * 000000014073378E: call    HalPerformEndOfInterrupt
 * 0000000140733793: mov     rcx, gs:20h
 * 000000014073379C: movzx   edx, [rbp+0E8h+var_13F]
 * 00000001407337A0: call    KiEndInterruptCycleAccumulation
 * 00000001407337A5: test    al, al
 * 00000001407337A7: jz      short loc_1407337AE
 * 00000001407337A9: call    KiDpcInterruptBypass
 * 00000001407337AE: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001407337B2: cmp     cs:KiIrqlFlags, 0
 * 00000001407337B9: jz      short loc_1407337C2
 * 00000001407337BB: call    KzSetIrqlUnsafe
 * 00000001407337C0: jmp     short loc_1407337C6
 * 00000001407337C2: mov     cr8, rcx
 * 00000001407337C6: mov     rsi, [rbp+0E8h+var_18]
 * 00000001407337CD: cli
 * 00000001407337CE: test    byte ptr cs:KiTrapFeatures, 2
 * 00000001407337D5: jz      short loc_1407337DC
 * 00000001407337D7: add     rsp, 28h
 * 00000001407337DB: retn
 * 00000001407337DC: test    [rbp+0E8h+arg_0], 1
 * 00000001407337E3: jz      loc_140733AE4
 * 00000001407337E9: test    byte ptr cs:KiTrapFeatures, 8
 * 00000001407337F0: jz      short loc_1407337F5
 * 00000001407337F2: stac
 * 00000001407337F5: mov     rcx, gs:188h
 * 00000001407337FE: test    byte ptr [rcx+0C2h], 3
 * 0000000140733805: jz      short loc_140733822
 * 0000000140733807: mov     ecx, 1
 * 000000014073380C: mov     cr8, rcx
 * 0000000140733810: sti
 * 0000000140733811: call    KiInitiateUserApc
 * 0000000140733816: cli
 * 0000000140733817: mov     ecx, 0
 * 000000014073381C: mov     cr8, rcx
 * 0000000140733820: jmp     short loc_1407337F5
 * 0000000140733822: test    byte ptr [rcx+3], 80h
 * 0000000140733826: jz      short loc_140733835
 * 0000000140733828: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014073382D: test    eax, eax
 * 000000014073382F: mov     rax, [rbp+0E8h+var_138]
 * 0000000140733833: jnz     short loc_1407337F5
 * 0000000140733835: test    byte ptr gs:8A0h, 2
 * 000000014073383E: jz      short loc_140733847
 * 0000000140733840: xor     ecx, ecx
 * 0000000140733842: call    KiUpdateStibpPairing
 * 0000000140733847: mov     rcx, gs:188h
 * 0000000140733850: test    dword ptr [rcx], 8000000h
 * 0000000140733856: jz      short loc_14073385D
 * 0000000140733858: call    KiRestoreSetContextState
 * 000000014073385D: mov     rcx, gs:188h
 * 0000000140733866: test    dword ptr [rcx], 10000h
 * 000000014073386C: jz      short loc_140733882
 * 000000014073386E: test    byte ptr [rcx+2], 1
 * 0000000140733872: jz      short loc_140733882
 * 0000000140733874: call    KiCopyCounters
 * 0000000140733879: mov     rcx, gs:188h
 * 0000000140733882: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140733886: cmp     [rbp+0E8h+var_68], 0
 * 000000014073388E: jz      short loc_140733895
 * 0000000140733890: call    KiRestoreDebugRegisterState
 * 0000000140733895: mov     rcx, gs:188h
 * 000000014073389E: bt      dword ptr [rcx+74h], 16h
 * 00000001407338A3: jnb     short loc_1407338CF
 * 00000001407338A5: xor     ecx, ecx
 * 00000001407338A7: rdsspq  rcx
 * 00000001407338AC: mov     r8, gs:9D68h
 * 00000001407338B5: add     r8, 8
 * 00000001407338B9: cmp     rcx, r8
 * 00000001407338BC: jnz     short loc_1407338CF
 * 00000001407338BE: mov     rcx, gs:9D60h
 * 00000001407338C7: rstorssp qword ptr [rcx]
 * 00000001407338CB: saveprevssp
 * 00000001407338CF: mov     byte ptr gs:89Eh, 0
 * 00000001407338D8: movzx   eax, word ptr gs:8ACh
 * 00000001407338E1: cmp     gs:8A6h, ax
 * 00000001407338EA: jz      short loc_1407338FE
 * 00000001407338EC: mov     gs:8A6h, ax
 * 00000001407338F5: mov     ecx, 48h ; 'H'
 * 00000001407338FA: xor     edx, edx
 * 00000001407338FC: wrmsr
 * 00000001407338FE: btr     word ptr gs:898h, 2
 * 0000000140733909: jnb     short loc_140733919
 * 000000014073390B: mov     eax, 1
 * 0000000140733910: xor     edx, edx
 * 0000000140733912: mov     ecx, 49h ; 'I'
 * 0000000140733917: wrmsr
 * 0000000140733919: btr     word ptr gs:898h, 5
 * 0000000140733924: jnb     loc_140733A61
 * 000000014073392A: call    loc_140733A3D
 * 000000014073392F: add     rsp, 8
 * 0000000140733933: call    loc_140733A46
 * 0000000140733938: add     rsp, 8
 * 000000014073393C: call    loc_14073392F
 * 0000000140733941: add     rsp, 8
 * 0000000140733945: call    loc_140733938
 * 000000014073394A: add     rsp, 8
 * 000000014073394E: call    loc_140733941
 * 0000000140733953: add     rsp, 8
 * 0000000140733957: call    loc_14073394A
 * 000000014073395C: add     rsp, 8
 * 0000000140733960: call    loc_140733953
 * 0000000140733965: add     rsp, 8
 * 0000000140733969: call    loc_14073395C
 * 000000014073396E: add     rsp, 8
 * 0000000140733972: call    loc_140733965
 * 0000000140733977: add     rsp, 8
 * 000000014073397B: call    loc_14073396E
 * 0000000140733980: add     rsp, 8
 * 0000000140733984: call    loc_140733977
 * 0000000140733989: add     rsp, 8
 * 000000014073398D: call    loc_140733980
 * 0000000140733992: add     rsp, 8
 * 0000000140733996: call    loc_140733989
 * 000000014073399B: add     rsp, 8
 * 000000014073399F: call    loc_140733992
 * 00000001407339A4: add     rsp, 8
 * 00000001407339A8: call    loc_14073399B
 * 00000001407339AD: add     rsp, 8
 * 00000001407339B1: call    loc_1407339A4
 * 00000001407339B6: add     rsp, 8
 * 00000001407339BA: call    loc_1407339AD
 * 00000001407339BF: add     rsp, 8
 * 00000001407339C3: call    loc_1407339B6
 * 00000001407339C8: add     rsp, 8
 * 00000001407339CC: call    loc_1407339BF
 * 00000001407339D1: add     rsp, 8
 * 00000001407339D5: call    loc_1407339C8
 * 00000001407339DA: add     rsp, 8
 * 00000001407339DE: call    loc_1407339D1
 * 00000001407339E3: add     rsp, 8
 * 00000001407339E7: call    loc_1407339DA
 * 00000001407339EC: add     rsp, 8
 * 00000001407339F0: call    loc_1407339E3
 * 00000001407339F5: add     rsp, 8
 * 00000001407339F9: call    loc_1407339EC
 * 00000001407339FE: add     rsp, 8
 * 0000000140733A02: call    loc_1407339F5
 * 0000000140733A07: add     rsp, 8
 * 0000000140733A0B: call    loc_1407339FE
 * 0000000140733A10: add     rsp, 8
 * 0000000140733A14: call    loc_140733A07
 * 0000000140733A19: add     rsp, 8
 * 0000000140733A1D: call    loc_140733A10
 * 0000000140733A22: add     rsp, 8
 * 0000000140733A26: call    loc_140733A19
 * 0000000140733A2B: add     rsp, 8
 * 0000000140733A2F: call    loc_140733A22
 * 0000000140733A34: add     rsp, 8
 * 0000000140733A38: call    loc_140733A2B
 * 0000000140733A3D: add     rsp, 8
 * 0000000140733A41: call    loc_140733A34
 * 0000000140733A46: add     rsp, 8
 * 0000000140733A4A: mov     eax, 0DADAh
 * 0000000140733A4F: test    byte ptr gs:89Ch, 8
 * 0000000140733A58: jz      short loc_140733A61
 * 0000000140733A5A: mov     al, 20h ; ' '
 * 0000000140733A5C: incsspq rax
 * 0000000140733A61: test    word ptr gs:898h, 100h
 * 0000000140733A6C: jz      short loc_140733A7A
 * 0000000140733A6E: xor     eax, eax
 * 0000000140733A70: xor     edx, edx
 * 0000000140733A72: mov     ecx, 1
 * 0000000140733A77: div     rcx
 * 0000000140733A7A: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140733A7E: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140733A82: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140733A86: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140733A8A: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140733A8E: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140733A92: mov     r11, [rbp+0E8h+var_108]
 * 0000000140733A96: mov     r10, [rbp+0E8h+var_110]
 * 0000000140733A9A: mov     r9, [rbp+0E8h+var_118]
 * 0000000140733A9E: mov     r8, [rbp+0E8h+var_120]
 * 0000000140733AA2: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140733AA6: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140733AAA: mov     rax, [rbp+0E8h+var_138]
 * 0000000140733AAE: mov     rsp, rbp
 * 0000000140733AB1: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140733AB8: add     rsp, 0E8h
 * 0000000140733ABF: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140733AC6: jz      short loc_140733ACD
 * 0000000140733AC8: jmp     KiKernelExit
 * 0000000140733ACD: test    word ptr gs:898h, 200h
 * 0000000140733AD8: jz      short loc_140733ADF
 * 0000000140733ADA: verw    [rsp+arg_18]
 * 0000000140733ADF: swapgs
 * 0000000140733AE2: iretq
 * 0000000140733AE4: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140733AE8: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140733AEC: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140733AF0: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140733AF4: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140733AF8: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140733AFC: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140733B00: mov     r11, [rbp+0E8h+var_108]
 * 0000000140733B04: mov     r10, [rbp+0E8h+var_110]
 * 0000000140733B08: mov     r9, [rbp+0E8h+var_118]
 * 0000000140733B0C: mov     r8, [rbp+0E8h+var_120]
 * 0000000140733B10: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140733B14: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140733B18: mov     rax, [rbp+0E8h+var_138]
 * 0000000140733B1C: mov     rsp, rbp
 * 0000000140733B1F: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140733B26: add     rsp, 0E8h
 * 0000000140733B2D: iretq
 */
