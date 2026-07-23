/*
 * XREFs of ExAcquirePushLockSharedEx @ 0x140277180
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAcquirePushLockSharedEx(struct _KTHREAD *BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  unsigned int v2; // edi
  __int64 v4; // rbx
  __int64 result; // rax

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) != 0 )
    v4 = 0LL;
  else
    v4 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&BugCheckParameter2->Header.Lock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(BugCheckParameter2, v2, v4, BugCheckParameter2);
  if ( v4 )
  {
    result = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *(_BYTE *)(v4 + 33) |= 2u;
    else
      *(_BYTE *)(v4 + 10) = 1;
  }
  return result;
}
