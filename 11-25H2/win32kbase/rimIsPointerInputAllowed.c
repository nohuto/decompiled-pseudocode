/*
 * XREFs of rimIsPointerInputAllowed @ 0x14017E6E4
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimIsPointerInputAllowed(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 456) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 221LL);
  if ( !*(_BYTE *)(W32GetUserSessionState(a1, a2) + 169)
    || _bittest((const signed __int32 *)(a1 + 168), 0xDu)
    || _bittest((const signed __int32 *)(*(_QWORD *)(a1 + 456) + 368LL), 0xDu) )
  {
    return 1;
  }
  return v2;
}
