/*
 * XREFs of KiPrepareReadyThreadForRescheduling @ 0x14022FB10
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x14022CBFC (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1405243B4 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiEnterDeferredReadyState @ 0x140230060 (KiEnterDeferredReadyState.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 */

__int64 __fastcall KiPrepareReadyThreadForRescheduling(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // edi
  __int64 result; // rax
  unsigned __int8 v7; // al
  __int16 v8; // cx
  unsigned __int64 v9; // rsi
  unsigned int v10; // edx
  unsigned __int64 v11; // rcx

  v4 = KiLockQuantumTarget;
  if ( KiSchedulerForegroundBoostDecayPolicy
    || (unsigned int)(a2 - 8) > 1
    || (unsigned int)(MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks) < *(_DWORD *)(a1 + 436) )
  {
    if ( (unsigned int)(a2 - 1) > 0xD || (unsigned int)(MEMORY[0xFFFFF78000000320] - 300) < *(_DWORD *)(a1 + 436) )
      goto LABEL_4;
    v7 = 15;
    v8 = 240;
  }
  else
  {
    v7 = 11;
    v4 = KiLockQuantumTarget * KiNormalPriorityBoostingPeriodMultiplier;
    v8 = 176;
  }
  v9 = *(_QWORD *)(a1 + 72);
  v10 = *(unsigned __int16 *)(a1 + 518);
  if ( (unsigned __int8)(v10 >> 4) < (unsigned int)v7 )
    *(_WORD *)(a1 + 518) = v10 ^ (v8 ^ v10) & 0xFF0;
  KiUpdateThreadPriority(0, v10, a1, v7, 0);
  v11 = *(_QWORD *)(a1 + 32);
  if ( v9 > v11 || v11 - v9 < v4 )
    *(_QWORD *)(a1 + 32) = v9 + v4;
LABEL_4:
  KiEnterDeferredReadyState(a1, a2, a3);
  result = *a3;
  *(_QWORD *)(a1 + 216) = *a3;
  *a3 = a1 + 216;
  return result;
}
