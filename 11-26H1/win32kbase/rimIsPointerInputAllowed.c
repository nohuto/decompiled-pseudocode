/*
 * XREFs of rimIsPointerInputAllowed @ 0x1401439BC
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimIsPointerInputAllowed(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !*(_QWORD *)(a1 + 456) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 221LL);
  if ( !*(_BYTE *)(W32GetUserSessionState(a1, a2, a3) + 169)
    || _bittest((const signed __int32 *)(a1 + 168), 0xDu)
    || _bittest((const signed __int32 *)(*(_QWORD *)(a1 + 456) + 368LL), 0xDu) )
  {
    return 1;
  }
  return v3;
}
