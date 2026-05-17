/*
 * XREFs of EtwpGetPrivateLoggerContextByName @ 0x180077320
 * Callers:
 *     EtwpStartUmLogger @ 0x180076EBC (EtwpStartUmLogger.c)
 *     EtwpGetPrivateLoggerContext @ 0x180077F10 (EtwpGetPrivateLoggerContext.c)
 * Callees:
 *     EtwpDemuxUmTraceHandle @ 0x180011110 (EtwpDemuxUmTraceHandle.c)
 *     RtlEqualUnicodeString @ 0x1800A5A70 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContextByName(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int i; // ebx
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v11; // [rsp+20h] [rbp-8h]
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( a1 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= 0x40 )
        return 4201LL;
      v7 = i & 0xFFFF7FFF;
      v12 = i & 0xFFFF7FFF;
      if ( EtwpLoggerArray )
      {
        if ( v7 >= 0x40 )
        {
          if ( (unsigned int)EtwpDemuxUmTraceHandle(i, &v12) )
            continue;
          v7 = v12;
        }
        v8 = 16LL * v7;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + EtwpLoggerArray + 8));
        v9 = *(_QWORD *)(v8 + EtwpLoggerArray);
        if ( (v9 & 1) == 0 )
        {
          LOBYTE(a3) = 1;
          if ( (unsigned __int8)RtlEqualUnicodeString(v9 + 136, a1, a3, a4, v11) )
          {
            *a2 = v9;
            return 0LL;
          }
          v8 = 16LL * i;
        }
        _InterlockedDecrement((volatile signed __int32 *)(v8 + EtwpLoggerArray + 8));
      }
    }
  }
  return 4201LL;
}
