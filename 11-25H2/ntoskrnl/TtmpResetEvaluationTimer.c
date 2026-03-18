/*
 * XREFs of TtmpResetEvaluationTimer @ 0x1407608C4
 * Callers:
 *     TtmpSetTerminalPendingCleanup @ 0x1407609A4 (TtmpSetTerminalPendingCleanup.c)
 *     TtmpUpdateTerminalState @ 0x140760BB0 (TtmpUpdateTerminalState.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 */

char __fastcall TtmpResetEvaluationTimer(char *Object, __int64 a2)
{
  char result; // al

  if ( a2 )
  {
    PsReferenceSiloContext(Object);
    result = KiSetTimerEx((__int64)(Object + 88), -a2, 0, 0, (__int64)(Object + 152));
  }
  else
  {
    result = KeCancelTimer((PKTIMER)(Object + 88));
  }
  if ( result )
    return ObfDereferenceObject(Object);
  return result;
}
