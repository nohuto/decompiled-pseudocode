/*
 * XREFs of ListTableBegin @ 0x140185B40
 * Callers:
 *     RIMCmActiveContactsBegin @ 0x140032890 (RIMCmActiveContactsBegin.c)
 * Callees:
 *     ListTableIteratorNext @ 0x140185C7C (ListTableIteratorNext.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ListTableBegin(__int64 a1, __int64 a2)
{
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_QWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 48LL);
  if ( !*(_DWORD *)(a2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 49LL);
  v5[2] = *(_QWORD *)a2;
  v5[0] = a2;
  v5[1] = 0LL;
  ListTableIteratorNext(a1, v5);
  return a1;
}
