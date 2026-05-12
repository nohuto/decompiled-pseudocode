/*
 * XREFs of StorSetIoGatewayBusy @ 0x1400AFB5C
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x140028880 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     StorSetAllIoGatewayBusy @ 0x1400AF9A8 (StorSetAllIoGatewayBusy.c)
 *     StorSetIoGatewayNotBusy @ 0x1400AFC74 (StorSetIoGatewayNotBusy.c)
 */

void __fastcall StorSetIoGatewayBusy(_DWORD *SpinLock, unsigned int a2)
{
  KSPIN_LOCK v3; // rax
  bool v4; // zf
  unsigned int v5; // r8d
  unsigned int v6; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( SpinLock )
  {
    v3 = *((_QWORD *)SpinLock + 6);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( *(_DWORD *)(v3 + 1032) > 1u )
    {
      StorSetAllIoGatewayBusy((__int64)SpinLock, a2);
      return;
    }
    if ( !SpinLock[10] )
    {
      if ( FeatureFixKcsanRacyAccessV2 )
      {
        if ( !SpinLock[48] )
          return;
        if ( a2 <= SpinLock[48] )
          SpinLock[8] = SpinLock[48] - a2;
        else
          SpinLock[8] = 0;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)SpinLock, &LockHandle);
        SpinLock[10] = 1850304845;
        v4 = SpinLock[48] == 0;
      }
      else
      {
        v5 = SpinLock[48];
        if ( !v5 )
          return;
        v6 = 0;
        if ( a2 <= v5 )
          v6 = v5 - a2;
        SpinLock[8] = v6;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)SpinLock, &LockHandle);
        v4 = SpinLock[48] == 0;
        SpinLock[10] = 1850304845;
      }
      if ( v4 )
      {
        if ( SpinLock[10] )
        {
          ++GatewayBusyStateRaceConditionCount;
          StorSetIoGatewayNotBusy(SpinLock, 0LL);
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
}
