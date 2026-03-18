/*
 * XREFs of RIMPopulateExtendedKeyboardDeviceProperties @ 0x1400EC170
 * Callers:
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 * Callees:
 *     RIMRegQueryDWordFromKey @ 0x1400EC2B8 (RIMRegQueryDWordFromKey.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1400EEFEC (RIMRegOpenDeviceInstanceKey.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

int __fastcall RIMPopulateExtendedKeyboardDeviceProperties(__int64 a1)
{
  int v1; // ebx
  void *v3; // rax
  void *v4; // rsi

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 168) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 291LL);
  v3 = (void *)RIMRegOpenDeviceInstanceKey(a1);
  v4 = v3;
  if ( v3 )
  {
    if ( (unsigned int)RIMRegQueryDWordFromKey(v3) || (unsigned int)RIMRegQueryDWordFromKey(0LL) )
    {
      LOBYTE(v1) = 0;
      *(_DWORD *)(a1 + 476) = v1 | *(_DWORD *)(a1 + 476) & 0xFFFFFFFE;
    }
    LODWORD(v3) = ZwClose(v4);
  }
  return (int)v3;
}
