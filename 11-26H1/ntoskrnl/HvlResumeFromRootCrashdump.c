/*
 * XREFs of HvlResumeFromRootCrashdump @ 0x1405C07C0
 * Callers:
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405FC494 (KiBugCheckRecoveryCleanupFromCrashDump.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14047EB38 (HvlQueryVsmConnection.c)
 *     HvlNotifyRootCrashdump @ 0x1405C0338 (HvlNotifyRootCrashdump.c)
 *     VslResumeFromCrashdump @ 0x1405C678C (VslResumeFromCrashdump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HvlResumeFromRootCrashdump(char a1)
{
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( VslVsmEnabled )
    LODWORD(VslpReservedTransferLock.Queue) >>= 1;
  result = HvlQueryVsmConnection(0LL);
  if ( !result || a1 )
  {
    if ( (HvlpFlags & 2) != 0 )
      HvlNotifyRootCrashdump(3);
    if ( HvlQueryVsmConnection(0LL) )
    {
      if ( a1 )
        VslResumeFromCrashdump();
    }
    HvlEnlightenments = HvlpEnlightenments;
    return guard_dispatch_icall_no_overrides(v4, v3);
  }
  return result;
}
