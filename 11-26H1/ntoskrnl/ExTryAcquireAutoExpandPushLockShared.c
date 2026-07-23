/*
 * XREFs of ExTryAcquireAutoExpandPushLockShared @ 0x1404A49E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x1404A4B04 (ExpTryAcquireFannedOutPushLockShared.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404A4C04 (ExfTryAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall ExTryAcquireAutoExpandPushLockShared(
        __int64 a1,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v4; // rbp
  unsigned int v5; // esi
  unsigned __int64 v6; // rbx
  int v8; // r14d
  int v9; // ecx
  unsigned int v11; // esi

  v4 = 0LL;
  v5 = BugCheckParameter1;
  v6 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, a1, 0LL, 0LL);
  v8 = BugCheckParameter1 & 2;
  if ( (BugCheckParameter1 & 2) == 0 )
    v4 = KeAbPreAcquire(a1, 0LL, 1LL, a4);
  v9 = *(_DWORD *)(a1 + 8);
  if ( (v9 & 1) != 0 )
  {
    v6 = ExpTryAcquireFannedOutPushLockShared(v9 & 0xFFFFFFF8, v5);
  }
  else
  {
    v11 = v5 | 2;
    if ( (v11 & 0xFFFFFFF8) != 0 )
      KeBugCheckEx(0x152u, v11, a1, 0LL, 0LL);
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)a1, 17LL, 0LL)
      || (unsigned __int8)ExfTryAcquirePushLockSharedEx(a1, v11) )
    {
      v6 = a1 | 1;
    }
  }
  if ( !v8 && v6 )
    v6 |= 2uLL;
  if ( v4 )
  {
    if ( v6 )
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
      KeAbPostReleaseEx((struct _KTHREAD *)a1, v4, a3, (__int64)a4);
    }
  }
  return v6;
}
