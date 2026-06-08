/*
 * XREFs of SetGV3PerfStateAndTurbo @ 0x140002540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     IsTurboModeSupported @ 0x140005C34 (IsTurboModeSupported.c)
 *     ProcLibTraceUnexpectedTurboDisable @ 0x140008518 (ProcLibTraceUnexpectedTurboDisable.c)
 */

__int64 __fastcall SetGV3PerfStateAndTurbo(__int64 a1, __int16 a2, __int64 a3, char a4)
{
  BOOL v4; // eax
  unsigned __int64 v6; // [rsp+48h] [rbp+10h]

  v6 = __readmsr(0x199u);
  LOWORD(v6) = a2;
  v4 = (a4 & 1) != 0 && !BYTE4(WPP_MAIN_CB.Queue.Wcb.CurrentIrp);
  HIDWORD(v6) = v4 | HIDWORD(v6) & 0xFFFFFFFE;
  __writemsr(0x199u, v6);
  return 0LL;
}
