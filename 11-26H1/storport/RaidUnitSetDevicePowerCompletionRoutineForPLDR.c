/*
 * XREFs of RaidUnitSetDevicePowerCompletionRoutineForPLDR @ 0x1400811C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitSetDevicePowerCompletionRoutineForPLDR(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context)
{
  volatile signed __int32 *DeviceExtension; // rbx
  int v5; // edx
  int v6; // edx

  DeviceExtension = (volatile signed __int32 *)DeviceObject->DeviceExtension;
  if ( PowerState.SystemState == PowerSystemWorking )
  {
    _interlockedbittestandreset(DeviceExtension + 128, 4u);
    v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 6208LL) + 12LL);
    if ( _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 6208LL) + 16LL)) == v5 )
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 6208LL) + 56LL), 0, 0);
    _interlockedbittestandreset(DeviceExtension + 128, 5u);
    *((_BYTE *)DeviceExtension + 504) &= ~0x80u;
  }
  else if ( PowerState.SystemState == PowerSystemSleeping3 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 6208LL) + 4LL);
    if ( _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 6208LL) + 8LL)) == v6 )
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 6208LL) + 32LL), 0, 0);
    _interlockedbittestandset(DeviceExtension + 128, 4u);
    _interlockedbittestandreset(DeviceExtension + 128, 6u);
    *((_BYTE *)DeviceExtension + 505) &= ~1u;
  }
}
