/*
 * XREFs of ExAcquirePushLockExclusiveEx @ 0x14027D390
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall ExAcquirePushLockExclusiveEx(
        volatile signed __int32 *BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v5; // rdi

  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) != 0 )
    v5 = 0LL;
  else
    v5 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL, 0LL, a4);
  if ( _interlockedbittestandset64(BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v5, BugCheckParameter2);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *(_BYTE *)(v5 + 33) |= 2u;
    else
      *(_BYTE *)(v5 + 10) = 1;
  }
}
