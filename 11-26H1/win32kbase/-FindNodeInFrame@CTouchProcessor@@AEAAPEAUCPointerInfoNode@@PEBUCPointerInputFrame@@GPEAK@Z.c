/*
 * XREFs of ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x14006DA0C
 * Callers:
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1400514EC (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1400CDED0 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x14015C27C (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D5C8 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeInFrame(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        __int16 a3,
        unsigned int *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned __int64 i; // rsi
  bool v11; // zf

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9521LL);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v7, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9523LL);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9524LL);
  v8 = *((unsigned int *)a2 + 12);
  v9 = 0;
  for ( i = *((_QWORD *)a2 + 30); v9 < (unsigned int)v8; ++v9 )
  {
    if ( i >= *((_QWORD *)a2 + 30) + 480 * v8 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9534LL);
    if ( *(_WORD *)(i + 172) == a3 )
      break;
    v8 = *((unsigned int *)a2 + 12);
    i += 480LL;
  }
  v11 = v9 == *((_DWORD *)a2 + 12);
  if ( v9 > *((_DWORD *)a2 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9542LL);
    v11 = v9 == *((_DWORD *)a2 + 12);
  }
  if ( v11 )
    return 0LL;
  if ( a4 )
    *a4 = v9;
  return (struct CPointerInfoNode *)i;
}
