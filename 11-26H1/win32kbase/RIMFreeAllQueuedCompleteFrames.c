/*
 * XREFs of RIMFreeAllQueuedCompleteFrames @ 0x140192E7C
 * Callers:
 *     RIMUnregisterForInput @ 0x140129F90 (RIMUnregisterForInput.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_QWORD *__fastcall RIMFreeAllQueuedCompleteFrames(__int64 a1)
{
  _QWORD **v1; // rbx
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  char *v4; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v1 = (_QWORD **)(a1 + 744);
  while ( 1 )
  {
    result = *v1;
    if ( *v1 == v1 )
      break;
    if ( (_QWORD **)result[1] != v1 || (v3 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *v1 = v3;
    v4 = (char *)(result - 1);
    v3[1] = v1;
    v5 = (_QWORD *)result[4];
    if ( !v5[31] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1213LL);
    --v5[31];
    ObfDereferenceObject(v5);
    GreDeleteFastMutex(v4, v6, v7, v8);
  }
  return result;
}
