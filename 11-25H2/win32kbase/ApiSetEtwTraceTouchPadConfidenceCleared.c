/*
 * XREFs of ApiSetEtwTraceTouchPadConfidenceCleared @ 0x1401970E4
 * Callers:
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1400F2A14 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 * Callees:
 *     EtwTraceTouchPadConfidenceCleared @ 0x14014DA60 (EtwTraceTouchPadConfidenceCleared.c)
 */

__int64 __fastcall ApiSetEtwTraceTouchPadConfidenceCleared(int a1, int a2, int a3)
{
  return EtwTraceTouchPadConfidenceCleared(a1, a2, a3);
}
