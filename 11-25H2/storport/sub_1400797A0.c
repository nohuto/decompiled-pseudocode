/*
 * XREFs of sub_1400797A0 @ 0x1400797A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1400797A0(PDEVICE_OBJECT DeviceObject, UCHAR MinorFunction, POWER_STATE PowerState, PVOID Context)
{
  volatile signed __int32 *DeviceExtension; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx

  DeviceExtension = (volatile signed __int32 *)DeviceObject->DeviceExtension;
  if ( PowerState.SystemState == PowerSystemWorking )
  {
    _interlockedbittestandreset(DeviceExtension + 128, 4u);
    v5 = *(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 6144LL);
    if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 16)) == *(_DWORD *)(v5 + 12) )
      KeSetEvent((PRKEVENT)(v5 + 56), 0, 0);
    _interlockedbittestandreset(DeviceExtension + 128, 5u);
    *((_BYTE *)DeviceExtension + 504) &= ~0x80u;
  }
  else if ( PowerState.SystemState == PowerSystemSleeping3 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 6144LL);
    if ( _InterlockedIncrement((volatile signed __int32 *)(v6 + 8)) == *(_DWORD *)(v6 + 4) )
      KeSetEvent((PRKEVENT)(v6 + 32), 0, 0);
    _interlockedbittestandset(DeviceExtension + 128, 4u);
    _interlockedbittestandreset(DeviceExtension + 128, 6u);
    *((_BYTE *)DeviceExtension + 505) &= ~1u;
  }
}
