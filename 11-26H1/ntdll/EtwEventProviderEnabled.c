/*
 * XREFs of EtwEventProviderEnabled @ 0x18008D8A0
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18008DC80 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     ProviderHandleLookup @ 0x18008D650 (ProviderHandleLookup.c)
 */

BOOLEAN __cdecl EtwEventProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  __int16 v5; // rdi^4
  __int64 v6; // rax
  BOOLEAN v7; // r9
  __int64 v8; // rcx
  UCHAR v10; // al

  v5 = WORD2(RegHandle);
  v6 = ProviderHandleLookup(RegHandle, RegHandle);
  v7 = 0;
  v8 = v6;
  if ( !v6 || v5 != *(_WORD *)(v6 + 84) )
    return 0;
  if ( *(_BYTE *)(v6 + 116)
    && (Level <= *(_BYTE *)(v6 + 117) || !*(_BYTE *)(v6 + 117))
    && ((*(_BYTE *)(v6 + 112) & 0x40) != 0 && !Keyword
     || (Keyword & *(_QWORD *)(v6 + 104)) != 0 && (Keyword & *(_QWORD *)(v6 + 96)) == *(_QWORD *)(v6 + 96)) )
  {
    return 1;
  }
  if ( *(_BYTE *)(v6 + 236) )
  {
    v10 = *(_BYTE *)(v6 + 237);
    if ( (Level <= v10 || !v10)
      && ((*(_BYTE *)(v8 + 232) & 0x40) != 0 && !Keyword
       || (Keyword & *(_QWORD *)(v8 + 224)) != 0 && (Keyword & *(_QWORD *)(v8 + 216)) == *(_QWORD *)(v8 + 216)) )
    {
      return 1;
    }
  }
  return v7;
}
