/*
 * XREFs of ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x1406D19D0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquireCacheAwarePushLockExclusiveEx(
        struct _KTHREAD *a1,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  _KTIMER *p_Timer; // rbp
  volatile signed __int64 **v6; // rdi
  unsigned __int64 v7; // rbx
  volatile signed __int64 *v8; // rcx

  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)a1, 0LL, 0LL);
  p_Timer = &a1->Timer;
  v6 = (volatile signed __int64 **)a1;
  if ( (BugCheckParameter1 & 2) != 0 )
    v7 = 0LL;
  else
    v7 = KeAbPreAcquire((__int64)a1, 0LL, 1LL, a4);
  while ( v6 < (volatile signed __int64 **)p_Timer )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)*v6, 0LL) )
    {
      while ( v6 != (volatile signed __int64 **)a1 )
      {
        v8 = *--v6;
        if ( (_InterlockedExchangeAdd64(*v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
      }
      if ( v7 )
        KeAbPostReleaseEx(a1, v7, a3, (__int64)a4);
      return 0;
    }
    ++v6;
  }
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(BugCheckParameter1) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v7 + 33), (volatile unsigned __int8 *)BugCheckParameter1, 1);
    }
    else
    {
      *(_BYTE *)(v7 + 10) = 1;
    }
  }
  return 1;
}
