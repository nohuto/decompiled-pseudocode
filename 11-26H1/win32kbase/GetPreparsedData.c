/*
 * XREFs of GetPreparsedData @ 0x14005262C
 * Callers:
 *     RIMExtractPointerPropertyValues @ 0x140051E10 (RIMExtractPointerPropertyValues.c)
 *     RIMGetPointerDeviceProperties @ 0x140052230 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall GetPreparsedData(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // r14
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx

  v2 = 0;
  v3 = a2;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3637LL);
  LOBYTE(a2) = 19;
  v5 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 792), a2);
  v6 = v5;
  if ( v5 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(v5 + 440) + 16LL) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3641LL);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 440) + 16LL);
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 936) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3646LL);
    v7 = *(_QWORD *)(a1 + 936);
  }
  *v3 = v7;
  LOBYTE(v2) = v7 != 0;
  return v2;
}
