/*
 * XREFs of VfPoolTrackingEntry @ 0x1406053B0
 * Callers:
 *     <none>
 * Callees:
 *     DifRegisterPlugin @ 0x14060CC10 (DifRegisterPlugin.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ViPtInitAvlTrees @ 0x140B7C910 (ViPtInitAvlTrees.c)
 *     ViPtInitCircularPoolTrace @ 0x140B7C994 (ViPtInitCircularPoolTrace.c)
 *     ViPtPluginUnload @ 0x140B7CA70 (ViPtPluginUnload.c)
 */

/*
 * Hex-Rays decompilation failed for VfPoolTrackingEntry @ 0x1406053B0
 * Reason: Hex-Rays returned no pseudocode for 0x1406053B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406053B0: mov     [rsp-8+arg_0], rbx
 * 00000001406053B5: mov     [rsp-8+arg_8], rdi
 * 00000001406053BA: push    rbp
 * 00000001406053BB: lea     rbp, [rsp-290h]
 * 00000001406053C3: sub     rsp, 390h
 * 00000001406053CA: mov     rax, cs:RtlCopyFromUser_$fo$
 * 00000001406053D1: xor     rax, rsp
 * 00000001406053D4: mov     [rbp+290h+var_10], rax
 * 00000001406053DB: xor     edi, edi
 * 00000001406053DD: mov     qword ptr cs:ViPtUnloadRundown.___u0, rdi
 * 00000001406053E4: call    ViPtInitCircularPoolTrace
 * 00000001406053E9: mov     ebx, eax
 * 00000001406053EB: test    eax, eax
 * 00000001406053ED: js      loc_14060588A
 * 00000001406053F3: test    cs:VfOptionFlags, 1000h
 * 00000001406053FD: jz      short loc_140605404
 * 00000001406053FF: call    ViPtInitAvlTrees
 * 0000000140605404: cmp     cs:VfDifRunningWithoutReboot, dil
 * 000000014060540B: jnz     short loc_140605423
 * 000000014060540D: test    cs:VfOptionFlags, 800h
 * 0000000140605417: jnz     short loc_140605423
 * 0000000140605419: mov     cs:MmTrackLockedPages, 1
 * 0000000140605423: lea     rax, ViPtPluginUnload
 * 000000014060542A: mov     [rsp+390h+var_368], 19Dh
 * 0000000140605432: mov     cs:qword_140F03948, rax
 * 0000000140605439: lea     rax, aExallocatepool_0; "ExAllocatePool"
 * 0000000140605440: mov     [rsp+390h+var_370], rax
 * 0000000140605445: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014060544C: mov     [rsp+390h+var_360], rax
 * 0000000140605451: lea     rax, aExallocatepool; "ExAllocatePool2"
 * 0000000140605458: mov     [rsp+390h+var_350], rax
 * 000000014060545D: lea     rax, ViSpIoAllocateIrp_Exit
 * 0000000140605464: mov     [rsp+390h+var_340], rax
 * 0000000140605469: lea     rax, aExallocatepool_13; "ExAllocatePool3"
 * 0000000140605470: mov     [rsp+390h+var_330], rax
 * 0000000140605475: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014060547C: mov     [rsp+390h+var_318], rax
 * 0000000140605481: lea     rax, aExallocatepool_1; "ExAllocatePoolWithTag"
 * 0000000140605488: mov     [rbp+290h+var_310], rax
 * 000000014060548C: lea     rax, ViSpIoAllocateIrp_Exit
 * 0000000140605493: mov     [rbp+290h+var_300], rax
 * 0000000140605497: lea     rax, aExallocatepool_15; "ExAllocatePoolWithTagPriority"
 * 000000014060549E: mov     [rbp+290h+var_2F0], rax
 * 00000001406054A2: lea     rax, ViSpIoAllocateIrp_Exit
 * 00000001406054A9: mov     [rbp+290h+var_2E0], rax
 * 00000001406054AD: lea     rax, aExallocatepool_14; "ExAllocatePoolWithQuota"
 * 00000001406054B4: mov     [rbp+290h+var_2D0], rax
 * 00000001406054B8: lea     rax, ViSpIoAllocateIrp_Exit
 * 00000001406054BF: mov     [rbp+290h+var_2C0], rax
 * 00000001406054C3: lea     rax, aExallocatepool_16; "ExAllocatePoolWithQuotaTag"
 * 00000001406054CA: mov     [rbp+290h+var_2B0], rax
 * 00000001406054CE: lea     rax, ViSpIoAllocateIrp_Exit
 * 00000001406054D5: mov     [rbp+290h+var_2A0], rax
 * 00000001406054D9: lea     rax, aExfreepool_1; "ExFreePool"
 * 00000001406054E0: mov     [rbp+290h+var_290], rax
 * 00000001406054E4: lea     rax, ViSpIoAllocateIrp_Exit
 * 00000001406054EB: mov     [rbp+290h+var_280], rax
 * 00000001406054EF: lea     rax, aExfreepoolwith_1; "ExFreePoolWithTag"
 * 00000001406054F6: mov     [rbp+290h+var_270], rax
 * 00000001406054FA: lea     rax, ViSpIoAllocateIrp_Exit
 * 0000000140605501: mov     [rbp+290h+var_260], rax
 * 0000000140605505: lea     rax, aIoallocatemdl_0; "IoAllocateMdl"
 * 000000014060550C: mov     [rbp+290h+var_250], rax
 * 0000000140605510: lea     rax, VfPtIoAllocateMdl_Exit
 * 0000000140605517: mov     [rbp+290h+var_238], rax
 * 000000014060551B: lea     rax, aIofreemdl; "IoFreeMdl"
 * 0000000140605522: mov     [rbp+290h+var_230], rax
 * 0000000140605526: lea     rax, aMmallocatepage_3; "MmAllocatePagesForMdl"
 * 000000014060552D: mov     [rbp+290h+var_210], rax
 * 0000000140605534: lea     rax, VfPtMmAllocatePagesForMdl_Exit
 * 000000014060553B: mov     [rbp+290h+var_1F8], rax
 * 0000000140605542: lea     rax, aMmallocatepage; "MmAllocatePagesForMdlEx"
 * 0000000140605549: mov     [rbp+290h+var_1F0], rax
 * 0000000140605550: lea     rax, VfPtMmAllocatePagesForMdlEx_Exit
 * 0000000140605557: mov     [rbp+290h+var_1D8], rax
 * 000000014060555E: lea     rax, aMmallocatenode; "MmAllocateNodePagesForMdlEx"
 * 0000000140605565: mov     [rbp+290h+var_1D0], rax
 * 000000014060556C: mov     [rsp+390h+var_358], rdi
 * 0000000140605571: mov     [rsp+390h+var_348], 1A3h
 * 0000000140605579: mov     [rsp+390h+var_338], rdi
 * 000000014060557E: mov     [rsp+390h+var_328], 1A2h
 * 0000000140605586: mov     [rsp+390h+var_320], rdi
 * 000000014060558B: mov     [rbp+290h+var_308], 19Eh
 * 0000000140605592: mov     [rbp+290h+var_2F8], rdi
 * 0000000140605596: mov     [rbp+290h+var_2E8], 19Fh
 * 000000014060559D: mov     [rbp+290h+var_2D8], rdi
 * 00000001406055A1: mov     [rbp+290h+var_2C8], 1A0h
 * 00000001406055A8: mov     [rbp+290h+var_2B8], rdi
 * 00000001406055AC: mov     [rbp+290h+var_2A8], 1A1h
 * 00000001406055B3: mov     [rbp+290h+var_298], rdi
 * 00000001406055B7: mov     [rbp+290h+var_288], 191h
 * 00000001406055BE: mov     [rbp+290h+var_278], rdi
 * 00000001406055C2: mov     [rbp+290h+var_268], 190h
 * 00000001406055C9: mov     [rbp+290h+var_258], rdi
 * 00000001406055CD: mov     [rbp+290h+var_248], 16Dh
 * 00000001406055D4: mov     [rbp+290h+var_240], rdi
 * 00000001406055D8: mov     [rbp+290h+var_228], 153h
 * 00000001406055DF: mov     [rbp+290h+var_220], rdi
 * 00000001406055E3: mov     [rbp+290h+var_218], rdi
 * 00000001406055E7: mov     [rbp+290h+var_208], 0E6h
 * 00000001406055F1: mov     [rbp+290h+var_200], rdi
 * 00000001406055F8: mov     [rbp+290h+var_1E8], 0E5h
 * 0000000140605602: mov     [rbp+290h+var_1E0], rdi
 * 0000000140605609: lea     rax, VfPtMmAllocateNodePagesForMdlEx_Exit
 * 0000000140605610: mov     [rbp+290h+var_1C8], 0E8h
 * 000000014060561A: mov     [rbp+290h+var_1B8], rax
 * 0000000140605621: lea     rax, aMmallocatenonc_0; "MmAllocateNonCachedMemory"
 * 0000000140605628: mov     [rbp+290h+var_1B0], rax
 * 000000014060562F: lea     rax, VfPtMmAllocateNonCachedMemory_Exit
 * 0000000140605636: mov     [rbp+290h+var_198], rax
 * 000000014060563D: lea     rax, aMmcreatemdl_0; "MmCreateMdl"
 * 0000000140605644: mov     [rbp+290h+var_190], rax
 * 000000014060564B: lea     rax, VfPtMmCreateMdl_Exit
 * 0000000140605652: mov     [rbp+290h+var_178], rax
 * 0000000140605659: lea     rax, aMmfreepagesfro_0; "MmFreePagesFromMdl"
 * 0000000140605660: mov     [rbp+290h+var_170], rax
 * 0000000140605667: lea     rax, aMmfreenoncache; "MmFreeNonCachedMemory"
 * 000000014060566E: mov     [rbp+290h+var_150], rax
 * 0000000140605675: lea     rax, VfPtMmFreeNonCachedMemory_Entry
 * 000000014060567C: mov     [rbp+290h+var_140], rax
 * 0000000140605683: lea     rax, aMmallocatecont_0; "MmAllocateContiguousMemory"
 * 000000014060568A: mov     [rbp+290h+var_130], rax
 * 0000000140605691: lea     rax, VfPtMmAllocateContiguousMemory_Exit
 * 0000000140605698: mov     [rbp+290h+var_118], rax
 * 000000014060569F: lea     rax, aMmallocatecont; "MmAllocateContiguousMemoryEx"
 * 00000001406056A6: mov     [rbp+290h+var_110], rax
 * 00000001406056AD: lea     rax, VfPtMmAllocateContiguousMemoryEx_Exit
 * 00000001406056B4: mov     [rbp+290h+var_F8], rax
 * 00000001406056BB: lea     rax, aMmallocatecont_9; "MmAllocateContiguousMemorySpecifyCache"
 * 00000001406056C2: mov     [rbp+290h+var_F0], rax
 * 00000001406056C9: lea     rax, VfPtMmAllocateContiguousMemorySpecifyCache_Exit
 * 00000001406056D0: mov     [rbp+290h+var_D8], rax
 * 00000001406056D7: lea     rax, aMmallocatecont_11; "MmAllocateContiguousMemorySpecifyCacheN"...
 * 00000001406056DE: mov     [rbp+290h+var_D0], rax
 * 00000001406056E5: lea     rax, VfPtMmAllocateContiguousMemorySpecifyCache_Exit
 * 00000001406056EC: mov     [rbp+290h+var_B8], rax
 * 00000001406056F3: lea     rax, aMmallocatecont_7; "MmAllocateContiguousNodeMemory"
 * 00000001406056FA: mov     [rbp+290h+var_B0], rax
 * 0000000140605701: lea     rax, VfPtMmAllocateContiguousMemorySpecifyCache_Exit
 * 0000000140605708: mov     [rbp+290h+var_98], rax
 * 000000014060570F: lea     rax, aMmfreecontiguo; "MmFreeContiguousMemory"
 * 0000000140605716: mov     [rbp+290h+var_90], rax
 * 000000014060571D: lea     rax, VfPtMmFreeContiguousMemory_Entry
 * 0000000140605724: mov     [rbp+290h+var_80], rax
 * 000000014060572B: lea     rax, aMmallocatemapp_2; "MmAllocateMappingAddress"
 * 0000000140605732: mov     [rbp+290h+var_70], rax
 * 0000000140605739: lea     rax, VfPtMmAllocateMappingAddress_Exit
 * 0000000140605740: mov     [rbp+290h+var_58], rax
 * 0000000140605747: lea     rax, aMmallocatemapp_0; "MmAllocateMappingAddressEx"
 * 000000014060574E: mov     [rbp+290h+var_50], rax
 * 0000000140605755: lea     rax, VfPtMmAllocateMappingAddressEx_Exit
 * 000000014060575C: mov     [rbp+290h+var_38], rax
 * 0000000140605763: lea     rax, aMmfreemappinga; "MmFreeMappingAddress"
 * 000000014060576A: mov     [rbp+290h+var_30], rax
 * 0000000140605771: lea     rax, VfPtMmFreeMappingAddress_Entry
 * 0000000140605778: mov     [rbp+290h+var_20], rax
 * 000000014060577F: mov     [rbp+290h+var_1C0], rdi
 * 0000000140605786: mov     [rbp+290h+var_1A8], 0E7h
 * 0000000140605790: mov     [rbp+290h+var_1A0], rdi
 * 0000000140605797: mov     [rbp+290h+var_188], 0E3h
 * 00000001406057A1: mov     [rbp+290h+var_180], rdi
 * 00000001406057A8: mov     [rbp+290h+var_168], 0E0h
 * 00000001406057B2: mov     [rbp+290h+var_160], rdi
 * 00000001406057B9: mov     [rbp+290h+var_158], rdi
 * 00000001406057C0: mov     [rbp+290h+var_148], 0E1h
 * 00000001406057CA: mov     [rbp+290h+var_138], rdi
 * 00000001406057D1: mov     [rbp+290h+var_128], 0EEh
 * 00000001406057DB: mov     [rbp+290h+var_120], rdi
 * 00000001406057E2: mov     [rbp+290h+var_108], 0EDh
 * 00000001406057EC: mov     [rbp+290h+var_100], rdi
 * 00000001406057F3: mov     [rbp+290h+var_E8], 0ECh
 * 00000001406057FD: mov     [rbp+290h+var_E0], rdi
 * 0000000140605804: mov     [rbp+290h+var_C8], 0EBh
 * 000000014060580E: mov     [rbp+290h+var_C0], rdi
 * 0000000140605815: mov     [rbp+290h+var_A8], 0EAh
 * 000000014060581F: mov     [rbp+290h+var_A0], rdi
 * 0000000140605826: mov     [rbp+290h+var_88], 0E2h
 * 0000000140605830: mov     [rbp+290h+var_78], rdi
 * 0000000140605837: mov     [rbp+290h+var_68], 0E9h
 * 0000000140605841: mov     [rbp+290h+var_60], rdi
 * 0000000140605848: mov     [rbp+290h+var_48], 1D1h
 * 0000000140605852: mov     [rbp+290h+var_40], rdi
 * 0000000140605859: mov     [rbp+290h+var_28], 1D2h
 * 0000000140605863: mov     [rbp+290h+var_18], rdi
 * 000000014060586A: mov     edx, 1Bh
 * 000000014060586F: lea     r9, ViPoolTrackingSetting
 * 0000000140605876: lea     rcx, [rsp+390h+var_370]
 * 000000014060587B: lea     r8d, [rdx-18h]
 * 000000014060587F: call    DifRegisterPlugin
 * 0000000140605884: mov     ebx, eax
 * 0000000140605886: test    eax, eax
 * 0000000140605888: jns     short loc_14060588F
 * 000000014060588A: call    ViPtPluginUnload
 * 000000014060588F: mov     eax, ebx
 * 0000000140605891: mov     rcx, [rbp+290h+var_10]
 * 0000000140605898: xor     rcx, rsp; StackCookie
 * 000000014060589B: call    __security_check_cookie
 * 00000001406058A0: lea     r11, [rsp+390h+var_s0]
 * 00000001406058A8: mov     rbx, [r11+10h]
 * 00000001406058AC: mov     rdi, [r11+18h]
 * 00000001406058B0: mov     rsp, r11
 * 00000001406058B3: pop     rbp
 * 00000001406058B4: retn
 */
