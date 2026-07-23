/*
 * XREFs of EtwpShutdownPrivateLoggers @ 0x18007E988
 * Callers:
 *     RtlExitUserProcess @ 0x18007DD80 (RtlExitUserProcess.c)
 * Callees:
 *     EtwpDemuxUmTraceHandle @ 0x18005C840 (EtwpDemuxUmTraceHandle.c)
 *     EtwpStopUmLogger @ 0x180064E98 (EtwpStopUmLogger.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void EtwpShutdownPrivateLoggers()
{
  unsigned int v0; // ebx
  __int64 v1; // rdi
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7[4]; // [rsp+20h] [rbp-D8h] BYREF
  int v8; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+38h] [rbp-C0h]
  int v10; // [rsp+5Ch] [rbp-9Ch]

  if ( EtwpLoggerArray )
  {
    memset_thunk_772440563353939046(&v8, 0, 0xB0uLL);
    v8 = 176;
    v0 = 0;
    v1 = 0LL;
    v10 = 0x20000;
    while ( 1 )
    {
      v2 = v0 & 0xFFFF7FFF;
      v7[0] = v0 & 0xFFFF7FFF;
      if ( EtwpLoggerArray )
      {
        if ( v2 < 0x40 )
          goto LABEL_5;
        if ( !(unsigned int)EtwpDemuxUmTraceHandle(v0, v7) )
          break;
      }
LABEL_7:
      ++v0;
      ++v1;
      if ( v0 >= 0x40 )
        return;
    }
    v2 = v7[0];
LABEL_5:
    v3 = 16LL * v2;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + EtwpLoggerArray + 8));
    v4 = *(_QWORD *)(v3 + EtwpLoggerArray);
    if ( (v4 & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v3 + EtwpLoggerArray + 8));
    }
    else
    {
      v5 = *(unsigned int *)(v4 + 308);
      v6 = 16LL * *(unsigned int *)(v4 + 20);
      _InterlockedDecrement((volatile signed __int32 *)(v6 + EtwpLoggerArray + 8));
      if ( (v5 & 0x400) == 0 )
      {
        v9 = v1;
        EtwpStopUmLogger(v6, v5, v4, (__int64)&v8);
      }
    }
    goto LABEL_7;
  }
}
