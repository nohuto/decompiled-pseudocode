/*
 * XREFs of UsbhRemoveAndDeletePdo @ 0x14000803C
 * Callers:
 *     UsbhDeletePdo @ 0x140007770 (UsbhDeletePdo.c)
 *     UsbhDeleteOrphanPdo @ 0x14003A118 (UsbhDeleteOrphanPdo.c)
 * Callees:
 *     UsbhFreeID @ 0x1400081A4 (UsbhFreeID.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 */

void __fastcall UsbhRemoveAndDeletePdo(PDEVICE_OBJECT DeviceObject)
{
  __int64 v2; // rdi
  KIRQL v3; // bl
  KIRQL v4; // bp

  v2 = PdoExt(DeviceObject);
  RtlFreeUnicodeString((PUNICODE_STRING)(v2 + 2672));
  v3 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_140070600 = (__int64)&dword_140070608;
  UsbhFreeID(v2 + 2096);
  UsbhFreeID(v2 + 2080);
  UsbhFreeID(v2 + 2112);
  UsbhFreeID(v2 + 2144);
  UsbhFreeID(v2 + 2128);
  UsbhFreeID(v2 + 2160);
  UsbhFreeID(v2 + 2176);
  UsbhFreeID(v2 + 2192);
  UsbhFreeID(v2 + 2224);
  UsbhFreeID(v2 + 2208);
  qword_140070600 = 0LL;
  KeReleaseSpinLock(&HubG, v3);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 2808));
  if ( *(_DWORD *)(v2 + 2816) == 1 )
  {
    *(_DWORD *)(v2 + 2816) = 0;
    USBD_RemoveDeviceFromGlobalList(DeviceObject);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 2808), v4);
  IoDeleteDevice(DeviceObject);
}
