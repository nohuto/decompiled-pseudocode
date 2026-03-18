/*
 * XREFs of UsbhWmiDriverEntry @ 0x140056170
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140061CC0 (memmove.c)
 */

__int64 __fastcall UsbhWmiDriverEntry(__int64 a1, const void **a2)
{
  __int64 v3; // rdx
  void *Pool2; // rax
  __int64 result; // rax

  v3 = (unsigned __int16)(*(_WORD *)a2 + 2);
  word_140070522 = v3;
  UsbhRegistryPath = *(_WORD *)a2;
  Pool2 = (void *)ExAllocatePool2(256LL, v3, 1112885333LL);
  P = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, a2[1], *(unsigned __int16 *)a2);
  dword_14007051C = 64;
  qword_1400704C8 = 1LL;
  USB_WmiGuidList = (__int64)&GUID_USB_WMI_STD_DATA;
  qword_1400704D8 = 1LL;
  qword_1400704D0 = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_1400704E0 = (__int64)&GUID_POWER_DEVICE_ENABLE;
  qword_1400704F0 = (__int64)&GUID_POWER_DEVICE_WAKE_ENABLE;
  qword_140070510 = (__int64)&GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION;
  USB_PortWmiGuidList = (__int64)&MSDeviceUI_FirmwareRevision_GUID;
  qword_140070550 = (__int64)&GUID_USB_WMI_DEVICE_PERF_INFO;
  result = 0LL;
  qword_1400704E8 = 1LL;
  qword_1400704F8 = 1LL;
  qword_140070500 = (__int64)&GUID_USB_WMI_NODE_INFO;
  qword_140070508 = 1LL;
  dword_140070518 = 1;
  qword_140070548 = 1LL;
  qword_140070558 = 1LL;
  qword_140070560 = (__int64)&GUID_USB_WMI_NODE_INFO;
  qword_140070568 = 1LL;
  UsbhWmiInit = 1;
  return result;
}
