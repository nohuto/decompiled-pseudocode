/*
 * XREFs of rimFindAndReclaimHoldingFrame @ 0x14002EEF0
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1400315B8 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x14002EF30 (rimFindHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x14002EF5C (rimReclaimHoldingFrame.c)
 *     ?DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_RimCompletionReason@@@Z @ 0x14002F028 (-DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_R.c)
 */

__int64 __fastcall rimFindAndReclaimHoldingFrame(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx

  result = rimFindHoldingFrame(a1, a2);
  v5 = result;
  if ( result )
  {
    LOBYTE(v3) = (_DWORD)v3 != 0;
    InputTraceLogging::RIM::DropCompleteFrame(v4, result, v3);
    return rimReclaimHoldingFrame(v7, v6, v5);
  }
  return result;
}
