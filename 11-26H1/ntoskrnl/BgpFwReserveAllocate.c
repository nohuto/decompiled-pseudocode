/*
 * XREFs of BgpFwReserveAllocate @ 0x1403568DC
 * Callers:
 *     BgpFwAllocateMemory @ 0x140355EBC (BgpFwAllocateMemory.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1403586A0 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall BgpFwReserveAllocate(__int64 a1)
{
  unsigned __int64 v1; // rbx
  ULONG ClearBitsAndSet; // r8d
  volatile unsigned int ThreadTimerDelay; // eax
  __int64 result; // rax

  v1 = ((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 32;
  ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_140E64DC8, v1, HIDWORD(stru_140E3E928.QueuedScb));
  ThreadTimerDelay = stru_140E3E928.ThreadTimerDelay;
  if ( ClearBitsAndSet > stru_140E3E928.ThreadTimerDelay - 16 )
  {
    HIDWORD(stru_140E3E928.QueuedScb) = 0;
    ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_140E64DC8, v1, 0);
    ThreadTimerDelay = stru_140E3E928.ThreadTimerDelay;
  }
  if ( ClearBitsAndSet > ThreadTimerDelay - 16 )
    return 0LL;
  HIDWORD(stru_140E3E928.QueuedScb) = v1 + ClearBitsAndSet;
  result = ClearBitsAndSet + qword_140E62238 + 32;
  *(_DWORD *)(result - 24) = 1262700354;
  *(_QWORD *)(result - 16) = v1;
  *(_QWORD *)(result - 8) = 0LL;
  return result;
}
