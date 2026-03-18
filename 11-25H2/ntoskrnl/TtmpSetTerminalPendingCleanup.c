/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x1407609A4
 * Callers:
 *     TtmiCreateTerminal @ 0x14075FB28 (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x140760770 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x14075A564 (TtmiScheduleSessionWorker.c)
 *     TtmpResetEvaluationTimer @ 0x1407608C4 (TtmpResetEvaluationTimer.c)
 */

char __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 1u;
  TtmiScheduleSessionWorker(a1, 2);
  return TtmpResetEvaluationTimer((char *)a2, 0LL);
}
