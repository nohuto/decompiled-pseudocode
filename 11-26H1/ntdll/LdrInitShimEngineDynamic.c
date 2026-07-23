/*
 * XREFs of LdrInitShimEngineDynamic @ 0x1800C2AE0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpAcquireLoaderLock @ 0x18007B430 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18007C860 (LdrpReleaseLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x18007E4F0 (LdrpDrainWorkQueue.c)
 *     LdrFindEntryForAddress @ 0x1800C38D0 (LdrFindEntryForAddress.c)
 *     LdrpPinModule @ 0x1800C3C6C (LdrpPinModule.c)
 *     LdrpLoadShimEngine @ 0x1800C3CD8 (LdrpLoadShimEngine.c)
 *     LdrpDropLastInProgressCount @ 0x1800DF57C (LdrpDropLastInProgressCount.c)
 *     LdrpGetShimEngineInterface @ 0x18011D844 (LdrpGetShimEngineInterface.c)
 */

__int64 __fastcall LdrInitShimEngineDynamic(PVOID DllHandle, __int64 a2)
{
  char v4; // di
  NTSTATUS EntryForAddress; // eax
  __int64 v6; // rcx
  unsigned __int8 ShimEngine; // bl
  PLDR_DATA_TABLE_ENTRY Entry; // [rsp+50h] [rbp+18h] BYREF

  Entry = 0LL;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    LdrpDrainWorkQueue(0);
  }
  LdrpAcquireLoaderLock();
  if ( !g_pShimEngineModule )
  {
    g_pShimEngineModule = DllHandle;
    LdrpGetShimEngineInterface();
  }
  EntryForAddress = LdrFindEntryForAddress(DllHandle, &Entry);
  if ( EntryForAddress < 0 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      3816,
      (__int64)"LdrInitShimEngineDynamic",
      0,
      "Finding the shim engine entry failed with status 0x%08lx\n",
      EntryForAddress);
    ShimEngine = 0;
  }
  else
  {
    LdrpPinModule(Entry);
    ShimEngine = LdrpLoadShimEngine(*(PCWSTR *)(a2 + 8));
  }
  LOBYTE(v6) = -ShimEngine;
  LdrpReleaseLoaderLock(v6, 2, ShimEngine == 0 ? 0xC0000001 : 0);
  if ( !v4 )
    LdrpDropLastInProgressCount();
  return ShimEngine;
}
