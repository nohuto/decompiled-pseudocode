/*
 * XREFs of sub_14012C550 @ 0x14012C550
 * Callers:
 *     <none>
 * Callees:
 *     sub_14006C334 @ 0x14006C334 (sub_14006C334.c)
 */

void __fastcall sub_14012C550(PDEVICE_OBJECT DeviceObject, UCHAR MinorFunction, POWER_STATE PowerState, PVOID Context)
{
  *(_DWORD *)(*((_QWORD *)Context + 16) + 80LL) &= ~2u;
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)Context + 16) + 8LL) + 41LL) = 0;
  if ( *(_QWORD *)(*((_QWORD *)Context + 16) + 104LL) != *((_QWORD *)Context + 16) + 104LL )
    sub_14006C334(*((struct _DEVICE_OBJECT **)Context + 1));
}
