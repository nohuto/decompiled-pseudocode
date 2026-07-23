/*
 * XREFs of ExpTimeRefreshWork @ 0x140C05510
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A73A3C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A73AB4 (ExReleaseTimeRefreshLockExclusive.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140C0E944 (ExUpdateSystemTimeFromCmos.c)
 */

__int64 __fastcall ExpTimeRefreshWork(struct _LIST_ENTRY *Blink, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  do
  {
    ExAcquireTimeRefreshLockExclusive((__int64)Blink, a2, a3, a4);
    if ( KeTimeSynchronization )
      ExUpdateSystemTimeFromCmos(0LL, 0LL);
    ExReleaseTimeRefreshLockExclusive();
    Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
    if ( *(_QWORD *)&ExpPlatformBinaryLock.ThreadTimerDelay )
      guard_dispatch_icall_no_overrides((__int64)Blink, a2);
  }
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)&ExpSysDbgLock.600, 0xFFFFFFFF) != 1 );
  v5[0] = 0LL;
  v5[1] = -1LL;
  return KeSetTimer2((__int64)&ExpSysDbgLock.WaitBlock[3], ExpSysDbgLock.Timer.DueTime.QuadPart, 0LL, (__int64)v5);
}
