/*
 * XREFs of ACPIDockIrpSetPower @ 0x140056FE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x14002507C (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDockIrpSetSystemPower @ 0x140057050 (ACPIDockIrpSetSystemPower.c)
 */

__int64 __fastcall ACPIDockIrpSetPower(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 DeviceExtension; // rax
  __int64 v6; // rcx

  v2 = *(_QWORD *)(a2 + 184);
  *(_BYTE *)(v2 + 3) |= 1u;
  if ( *(_DWORD *)(v2 + 16) )
  {
    DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)a1);
    v6 = *(_QWORD *)(a2 + 184);
    *(_DWORD *)(a2 + 48) = 0;
    *(_BYTE *)(v6 + 3) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 728));
    ACPIDeviceIrpDeviceRequest((ULONG_PTR)a1, (_QWORD *)a2, ACPIDeviceIrpCompleteRequest);
  }
  else
  {
    ACPIDockIrpSetSystemPower(a1, (PVOID)a2);
  }
  return 259LL;
}
