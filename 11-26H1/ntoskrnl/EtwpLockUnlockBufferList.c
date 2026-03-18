/*
 * XREFs of EtwpLockUnlockBufferList @ 0x140449AC0
 * Callers:
 *     EtwpBufferingModeFlush @ 0x140A13654 (EtwpBufferingModeFlush.c)
 *     EtwpFlushActiveBuffers @ 0x140A141E8 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KeTestSpinLock @ 0x140449B50 (KeTestSpinLock.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140449B6C (ExfAcquireReleasePushLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
