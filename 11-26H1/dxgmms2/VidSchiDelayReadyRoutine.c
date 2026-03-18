/*
 * XREFs of VidSchiDelayReadyRoutine @ 0x140041100
 * Callers:
 *     VidSchiCancelDelayTimerContext @ 0x140041090 (VidSchiCancelDelayTimerContext.c)
 * Callees:
 *     VidSchiUnwaitContext @ 0x14001FB00 (VidSchiUnwaitContext.c)
 */

void __fastcall VidSchiDelayReadyRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(DeferredContext[12] + 24LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 2016), &LockHandle);
  if ( (DeferredContext[24] & 0x40) != 0 )
  {
    *((_DWORD *)DeferredContext + 48) &= ~0x40u;
    if ( VidSchiUnwaitContext((__int64)DeferredContext, 0x747Eu) )
    {
      *(_QWORD *)(v5 + 1496) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v5 + 1464), 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
