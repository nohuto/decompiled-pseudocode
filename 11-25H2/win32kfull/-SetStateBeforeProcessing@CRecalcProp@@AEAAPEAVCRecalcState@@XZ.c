/*
 * XREFs of ?SetStateBeforeProcessing@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x1402C5DF0
 * Callers:
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8868 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CRecalcState *__fastcall CRecalcProp::SetStateBeforeProcessing(CRecalcProp *this)
{
  struct CRecalcState *result; // rax

  if ( *((_DWORD *)this + 6) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4352);
  result = (struct CRecalcState *)*((_QWORD *)this + 4);
  *((_QWORD *)result + 1) = *((_QWORD *)this + 5);
  *((_DWORD *)this + 6) = 2;
  *((_QWORD *)this + 5) = result;
  *((_QWORD *)this + 4) = 0LL;
  return result;
}
