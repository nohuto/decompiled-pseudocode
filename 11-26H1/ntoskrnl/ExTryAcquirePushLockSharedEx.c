/*
 * XREFs of ExTryAcquirePushLockSharedEx @ 0x140275F70
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404A4C04 (ExfTryAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquirePushLockSharedEx(struct _KTHREAD *a1, ULONG_PTR BugCheckParameter1)
{
  unsigned int v2; // edi
  unsigned __int64 v4; // rbx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)a1, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) != 0 )
    v4 = 0LL;
  else
    v4 = KeAbPreAcquire(a1, 0LL);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 17LL, 0LL)
    || (unsigned __int8)ExfTryAcquirePushLockSharedEx(a1, v2) )
  {
    if ( v4 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        *(_BYTE *)(v4 + 33) |= 2u;
        return 1;
      }
      *(_BYTE *)(v4 + 10) = 1;
    }
    return 1;
  }
  if ( v4 )
    KeAbPostReleaseEx(a1, v4, v6, v7);
  return 0;
}
