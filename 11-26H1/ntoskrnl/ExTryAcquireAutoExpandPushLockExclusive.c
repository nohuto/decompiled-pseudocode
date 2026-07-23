/*
 * XREFs of ExTryAcquireAutoExpandPushLockExclusive @ 0x1404D7FF0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x1404D13D4 (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquireAutoExpandPushLockExclusive(
        struct _KTHREAD *a1,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v4; // rdi
  int Flink; // ecx
  char v7; // si

  v4 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)a1, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
    v4 = KeAbPreAcquire((__int64)a1, 0LL, 1LL, a4);
  if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
  {
    BugCheckParameter1 = 983040LL;
    v7 = 0;
    if ( (HIDWORD(a1->Header.WaitListHead.Flink) & 0xF0000u) < 0xF0000 )
      HIDWORD(a1->Header.WaitListHead.Flink) += 0x10000;
  }
  else
  {
    Flink = (int)a1->Header.WaitListHead.Flink;
    v7 = 1;
    if ( (Flink & 1) != 0 )
    {
      v7 = ExpTryAcquireFannedOutPushLockExclusive(Flink & 0xFFFFFFF8);
      if ( !v7
        && (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
      }
    }
  }
  if ( v4 )
  {
    if ( v7 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(BugCheckParameter1) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v4 + 33), (volatile unsigned __int8 *)BugCheckParameter1, 1);
      }
      else
      {
        *(_BYTE *)(v4 + 10) = 1;
      }
    }
    else
    {
      KeAbPostReleaseEx(a1, v4, a3, (__int64)a4);
    }
  }
  return v7;
}
