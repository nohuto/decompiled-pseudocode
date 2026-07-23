/*
 * XREFs of KeBugCheck @ 0x140535E10
 * Callers:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x140248800 (KiDetachProcess.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140262E30 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiUnlockStealVm @ 0x140294270 (MiUnlockStealVm.c)
 *     KeForceDetachProcess @ 0x1403118D0 (KeForceDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x140311DB0 (KeUnstackDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     EtwpFreeApcPool @ 0x1404D2DE4 (EtwpFreeApcPool.c)
 *     PspSystemThreadStartup @ 0x1404F6E50 (PspSystemThreadStartup.c)
 *     sub_140544BB0 @ 0x140544BB0 (sub_140544BB0.c)
 *     HvlpConfigureGhcbGuestOsId @ 0x1405C23C4 (HvlpConfigureGhcbGuestOsId.c)
 *     HvlpMapApicBackingPage @ 0x1405C249C (HvlpMapApicBackingPage.c)
 *     KiLockServiceTable @ 0x140718194 (KiLockServiceTable.c)
 *     KxStartSystemThread @ 0x14072DB10 (KxStartSystemThread.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     EtwCleanupSiloState @ 0x14082A79C (EtwCleanupSiloState.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14085A110 (CmpAddProcessorConfigurationEntry.c)
 *     PspThreadDelete @ 0x140AA3CB0 (PspThreadDelete.c)
 *     KeWriteProtectProcessorState @ 0x140BFA178 (KeWriteProtectProcessorState.c)
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x140BFCFC0 (KiSetCacheInformation.c)
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 *     BvgaSaveResources @ 0x140CC02C8 (BvgaSaveResources.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 *     PspInitPhase1 @ 0x140CDE4AC (PspInitPhase1.c)
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 *     KiFatalExceptionFilter @ 0x140D08080 (KiFatalExceptionFilter.c)
 *     VslRegisterBootDrivers @ 0x140D0B784 (VslRegisterBootDrivers.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
