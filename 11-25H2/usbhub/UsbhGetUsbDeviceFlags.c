/*
 * XREFs of UsbhGetUsbDeviceFlags @ 0x140018314
 * Callers:
 *     UsbhGetDeviceInformation @ 0x14001A9A8 (UsbhGetDeviceInformation.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1400184C8 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbClassFlags @ 0x140018C48 (UsbhGetRegUsbClassFlags.c)
 *     UsbhGetRegPersistedUsbDeviceFlags @ 0x140018F88 (UsbhGetRegPersistedUsbDeviceFlags.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     UsbhCheck4GlobalErrata @ 0x14005A5AC (UsbhCheck4GlobalErrata.c)
 *     UsbhCheckDeviceErrata @ 0x14005A610 (UsbhCheckDeviceErrata.c)
 */

__int64 __fastcall UsbhGetUsbDeviceFlags(__int64 a1, __int64 a2)
{
  char v3; // si
  _DWORD *v5; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  PDEVICE_OBJECT v8; // rcx
  int v9; // r9d
  __int64 v10; // rcx
  __int64 RegUsbDeviceFlags; // rax
  __int64 v12; // rcx
  __int64 RegPersistedUsbDeviceFlags; // rax

  v3 = 0;
  v5 = PdoExt(a2);
  v7 = v5;
  v5[358] = 768;
  if ( *((_BYTE *)v5 + 1400) < 0x12u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v8 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v9 = 14;
    goto LABEL_5;
  }
  if ( *((_BYTE *)v5 + 1401) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v8 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v9 = 15;
LABEL_5:
    WPP_RECORDER_SF_(v8->DeviceExtension, 0, 1, v9, (__int64)&WPP_e1fde88e9ac33323a903575de9e6ca97_Traceguids);
LABEL_21:
    v7[705] = 1073807365;
    return 3221225485LL;
  }
  if ( *((_BYTE *)v5 + 1404) == 17 && !*((_BYTE *)v5 + 1405) && !*((_BYTE *)v5 + 1406) )
  {
    v6 = *((unsigned __int16 *)v5 + 701);
    if ( (unsigned __int16)(v6 - 513) > 0xFEu )
    {
      Log(a1, 256, 1447314481, v6, 0LL);
      goto LABEL_21;
    }
    v3 = 1;
  }
  if ( v3 )
    v5[355] |= 0x40u;
  UsbhGetRegUsbClassFlags(v6, a2);
  RegUsbDeviceFlags = UsbhGetRegUsbDeviceFlags(v10, a2);
  *((_QWORD *)v7 + 142) = RegUsbDeviceFlags;
  if ( RegUsbDeviceFlags
    && (RegPersistedUsbDeviceFlags = UsbhGetRegPersistedUsbDeviceFlags(v12, a2),
        (*((_QWORD *)v7 + 143) = RegPersistedUsbDeviceFlags) != 0LL) )
  {
    UsbhCheckDeviceErrata(a1, a2);
    UsbhCheck4GlobalErrata(a1, a2);
    return 0LL;
  }
  else
  {
    v7[705] = 1073807366;
    return 3221225626LL;
  }
}
