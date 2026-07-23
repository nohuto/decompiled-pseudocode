/*
 * XREFs of EtwpLockUnlockBufferList @ 0x140441BF0
 * Callers:
 *     EtwpBufferingModeFlush @ 0x140A12844 (EtwpBufferingModeFlush.c)
 *     EtwpFlushActiveBuffers @ 0x140A133D8 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeTestSpinLock @ 0x140441C80 (KeTestSpinLock.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140441C9C (ExfAcquireReleasePushLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall EtwpLockUnlockBufferList(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  __int64 v2; // rcx
  KIRQL CurrentIrql; // di
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 696);
  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    _InterlockedOr(v4, 0);
    if ( (*v1 & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((struct _KTHREAD *)(a1 + 696));
  }
  else if ( !KeTestSpinLock((PKSPIN_LOCK)(a1 + 696)) )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v2) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v2, 15LL);
    }
    KxAcquireSpinLock(v1);
    KeReleaseSpinLock(v1, CurrentIrql);
  }
}
