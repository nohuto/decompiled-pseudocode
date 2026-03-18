/*
 * XREFs of SetUMInputObservationState @ 0x140216C68
 * Callers:
 *     NtMITSetInputObservationState @ 0x1401BB4B0 (NtMITSetInputObservationState.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SetUMInputObservationState(__int64 a1, __int64 a2, __int32 a3)
{
  int v4; // esi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 MouseProcessor; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx

  v4 = a2;
  v5 = a1;
  if ( !IsInputThread(a1, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2134);
  if ( v5 != 1 || v4 != 4 )
    return 3221225506LL;
  MouseProcessor = anonymous_namespace_::GetMouseProcessor(v7, v6);
  if ( !IsInputThread(v11, v10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 72);
  _InterlockedExchange((volatile __int32 *)(MouseProcessor + 8), a3);
  return 0LL;
}
