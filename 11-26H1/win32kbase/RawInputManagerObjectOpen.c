/*
 * XREFs of RawInputManagerObjectOpen @ 0x140130ACC
 * Callers:
 *     RIMObjectManagerCallout @ 0x140130A5C (RIMObjectManagerCallout.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RawInputManagerObjectOpen(__int64 a1)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  int ProcessSessionId; // eax

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  if ( ObGetObjectType(v2) != ExRawInputManagerObjectType )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 79LL);
  if ( !*(_QWORD *)(v2 + 32) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 81LL);
  if ( *(_WORD *)(a1 + 40) )
  {
    if ( !(unsigned __int8)PsIsSystemProcess(*(_QWORD *)(a1 + 24)) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(*(_QWORD *)(a1 + 24));
      if ( ProcessSessionId == -1 || ProcessSessionId != *(_DWORD *)v2 )
        return (unsigned int)-1073741790;
    }
  }
  return v3;
}
