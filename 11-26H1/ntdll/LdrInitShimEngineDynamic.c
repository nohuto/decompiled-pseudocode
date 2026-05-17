/*
 * XREFs of LdrInitShimEngineDynamic @ 0x1800C5320
 * Callers:
 *     <none>
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpAcquireLoaderLock @ 0x180084090 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x1800854C0 (LdrpReleaseLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x180087180 (LdrpDrainWorkQueue.c)
 *     LdrFindEntryForAddress @ 0x1800C6110 (LdrFindEntryForAddress.c)
 *     LdrpPinModule @ 0x1800C64AC (LdrpPinModule.c)
 *     LdrpLoadShimEngine @ 0x1800C6518 (LdrpLoadShimEngine.c)
 *     LdrpDropLastInProgressCount @ 0x1800E1CDC (LdrpDropLastInProgressCount.c)
 *     LdrpGetShimEngineInterface @ 0x18011DA94 (LdrpGetShimEngineInterface.c)
 */

__int64 __fastcall LdrInitShimEngineDynamic(__int64 a1, __int64 a2)
{
  char v4; // di
  int EntryForAddress; // eax
  __int64 v6; // rcx
  unsigned __int8 ShimEngine; // bl
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
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
    g_pShimEngineModule = a1;
    LdrpGetShimEngineInterface();
  }
  EntryForAddress = LdrFindEntryForAddress(a1, &v9);
  if ( EntryForAddress < 0 )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      3816,
      (__int64)"LdrInitShimEngineDynamic",
      0,
      "Finding the shim engine entry failed with status 0x%08lx\n",
      EntryForAddress);
    ShimEngine = 0;
  }
  else
  {
    LdrpPinModule(v9);
    ShimEngine = LdrpLoadShimEngine(*(PCWSTR *)(a2 + 8));
  }
  LOBYTE(v6) = -ShimEngine;
  LdrpReleaseLoaderLock(v6, 2, ShimEngine == 0 ? 0xC0000001 : 0);
  if ( !v4 )
    LdrpDropLastInProgressCount();
  return ShimEngine;
}
