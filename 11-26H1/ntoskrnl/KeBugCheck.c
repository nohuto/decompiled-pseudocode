/*
 * XREFs of KeBugCheck @ 0x140533990
 * Callers:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x140246EA0 (KiDetachProcess.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402638C0 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiUnlockStealVm @ 0x140294D10 (MiUnlockStealVm.c)
 *     KeForceDetachProcess @ 0x1402C6C30 (KeForceDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402C7110 (KeUnstackDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x140396440 (KeWaitForMultipleObjects.c)
 *     EtwpFreeApcPool @ 0x1404D9704 (EtwpFreeApcPool.c)
 *     PspSystemThreadStartup @ 0x1404FD910 (PspSystemThreadStartup.c)
 *     sub_140542730 @ 0x140542730 (sub_140542730.c)
 *     HvlpConfigureGhcbGuestOsId @ 0x1405BFB54 (HvlpConfigureGhcbGuestOsId.c)
 *     HvlpMapApicBackingPage @ 0x1405BFC2C (HvlpMapApicBackingPage.c)
 *     KiLockServiceTable @ 0x1407134A4 (KiLockServiceTable.c)
 *     KxStartSystemThread @ 0x140728F40 (KxStartSystemThread.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     EtwCleanupSiloState @ 0x14082455C (EtwCleanupSiloState.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140853E00 (CmpAddProcessorConfigurationEntry.c)
 *     PspThreadDelete @ 0x140AA21E0 (PspThreadDelete.c)
 *     KeWriteProtectProcessorState @ 0x140BF4178 (KeWriteProtectProcessorState.c)
 *     KiInitializeKernel @ 0x140BF6190 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x140BF6FC0 (KiSetCacheInformation.c)
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 *     BvgaSaveResources @ 0x140CBA288 (BvgaSaveResources.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 *     PspInitPhase1 @ 0x140CD812C (PspInitPhase1.c)
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 *     KiFatalExceptionFilter @ 0x140D01CE0 (KiFatalExceptionFilter.c)
 *     VslRegisterBootDrivers @ 0x140D054B4 (VslRegisterBootDrivers.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
