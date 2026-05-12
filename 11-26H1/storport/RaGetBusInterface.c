/*
 * XREFs of RaGetBusInterface @ 0x140053034
 * Callers:
 *     RaDriverAddDevice @ 0x140072400 (RaDriverAddDevice.c)
 *     RaidInitializeAdapter @ 0x140186B24 (RaidInitializeAdapter.c)
 *     InitializeNvmeAdapter @ 0x140196AC0 (InitializeNvmeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memcmp @ 0x140138EA0 (memcmp.c)
 */

__int64 __fastcall RaGetBusInterface(struct _DEVICE_OBJECT *a1)
{
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  __int128 PropertyBuffer; // [rsp+38h] [rbp-20h] BYREF

  ResultLength = 0;
  PropertyBuffer = 0LL;
  if ( IoGetDeviceProperty(a1, DevicePropertyBusTypeGuid, 0x10u, &PropertyBuffer, &ResultLength) < 0 )
    return 0xFFFFFFFFLL;
  if ( !memcmp(&PropertyBuffer, &GUID_BUS_TYPE_PCMCIA, 0x10uLL) )
    return 1LL;
  if ( !memcmp(&PropertyBuffer, &GUID_BUS_TYPE_PCI, 0x10uLL) )
    return 5LL;
  if ( !memcmp(&PropertyBuffer, &GUID_BUS_TYPE_ISAPNP, 0x10uLL) )
    return 1LL;
  if ( !memcmp(&PropertyBuffer, &GUID_BUS_TYPE_EISA, 0x10uLL) )
    return 2LL;
  return memcmp(&PropertyBuffer, &GUID_BUS_TYPE_ACPI, 0x10uLL) != 0 ? -1 : 17;
}
