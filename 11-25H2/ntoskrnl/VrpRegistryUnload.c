/*
 * XREFs of VrpRegistryUnload @ 0x140819560
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x1402FDA50 (IoDeleteDevice.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PsFreeSiloContextSlot @ 0x140762740 (PsFreeSiloContextSlot.c)
 *     EtwUnregister @ 0x140A01CC0 (EtwUnregister.c)
 */

NTSTATUS VrpRegistryUnload()
{
  REGHANDLE v0; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot(VrpSiloContextSlot);
  if ( (unsigned int)dword_140E0A400 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E0A400, (unsigned __int8 *)&byte_1400576CF, 0LL, 0LL, 2u, &v2);
  v0 = qword_140E0A420;
  qword_140E0A420 = 0LL;
  dword_140E0A400 = 0;
  return EtwUnregister(v0);
}
