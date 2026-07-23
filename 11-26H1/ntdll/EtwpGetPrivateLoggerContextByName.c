/*
 * XREFs of EtwpGetPrivateLoggerContextByName @ 0x180065B40
 * Callers:
 *     EtwpStartUmLogger @ 0x1800656DC (EtwpStartUmLogger.c)
 *     EtwpGetPrivateLoggerContext @ 0x180066730 (EtwpGetPrivateLoggerContext.c)
 * Callees:
 *     EtwpDemuxUmTraceHandle @ 0x18005C840 (EtwpDemuxUmTraceHandle.c)
 *     RtlEqualUnicodeString @ 0x1800A4BA0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContextByName(PUNICODE_STRING String2, _QWORD *a2)
{
  unsigned int i; // ebx
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( String2 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= 0x40 )
        return 4201LL;
      v5 = i & 0xFFFF7FFF;
      v9 = i & 0xFFFF7FFF;
      if ( EtwpLoggerArray )
      {
        if ( v5 >= 0x40 )
        {
          if ( (unsigned int)EtwpDemuxUmTraceHandle(i, &v9) )
            continue;
          v5 = v9;
        }
        v6 = 16LL * v5;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + EtwpLoggerArray + 8));
        v7 = *(_QWORD *)(v6 + EtwpLoggerArray);
        if ( (v7 & 1) == 0 )
        {
          if ( RtlEqualUnicodeString((PUNICODE_STRING)(v7 + 136), String2, 1u) )
          {
            *a2 = v7;
            return 0LL;
          }
          v6 = 16LL * i;
        }
        _InterlockedDecrement((volatile signed __int32 *)(v6 + EtwpLoggerArray + 8));
      }
    }
  }
  return 4201LL;
}
