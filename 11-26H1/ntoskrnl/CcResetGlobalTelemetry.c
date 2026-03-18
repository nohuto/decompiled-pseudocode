/*
 * XREFs of CcResetGlobalTelemetry @ 0x140B5A31C
 * Callers:
 *     CcPostVolumeTelemetry @ 0x14049BF90 (CcPostVolumeTelemetry.c)
 * Callees:
 *     <none>
 */

__int64 CcResetGlobalTelemetry()
{
  __int64 result; // rax

  result = 0LL;
  EmpParseLock.Timer.TimerListEntry.Blink = 0LL;
  EmpParseLock.Timer.Dpc = 0LL;
  *(_QWORD *)&EmpParseLock.Timer.Processor = 0LL;
  EmpParseLock.WaitBlock[0].WaitListEntry = 0uLL;
  *(_OWORD *)&EmpParseLock.WaitBlockFill11[16] = 0uLL;
  *(_OWORD *)&EmpParseLock.WaitBlockFill11[32] = 0uLL;
  *(_OWORD *)&EmpParseLock.WaitBlockFill11[48] = 0uLL;
  *(_OWORD *)&EmpParseLock.WaitBlockFill11[64] = 0uLL;
  *(_OWORD *)&EmpParseLock.WaitBlockFill11[80] = 0uLL;
  *(_OWORD *)&EmpParseLock.WaitBlockFill11[96] = 0uLL;
  return result;
}
