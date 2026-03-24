/*
 * XREFs of WPP_RECORDER_SF_ @ 0x14001B3DC
 * Callers:
 *     ACPIDevicePowerDpc @ 0x140019030 (ACPIDevicePowerDpc.c)
 *     ACPIDeviceDiscoverDependencies @ 0x140019EDC (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x14001A4B4 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x14001AB44 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x14001AD90 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIEnableEnterACPIMode @ 0x14002E248 (ACPIEnableEnterACPIMode.c)
 *     ACPIStartNextGlobalLockRequest @ 0x14002EF2C (ACPIStartNextGlobalLockRequest.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x140032208 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceCheck @ 0x140041ADC (OSNotifyDeviceCheck.c)
 *     ACPIRangeValidatePciResources @ 0x14004BB74 (ACPIRangeValidatePciResources.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x14004E18C (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIWriteEventLogEntry @ 0x1400535C0 (ACPIWriteEventLogEntry.c)
 *     ACPIDispatchAddDevice @ 0x14005E070 (ACPIDispatchAddDevice.c)
 *     ACPIUnload @ 0x14005E810 (ACPIUnload.c)
 *     ACPIIgnoreResourceMapValidation @ 0x140068010 (ACPIIgnoreResourceMapValidation.c)
 *     ACPIRootIrpRemoveDevice @ 0x140068DC0 (ACPIRootIrpRemoveDevice.c)
 *     ACPITableNotifyFreeObject @ 0x1400696B0 (ACPITableNotifyFreeObject.c)
 *     ACPIVectorConnect @ 0x14006AC70 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x14006AEA0 (ACPIVectorDisconnect.c)
 *     ACPIInterruptInitialize @ 0x1400A94DC (ACPIInterruptInitialize.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1400AFA38 (AcpiExternalTranslateBiosToNtResources.c)
 *     ACPIProcessHardwareInformation @ 0x1400B19E8 (ACPIProcessHardwareInformation.c)
 *     ACPIPccInitialize @ 0x1400B2344 (ACPIPccInitialize.c)
 *     ACPIPccLegacyInitialize @ 0x1400B2490 (ACPIPccLegacyInitialize.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1400B5C80 (ACPIProcessorBuildBootApicIds.c)
 *     ACPIProcessorBuildHiddenApicIds @ 0x1400B5D60 (ACPIProcessorBuildHiddenApicIds.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1400B76BC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1400B7B04 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpCmResourcesToBiosResources @ 0x1400B8A44 (PnpCmResourcesToBiosResources.c)
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 *     IrqArbAddAllocation @ 0x1400BD7C0 (IrqArbAddAllocation.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1400CE1DC (PnpiBiosAddressToIoDescriptor.c)
 *     PnpBiosResourcesToNtResources @ 0x1400CE578 (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1400CF578 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     IcCheckIrqConflict @ 0x1400D065C (IcCheckIrqConflict.c)
 *     IrqArbpFindSuitableRangePci @ 0x1400D2AC8 (IrqArbpFindSuitableRangePci.c)
 *     ACPIEnumerateTables @ 0x1400D3898 (ACPIEnumerateTables.c)
 *     ACPIInitialize @ 0x1400D7008 (ACPIInitialize.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1400D74F4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     ACPIInitializeDDBs @ 0x1400D7B14 (ACPIInitializeDDBs.c)
 *     OSReadAcpiConfigurationData @ 0x1400D7CF8 (OSReadAcpiConfigurationData.c)
 *     ACPILoadFindRSDT @ 0x1400D884C (ACPILoadFindRSDT.c)
 *     ACPIInitStartACPI @ 0x1400DB3BC (ACPIInitStartACPI.c)
 *     ACPILoadProcessDSDT @ 0x1400DB740 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFACS @ 0x1400DB880 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessFADT @ 0x1400DB9D8 (ACPILoadProcessFADT.c)
 *     ACPIRegDumpAcpiTables @ 0x1400DBB08 (ACPIRegDumpAcpiTables.c)
 *     ACPILoadProcessRSDT @ 0x1400DDE64 (ACPILoadProcessRSDT.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x14001B3DC
 * Reason: Hex-Rays returned no pseudocode for 0x14001B3DC
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014001B3DC: mov     rax, rsp
 * 000000014001B3DF: mov     [rax+8], rbx
 * 000000014001B3E3: mov     [rax+10h], rbp
 * 000000014001B3E7: mov     [rax+18h], rsi
 * 000000014001B3EB: mov     [rax+20h], rdi
 * 000000014001B3EF: push    r14
 * 000000014001B3F1: sub     rsp, 30h
 * 000000014001B3F5: mov     ebp, r8d
 * 000000014001B3F8: mov     r14, rcx
 * 000000014001B3FB: mov     ebx, r8d
 * 000000014001B3FE: shr     rbx, 10h
 * 000000014001B402: movzx   esi, r9w
 * 000000014001B406: lea     r11d, [rbp-1]
 * 000000014001B40A: movzx   edi, dl
 * 000000014001B40D: mov     r10d, r11d
 * 000000014001B410: and     r11d, 1Fh
 * 000000014001B414: shr     r10, 5
 * 000000014001B418: lea     rax, [rbx+rbx*4]
 * 000000014001B41C: and     r10d, 7FFh
 * 000000014001B423: lea     rax, [r10+rax*4]
 * 000000014001B427: mov     r10, cs:WPP_GLOBAL_Control
 * 000000014001B42E: mov     eax, [r10+rax*4+2Ch]
 * 000000014001B433: bt      eax, r11d
 * 000000014001B437: jb      short loc_14001B47C
 * 000000014001B439: mov     r9, [rsp+38h+arg_20]
 * 000000014001B43E: mov     r8d, ebp
 * 000000014001B441: mov     [rsp+38h+var_10], 0
 * 000000014001B44A: mov     edx, edi
 * 000000014001B44C: mov     rcx, r14
 * 000000014001B44F: mov     word ptr [rsp+38h+var_18], si
 * 000000014001B454: call    cs:__imp_WppAutoLogTrace
 * 000000014001B45B: nop     dword ptr [rax+rax+00h]
 * 000000014001B460: mov     rbx, [rsp+38h+arg_0]
 * 000000014001B465: mov     rbp, [rsp+38h+arg_8]
 * 000000014001B46A: mov     rsi, [rsp+38h+arg_10]
 * 000000014001B46F: mov     rdi, [rsp+38h+arg_18]
 * 000000014001B474: add     rsp, 30h
 * 000000014001B478: pop     r14
 * 000000014001B47A: retn
 * 000000014001B47C: lea     rcx, [rbx+rbx*4]
 * 000000014001B480: add     rcx, rcx
 * 000000014001B483: cmp     [r10+rcx*8+29h], dil
 * 000000014001B488: jb      short loc_14001B439
 * 000000014001B48A: mov     rax, cs:pfnWppTraceMessage
 * 000000014001B491: mov     r9d, esi
 * 000000014001B494: mov     r8, [rsp+38h+arg_20]
 * 000000014001B499: mov     edx, 2Bh ; '+'
 * 000000014001B49E: mov     rcx, [r10+rcx*8+18h]
 * 000000014001B4A3: mov     [rsp+38h+var_18], 0
 * 000000014001B4AC: call    _guard_dispatch_icall
 * 000000014001B4B1: jmp     short loc_14001B439
 */
