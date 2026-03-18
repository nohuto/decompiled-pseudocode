/*
 * XREFs of KiSetForceIdleState @ 0x1404C5428
 * Callers:
 *     KiUpdateTime @ 0x14021D690 (KiUpdateTime.c)
 *     KeClockInterruptNotify @ 0x1402216C0 (KeClockInterruptNotify.c)
 *     KiResetForceIdle @ 0x140336934 (KiResetForceIdle.c)
 *     KiCheckAndRearmForceIdle @ 0x140336E2C (KiCheckAndRearmForceIdle.c)
 *     ?KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404C4D60 (-KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     KeSetForceIdle @ 0x1404C5268 (KeSetForceIdle.c)
 *     KeClearForceIdle @ 0x1404C533C (KeClearForceIdle.c)
 *     ?KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404FE0B0 (-KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x1404C5454 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
