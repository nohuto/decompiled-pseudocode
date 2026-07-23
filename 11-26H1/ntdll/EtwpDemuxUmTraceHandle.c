/*
 * XREFs of EtwpDemuxUmTraceHandle @ 0x18005C840
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18005AE40 (EtwpWriteToPrivateBuffers.c)
 *     EtwpTraceUmEvent @ 0x18005C200 (EtwpTraceUmEvent.c)
 *     EtwpGetUmProcessImageInfo @ 0x18005E274 (EtwpGetUmProcessImageInfo.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180065B40 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpGetPrivateLoggerContext @ 0x180066730 (EtwpGetPrivateLoggerContext.c)
 *     EtwpShutdownPrivateLoggers @ 0x18007E988 (EtwpShutdownPrivateLoggers.c)
 *     EtwpTraceUmMessage @ 0x1800BB44C (EtwpTraceUmMessage.c)
 *     EtwpIsPrivateLoggerOn @ 0x1800FFAF8 (EtwpIsPrivateLoggerOn.c)
 * Callees:
 *     NtTraceControl @ 0x180162910 (NtTraceControl.c)
 */

__int64 __fastcall EtwpDemuxUmTraceHandle(int a1, _DWORD *a2)
{
  unsigned __int16 i; // di
  __int64 v6; // rbx
  __int64 v7; // rsi
  int v8; // eax
  unsigned __int16 OutputBuffer; // [rsp+80h] [rbp+18h] BYREF
  ULONG ReturnLength; // [rsp+88h] [rbp+20h] BYREF

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
        OutputBuffer = 0;
        ReturnLength = 0;
        if ( !NtTraceControl(EtwQuerySessionDemuxObject, (PVOID)(v7 + 544), 8u, &OutputBuffer, 2u, &ReturnLength)
          && ReturnLength == 2 )
        {
          break;
        }
      }
    }
LABEL_11:
    _InterlockedDecrement((volatile signed __int32 *)(v6 + EtwpLoggerArray + 8));
  }
  v8 = OutputBuffer;
  *(_WORD *)(v7 + 552) = OutputBuffer;
LABEL_10:
  if ( v8 != a1 )
    goto LABEL_11;
  *a2 = i;
  _InterlockedDecrement((volatile signed __int32 *)(v6 + EtwpLoggerArray + 8));
  return 0LL;
}
