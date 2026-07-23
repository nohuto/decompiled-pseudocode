/*
 * XREFs of LdrpDropLastInProgressCount @ 0x1800DF57C
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x180038450 (RtlQueryInformationActivationContext.c)
 *     LdrpFindLoadedDll @ 0x18003BC00 (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18003D2C0 (LdrpFastpthReloadedDll.c)
 *     LdrUnloadDll @ 0x18003F930 (LdrUnloadDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     LdrShutdownThread @ 0x18007E040 (LdrShutdownThread.c)
 *     LdrInitShimEngineDynamic @ 0x1800C2AE0 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeThread @ 0x1800CCB30 (LdrpInitializeThread.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrEnumerateLoadedModules @ 0x1800DF4B0 (LdrEnumerateLoadedModules.c)
 *     LdrpInitializeImportRedirection @ 0x18011CDB4 (LdrpInitializeImportRedirection.c)
 *     LdrpCompleteProcessCloning @ 0x18015DCB8 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 */

NTSTATUS LdrpDropLastInProgressCount()
{
  struct _TEB *v0; // rax

  v0 = NtCurrentTeb();
  v0->SameTebFlags &= ~0x1000u;
  RtlEnterCriticalSection(&LdrpWorkQueueLock);
  LdrpWorkInProgress = 0;
  RtlLeaveCriticalSection(&LdrpWorkQueueLock);
  return ZwSetEvent(LdrpLoadCompleteEvent, 0LL);
}
