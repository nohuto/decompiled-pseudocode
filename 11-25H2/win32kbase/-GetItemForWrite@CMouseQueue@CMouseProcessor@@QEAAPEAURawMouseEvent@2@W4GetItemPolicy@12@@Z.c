/*
 * XREFs of ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z @ 0x140190004
 * Callers:
 *     ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x14003B56C (-InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z.c)
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x140191E90 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEB.c)
 * Callees:
 *     ?IsFull@CMouseQueue@CMouseProcessor@@AEBA_NXZ @ 0x140190410 (-IsFull@CMouseQueue@CMouseProcessor@@AEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_WORD *__fastcall CMouseProcessor::CMouseQueue::GetItemForWrite(CMouseProcessor::CMouseQueue *a1, int a2)
{
  __int16 v4; // ax

  if ( a2 == 1 )
  {
    if ( CMouseProcessor::CMouseQueue::IsFull(a1) )
      return 0LL;
    v4 = ((unsigned __int8)*((_WORD *)a1 + 1472) + 1) & 0xF;
    ++*((_WORD *)a1 + 1473);
    *((_WORD *)a1 + 1472) = v4;
  }
  if ( *((_WORD *)a1 + 1473) > 0x10u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6972LL);
  return (_WORD *)((char *)a1 + 184 * *((unsigned __int16 *)a1 + 1472));
}
