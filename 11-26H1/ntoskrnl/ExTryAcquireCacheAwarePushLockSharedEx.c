/*
 * XREFs of ExTryAcquireCacheAwarePushLockSharedEx @ 0x1404A4910
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404A4C04 (ExfTryAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

volatile signed __int64 *__fastcall ExTryAcquireCacheAwarePushLockSharedEx(
        struct _KTHREAD *a1,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  volatile signed __int64 *v5; // rdi
  unsigned __int64 v6; // rbx
  char v7; // al

  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)a1, 0LL, 0LL);
  v5 = (volatile signed __int64 *)*((_QWORD *)&a1->Header.Lock + (KeGetPcr()->Prcb.Number & 0x1F));
  if ( (BugCheckParameter1 & 2) != 0 )
    v6 = 0LL;
  else
    v6 = KeAbPreAcquire((__int64)a1, 0LL, 1LL, a4);
  if ( !_InterlockedCompareExchange64(v5, 17LL, 0LL) || (v7 = ExfTryAcquirePushLockSharedEx(v5, 2LL)) != 0 )
    v7 = 1;
  if ( v6 )
  {
    if ( !v7 )
    {
      KeAbPostReleaseEx(a1, v6, a3, (__int64)a4);
      return 0LL;
    }
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(BugCheckParameter1) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v6 + 33), (volatile unsigned __int8 *)BugCheckParameter1, 1);
    }
    else
    {
      *(_BYTE *)(v6 + 10) = 1;
    }
  }
  else if ( !v7 )
  {
    return 0LL;
  }
  return v5;
}
