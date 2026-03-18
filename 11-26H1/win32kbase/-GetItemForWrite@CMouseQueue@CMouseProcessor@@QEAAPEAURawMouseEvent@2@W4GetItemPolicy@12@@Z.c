/*
 * XREFs of ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z @ 0x14012E480
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x14009F5B4 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEB.c)
 *     ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1401B6B48 (-InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CMouseQueue::GetItemForWrite(__int64 a1, int a2)
{
  __int16 *v2; // rbx
  __int16 v4; // cx

  v2 = (__int16 *)(a1 + 2946);
  if ( a2 == 1 )
  {
    if ( (unsigned __int16)*v2 > 0x10u )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6997LL);
    v4 = *v2;
    if ( *v2 == 16 )
      return 0LL;
    *(_WORD *)(a1 + 2944) = ((unsigned __int8)*(_WORD *)(a1 + 2944) + 1) & 0xF;
    *v2 = v4 + 1;
  }
  if ( (unsigned __int16)*v2 > 0x10u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6976LL);
  return a1 + 184LL * *(unsigned __int16 *)(a1 + 2944);
}
