/*
 * XREFs of RaidUnitReenablePendingTimer @ 0x1400337B0
 * Callers:
 *     RaUnitAddToPendingList @ 0x140033130 (RaUnitAddToPendingList.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x140033520 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x140033610 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x14007ECF0 (RaUnitDeregisterFromIdleDetection.c)
 *     StorPortUnitDirectedPowerDown @ 0x140081D30 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerUp @ 0x140082200 (StorPortUnitDirectedPowerUp.c)
 *     RaUnitRemoveDeviceIrp @ 0x14009EC3C (RaUnitRemoveDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitReenablePendingTimer(__int64 a1, char a2)
{
  bool v4; // zf
  __int64 v5; // r14
  KSPIN_LOCK *v6; // rcx
  int v7; // esi
  ULONG v8; // ebp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_BYTE *)(a1 + 3368) == 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v5 = 500LL;
  v6 = (KSPIN_LOCK *)(a1 + 48);
  if ( v4 )
    v5 = 2000LL;
  v7 = 1;
  if ( v4 )
    v7 = 4;
  v8 = 50;
  if ( v4 )
    v8 = 300;
  LockHandle.LockQueue = 0LL;
  KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
  if ( (*(_BYTE *)(a1 + 505) & 0x20) != 0 || a2 )
  {
    KeSetCoalescableTimer((PKTIMER)(a1 + 1056), (LARGE_INTEGER)(-10000 * v5), v5, v8, (PKDPC)(a1 + 1120));
    *(_DWORD *)(*(_QWORD *)(a1 + 560) + 4LL) = v7;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 504), 0xDu);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
