/*
 * XREFs of IoEscalateBugCheck @ 0x1405C6638
 * Callers:
 *     IoWriteCrashDump @ 0x1405C7FAC (IoWriteCrashDump.c)
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14037BEF0 (KeStallExecutionProcessor.c)
 *     IoSetBugCheckProgressFlag @ 0x140532C30 (IoSetBugCheckProgressFlag.c)
 *     IoSaveBugCheckProgress @ 0x1405C7540 (IoSaveBugCheckProgress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IoEscalateBugCheck(int a1)
{
  __int64 v1; // rdx

  if ( (a1 & DumpPolicyAttemptOffline) != 0 )
  {
    IoSaveBugCheckProgress(36LL);
    if ( (int)guard_dispatch_icall_no_overrides(0LL, v1) >= 0 )
    {
      IoSetBugCheckProgressFlag(4096);
      while ( 1 )
      {
        KeStallExecutionProcessor(0xF4240u);
        ++AttemptOfflineStallCount;
      }
    }
  }
}
