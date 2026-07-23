/*
 * XREFs of KdCallPowerHandlers @ 0x1405E6280
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x1402F93B8 (PpmExitCoordinatedIdle.c)
 *     PpmEnterCoordinatedIdle @ 0x1402F9960 (PpmEnterCoordinatedIdle.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x140610EB0 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KdCallPowerHandlers(unsigned int a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 *v4; // rbx
  int v5; // esi

  if ( !KdpPowerListHead )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v4 = (__int64 *)KdpPowerListHead;
  v5 = 0;
  while ( v4 != &KdpPowerListHead )
  {
    v5 = guard_dispatch_icall_no_overrides(a1, v4[3]);
    if ( v5 < 0 )
      break;
    v4 = (__int64 *)*v4;
  }
  KeReleaseSpinLock(&KdpPowerSpinLock, CurrentIrql);
  return (unsigned int)v5;
}
