/*
 * XREFs of PfLockSharedAcquire @ 0x1404B2990
 * Callers:
 *     FsRtlLookupPerStreamContextInternal @ 0x1402C1230 (FsRtlLookupPerStreamContextInternal.c)
 *     PfSnGetPrefetchInstructions @ 0x1409B5FA0 (PfSnGetPrefetchInstructions.c)
 *     PfSnIsHostingApplication @ 0x1409E9178 (PfSnIsHostingApplication.c)
 *     PfSnBeginAppLaunch @ 0x1409E9DD0 (PfSnBeginAppLaunch.c)
 *     PfQuerySuperfetchInformation @ 0x140A52EAC (PfQuerySuperfetchInformation.c)
 *     PfCheckDeprioritizeImage @ 0x140A94254 (PfCheckDeprioritizeImage.c)
 *     PfpRpCHashDeleteEntries @ 0x140AABCD8 (PfpRpCHashDeleteEntries.c)
 *     PfSnQueryPrefetcherInformation @ 0x140AF7B7C (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall PfLockSharedAcquire(
        volatile signed __int64 *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v6; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)a1, 0, v6, (struct _KTHREAD *)a1);
  if ( v6 )
  {
    result = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v6 + 33) |= 2u;
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  return result;
}
