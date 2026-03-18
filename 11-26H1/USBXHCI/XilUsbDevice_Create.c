/*
 * XREFs of XilUsbDevice_Create @ 0x140003D5C
 * Callers:
 *     UsbDevice_UcxEvtDeviceAdd @ 0x140082490 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     XilCoreUsbDevice_Create @ 0x140003E54 (XilCoreUsbDevice_Create.c)
 *     XilUsbDevice_CreateSecureObject @ 0x140004680 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_FreeResources @ 0x1400047F0 (XilUsbDevice_FreeResources.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 */

__int64 __fastcall XilUsbDevice_Create(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbx
  __int64 v4; // rbp
  char v5; // al
  _BYTE *v6; // r8
  int SecureObject; // edi
  int v9; // ecx
  int v10; // ecx

  v2 = (_BYTE *)(a1 + 616);
  *(_QWORD *)(a1 + 672) = a1;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_BYTE *)(v4 + 1001);
  *(_BYTE *)(a1 + 665) = v5;
  if ( v5 )
  {
    SecureObject = XilUsbDevice_CreateSecureObject(a1 + 616);
    if ( SecureObject < 0 )
      goto LABEL_6;
    v9 = *(_DWORD *)(v4 + 1008);
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          v2[50] = v2[48] == 0;
        else
          Debug_FreAssertMsg(
            "Unexpected DMA Mode",
            0LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
            264LL);
      }
      else
      {
        v2[50] = 0;
      }
    }
    else
    {
      v2[50] = 1;
    }
    LOBYTE(a2) = v2[49];
    v6 = v2 + 8;
  }
  else
  {
    LOBYTE(a2) = 0;
    *(_BYTE *)(a1 + 666) = 1;
    v6 = (_BYTE *)(a1 + 616);
  }
  SecureObject = XilCoreUsbDevice_Create(a1, a2, v6);
  if ( SecureObject < 0 )
LABEL_6:
    XilUsbDevice_FreeResources(v2);
  return (unsigned int)SecureObject;
}
