/*
 * XREFs of RIMPopulateExtendedKeyboardDeviceProperties @ 0x1401EC314
 * Callers:
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 * Callees:
 *     RIMRegOpenDeviceInstanceKey @ 0x1400B19B8 (RIMRegOpenDeviceInstanceKey.c)
 *     ?PopulateKeyboardProperties@@YAXPEAURIMDEV@@PEAX@Z @ 0x1401303BC (-PopulateKeyboardProperties@@YAXPEAURIMDEV@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

int __fastcall RIMPopulateExtendedKeyboardDeviceProperties(struct RIMDEV *a1, __int64 a2, __int64 a3)
{
  void *v4; // rax
  void *v5; // rdi

  if ( (*((_DWORD *)a1 + 42) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 375);
  v4 = RIMRegOpenDeviceInstanceKey((struct _UNICODE_STRING *)a1, a2, a3);
  v5 = v4;
  if ( v4 )
  {
    PopulateKeyboardProperties(a1, v4);
    LODWORD(v4) = ZwClose(v5);
  }
  return (int)v4;
}
