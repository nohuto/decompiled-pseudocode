/*
 * XREFs of KiUnassignProcessorNumberFromPrcb @ 0x1405EFF78
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall KiUnassignProcessorNumberFromPrcb(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  struct _KTHREAD *result; // rax

  v1 = *(unsigned __int8 *)(a1 + 208);
  v2 = *(unsigned __int8 *)(a1 + 209);
  *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * *(unsigned int *)(a1 + 36)) = 0;
  result = KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread;
  *(&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.LockNV + 64 * (unsigned __int64)v1 + v2) = 0;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
