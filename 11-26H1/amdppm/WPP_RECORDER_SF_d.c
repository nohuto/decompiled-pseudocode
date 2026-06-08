/*
 * XREFs of WPP_RECORDER_SF_d @ 0x140003760
 * Callers:
 *     PepPerfCheckComplete @ 0x140001E80 (PepPerfCheckComplete.c)
 *     PepParkMask @ 0x140002BC0 (PepParkMask.c)
 *     AcpiNotifyCallback @ 0x140002FE0 (AcpiNotifyCallback.c)
 *     ProcLibOnD0StateChangeWorker @ 0x1400032A0 (ProcLibOnD0StateChangeWorker.c)
 *     PepNotifyFeedbackRead @ 0x14000D00C (PepNotifyFeedbackRead.c)
 *     PepNotifyPerfConstraints @ 0x14000D078 (PepNotifyPerfConstraints.c)
 *     PepNotifyPerfSet @ 0x14000D11C (PepNotifyPerfSet.c)
 *     PepPerfStateControlHandler @ 0x14000D310 (PepPerfStateControlHandler.c)
 *     PepUpdatePerformanceConstraint @ 0x14000D5BC (PepUpdatePerformanceConstraint.c)
 *     PepParkPreference @ 0x14000D880 (PepParkPreference.c)
 *     EvtDevicePrepareHardware @ 0x1400252A0 (EvtDevicePrepareHardware.c)
 *     InitAcpi2CStates @ 0x140026670 (InitAcpi2CStates.c)
 *     CpcInitRegisterAddresses @ 0x140026D60 (CpcInitRegisterAddresses.c)
 *     InitAcpiCpc @ 0x140026F98 (InitAcpiCpc.c)
 *     RegisterSubspace @ 0x1400276B0 (RegisterSubspace.c)
 *     AcpiEval_CSD @ 0x1400282D4 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1400285D8 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1400294D0 (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x140029878 (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1400299D8 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x140029CE0 (AcpiEval_XPSS.c)
 *     AcpiParseCpcResourcePriorities @ 0x14002A690 (AcpiParseCpcResourcePriorities.c)
 *     DisplayCpcResourcePriorityRegisterDescriptor @ 0x14002BBF8 (DisplayCpcResourcePriorityRegisterDescriptor.c)
 *     Display_CPC @ 0x14002C024 (Display_CPC.c)
 *     Display_CSD @ 0x14002C268 (Display_CSD.c)
 *     Display_CST @ 0x14002C578 (Display_CST.c)
 *     Display_LPI @ 0x14002C824 (Display_LPI.c)
 *     Display_PSS @ 0x14002CDD4 (Display_PSS.c)
 *     Display_TSS @ 0x14002D0CC (Display_TSS.c)
 *     Display_xSD @ 0x14002D380 (Display_xSD.c)
 *     RegisterWmi @ 0x14002DB70 (RegisterWmi.c)
 *     DisplayKernelPerfStates @ 0x14002E1BC (DisplayKernelPerfStates.c)
 *     ProcLibDeviceCreate @ 0x14002E308 (ProcLibDeviceCreate.c)
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 *     ValidateCoordinatedState @ 0x140030A84 (ValidateCoordinatedState.c)
 *     ValidateMsrGenAddr @ 0x1400312EC (ValidateMsrGenAddr.c)
 *     ValidatePlatformIdleState @ 0x140031CA4 (ValidatePlatformIdleState.c)
 *     Validate_PCT_PTC @ 0x140032254 (Validate_PCT_PTC.c)
 *     GetNtProcessorNumber @ 0x1400327D0 (GetNtProcessorNumber.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x14003545C (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1400355DC (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelIdleStates @ 0x140035700 (RegisterKernelIdleStates.c)
 *     RegisterKernelPepPerf @ 0x140036490 (RegisterKernelPepPerf.c)
 *     RegisterKernelPerfStatesCallback @ 0x140036A80 (RegisterKernelPerfStatesCallback.c)
 *     RegisterKernelPlatformStates @ 0x140036AE4 (RegisterKernelPlatformStates.c)
 *     UpdateKernelCoordinatedStates @ 0x140036EB4 (UpdateKernelCoordinatedStates.c)
 *     UpdateKernelIdleDomains @ 0x140036F3C (UpdateKernelIdleDomains.c)
 *     UpdateKernelPlatformStates @ 0x1400370BC (UpdateKernelPlatformStates.c)
 *     InitAcpiIdleDomain @ 0x1400375B8 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x140037724 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x140037978 (InitAcpiThrottleDomain.c)
 *     InitPepIdleStates @ 0x140037C68 (InitPepIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x14003865C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x140038A80 (PepNotifyReportCStates.c)
 *     InitAcpi3ThrottleStates @ 0x1400392F8 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x14003943C (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1400397C8 (InitAcpiThrottleStates.c)
 *     HwDebugCreateRegisterGroup @ 0x14003992C (HwDebugCreateRegisterGroup.c)
 *     HwDebugInitializeProcessorSupport @ 0x140039D34 (HwDebugInitializeProcessorSupport.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x140039F00 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x14003A2E4 (HwDebugInitializeRegistryDebugRegister.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x14003A80C (HwDebugInitializeRegistryDebugRegisters.c)
 *     HwDebugSetKeyNotification @ 0x14003AAF4 (HwDebugSetKeyNotification.c)
 *     PepNotifyQueryWpsCapabilities @ 0x14003AE50 (PepNotifyQueryWpsCapabilities.c)
 *     PepQueryUpdateWpsTable @ 0x14003AF3C (PepQueryUpdateWpsTable.c)
 *     PepQueryWpsTable @ 0x14003B02C (PepQueryWpsTable.c)
 *     InitPepPerfStates @ 0x14003BB34 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x14003C338 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x14003C428 (PepNotifyQueryPerfCapabilities.c)
 *     PepQueryPerfDomainInfo @ 0x14003C524 (PepQueryPerfDomainInfo.c)
 *     InitPep @ 0x14003C830 (InitPep.c)
 *     PepGetParkingPageInfo @ 0x14003CA80 (PepGetParkingPageInfo.c)
 *     PepNotifyQueryCapabilities @ 0x14003CB34 (PepNotifyQueryCapabilities.c)
 *     PepNotifyQuerySocIdentifier @ 0x14003CC80 (PepNotifyQuerySocIdentifier.c)
 *     QueryPepCapabilites @ 0x14003CE50 (QueryPepCapabilites.c)
 *     RegisterPepDevice @ 0x14003D13C (RegisterPepDevice.c)
 *     RegisterHvCStates @ 0x14003D678 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x14003D930 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvIdleStates @ 0x14003DD50 (RegisterHvIdleStates.c)
 *     RegisterHvLpiStates @ 0x14003DE6C (RegisterHvLpiStates.c)
 *     InitAcpiLegacyPcc @ 0x14003E42C (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x14003E698 (InitAcpiLpiStates.c)
 *     AcpiEval_PPC @ 0x14004071C (AcpiEval_PPC.c)
 *     EvtDriverDeviceAdd @ 0x140042DE0 (EvtDriverDeviceAdd.c)
 *     DriverEntry @ 0x140044148 (DriverEntry.c)
 *     CollectAcpiBiosInfo @ 0x1400444B0 (CollectAcpiBiosInfo.c)
 *     ProcLibGlobalInit @ 0x140045428 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x140003760
 * Reason: Hex-Rays returned no pseudocode for 0x140003760
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140003760: mov     rax, rsp
 * 0000000140003763: mov     [rax+8], rbx
 * 0000000140003767: mov     [rax+10h], rbp
 * 000000014000376B: mov     [rax+18h], rsi
 * 000000014000376F: mov     [rax+20h], rdi
 * 0000000140003773: push    r14
 * 0000000140003775: sub     rsp, 40h
 * 0000000140003779: mov     ebp, r8d
 * 000000014000377C: mov     r14, rcx
 * 000000014000377F: mov     ebx, r8d
 * 0000000140003782: shr     rbx, 10h
 * 0000000140003786: movzx   esi, r9w
 * 000000014000378A: lea     r11d, [rbp-1]
 * 000000014000378E: movzx   edi, dl
 * 0000000140003791: mov     r10d, r11d
 * 0000000140003794: and     r11d, 1Fh
 * 0000000140003798: shr     r10, 5
 * 000000014000379C: lea     rax, [rbx+rbx*4]
 * 00000001400037A0: and     r10d, 7FFh
 * 00000001400037A7: lea     rax, [r10+rax*4]
 * 00000001400037AB: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001400037B2: mov     eax, [r10+rax*4+2Ch]
 * 00000001400037B7: bt      eax, r11d
 * 00000001400037BB: jnb     short loc_140003805
 * 00000001400037BD: lea     rcx, [rbx+rbx*4]
 * 00000001400037C1: add     rcx, rcx
 * 00000001400037C4: cmp     [r10+rcx*8+29h], dil
 * 00000001400037C9: jb      short loc_140003805
 * 00000001400037CB: mov     rax, cs:pfnWppTraceMessage
 * 00000001400037D2: lea     rdx, [rsp+48h+arg_28]
 * 00000001400037D7: mov     r8, [rsp+48h+arg_20]
 * 00000001400037DC: mov     r9d, esi
 * 00000001400037DF: mov     rcx, [r10+rcx*8+18h]
 * 00000001400037E4: mov     [rsp+48h+var_18], 0
 * 00000001400037ED: mov     [rsp+48h+var_20], 4
 * 00000001400037F6: mov     [rsp+48h+var_28], rdx
 * 00000001400037FB: mov     edx, 2Bh ; '+'
 * 0000000140003800: call    _guard_dispatch_icall
 * 0000000140003805: mov     r9, [rsp+48h+arg_20]
 * 000000014000380A: lea     rax, [rsp+48h+arg_28]
 * 000000014000380F: mov     [rsp+48h+var_10], 0
 * 0000000140003818: mov     r8d, ebp
 * 000000014000381B: mov     [rsp+48h+var_18], 4
 * 0000000140003824: mov     edx, edi
 * 0000000140003826: mov     [rsp+48h+var_20], rax
 * 000000014000382B: mov     rcx, r14
 * 000000014000382E: mov     word ptr [rsp+48h+var_28], si
 * 0000000140003833: call    cs:__imp_WppAutoLogTrace
 * 000000014000383A: nop     dword ptr [rax+rax+00h]
 * 000000014000383F: mov     rbx, [rsp+48h+arg_0]
 * 0000000140003844: mov     rbp, [rsp+48h+arg_8]
 * 0000000140003849: mov     rsi, [rsp+48h+arg_10]
 * 000000014000384E: mov     rdi, [rsp+48h+arg_18]
 * 0000000140003853: add     rsp, 40h
 * 0000000140003857: pop     r14
 * 0000000140003859: retn
 */
