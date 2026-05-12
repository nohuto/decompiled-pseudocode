/*
 * XREFs of RaidAdapterAcquireInterruptLock @ 0x14000CD40
 * Callers:
 *     StorAcquireSpinLockEx @ 0x140001700 (StorAcquireSpinLockEx.c)
 *     RaidBusEnumeratorGetLunList @ 0x14000A2D0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterEnumerateBus @ 0x14000B1B0 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetUnit @ 0x14000C0F0 (RaidBusEnumeratorGetUnit.c)
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     RaidAdapterAcquireStartIoLock @ 0x14000ECB0 (RaidAdapterAcquireStartIoLock.c)
 *     StorPortSynchronizeAccess @ 0x14000ED30 (StorPortSynchronizeAccess.c)
 *     RaidAdapterStopAdapter @ 0x14000EE90 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1400113C8 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x140037780 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterRemoveNormalChildren @ 0x140037AC0 (RaidAdapterRemoveNormalChildren.c)
 *     StorportTimerDpc @ 0x140038670 (StorportTimerDpc.c)
 *     StorPortSetDeviceQueueDepth @ 0x140038750 (StorPortSetDeviceQueueDepth.c)
 *     RaidAdapterStartMiniport @ 0x140053D94 (RaidAdapterStartMiniport.c)
 *     RaidAdapterReInitialize @ 0x14005A478 (RaidAdapterReInitialize.c)
 *     RaidAdapterGetFirstUnit @ 0x140061318 (RaidAdapterGetFirstUnit.c)
 * Callees:
 *     <none>
 */

KIRQL __fastcall RaidAdapterAcquireInterruptLock(__int64 a1)
{
  __int64 v2; // rdi
  KIRQL result; // al
  KIRQL v4; // si
  unsigned int v5; // ebx
  struct _KINTERRUPT *v6; // rcx

  if ( *(_BYTE *)(a1 + 4433) )
  {
    v2 = *(_QWORD *)(a1 + 4416);
    result = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v2 + 24));
    v4 = result;
    if ( *(_DWORD *)(a1 + 4400) == 2 )
    {
      v5 = 1;
      if ( *(_DWORD *)(v2 + 4) > 1u )
      {
        do
          KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v2 + 48LL * v5++ + 24));
        while ( v5 < *(_DWORD *)(v2 + 4) );
        return v4;
      }
    }
  }
  else
  {
    v6 = *(struct _KINTERRUPT **)(a1 + 864);
    if ( v6 )
      return KeAcquireInterruptSpinLock(v6);
    else
      return 0;
  }
  return result;
}
