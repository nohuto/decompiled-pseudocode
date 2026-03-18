/*
 * XREFs of KiRcuFlushCompletedWorkerRoutine @ 0x1405F0100
 * Callers:
 *     <none>
 * Callees:
 *     KiRcuFlushCompleted @ 0x140503B7C (KiRcuFlushCompleted.c)
 */

__int64 KiRcuFlushCompletedWorkerRoutine()
{
  __int64 result; // rax

  do
  {
    _InterlockedAnd(&dword_140F24FA0, 0xFFFFFFFD);
    KiRcuFlushCompleted(1);
    result = (unsigned int)_InterlockedCompareExchange(&dword_140F24FA0, 0, 1);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
