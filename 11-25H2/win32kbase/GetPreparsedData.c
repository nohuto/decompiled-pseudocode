/*
 * XREFs of GetPreparsedData @ 0x1401E1AF8
 * Callers:
 *     RIMExtractPointerPropertyValues @ 0x1401E37E0 (RIMExtractPointerPropertyValues.c)
 *     RIMGetPointerDeviceProperties @ 0x1401E4200 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall GetPreparsedData(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx

  v2 = 0;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3667);
  v5 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 792), 19);
  v6 = v5;
  if ( v5 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(v5 + 440) + 16LL) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3671);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 440) + 16LL);
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 936) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3676);
    v7 = *(_QWORD *)(a1 + 936);
  }
  *a2 = v7;
  LOBYTE(v2) = v7 != 0;
  return v2;
}
