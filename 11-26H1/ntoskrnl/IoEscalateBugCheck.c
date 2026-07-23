/*
 * XREFs of IoEscalateBugCheck @ 0x1405C8F08
 * Callers:
 *     IoWriteCrashDump @ 0x1405CA87C (IoWriteCrashDump.c)
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     IoSetBugCheckProgressFlag @ 0x1405350D0 (IoSetBugCheckProgressFlag.c)
 *     IoSaveBugCheckProgress @ 0x1405C9E10 (IoSaveBugCheckProgress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
