/*
 * XREFs of RIMPopulateExtendedPointerDeviceProperties @ 0x14020ADC0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RIMRegOpenLocalMachineKey @ 0x1400EDB8C (RIMRegOpenLocalMachineKey.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1400EEFEC (RIMRegOpenDeviceInstanceKey.c)
 *     ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1401AF324 (-PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMPopulateExtendedPointerDeviceProperties(__int64 a1, __int64 a2, int a3)
{
  int v4; // ebx
  void *v5; // rsi
  void *v6; // rbx

  v4 = a1;
  if ( (*(_DWORD *)(a1 + 168) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 375);
  if ( *(_DWORD *)(a2 + 24) == 7 )
  {
    v5 = RIMRegOpenDeviceInstanceKey(v4, a2, a3);
    v6 = (void *)RIMRegOpenLocalMachineKey(L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad");
    PopulatePTPProperties((struct tagHID_POINTER_DEVICE_INFO *)a2, v5, v6);
    if ( v5 )
      ZwClose(v5);
    if ( v6 )
      ZwClose(v6);
  }
}
