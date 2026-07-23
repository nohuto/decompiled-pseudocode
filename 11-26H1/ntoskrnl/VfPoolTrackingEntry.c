/*
 * XREFs of VfPoolTrackingEntry @ 0x140645390
 * Callers:
 *     <none>
 * Callees:
 *     DifRegisterPlugin @ 0x14064F790 (DifRegisterPlugin.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ViPtInitAvlTrees @ 0x140C305F0 (ViPtInitAvlTrees.c)
 *     ViPtInitCircularPoolTrace @ 0x140C30678 (ViPtInitCircularPoolTrace.c)
 *     ViPtPluginUnload @ 0x140C30750 (ViPtPluginUnload.c)
 */

/*
 * Hex-Rays decompilation failed for VfPoolTrackingEntry @ 0x140645390
 * Reason: Hex-Rays returned no pseudocode for 0x140645390
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140645390: mov     [rsp-8+arg_0], rbx
 * 0000000140645395: mov     [rsp-8+arg_8], rdi
 * 000000014064539A: push    rbp
 * 000000014064539B: lea     rbp, [rsp-290h]
 * 00000001406453A3: sub     rsp, 390h
 * 00000001406453AA: mov     rax, cs:__security_cookie
 * 00000001406453B1: xor     rax, rsp
 * 00000001406453B4: mov     [rbp+290h+var_10], rax
 * 00000001406453BB: xor     edi, edi
 * 00000001406453BD: mov     qword ptr cs:ViPtUnloadRundown.___u0, rdi
 * 00000001406453C4: call    ViPtInitCircularPoolTrace
 * 00000001406453C9: mov     ebx, eax
 * 00000001406453CB: test    eax, eax
 * 00000001406453CD: js      loc_14064586A
 * 00000001406453D3: test    cs:VfOptionFlags, 1000h
 * 00000001406453DD: jz      short loc_1406453E4
 * 00000001406453DF: call    ViPtInitAvlTrees
 * 00000001406453E4: cmp     cs:VfDifRunningWithoutReboot, dil
 * 00000001406453EB: jnz     short loc_140645403
 * 00000001406453ED: test    cs:VfOptionFlags, 800h
 * 00000001406453F7: jnz     short loc_140645403
 * 00000001406453F9: mov     cs:MmTrackLockedPages, 1
 * 0000000140645403: lea     rax, ViPtPluginUnload
 * 000000014064540A: mov     [rsp+390h+var_368], 19Ch
 * 0000000140645412: mov     cs:qword_140F089E8, rax
 * 0000000140645419: lea     rax, aExallocatepool_0; "ExAllocatePool"
 * 0000000140645420: mov     [rsp+390h+var_370], rax
 * 0000000140645425: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014064542C: mov     [rsp+390h+var_360], rax
 * 0000000140645431: lea     rax, aExallocatepool; "ExAllocatePool2"
 * 0000000140645438: mov     [rsp+390h+var_350], rax
 * 000000014064543D: lea     rax, ViSpIoAllocateIrp_Exit
 * 0000000140645444: mov     [rsp+390h+var_340], rax
 * 0000000140645449: lea     rax, aExallocatepool_13; "ExAllocatePool3"
 * 0000000140645450: mov     [rsp+390h+var_330], rax
 * 0000000140645455: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014064545C: mov     [rsp+390h+var_318], rax
 * 0000000140645461: lea     rax, aExallocatepool_1; "ExAllocatePoolWithTag"
 * 0000000140645468: mov     [rbp+290h+var_310], rax
 * 000000014064546C: lea     rax, ViSpIoAllocateIrp_Exit
 * 0000000140645473: mov     [rbp+290h+var_300], rax
 * 0000000140645477: lea     rax, aExallocatepool_15; "ExAllocatePoolWithTagPriority"
 * 000000014064547E: mov     [rbp+290h+var_2F0], rax
 * 0000000140645482: lea     rax, ViSpIoAllocateIrp_Exit
 * 0000000140645489: mov     [rbp+290h+var_2E0], rax
 * 000000014064548D: lea     rax, aExallocatepool_14; "ExAllocatePoolWithQuota"
 * 0000000140645494: mov     [rbp+290h+var_2D0], rax
 * 0000000140645498: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014064549F: mov     [rbp+290h+var_2C0], rax
 * 00000001406454A3: lea     rax, aExallocatepool_16; "ExAllocatePoolWithQuotaTag"
 * 00000001406454AA: mov     [rbp+290h+var_2B0], rax
 * 00000001406454AE: lea     rax, ViSpIoAllocateIrp_Exit
 * 00000001406454B5: mov     [rbp+290h+var_2A0], rax
 * 00000001406454B9: lea     rax, aExfreepool_1; "ExFreePool"
 * 00000001406454C0: mov     [rbp+290h+var_290], rax
 * 00000001406454C4: lea     rax, ViSpIoAllocateIrp_Exit
 * 00000001406454CB: mov     [rbp+290h+var_280], rax
 * 00000001406454CF: lea     rax, aExfreepoolwith_1; "ExFreePoolWithTag"
 * 00000001406454D6: mov     [rbp+290h+var_270], rax
 * 00000001406454DA: lea     rax, ViSpIoAllocateIrp_Exit
 * 00000001406454E1: mov     [rbp+290h+var_260], rax
 * 00000001406454E5: lea     rax, aIoallocatemdl_0; "IoAllocateMdl"
 * 00000001406454EC: mov     [rbp+290h+var_250], rax
 * 00000001406454F0: lea     rax, VfPtIoAllocateMdl_Exit
 * 00000001406454F7: mov     [rbp+290h+var_238], rax
 * 00000001406454FB: lea     rax, aIofreemdl; "IoFreeMdl"
 * 0000000140645502: mov     [rbp+290h+var_230], rax
 * 0000000140645506: lea     rax, aMmallocatepage_3; "MmAllocatePagesForMdl"
 * 000000014064550D: mov     [rbp+290h+var_210], rax
 * 0000000140645514: lea     rax, VfPtMmAllocatePagesForMdl_Exit
 * 000000014064551B: mov     [rbp+290h+var_1F8], rax
 * 0000000140645522: lea     rax, aMmallocatepage; "MmAllocatePagesForMdlEx"
 * 0000000140645529: mov     [rbp+290h+var_1F0], rax
 * 0000000140645530: lea     rax, VfPtMmAllocatePagesForMdlEx_Exit
 * 0000000140645537: mov     [rbp+290h+var_1D8], rax
 * 000000014064553E: lea     rax, aMmallocatenode; "MmAllocateNodePagesForMdlEx"
 * 0000000140645545: mov     [rbp+290h+var_1D0], rax
 * 000000014064554C: mov     [rsp+390h+var_358], rdi
 * 0000000140645551: mov     [rsp+390h+var_348], 1A2h
 * 0000000140645559: mov     [rsp+390h+var_338], rdi
 * 000000014064555E: mov     [rsp+390h+var_328], 1A1h
 * 0000000140645566: mov     [rsp+390h+var_320], rdi
 * 000000014064556B: mov     [rbp+290h+var_308], 19Dh
 * 0000000140645572: mov     [rbp+290h+var_2F8], rdi
 * 0000000140645576: mov     [rbp+290h+var_2E8], 19Eh
 * 000000014064557D: mov     [rbp+290h+var_2D8], rdi
 * 0000000140645581: mov     [rbp+290h+var_2C8], 19Fh
 * 0000000140645588: mov     [rbp+290h+var_2B8], rdi
 * 000000014064558C: mov     [rbp+290h+var_2A8], 1A0h
 * 0000000140645593: mov     [rbp+290h+var_298], rdi
 * 0000000140645597: mov     [rbp+290h+var_288], 190h
 * 000000014064559E: mov     [rbp+290h+var_278], rdi
 * 00000001406455A2: mov     [rbp+290h+var_268], 18Fh
 * 00000001406455A9: mov     [rbp+290h+var_258], rdi
 * 00000001406455AD: mov     [rbp+290h+var_248], 16Ch
 * 00000001406455B4: mov     [rbp+290h+var_240], rdi
 * 00000001406455B8: mov     [rbp+290h+var_228], 152h
 * 00000001406455BF: mov     [rbp+290h+var_220], rdi
 * 00000001406455C3: mov     [rbp+290h+var_218], rdi
 * 00000001406455C7: mov     [rbp+290h+var_208], 0E6h
 * 00000001406455D1: mov     [rbp+290h+var_200], rdi
 * 00000001406455D8: mov     [rbp+290h+var_1E8], 0E5h
 * 00000001406455E2: mov     [rbp+290h+var_1E0], rdi
 * 00000001406455E9: lea     rax, VfPtMmAllocateNodePagesForMdlEx_Exit
 * 00000001406455F0: mov     [rbp+290h+var_1C8], 0E8h
 * 00000001406455FA: mov     [rbp+290h+var_1B8], rax
 * 0000000140645601: lea     rax, aMmallocatenonc_0; "MmAllocateNonCachedMemory"
 * 0000000140645608: mov     [rbp+290h+var_1B0], rax
 * 000000014064560F: lea     rax, VfPtMmAllocateNonCachedMemory_Exit
 * 0000000140645616: mov     [rbp+290h+var_198], rax
 * 000000014064561D: lea     rax, aMmcreatemdl_0; "MmCreateMdl"
 * 0000000140645624: mov     [rbp+290h+var_190], rax
 * 000000014064562B: lea     rax, VfPtMmCreateMdl_Exit
 * 0000000140645632: mov     [rbp+290h+var_178], rax
 * 0000000140645639: lea     rax, aMmfreepagesfro_0; "MmFreePagesFromMdl"
 * 0000000140645640: mov     [rbp+290h+var_170], rax
 * 0000000140645647: lea     rax, aMmfreenoncache; "MmFreeNonCachedMemory"
 * 000000014064564E: mov     [rbp+290h+var_150], rax
 * 0000000140645655: lea     rax, VfPtMmFreeNonCachedMemory_Entry
 * 000000014064565C: mov     [rbp+290h+var_140], rax
 * 0000000140645663: lea     rax, aMmallocatecont_0; "MmAllocateContiguousMemory"
 * 000000014064566A: mov     [rbp+290h+var_130], rax
 * 0000000140645671: lea     rax, VfPtMmAllocateContiguousMemory_Exit
 * 0000000140645678: mov     [rbp+290h+var_118], rax
 * 000000014064567F: lea     rax, aMmallocatecont; "MmAllocateContiguousMemoryEx"
 * 0000000140645686: mov     [rbp+290h+var_110], rax
 * 000000014064568D: lea     rax, VfPtMmAllocateContiguousMemoryEx_Exit
 * 0000000140645694: mov     [rbp+290h+var_F8], rax
 * 000000014064569B: lea     rax, aMmallocatecont_9; "MmAllocateContiguousMemorySpecifyCache"
 * 00000001406456A2: mov     [rbp+290h+var_F0], rax
 * 00000001406456A9: lea     rax, VfPtMmAllocateContiguousMemorySpecifyCache_Exit
 * 00000001406456B0: mov     [rbp+290h+var_D8], rax
 * 00000001406456B7: lea     rax, aMmallocatecont_11; "MmAllocateContiguousMemorySpecifyCacheN"...
 * 00000001406456BE: mov     [rbp+290h+var_D0], rax
 * 00000001406456C5: lea     rax, VfPtMmAllocateContiguousMemorySpecifyCache_Exit
 * 00000001406456CC: mov     [rbp+290h+var_B8], rax
 * 00000001406456D3: lea     rax, aMmallocatecont_7; "MmAllocateContiguousNodeMemory"
 * 00000001406456DA: mov     [rbp+290h+var_B0], rax
 * 00000001406456E1: lea     rax, VfPtMmAllocateContiguousMemorySpecifyCache_Exit
 * 00000001406456E8: mov     [rbp+290h+var_98], rax
 * 00000001406456EF: lea     rax, aMmfreecontiguo; "MmFreeContiguousMemory"
 * 00000001406456F6: mov     [rbp+290h+var_90], rax
 * 00000001406456FD: lea     rax, VfPtMmFreeContiguousMemory_Entry
 * 0000000140645704: mov     [rbp+290h+var_80], rax
 * 000000014064570B: lea     rax, aMmallocatemapp_2; "MmAllocateMappingAddress"
 * 0000000140645712: mov     [rbp+290h+var_70], rax
 * 0000000140645719: lea     rax, VfPtMmAllocateMappingAddress_Exit
 * 0000000140645720: mov     [rbp+290h+var_58], rax
 * 0000000140645727: lea     rax, aMmallocatemapp_0; "MmAllocateMappingAddressEx"
 * 000000014064572E: mov     [rbp+290h+var_50], rax
 * 0000000140645735: lea     rax, VfPtMmAllocateMappingAddressEx_Exit
 * 000000014064573C: mov     [rbp+290h+var_38], rax
 * 0000000140645743: lea     rax, aMmfreemappinga; "MmFreeMappingAddress"
 * 000000014064574A: mov     [rbp+290h+var_30], rax
 * 0000000140645751: lea     rax, VfPtMmFreeMappingAddress_Entry
 * 0000000140645758: mov     [rbp+290h+var_20], rax
 * 000000014064575F: mov     [rbp+290h+var_1C0], rdi
 * 0000000140645766: mov     [rbp+290h+var_1A8], 0E7h
 * 0000000140645770: mov     [rbp+290h+var_1A0], rdi
 * 0000000140645777: mov     [rbp+290h+var_188], 0E3h
 * 0000000140645781: mov     [rbp+290h+var_180], rdi
 * 0000000140645788: mov     [rbp+290h+var_168], 0E0h
 * 0000000140645792: mov     [rbp+290h+var_160], rdi
 * 0000000140645799: mov     [rbp+290h+var_158], rdi
 * 00000001406457A0: mov     [rbp+290h+var_148], 0E1h
 * 00000001406457AA: mov     [rbp+290h+var_138], rdi
 * 00000001406457B1: mov     [rbp+290h+var_128], 0EEh
 * 00000001406457BB: mov     [rbp+290h+var_120], rdi
 * 00000001406457C2: mov     [rbp+290h+var_108], 0EDh
 * 00000001406457CC: mov     [rbp+290h+var_100], rdi
 * 00000001406457D3: mov     [rbp+290h+var_E8], 0ECh
 * 00000001406457DD: mov     [rbp+290h+var_E0], rdi
 * 00000001406457E4: mov     [rbp+290h+var_C8], 0EBh
 * 00000001406457EE: mov     [rbp+290h+var_C0], rdi
 * 00000001406457F5: mov     [rbp+290h+var_A8], 0EAh
 * 00000001406457FF: mov     [rbp+290h+var_A0], rdi
 * 0000000140645806: mov     [rbp+290h+var_88], 0E2h
 * 0000000140645810: mov     [rbp+290h+var_78], rdi
 * 0000000140645817: mov     [rbp+290h+var_68], 0E9h
 * 0000000140645821: mov     [rbp+290h+var_60], rdi
 * 0000000140645828: mov     [rbp+290h+var_48], 1D0h
 * 0000000140645832: mov     [rbp+290h+var_40], rdi
 * 0000000140645839: mov     [rbp+290h+var_28], 1D1h
 * 0000000140645843: mov     [rbp+290h+var_18], rdi
 * 000000014064584A: mov     edx, 1Bh
 * 000000014064584F: lea     r9, ViPoolTrackingSetting
 * 0000000140645856: lea     rcx, [rsp+390h+var_370]
 * 000000014064585B: lea     r8d, [rdx-18h]
 * 000000014064585F: call    DifRegisterPlugin
 * 0000000140645864: mov     ebx, eax
 * 0000000140645866: test    eax, eax
 * 0000000140645868: jns     short loc_14064586F
 * 000000014064586A: call    ViPtPluginUnload
 * 000000014064586F: mov     eax, ebx
 * 0000000140645871: mov     rcx, [rbp+290h+var_10]
 * 0000000140645878: xor     rcx, rsp; StackCookie
 * 000000014064587B: call    __security_check_cookie
 * 0000000140645880: lea     r11, [rsp+390h+var_s0]
 * 0000000140645888: mov     rbx, [r11+10h]
 * 000000014064588C: mov     rdi, [r11+18h]
 * 0000000140645890: mov     rsp, r11
 * 0000000140645893: pop     rbp
 * 0000000140645894: retn
 */
