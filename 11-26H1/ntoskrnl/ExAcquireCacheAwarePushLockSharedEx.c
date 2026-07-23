/*
 * XREFs of ExAcquireCacheAwarePushLockSharedEx @ 0x140276F80
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

volatile signed __int64 *__fastcall ExAcquireCacheAwarePushLockSharedEx(
        struct _KTHREAD *BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  unsigned int v2; // edi
  __int64 v4; // rbx
  volatile signed __int64 *v5; // rsi

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) != 0 )
    v4 = 0LL;
  else
    v4 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  v5 = (volatile signed __int64 *)*((_QWORD *)&BugCheckParameter2->Header.Lock + (KeGetPcr()->Prcb.Number & 0x1F));
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, v2, v4, BugCheckParameter2);
  if ( v4 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *(_BYTE *)(v4 + 33) |= 2u;
    else
      *(_BYTE *)(v4 + 10) = 1;
  }
  return v5;
}
