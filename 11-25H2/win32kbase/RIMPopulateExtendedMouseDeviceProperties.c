/*
 * XREFs of RIMPopulateExtendedMouseDeviceProperties @ 0x1401EC394
 * Callers:
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 * Callees:
 *     RIMRegOpenDeviceInstanceKey @ 0x1400B19B8 (RIMRegOpenDeviceInstanceKey.c)
 *     RIMRegOpenLocalMachineKey @ 0x140120B94 (RIMRegOpenLocalMachineKey.c)
 *     ?PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z @ 0x140130438 (-PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMPopulateExtendedMouseDeviceProperties(struct RIMDEV *a1, __int64 a2, __int64 a3)
{
  void *v4; // rdi
  void *v5; // rax
  void *v6; // rbx

  if ( (*((_DWORD *)a1 + 42) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 416);
  v4 = RIMRegOpenDeviceInstanceKey((struct _UNICODE_STRING *)a1, a2, a3);
  v5 = (void *)RIMRegOpenLocalMachineKey(L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  v6 = v5;
  if ( v4 || v5 )
  {
    PopulateMouseProperties(a1, v4, v5);
    if ( v4 )
      ZwClose(v4);
    if ( v6 )
      ZwClose(v6);
  }
}
