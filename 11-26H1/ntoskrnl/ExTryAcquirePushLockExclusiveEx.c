/*
 * XREFs of ExTryAcquirePushLockExclusiveEx @ 0x140276D90
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquirePushLockExclusiveEx(
        struct _KTHREAD *a1,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v5; // rax

  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)a1, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) != 0 )
    v5 = 0LL;
  else
    v5 = KeAbPreAcquire(a1, 0LL);
  if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
  {
    if ( v5 )
      KeAbPostReleaseEx(a1, v5, a3, a4);
    return 0;
  }
  else
  {
    if ( !v5 )
      return 1;
    if ( (KiAbpGlobalState & 1) == 0 )
    {
      *(_BYTE *)(v5 + 10) = 1;
      return 1;
    }
    *(_BYTE *)(v5 + 33) |= 2u;
    return 1;
  }
}
