/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1400385BC
 * Callers:
 *     ACPIDeviceDiscoverDependencies @ 0x140019EDC (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x14001A4B4 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIBuildDeviceExtension @ 0x14004F860 (ACPIBuildDeviceExtension.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x140053384 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIBuildPowerResourceExtension @ 0x140057F90 (ACPIBuildPowerResourceExtension.c)
 *     ACPIDispatchAddDevice @ 0x14005E070 (ACPIDispatchAddDevice.c)
 *     ACPIBusIrpStartDevice @ 0x1400ADD90 (ACPIBusIrpStartDevice.c)
 *     ACPIProcessHardwareInformation @ 0x1400B19E8 (ACPIProcessHardwareInformation.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1400B687C (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1400B76BC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1400B7B04 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpCmResourcesToBiosResources @ 0x1400B8A44 (PnpCmResourcesToBiosResources.c)
 *     OSReadRegValue @ 0x1400C8470 (OSReadRegValue.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1400C89FC (ACPIRegReadAMLRegistryEntry.c)
 *     OSOpenHandle @ 0x1400C8D44 (OSOpenHandle.c)
 *     OSOpenUnicodeHandle @ 0x1400C8E14 (OSOpenUnicodeHandle.c)
 *     OSWriteRegValue @ 0x1400C9238 (OSWriteRegValue.c)
 *     OSCreateHandle @ 0x1400C9370 (OSCreateHandle.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1400CE1DC (PnpiBiosAddressToIoDescriptor.c)
 *     PnpBiosResourcesToNtResources @ 0x1400CE578 (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1400CF578 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     ACPIFilterIrpStartDevice @ 0x1400CFC00 (ACPIFilterIrpStartDevice.c)
 *     ACPIInitialize @ 0x1400D7008 (ACPIInitialize.c)
 *     ACPIInitializeAMLI @ 0x1400D7A1C (ACPIInitializeAMLI.c)
 *     OSReadAcpiConfigurationData @ 0x1400D7CF8 (OSReadAcpiConfigurationData.c)
 *     OSInterruptVector @ 0x1400D959C (OSInterruptVector.c)
 *     ACPILoadProcessFACS @ 0x1400DB880 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessRSDT @ 0x1400DDE64 (ACPILoadProcessRSDT.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_L @ 0x1400385BC
 * Reason: Hex-Rays returned no pseudocode for 0x1400385BC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400385BC: mov     rax, rsp
 * 00000001400385BF: mov     [rax+8], rbx
 * 00000001400385C3: mov     [rax+10h], rbp
 * 00000001400385C7: mov     [rax+18h], rsi
 * 00000001400385CB: mov     [rax+20h], rdi
 * 00000001400385CF: push    r14
 * 00000001400385D1: sub     rsp, 40h
 * 00000001400385D5: mov     ebp, r8d
 * 00000001400385D8: mov     r14, rcx
 * 00000001400385DB: mov     ebx, r8d
 * 00000001400385DE: shr     rbx, 10h
 * 00000001400385E2: movzx   esi, r9w
 * 00000001400385E6: lea     r11d, [rbp-1]
 * 00000001400385EA: movzx   edi, dl
 * 00000001400385ED: mov     r10d, r11d
 * 00000001400385F0: and     r11d, 1Fh
 * 00000001400385F4: shr     r10, 5
 * 00000001400385F8: lea     rax, [rbx+rbx*4]
 * 00000001400385FC: and     r10d, 7FFh
 * 0000000140038603: lea     rax, [r10+rax*4]
 * 0000000140038607: mov     r10, cs:WPP_GLOBAL_Control
 * 000000014003860E: mov     eax, [r10+rax*4+2Ch]
 * 0000000140038613: bt      eax, r11d
 * 0000000140038617: jnb     short loc_140038661
 * 0000000140038619: lea     rcx, [rbx+rbx*4]
 * 000000014003861D: add     rcx, rcx
 * 0000000140038620: cmp     [r10+rcx*8+29h], dil
 * 0000000140038625: jb      short loc_140038661
 * 0000000140038627: mov     rax, cs:pfnWppTraceMessage
 * 000000014003862E: lea     rdx, [rsp+48h+arg_28]
 * 0000000140038633: mov     r8, [rsp+48h+arg_20]
 * 0000000140038638: mov     r9d, esi
 * 000000014003863B: mov     rcx, [r10+rcx*8+18h]
 * 0000000140038640: mov     [rsp+48h+var_18], 0
 * 0000000140038649: mov     [rsp+48h+var_20], 4
 * 0000000140038652: mov     [rsp+48h+var_28], rdx
 * 0000000140038657: mov     edx, 2Bh ; '+'
 * 000000014003865C: call    _guard_dispatch_icall
 * 0000000140038661: mov     r9, [rsp+48h+arg_20]
 * 0000000140038666: lea     rax, [rsp+48h+arg_28]
 * 000000014003866B: mov     [rsp+48h+var_10], 0
 * 0000000140038674: mov     r8d, ebp
 * 0000000140038677: mov     [rsp+48h+var_18], 4
 * 0000000140038680: mov     edx, edi
 * 0000000140038682: mov     [rsp+48h+var_20], rax
 * 0000000140038687: mov     rcx, r14
 * 000000014003868A: mov     word ptr [rsp+48h+var_28], si
 * 000000014003868F: call    cs:__imp_WppAutoLogTrace
 * 0000000140038696: nop     dword ptr [rax+rax+00h]
 * 000000014003869B: mov     rbx, [rsp+48h+arg_0]
 * 00000001400386A0: mov     rbp, [rsp+48h+arg_8]
 * 00000001400386A5: mov     rsi, [rsp+48h+arg_10]
 * 00000001400386AA: mov     rdi, [rsp+48h+arg_18]
 * 00000001400386AF: add     rsp, 40h
 * 00000001400386B3: pop     r14
 * 00000001400386B5: retn
 */
