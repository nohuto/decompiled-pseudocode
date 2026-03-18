/*
 * XREFs of UsbhReinitialize @ 0x14003DAF8
 * Callers:
 *     UsbhHubStart @ 0x140050D10 (UsbhHubStart.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhConfigureUsbHub @ 0x14003AC70 (UsbhConfigureUsbHub.c)
 *     UsbhInitializeTtHub @ 0x14003D660 (UsbhInitializeTtHub.c)
 *     UsbhLogStartFailure @ 0x14003D85C (UsbhLogStartFailure.c)
 */

__int64 __fastcall UsbhReinitialize(__int64 a1, _UNICODE_STRING *a2)
{
  _DWORD *v4; // rbp
  unsigned int v5; // ebx
  char *Src; // rax
  __int64 v7; // r9

  Log(a1, 8, 1750224457, (__int64)a2, 0LL);
  v4 = FdoExt(a1);
  v5 = UsbhConfigureUsbHub(a1);
  if ( (v5 & 0xC0000000) == 0xC0000000 )
  {
    Src = "ConfigureUsbHub";
    v7 = 5767LL;
LABEL_6:
    UsbhLogStartFailure(a1, v5, 3, v7, (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c", Src);
    return v5;
  }
  if ( (v4[640] & 0x40) != 0 )
  {
    v5 = UsbhInitializeTtHub(a1, a2);
    if ( (v5 & 0xC0000000) == 0xC0000000 )
    {
      Src = "InitializeTtHub";
      v7 = 5777LL;
      goto LABEL_6;
    }
  }
  return v5;
}
