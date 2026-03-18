/*
 * XREFs of UsbhDeleteUxdSettings @ 0x140022594
 * Callers:
 *     UsbhPortDisconnect @ 0x140021F00 (UsbhPortDisconnect.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1400493F8 (Usbh_PdoRemove_PdoEvent.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhGetGlobalUxdSettings @ 0x140022680 (UsbhGetGlobalUxdSettings.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     UsbhDeleteUxdDeviceKey @ 0x14005F5F4 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortKey @ 0x14005F6B4 (UsbhDeleteUxdPortKey.c)
 */

__int64 __fastcall UsbhDeleteUxdSettings(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v6; // rdi
  PDEVICE_OBJECT v7; // rcx
  _DWORD *v8; // rsi
  int v9; // ebx
  bool v10; // zf
  __int64 v11; // rcx

  v6 = PdoExt(a2);
  v8 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        31,
        (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids);
  }
  UsbhGetGlobalUxdSettings(v7, v8 + 1294);
  v9 = a3 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return 0LL;
    if ( !v6[661] )
    {
      v10 = v8[1296] == 0;
      goto LABEL_10;
    }
LABEL_11:
    UsbhDeleteUxdPortKey(a1, *((unsigned __int16 *)v6 + 714));
    UsbhDeleteUxdDeviceKey(v11, a2);
    return 0LL;
  }
  if ( v6[660] )
    goto LABEL_11;
  v10 = v8[1295] == 0;
LABEL_10:
  if ( !v10 )
    goto LABEL_11;
  return 0LL;
}
