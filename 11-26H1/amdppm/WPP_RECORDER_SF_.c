/*
 * XREFs of WPP_RECORDER_SF_ @ 0x140003880
 * Callers:
 *     EvtDeviceD0Entry @ 0x140002EF0 (EvtDeviceD0Entry.c)
 *     AcpiNotifyCallback @ 0x140002FE0 (AcpiNotifyCallback.c)
 *     ProcLibOnD0StateChangeWorker @ 0x1400032A0 (ProcLibOnD0StateChangeWorker.c)
 *     GetProcessorStatusInfo @ 0x1400083F0 (GetProcessorStatusInfo.c)
 *     PepDevicePowerControlCallback @ 0x14000D670 (PepDevicePowerControlCallback.c)
 *     DecodeMWaitIdleState @ 0x140023400 (DecodeMWaitIdleState.c)
 *     InitAcpi2CStates @ 0x140026670 (InitAcpi2CStates.c)
 *     CpcConnectNativeInterrupt @ 0x1400268C4 (CpcConnectNativeInterrupt.c)
 *     InitAcpiCpc @ 0x140026F98 (InitAcpiCpc.c)
 *     AcpiCStateNotifyWorker @ 0x1400278C0 (AcpiCStateNotifyWorker.c)
 *     AcpiEval_CPC @ 0x140027B5C (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x1400282D4 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1400285D8 (AcpiEval_CST.c)
 *     AcpiEval_LPI @ 0x140028A1C (AcpiEval_LPI.c)
 *     AcpiEval_PCCP @ 0x140028CB0 (AcpiEval_PCCP.c)
 *     AcpiEval_PSS @ 0x1400294D0 (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x140029878 (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1400299D8 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x140029CE0 (AcpiEval_XPSS.c)
 *     AcpiOSCNotifyWorker @ 0x14002A2F0 (AcpiOSCNotifyWorker.c)
 *     AcpiParseCore @ 0x14002A3D0 (AcpiParseCore.c)
 *     AcpiParseRegister @ 0x14002B560 (AcpiParseRegister.c)
 *     AcpiParseRegisterOrQword @ 0x14002B620 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x14002B760 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x14002B960 (AcpiTStateNotifyWorker.c)
 *     DisplayCpcResourcePriorityRegisterDescriptor @ 0x14002BBF8 (DisplayCpcResourcePriorityRegisterDescriptor.c)
 *     Display_CPC @ 0x14002C024 (Display_CPC.c)
 *     Display_CSD @ 0x14002C268 (Display_CSD.c)
 *     Display_CST @ 0x14002C578 (Display_CST.c)
 *     Display_LPI @ 0x14002C824 (Display_LPI.c)
 *     Display_PCT_PTC @ 0x14002CC68 (Display_PCT_PTC.c)
 *     Display_PSS @ 0x14002CDD4 (Display_PSS.c)
 *     Display_TSS @ 0x14002D0CC (Display_TSS.c)
 *     Display_xSD @ 0x14002D380 (Display_xSD.c)
 *     DisplayKernelIdleStates @ 0x14002E040 (DisplayKernelIdleStates.c)
 *     DisplayKernelPerfStates @ 0x14002E1BC (DisplayKernelPerfStates.c)
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 *     ValidateLpiState @ 0x1400311CC (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x140031498 (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x140031568 (ValidatePccHeader.c)
 *     InitCpcStatesInternal @ 0x140032B70 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140034294 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1400345C8 (InitPerfStatesInternal.c)
 *     RegisterIdleComplete @ 0x140034EA8 (RegisterIdleComplete.c)
 *     RegisterKernelPepPerf @ 0x140036490 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x140036AE4 (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x1400370BC (UpdateKernelPlatformStates.c)
 *     InitAcpiIdleDomain @ 0x1400375B8 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x140037724 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x140037978 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x140037AA4 (RegisterXsdDomain.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x14003865C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     InitAcpi3ThrottleStates @ 0x1400392F8 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x14003943C (InitAcpiPerfStates.c)
 *     HwDebugCreateRegisterGroup @ 0x14003992C (HwDebugCreateRegisterGroup.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x140039F00 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x14003A2E4 (HwDebugInitializeRegistryDebugRegister.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x14003A80C (HwDebugInitializeRegistryDebugRegisters.c)
 *     PepAllocateRegisterWpsInterface @ 0x14003ACF4 (PepAllocateRegisterWpsInterface.c)
 *     InitPepPerfStates @ 0x14003BB34 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x14003C670 (PepUpdatePerformanceConstraintWorker.c)
 *     QueryPepCapabilites @ 0x14003CE50 (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x14003E42C (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x14003E698 (InitAcpiLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x14003ED00 (LpiTranslateCoordinatedIdleStates.c)
 *     AcpiPStateNotifyWorker @ 0x1400404C0 (AcpiPStateNotifyWorker.c)
 *     AcpiEval_PPC @ 0x14004071C (AcpiEval_PPC.c)
 *     DisplayPPMFlags @ 0x140044618 (DisplayPPMFlags.c)
 *     ProcLibGlobalInit @ 0x140045428 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x140003880
 * Reason: Hex-Rays returned no pseudocode for 0x140003880
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140003880: mov     rax, rsp
 * 0000000140003883: mov     [rax+8], rbx
 * 0000000140003887: mov     [rax+10h], rbp
 * 000000014000388B: mov     [rax+18h], rsi
 * 000000014000388F: mov     [rax+20h], rdi
 * 0000000140003893: push    r14
 * 0000000140003895: sub     rsp, 30h
 * 0000000140003899: mov     ebp, r8d
 * 000000014000389C: mov     r14, rcx
 * 000000014000389F: mov     ebx, r8d
 * 00000001400038A2: shr     rbx, 10h
 * 00000001400038A6: movzx   esi, r9w
 * 00000001400038AA: lea     r11d, [rbp-1]
 * 00000001400038AE: movzx   edi, dl
 * 00000001400038B1: mov     r10d, r11d
 * 00000001400038B4: and     r11d, 1Fh
 * 00000001400038B8: shr     r10, 5
 * 00000001400038BC: lea     rax, [rbx+rbx*4]
 * 00000001400038C0: and     r10d, 7FFh
 * 00000001400038C7: lea     rax, [r10+rax*4]
 * 00000001400038CB: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001400038D2: mov     eax, [r10+rax*4+2Ch]
 * 00000001400038D7: bt      eax, r11d
 * 00000001400038DB: jnb     short loc_140003912
 * 00000001400038DD: lea     rcx, [rbx+rbx*4]
 * 00000001400038E1: add     rcx, rcx
 * 00000001400038E4: cmp     [r10+rcx*8+29h], dil
 * 00000001400038E9: jb      short loc_140003912
 * 00000001400038EB: mov     rax, cs:pfnWppTraceMessage
 * 00000001400038F2: mov     r9d, esi
 * 00000001400038F5: mov     r8, [rsp+38h+arg_20]
 * 00000001400038FA: mov     edx, 2Bh ; '+'
 * 00000001400038FF: mov     rcx, [r10+rcx*8+18h]
 * 0000000140003904: mov     [rsp+38h+var_18], 0
 * 000000014000390D: call    _guard_dispatch_icall
 * 0000000140003912: mov     r9, [rsp+38h+arg_20]
 * 0000000140003917: mov     r8d, ebp
 * 000000014000391A: mov     [rsp+38h+var_10], 0
 * 0000000140003923: mov     edx, edi
 * 0000000140003925: mov     rcx, r14
 * 0000000140003928: mov     word ptr [rsp+38h+var_18], si
 * 000000014000392D: call    cs:__imp_WppAutoLogTrace
 * 0000000140003934: nop     dword ptr [rax+rax+00h]
 * 0000000140003939: mov     rbx, [rsp+38h+arg_0]
 * 000000014000393E: mov     rbp, [rsp+38h+arg_8]
 * 0000000140003943: mov     rsi, [rsp+38h+arg_10]
 * 0000000140003948: mov     rdi, [rsp+38h+arg_18]
 * 000000014000394D: add     rsp, 30h
 * 0000000140003951: pop     r14
 * 0000000140003953: retn
 */
