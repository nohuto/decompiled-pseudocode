/*
 * XREFs of UsbhUxdShutdown @ 0x140060388
 * Callers:
 *     UsbhDeviceShutdown @ 0x14004FF60 (UsbhDeviceShutdown.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhGetGlobalUxdSettings @ 0x140022680 (UsbhGetGlobalUxdSettings.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     UsbhDeleteUxdSubKeys @ 0x14005F7D4 (UsbhDeleteUxdSubKeys.c)
 *     UsbhOpenRegistryKey @ 0x14005FCF4 (UsbhOpenRegistryKey.c)
 *     UsbhOpenUxdPortHandle @ 0x14005FD7C (UsbhOpenUxdPortHandle.c)
 */

__int64 __fastcall UsbhUxdShutdown(__int64 a1)
{
  PDEVICE_OBJECT v2; // rcx
  _DWORD *v3; // rdi
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  v3 = FdoExt(a1);
  Handle = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v2 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x23u,
        (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids);
  }
  UsbhGetGlobalUxdSettings((__int64)v2, v3 + 1294);
  if ( UsbhOpenRegistryKey(&Handle) >= 0 )
  {
    UsbhDeleteUxdSubKeys(a1, (WCHAR *)Handle);
    ZwClose(Handle);
  }
  Handle = 0LL;
  if ( (int)UsbhOpenUxdPortHandle(a1, &Handle) >= 0 )
  {
    UsbhDeleteUxdSubKeys(a1, (WCHAR *)Handle);
    ZwClose(Handle);
  }
  return 0LL;
}
