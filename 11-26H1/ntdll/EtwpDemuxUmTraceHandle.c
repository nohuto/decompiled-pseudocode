/*
 * XREFs of EtwpDemuxUmTraceHandle @ 0x180011110
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18000F710 (EtwpWriteToPrivateBuffers.c)
 *     EtwpTraceUmEvent @ 0x180010AD0 (EtwpTraceUmEvent.c)
 *     EtwpGetUmProcessImageInfo @ 0x180012B44 (EtwpGetUmProcessImageInfo.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180077320 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpGetPrivateLoggerContext @ 0x180077F10 (EtwpGetPrivateLoggerContext.c)
 *     EtwpShutdownPrivateLoggers @ 0x180087608 (EtwpShutdownPrivateLoggers.c)
 *     EtwpTraceUmMessage @ 0x1800BD9EC (EtwpTraceUmMessage.c)
 *     EtwpIsPrivateLoggerOn @ 0x1801003A8 (EtwpIsPrivateLoggerOn.c)
 * Callees:
 *     NtTraceControl @ 0x180162A10 (NtTraceControl.c)
 */

__int64 __fastcall EtwpDemuxUmTraceHandle(int a1, _DWORD *a2)
{
  unsigned __int16 i; // di
  __int64 v6; // rbx
  __int64 v7; // rsi
  int v8; // eax
  unsigned __int16 v9; // [rsp+80h] [rbp+18h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  for ( i = 0; ; ++i )
  {
    if ( i >= 8u )
      return 4201LL;
    v6 = 16LL * i;
    _InterlockedAdd((volatile signed __int32 *)(v6 + EtwpLoggerArray + 8), 1u);
    v7 = *(_QWORD *)(v6 + EtwpLoggerArray);
    if ( (v7 & 1) == 0 )
    {
      if ( *(_QWORD *)(v7 + 544) )
      {
        v8 = *(unsigned __int16 *)(v7 + 552);
        if ( (_WORD)v8 )
          goto LABEL_10;
        v9 = 0;
        v10 = 0;
        if ( !(unsigned int)NtTraceControl(40LL, v7 + 544, 8LL, &v9, 2, &v10) && v10 == 2 )
          break;
      }
    }
LABEL_11:
    _InterlockedDecrement((volatile signed __int32 *)(v6 + EtwpLoggerArray + 8));
  }
  v8 = v9;
  *(_WORD *)(v7 + 552) = v9;
LABEL_10:
  if ( v8 != a1 )
    goto LABEL_11;
  *a2 = i;
  _InterlockedDecrement((volatile signed __int32 *)(v6 + EtwpLoggerArray + 8));
  return 0LL;
}
