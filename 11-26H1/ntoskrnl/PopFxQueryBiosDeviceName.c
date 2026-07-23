/*
 * XREFs of PopFxQueryBiosDeviceName @ 0x1404DC320
 * Callers:
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x140B1E67C (PopFxFindDeviceAndAllocateUniqueId.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x140A9C5D0 (IoGetDevicePropertyData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall PopFxQueryBiosDeviceName(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  void *Data; // rdi
  unsigned __int16 v6; // bx
  ULONG RequiredSize; // [rsp+60h] [rbp+8h] BYREF
  ULONG Type; // [rsp+70h] [rbp+18h] BYREF

  RequiredSize = 0;
  Type = 0;
  result = IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 32),
             &DEVPKEY_Device_BiosDeviceName,
             0,
             0,
             0,
             0LL,
             &RequiredSize,
             &Type);
  if ( result == -1073741789 )
  {
    if ( RequiredSize >= 0xFFFE )
      return result;
    Data = (void *)ExAllocatePool2(0x40uLL);
    if ( !Data )
      return -1073741670;
    v6 = RequiredSize;
  }
  else
  {
    Data = 0LL;
    v6 = 0;
    if ( result < 0 )
      return result;
  }
  result = IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 32),
             &DEVPKEY_Device_BiosDeviceName,
             0,
             0,
             v6,
             Data,
             &RequiredSize,
             &Type);
  if ( result >= 0 )
  {
    *(_WORD *)(a2 + 2) = v6;
    *(_WORD *)a2 = v6 - 2;
    *(_QWORD *)(a2 + 8) = Data;
  }
  return result;
}
