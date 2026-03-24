/*
 * XREFs of VfPoolTrackingEntry @ 0x1406417B0
 * Callers:
 *     <none>
 * Callees:
 *     DifRegisterPlugin @ 0x14064BBB0 (DifRegisterPlugin.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ViPtInitAvlTrees @ 0x140C2A5E0 (ViPtInitAvlTrees.c)
 *     ViPtInitCircularPoolTrace @ 0x140C2A668 (ViPtInitCircularPoolTrace.c)
 *     ViPtPluginUnload @ 0x140C2A740 (ViPtPluginUnload.c)
 */

/*
 * Hex-Rays decompilation failed for VfPoolTrackingEntry @ 0x1406417B0
 * Reason: Hex-Rays returned no pseudocode for 0x1406417B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406417B0: mov     [rsp-8+arg_0], rbx
 * 00000001406417B5: mov     [rsp-8+arg_8], rdi
 * 00000001406417BA: push    rbp
 * 00000001406417BB: lea     rbp, [rsp-290h]
 * 00000001406417C3: sub     rsp, 390h
 * 00000001406417CA: mov     rax, cs:__security_cookie
 * 00000001406417D1: xor     rax, rsp
 * 00000001406417D4: mov     [rbp+290h+var_10], rax
 * 00000001406417DB: xor     edi, edi
 * 00000001406417DD: mov     qword ptr cs:ViPtUnloadRundown.___u0, rdi
 * 00000001406417E4: call    ViPtInitCircularPoolTrace
 * 00000001406417E9: mov     ebx, eax
 * 00000001406417EB: test    eax, eax
 * 00000001406417ED: js      loc_140641C8A
 * 00000001406417F3: test    cs:VfOptionFlags, 1000h
 * 00000001406417FD: jz      short loc_140641804
 * 00000001406417FF: call    ViPtInitAvlTrees
 * 0000000140641804: cmp     cs:VfDifRunningWithoutReboot, dil
 * 000000014064180B: jnz     short loc_140641823
 * 000000014064180D: test    cs:VfOptionFlags, 800h
 * 0000000140641817: jnz     short loc_140641823
 * 0000000140641819: mov     cs:MmTrackLockedPages, 1
 * 0000000140641823: lea     rax, ViPtPluginUnload
 * 000000014064182A: mov     [rsp+390h+var_368], 19Ch
 * 0000000140641832: mov     cs:qword_140F08648, rax
 * 0000000140641839: lea     rax, aExallocatepool_0; "ExAllocatePool"
 * 0000000140641840: mov     [rsp+390h+var_370], rax
 * 0000000140641845: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014064184C: mov     [rsp+390h+var_360], rax
 * 0000000140641851: lea     rax, aExallocatepool; "ExAllocatePool2"
 * 0000000140641858: mov     [rsp+390h+var_350], rax
 * 000000014064185D: lea     rax, ViSpIoAllocateIrp_Exit
 * 0000000140641864: mov     [rsp+390h+var_340], rax
 * 0000000140641869: lea     rax, aExallocatepool_13; "ExAllocatePool3"
 * 0000000140641870: mov     [rsp+390h+var_330], rax
 * 0000000140641875: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014064187C: mov     [rsp+390h+var_318], rax
 * 0000000140641881: lea     rax, aExallocatepool_1; "ExAllocatePoolWithTag"
 * 0000000140641888: mov     [rbp+290h+var_310], rax
 * 000000014064188C: lea     rax, ViSpIoAllocateIrp_Exit
 * 0000000140641893: mov     [rbp+290h+var_300], rax
 * 0000000140641897: lea     rax, aExallocatepool_15; "ExAllocatePoolWithTagPriority"
 * 000000014064189E: mov     [rbp+290h+var_2F0], rax
 * 00000001406418A2: lea     rax, ViSpIoAllocateIrp_Exit
 * 00000001406418A9: mov     [rbp+290h+var_2E0], rax
 * 00000001406418AD: lea     rax, aExallocatepool_14; "ExAllocatePoolWithQuota"
 * 00000001406418B4: mov     [rbp+290h+var_2D0], rax
 * 00000001406418B8: lea     rax, ViSpIoAllocateIrp_Exit
 * 00000001406418BF: mov     [rbp+290h+var_2C0], rax
 * 00000001406418C3: lea     rax, aExallocatepool_16; "ExAllocatePoolWithQuotaTag"
 * 00000001406418CA: mov     [rbp+290h+var_2B0], rax
 * 00000001406418CE: lea     rax, ViSpIoAllocateIrp_Exit
 * 00000001406418D5: mov     [rbp+290h+var_2A0], rax
 * 00000001406418D9: lea     rax, aExfreepool_1; "ExFreePool"
 * 00000001406418E0: mov     [rbp+290h+var_290], rax
 * 00000001406418E4: lea     rax, ViSpIoAllocateIrp_Exit
 * 00000001406418EB: mov     [rbp+290h+var_280], rax
 * 00000001406418EF: lea     rax, aExfreepoolwith_1; "ExFreePoolWithTag"
 * 00000001406418F6: mov     [rbp+290h+var_270], rax
 * 00000001406418FA: lea     rax, ViSpIoAllocateIrp_Exit
 * 0000000140641901: mov     [rbp+290h+var_260], rax
 * 0000000140641905: lea     rax, aIoallocatemdl_0; "IoAllocateMdl"
 * 000000014064190C: mov     [rbp+290h+var_250], rax
 * 0000000140641910: lea     rax, VfPtIoAllocateMdl_Exit
 * 0000000140641917: mov     [rbp+290h+var_238], rax
 * 000000014064191B: lea     rax, aIofreemdl; "IoFreeMdl"
 * 0000000140641922: mov     [rbp+290h+var_230], rax
 * 0000000140641926: lea     rax, aMmallocatepage_3; "MmAllocatePagesForMdl"
 * 000000014064192D: mov     [rbp+290h+var_210], rax
 * 0000000140641934: lea     rax, VfPtMmAllocatePagesForMdl_Exit
 * 000000014064193B: mov     [rbp+290h+var_1F8], rax
 * 0000000140641942: lea     rax, aMmallocatepage; "MmAllocatePagesForMdlEx"
 * 0000000140641949: mov     [rbp+290h+var_1F0], rax
 * 0000000140641950: lea     rax, VfPtMmAllocatePagesForMdlEx_Exit
 * 0000000140641957: mov     [rbp+290h+var_1D8], rax
 * 000000014064195E: lea     rax, aMmallocatenode; "MmAllocateNodePagesForMdlEx"
 * 0000000140641965: mov     [rbp+290h+var_1D0], rax
 * 000000014064196C: mov     [rsp+390h+var_358], rdi
 * 0000000140641971: mov     [rsp+390h+var_348], 1A2h
 * 0000000140641979: mov     [rsp+390h+var_338], rdi
 * 000000014064197E: mov     [rsp+390h+var_328], 1A1h
 * 0000000140641986: mov     [rsp+390h+var_320], rdi
 * 000000014064198B: mov     [rbp+290h+var_308], 19Dh
 * 0000000140641992: mov     [rbp+290h+var_2F8], rdi
 * 0000000140641996: mov     [rbp+290h+var_2E8], 19Eh
 * 000000014064199D: mov     [rbp+290h+var_2D8], rdi
 * 00000001406419A1: mov     [rbp+290h+var_2C8], 19Fh
 * 00000001406419A8: mov     [rbp+290h+var_2B8], rdi
 * 00000001406419AC: mov     [rbp+290h+var_2A8], 1A0h
 * 00000001406419B3: mov     [rbp+290h+var_298], rdi
 * 00000001406419B7: mov     [rbp+290h+var_288], 190h
 * 00000001406419BE: mov     [rbp+290h+var_278], rdi
 * 00000001406419C2: mov     [rbp+290h+var_268], 18Fh
 * 00000001406419C9: mov     [rbp+290h+var_258], rdi
 * 00000001406419CD: mov     [rbp+290h+var_248], 16Ch
 * 00000001406419D4: mov     [rbp+290h+var_240], rdi
 * 00000001406419D8: mov     [rbp+290h+var_228], 152h
 * 00000001406419DF: mov     [rbp+290h+var_220], rdi
 * 00000001406419E3: mov     [rbp+290h+var_218], rdi
 * 00000001406419E7: mov     [rbp+290h+var_208], 0E6h
 * 00000001406419F1: mov     [rbp+290h+var_200], rdi
 * 00000001406419F8: mov     [rbp+290h+var_1E8], 0E5h
 * 0000000140641A02: mov     [rbp+290h+var_1E0], rdi
 * 0000000140641A09: lea     rax, VfPtMmAllocateNodePagesForMdlEx_Exit
 * 0000000140641A10: mov     [rbp+290h+var_1C8], 0E8h
 * 0000000140641A1A: mov     [rbp+290h+var_1B8], rax
 * 0000000140641A21: lea     rax, aMmallocatenonc_0; "MmAllocateNonCachedMemory"
 * 0000000140641A28: mov     [rbp+290h+var_1B0], rax
 * 0000000140641A2F: lea     rax, VfPtMmAllocateNonCachedMemory_Exit
 * 0000000140641A36: mov     [rbp+290h+var_198], rax
 * 0000000140641A3D: lea     rax, aMmcreatemdl_0; "MmCreateMdl"
 * 0000000140641A44: mov     [rbp+290h+var_190], rax
 * 0000000140641A4B: lea     rax, VfPtMmCreateMdl_Exit
 * 0000000140641A52: mov     [rbp+290h+var_178], rax
 * 0000000140641A59: lea     rax, aMmfreepagesfro_0; "MmFreePagesFromMdl"
 * 0000000140641A60: mov     [rbp+290h+var_170], rax
 * 0000000140641A67: lea     rax, aMmfreenoncache; "MmFreeNonCachedMemory"
 * 0000000140641A6E: mov     [rbp+290h+var_150], rax
 * 0000000140641A75: lea     rax, VfPtMmFreeNonCachedMemory_Entry
 * 0000000140641A7C: mov     [rbp+290h+var_140], rax
 * 0000000140641A83: lea     rax, aMmallocatecont_0; "MmAllocateContiguousMemory"
 * 0000000140641A8A: mov     [rbp+290h+var_130], rax
 * 0000000140641A91: lea     rax, VfPtMmAllocateContiguousMemory_Exit
 * 0000000140641A98: mov     [rbp+290h+var_118], rax
 * 0000000140641A9F: lea     rax, aMmallocatecont; "MmAllocateContiguousMemoryEx"
 * 0000000140641AA6: mov     [rbp+290h+var_110], rax
 * 0000000140641AAD: lea     rax, VfPtMmAllocateContiguousMemoryEx_Exit
 * 0000000140641AB4: mov     [rbp+290h+var_F8], rax
 * 0000000140641ABB: lea     rax, aMmallocatecont_9; "MmAllocateContiguousMemorySpecifyCache"
 * 0000000140641AC2: mov     [rbp+290h+var_F0], rax
 * 0000000140641AC9: lea     rax, VfPtMmAllocateContiguousMemorySpecifyCache_Exit
 * 0000000140641AD0: mov     [rbp+290h+var_D8], rax
 * 0000000140641AD7: lea     rax, aMmallocatecont_11; "MmAllocateContiguousMemorySpecifyCacheN"...
 * 0000000140641ADE: mov     [rbp+290h+var_D0], rax
 * 0000000140641AE5: lea     rax, VfPtMmAllocateContiguousMemorySpecifyCache_Exit
 * 0000000140641AEC: mov     [rbp+290h+var_B8], rax
 * 0000000140641AF3: lea     rax, aMmallocatecont_7; "MmAllocateContiguousNodeMemory"
 * 0000000140641AFA: mov     [rbp+290h+var_B0], rax
 * 0000000140641B01: lea     rax, VfPtMmAllocateContiguousMemorySpecifyCache_Exit
 * 0000000140641B08: mov     [rbp+290h+var_98], rax
 * 0000000140641B0F: lea     rax, aMmfreecontiguo; "MmFreeContiguousMemory"
 * 0000000140641B16: mov     [rbp+290h+var_90], rax
 * 0000000140641B1D: lea     rax, VfPtMmFreeContiguousMemory_Entry
 * 0000000140641B24: mov     [rbp+290h+var_80], rax
 * 0000000140641B2B: lea     rax, aMmallocatemapp_2; "MmAllocateMappingAddress"
 * 0000000140641B32: mov     [rbp+290h+var_70], rax
 * 0000000140641B39: lea     rax, VfPtMmAllocateMappingAddress_Exit
 * 0000000140641B40: mov     [rbp+290h+var_58], rax
 * 0000000140641B47: lea     rax, aMmallocatemapp_0; "MmAllocateMappingAddressEx"
 * 0000000140641B4E: mov     [rbp+290h+var_50], rax
 * 0000000140641B55: lea     rax, VfPtMmAllocateMappingAddressEx_Exit
 * 0000000140641B5C: mov     [rbp+290h+var_38], rax
 * 0000000140641B63: lea     rax, aMmfreemappinga; "MmFreeMappingAddress"
 * 0000000140641B6A: mov     [rbp+290h+var_30], rax
 * 0000000140641B71: lea     rax, VfPtMmFreeMappingAddress_Entry
 * 0000000140641B78: mov     [rbp+290h+var_20], rax
 * 0000000140641B7F: mov     [rbp+290h+var_1C0], rdi
 * 0000000140641B86: mov     [rbp+290h+var_1A8], 0E7h
 * 0000000140641B90: mov     [rbp+290h+var_1A0], rdi
 * 0000000140641B97: mov     [rbp+290h+var_188], 0E3h
 * 0000000140641BA1: mov     [rbp+290h+var_180], rdi
 * 0000000140641BA8: mov     [rbp+290h+var_168], 0E0h
 * 0000000140641BB2: mov     [rbp+290h+var_160], rdi
 * 0000000140641BB9: mov     [rbp+290h+var_158], rdi
 * 0000000140641BC0: mov     [rbp+290h+var_148], 0E1h
 * 0000000140641BCA: mov     [rbp+290h+var_138], rdi
 * 0000000140641BD1: mov     [rbp+290h+var_128], 0EEh
 * 0000000140641BDB: mov     [rbp+290h+var_120], rdi
 * 0000000140641BE2: mov     [rbp+290h+var_108], 0EDh
 * 0000000140641BEC: mov     [rbp+290h+var_100], rdi
 * 0000000140641BF3: mov     [rbp+290h+var_E8], 0ECh
 * 0000000140641BFD: mov     [rbp+290h+var_E0], rdi
 * 0000000140641C04: mov     [rbp+290h+var_C8], 0EBh
 * 0000000140641C0E: mov     [rbp+290h+var_C0], rdi
 * 0000000140641C15: mov     [rbp+290h+var_A8], 0EAh
 * 0000000140641C1F: mov     [rbp+290h+var_A0], rdi
 * 0000000140641C26: mov     [rbp+290h+var_88], 0E2h
 * 0000000140641C30: mov     [rbp+290h+var_78], rdi
 * 0000000140641C37: mov     [rbp+290h+var_68], 0E9h
 * 0000000140641C41: mov     [rbp+290h+var_60], rdi
 * 0000000140641C48: mov     [rbp+290h+var_48], 1D0h
 * 0000000140641C52: mov     [rbp+290h+var_40], rdi
 * 0000000140641C59: mov     [rbp+290h+var_28], 1D1h
 * 0000000140641C63: mov     [rbp+290h+var_18], rdi
 * 0000000140641C6A: mov     edx, 1Bh
 * 0000000140641C6F: lea     r9, ViPoolTrackingSetting
 * 0000000140641C76: lea     rcx, [rsp+390h+var_370]
 * 0000000140641C7B: lea     r8d, [rdx-18h]
 * 0000000140641C7F: call    DifRegisterPlugin
 * 0000000140641C84: mov     ebx, eax
 * 0000000140641C86: test    eax, eax
 * 0000000140641C88: jns     short loc_140641C8F
 * 0000000140641C8A: call    ViPtPluginUnload
 * 0000000140641C8F: mov     eax, ebx
 * 0000000140641C91: mov     rcx, [rbp+290h+var_10]
 * 0000000140641C98: xor     rcx, rsp; StackCookie
 * 0000000140641C9B: call    __security_check_cookie
 * 0000000140641CA0: lea     r11, [rsp+390h+var_s0]
 * 0000000140641CA8: mov     rbx, [r11+10h]
 * 0000000140641CAC: mov     rdi, [r11+18h]
 * 0000000140641CB0: mov     rsp, r11
 * 0000000140641CB3: pop     rbp
 * 0000000140641CB4: retn
 */
