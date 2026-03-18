/*
 * XREFs of HvlResumeFromRootCrashdump @ 0x1405BDF50
 * Callers:
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405F9A74 (KiBugCheckRecoveryCleanupFromCrashDump.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x1404851C8 (HvlQueryVsmConnection.c)
 *     HvlNotifyRootCrashdump @ 0x1405BDAC8 (HvlNotifyRootCrashdump.c)
 *     VslResumeFromCrashdump @ 0x1405C3F1C (VslResumeFromCrashdump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HvlResumeFromRootCrashdump(char a1)
{
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( VslVsmEnabled )
    *(_DWORD *)&VslpReservedTransferLock.ApcStateFill[32] >>= 1;
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
