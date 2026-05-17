/*
 * XREFs of LdrpDropLastInProgressCount @ 0x1800E1CDC
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x18004DED0 (RtlQueryInformationActivationContext.c)
 *     LdrpFindLoadedDll @ 0x180051680 (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180052D40 (LdrpFastpthReloadedDll.c)
 *     LdrUnloadDll @ 0x1800553B0 (LdrUnloadDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     LdrShutdownThread @ 0x180086CA0 (LdrShutdownThread.c)
 *     LdrInitShimEngineDynamic @ 0x1800C5320 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeThread @ 0x1800CF3C0 (LdrpInitializeThread.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrEnumerateLoadedModules @ 0x1800E1C10 (LdrEnumerateLoadedModules.c)
 *     LdrpInitializeImportRedirection @ 0x18011D004 (LdrpInitializeImportRedirection.c)
 *     LdrpCompleteProcessCloning @ 0x18015DDF8 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 */

__int64 LdrpDropLastInProgressCount()
{
  struct _TEB *v0; // rax

  v0 = NtCurrentTeb();
  v0->SameTebFlags &= ~0x1000u;
  RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
  LdrpWorkInProgress = 0;
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
  return ZwSetEvent(LdrpLoadCompleteEvent, 0LL);
}
