/*
 * XREFs of RIMPopulateExtendedPointerDeviceProperties @ 0x1401EC44C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RIMRegOpenDeviceInstanceKey @ 0x1400B19B8 (RIMRegOpenDeviceInstanceKey.c)
 *     RIMRegOpenLocalMachineKey @ 0x140120B94 (RIMRegOpenLocalMachineKey.c)
 *     ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1401810B0 (-PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMPopulateExtendedPointerDeviceProperties(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // rsi
  void *v6; // rbx

  if ( (*(_DWORD *)(a1 + 168) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 459);
  if ( *(_DWORD *)(a2 + 24) == 7 )
  {
    v5 = RIMRegOpenDeviceInstanceKey((struct _UNICODE_STRING *)a1, a2, a3);
    v6 = (void *)RIMRegOpenLocalMachineKey(L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad");
    PopulatePTPProperties((struct tagHID_POINTER_DEVICE_INFO *)a2, v5, v6);
    if ( v5 )
      ZwClose(v5);
    if ( v6 )
      ZwClose(v6);
  }
}
