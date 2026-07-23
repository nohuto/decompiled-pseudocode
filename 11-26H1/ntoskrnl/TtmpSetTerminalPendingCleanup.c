/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x1407F2420
 * Callers:
 *     TtmiCreateTerminal @ 0x1407F15A8 (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x1407F21F0 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x1407EC304 (TtmiScheduleSessionWorker.c)
 *     TtmpResetEvaluationTimer @ 0x1407F2344 (TtmpResetEvaluationTimer.c)
 */

char __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 1u;
  TtmiScheduleSessionWorker(a1, 2);
  return TtmpResetEvaluationTimer((char *)a2, 0LL);
}
