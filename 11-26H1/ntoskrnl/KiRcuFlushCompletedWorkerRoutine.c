/*
 * XREFs of KiRcuFlushCompletedWorkerRoutine @ 0x1405F2A70
 * Callers:
 *     <none>
 * Callees:
 *     KiRcuFlushCompleted @ 0x1404FD44C (KiRcuFlushCompleted.c)
 */

__int64 KiRcuFlushCompletedWorkerRoutine()
{
  __int64 result; // rax

  do
  {
    _InterlockedAnd((volatile signed __int32 *)&KiDpcCorralLock.UserAffinityPrimaryGroup, 0xFFFFFFFD);
    KiRcuFlushCompleted(1);
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&KiDpcCorralLock.UserAffinityPrimaryGroup,
                             0,
                             1);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
