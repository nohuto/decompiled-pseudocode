/*
 * XREFs of UsbhWmiDriverEntry @ 0x140055BE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140061600 (memmove.c)
 */

__int64 __fastcall UsbhWmiDriverEntry(__int64 a1, const void **a2)
{
  __int64 v3; // rdx
  void *Pool2; // rax
  __int64 result; // rax

  v3 = (unsigned __int16)(*(_WORD *)a2 + 2);
  word_14006F4C2 = v3;
  UsbhRegistryPath = *(_WORD *)a2;
  Pool2 = (void *)ExAllocatePool2(256LL, v3, 1112885333LL);
  P = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, a2[1], *(unsigned __int16 *)a2);
  dword_14006F46C = 0;
  dword_14006F47C = 0;
  dword_14006F48C = 0;
  dword_14006F49C = 0;
  dword_14006F4AC = 0;
  dword_14006F4EC = 0;
  dword_14006F4FC = 0;
  dword_14006F50C = 0;
  USB_WmiGuidList = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_14006F470 = (__int64)&GUID_USB_WMI_STD_NOTIFICATION;
  qword_14006F480 = (__int64)&GUID_POWER_DEVICE_ENABLE;
  qword_14006F490 = (__int64)&GUID_POWER_DEVICE_WAKE_ENABLE;
  qword_14006F4B0 = (__int64)&GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION;
  USB_PortWmiGuidList = (__int64)&MSDeviceUI_FirmwareRevision_GUID;
  qword_14006F4F0 = (__int64)&GUID_USB_WMI_DEVICE_PERF_INFO;
  result = 0LL;
  dword_14006F468 = 1;
  dword_14006F478 = 1;
  dword_14006F488 = 1;
  dword_14006F498 = 1;
  qword_14006F4A0 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_14006F4A8 = 1;
  dword_14006F4B8 = 1;
  dword_14006F4BC = 64;
  dword_14006F4E8 = 1;
  dword_14006F4F8 = 1;
  qword_14006F500 = (__int64)&GUID_USB_WMI_NODE_INFO;
  dword_14006F508 = 1;
  UsbhWmiInit = 1;
  return result;
}
