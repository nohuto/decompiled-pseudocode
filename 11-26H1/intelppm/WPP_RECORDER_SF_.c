/*
 * XREFs of WPP_RECORDER_SF_ @ 0x140003440
 * Callers:
 *     SetGV3PerfStateAndTurbo @ 0x140002540 (SetGV3PerfStateAndTurbo.c)
 *     SetGV3PerfState @ 0x140002A60 (SetGV3PerfState.c)
 *     AcpiNotifyCallback @ 0x140002D90 (AcpiNotifyCallback.c)
 *     ProcLibOnD0StateChangeWorker @ 0x1400043F0 (ProcLibOnD0StateChangeWorker.c)
 *     EvtDeviceD0Entry @ 0x140004810 (EvtDeviceD0Entry.c)
 *     SetTurboDisablePolicy @ 0x140004910 (SetTurboDisablePolicy.c)
 *     GetProcessorStatusInfo @ 0x14000AEC0 (GetProcessorStatusInfo.c)
 *     PepDevicePowerControlCallback @ 0x14000F4C0 (PepDevicePowerControlCallback.c)
 *     InitAcpiLegacyPcc @ 0x140027008 (InitAcpiLegacyPcc.c)
 *     ValidatePccEntry @ 0x140027358 (ValidatePccEntry.c)
 *     AcpiEval_PCCP @ 0x140027428 (AcpiEval_PCCP.c)
 *     InitAcpiPerfStates @ 0x140027624 (InitAcpiPerfStates.c)
 *     AcpiEval_LPI @ 0x140027E10 (AcpiEval_LPI.c)
 *     Display_CSD @ 0x140028CB4 (Display_CSD.c)
 *     Display_CST @ 0x140029C88 (Display_CST.c)
 *     DisplayKernelPerfStates @ 0x140029FA4 (DisplayKernelPerfStates.c)
 *     ConnectHwpInterrupt @ 0x14002A7C0 (ConnectHwpInterrupt.c)
 *     DecodeMWaitIdleState @ 0x14002B4D0 (DecodeMWaitIdleState.c)
 *     CpcConnectNativeInterrupt @ 0x14002DA68 (CpcConnectNativeInterrupt.c)
 *     InitAcpiCpc @ 0x14002DDA0 (InitAcpiCpc.c)
 *     AcpiEval_CPC @ 0x14002E460 (AcpiEval_CPC.c)
 *     AcpiEval_PSS @ 0x14002F000 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x14002F3A8 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x14002F6B0 (AcpiEval_XPSS.c)
 *     AcpiOSCNotifyWorker @ 0x14002FCC0 (AcpiOSCNotifyWorker.c)
 *     AcpiParseRegisterOrQword @ 0x140030C70 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x140030D90 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x140030F90 (AcpiTStateNotifyWorker.c)
 *     DisplayCpcResourcePriorityRegisterDescriptor @ 0x140031228 (DisplayCpcResourcePriorityRegisterDescriptor.c)
 *     Display_CPC @ 0x140031398 (Display_CPC.c)
 *     Display_LPI @ 0x1400315DC (Display_LPI.c)
 *     Display_PCT_PTC @ 0x140031A20 (Display_PCT_PTC.c)
 *     Display_PSS @ 0x140031B8C (Display_PSS.c)
 *     Display_xSD @ 0x140031E84 (Display_xSD.c)
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 *     InitAcpiPerfDomain @ 0x1400339E8 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x140033B14 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x140033C40 (RegisterXsdDomain.c)
 *     ValidateLpiState @ 0x14003530C (ValidateLpiState.c)
 *     ValidatePccHeader @ 0x1400355D8 (ValidatePccHeader.c)
 *     InitCpcStatesInternal @ 0x140036530 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140037C40 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x140037F74 (InitPerfStatesInternal.c)
 *     RegisterIdleComplete @ 0x140038858 (RegisterIdleComplete.c)
 *     RegisterKernelPepPerf @ 0x140039290 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1400398E4 (RegisterKernelPlatformStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x14003A730 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     InitAcpi3ThrottleStates @ 0x14003B0A8 (InitAcpi3ThrottleStates.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x14003B4AC (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x14003B890 (HwDebugInitializeRegistryDebugRegister.c)
 *     PepAllocateRegisterWpsInterface @ 0x14003BFB8 (PepAllocateRegisterWpsInterface.c)
 *     InitPepPerfStates @ 0x14003C778 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x14003D280 (PepUpdatePerformanceConstraintWorker.c)
 *     QueryPepCapabilites @ 0x14003DA60 (QueryPepCapabilites.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x14003F484 (LpiTranslateCoordinatedIdleStates.c)
 *     AcpiCStateNotifyWorker @ 0x14003F9F0 (AcpiCStateNotifyWorker.c)
 *     InitAcpi2CStates @ 0x14003FC68 (InitAcpi2CStates.c)
 *     UpdateKernelPlatformStates @ 0x14003FDCC (UpdateKernelPlatformStates.c)
 *     InitAcpiIdleDomain @ 0x140040448 (InitAcpiIdleDomain.c)
 *     AcpiEval_CSD @ 0x1400405BC (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1400409C0 (AcpiEval_CST.c)
 *     AcpiParseCore @ 0x140040F74 (AcpiParseCore.c)
 *     DisplayKernelIdleStates @ 0x140041C40 (DisplayKernelIdleStates.c)
 *     AcpiEval_TPC @ 0x140043094 (AcpiEval_TPC.c)
 *     AcpiPStateNotifyWorker @ 0x140043200 (AcpiPStateNotifyWorker.c)
 *     AcpiEval_PPC @ 0x14004336C (AcpiEval_PPC.c)
 *     AcpiParseRegister @ 0x140043DE0 (AcpiParseRegister.c)
 *     Display_TSS @ 0x140046B04 (Display_TSS.c)
 *     HwDebugCreateRegisterGroup @ 0x140046E44 (HwDebugCreateRegisterGroup.c)
 *     InitAcpiLpiStates @ 0x140047F20 (InitAcpiLpiStates.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1400484A0 (HwDebugInitializeRegistryDebugRegisters.c)
 *     DisplayPPMFlags @ 0x14004AAB0 (DisplayPPMFlags.c)
 *     ProcLibGlobalInit @ 0x14004B8C0 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x140003440
 * Reason: Hex-Rays returned no pseudocode for 0x140003440
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140003440: mov     rax, rsp
 * 0000000140003443: mov     [rax+8], rbx
 * 0000000140003447: mov     [rax+10h], rbp
 * 000000014000344B: mov     [rax+18h], rsi
 * 000000014000344F: mov     [rax+20h], rdi
 * 0000000140003453: push    r14
 * 0000000140003455: sub     rsp, 30h
 * 0000000140003459: mov     ebp, r8d
 * 000000014000345C: mov     r14, rcx
 * 000000014000345F: mov     ebx, r8d
 * 0000000140003462: shr     rbx, 10h
 * 0000000140003466: movzx   esi, r9w
 * 000000014000346A: lea     r11d, [rbp-1]
 * 000000014000346E: movzx   edi, dl
 * 0000000140003471: mov     r10d, r11d
 * 0000000140003474: and     r11d, 1Fh
 * 0000000140003478: shr     r10, 5
 * 000000014000347C: lea     rax, [rbx+rbx*4]
 * 0000000140003480: and     r10d, 7FFh
 * 0000000140003487: lea     rax, [r10+rax*4]
 * 000000014000348B: mov     r10, cs:WPP_GLOBAL_Control
 * 0000000140003492: mov     eax, [r10+rax*4+2Ch]
 * 0000000140003497: bt      eax, r11d
 * 000000014000349B: jb      short loc_1400034E0
 * 000000014000349D: mov     r9, [rsp+38h+arg_20]
 * 00000001400034A2: mov     r8d, ebp
 * 00000001400034A5: mov     [rsp+38h+var_10], 0
 * 00000001400034AE: mov     edx, edi
 * 00000001400034B0: mov     rcx, r14
 * 00000001400034B3: mov     word ptr [rsp+38h+var_18], si
 * 00000001400034B8: call    cs:__imp_WppAutoLogTrace
 * 00000001400034BF: nop     dword ptr [rax+rax+00h]
 * 00000001400034C4: mov     rbx, [rsp+38h+arg_0]
 * 00000001400034C9: mov     rbp, [rsp+38h+arg_8]
 * 00000001400034CE: mov     rsi, [rsp+38h+arg_10]
 * 00000001400034D3: mov     rdi, [rsp+38h+arg_18]
 * 00000001400034D8: add     rsp, 30h
 * 00000001400034DC: pop     r14
 * 00000001400034DE: retn
 * 00000001400034E0: lea     rcx, [rbx+rbx*4]
 * 00000001400034E4: add     rcx, rcx
 * 00000001400034E7: cmp     [r10+rcx*8+29h], dil
 * 00000001400034EC: jb      short loc_14000349D
 * 00000001400034EE: mov     rax, cs:pfnWppTraceMessage
 * 00000001400034F5: mov     r9d, esi
 * 00000001400034F8: mov     r8, [rsp+38h+arg_20]
 * 00000001400034FD: mov     edx, 2Bh ; '+'
 * 0000000140003502: mov     rcx, [r10+rcx*8+18h]
 * 0000000140003507: mov     [rsp+38h+var_18], 0
 * 0000000140003510: call    _guard_dispatch_icall
 * 0000000140003515: jmp     short loc_14000349D
 */
