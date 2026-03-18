/*
 * XREFs of SetUMInputObservationState @ 0x14021C354
 * Callers:
 *     NtMITSetInputObservationState @ 0x1401E1570 (NtMITSetInputObservationState.c)
 * Callees:
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SetUMInputObservationState(int a1, int a2, int a3)
{
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 MouseProcessor; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d

  if ( !IsInputThread(a1, a2, a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2131);
  if ( a1 != 1 || a2 != 4 )
    return 3221225506LL;
  MouseProcessor = anonymous_namespace_::GetMouseProcessor(v7, v6, v8);
  if ( !IsInputThread(v12, v11, v13) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 72);
  _InterlockedExchange((volatile __int32 *)(MouseProcessor + 8), a3);
  return 0LL;
}
