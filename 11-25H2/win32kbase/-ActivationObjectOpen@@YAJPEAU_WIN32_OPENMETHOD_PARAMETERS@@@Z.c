/*
 * XREFs of ?ActivationObjectOpen@@YAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1401A9B64
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ActivationObjectOpen(struct _WIN32_OPENMETHOD_PARAMETERS *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  int ProcessSessionId; // eax

  v2 = 0;
  if ( ObGetObjectType(*((_QWORD *)a1 + 4)) != ExActivationObjectType )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 302);
  v3 = *((_QWORD *)a1 + 4);
  if ( !*(_QWORD *)(v3 + 24) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 307);
  if ( *((_WORD *)a1 + 20) )
  {
    if ( !(unsigned __int8)PsIsSystemProcess(*((_QWORD *)a1 + 3)) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(*((_QWORD *)a1 + 3));
      if ( ProcessSessionId == -1 || ProcessSessionId != *(_DWORD *)v3 )
        return (unsigned int)-1073741790;
    }
  }
  return v2;
}
