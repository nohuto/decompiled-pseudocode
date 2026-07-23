/*
 * XREFs of KiSetForceIdleState @ 0x1404BEDD8
 * Callers:
 *     KiUpdateTime @ 0x14021F020 (KiUpdateTime.c)
 *     KeClockInterruptNotify @ 0x140223050 (KeClockInterruptNotify.c)
 *     KiResetForceIdle @ 0x1403389B4 (KiResetForceIdle.c)
 *     KiCheckAndRearmForceIdle @ 0x140338EAC (KiCheckAndRearmForceIdle.c)
 *     ?KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404BE710 (-KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     KeSetForceIdle @ 0x1404BEC18 (KeSetForceIdle.c)
 *     KeClearForceIdle @ 0x1404BECEC (KeClearForceIdle.c)
 *     ?KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404F75F0 (-KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x1404BEE04 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
