/*
 * XREFs of RaidAdapterReleaseInterruptLock @ 0x14000EDE0
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x14000C0F0 (RaidBusEnumeratorGetUnit.c)
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     RaidAdapterReleaseStartIoLock @ 0x14000ECF0 (RaidAdapterReleaseStartIoLock.c)
 *     StorPortSynchronizeAccess @ 0x14000ED30 (StorPortSynchronizeAccess.c)
 *     RaidAdapterStopAdapter @ 0x14000EE90 (RaidAdapterStopAdapter.c)
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

void __fastcall RaidAdapterReleaseInterruptLock(__int64 a1, KIRQL a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  PKINTERRUPT *v5; // r14
  struct _KINTERRUPT *v6; // rcx

  if ( *(_BYTE *)(a1 + 4433) )
  {
    v3 = *(_QWORD *)(a1 + 4416);
    if ( *(_DWORD *)(a1 + 4400) == 2 )
    {
      v4 = *(_DWORD *)(v3 + 4) - 1;
      if ( *(_DWORD *)(v3 + 4) != 1 )
      {
        v5 = (PKINTERRUPT *)(v3 + 48LL * v4 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v5, *(_BYTE *)v3);
          v5 -= 6;
          --v4;
        }
        while ( v4 );
      }
    }
    KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(v3 + 24), a2);
  }
  else
  {
    v6 = *(struct _KINTERRUPT **)(a1 + 864);
    if ( v6 )
      KeReleaseInterruptSpinLock(v6, a2);
  }
}
