/*
 * XREFs of ACPIBusIrpSetDevicePower @ 0x14001BAD4
 * Callers:
 *     ACPIBusIrpSetPower @ 0x14001BAA0 (ACPIBusIrpSetPower.c)
 *     ACPICMLidSetPower @ 0x140049A60 (ACPICMLidSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x14002507C (ACPIDeviceIrpDeviceRequest.c)
 */

__int64 __fastcall ACPIBusIrpSetDevicePower(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // r8
  __int64 result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  *(_DWORD *)(a2 + 48) = 0;
  *(_BYTE *)(v5 + 3) |= 1u;
  _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 728));
  result = ACPIDeviceIrpDeviceRequest(a1, a2, &ACPIDeviceIrpCompleteRequest);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
