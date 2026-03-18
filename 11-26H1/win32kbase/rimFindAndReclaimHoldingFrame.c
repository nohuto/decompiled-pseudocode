/*
 * XREFs of rimFindAndReclaimHoldingFrame @ 0x140077EDC
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x140072D40 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     rimReclaimHoldingFrame @ 0x1400761B0 (rimReclaimHoldingFrame.c)
 *     rimFindHoldingFrame @ 0x140077F1C (rimFindHoldingFrame.c)
 *     ?DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_RimCompletionReason@@@Z @ 0x140077F4C (-DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_R.c)
 */

__int64 rimFindAndReclaimHoldingFrame()
{
  __int64 result; // rax
  __int64 v1; // r8
  __int64 v2; // r10
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9

  result = rimFindHoldingFrame();
  v3 = result;
  if ( result )
  {
    LOBYTE(v1) = (_DWORD)v1 != 0;
    InputTraceLogging::RIM::DropCompleteFrame(v2, result, v1);
    return rimReclaimHoldingFrame(v5, v4, v3, v6);
  }
  return result;
}
