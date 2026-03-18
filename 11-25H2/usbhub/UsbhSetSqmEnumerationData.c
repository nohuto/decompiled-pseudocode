/*
 * XREFs of UsbhSetSqmEnumerationData @ 0x14002E990
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x14002E8D0 (UsbhPdoPnp_DeviceEnumerated.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     UsbhSetPdoRegistryParameter @ 0x140038120 (UsbhSetPdoRegistryParameter.c)
 */

__int64 __fastcall UsbhSetSqmEnumerationData(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  __int64 result; // rax

  v2 = PdoExt((__int64)DeviceObject);
  if ( v2[706] )
    UsbhSetPdoRegistryParameter(DeviceObject, L"MsOs20Flags", 4u, v2 + 706, 4u);
  result = UsbhGetPortData(*((_QWORD *)v2 + 148), *((_WORD *)v2 + 714));
  if ( result )
    return UsbhSetPdoRegistryParameter(DeviceObject, L"EnumerationRetryCount", 4u, (PVOID)(result + 544), 4u);
  return result;
}
