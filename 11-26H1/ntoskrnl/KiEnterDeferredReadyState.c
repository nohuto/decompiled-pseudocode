/*
 * XREFs of KiEnterDeferredReadyState @ 0x140230060
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14022FB10 (KiPrepareReadyThreadForRescheduling.c)
 *     KiScheduleThreadToRescheduleContext @ 0x14022FC30 (KiScheduleThreadToRescheduleContext.c)
 *     KiFastReadyThread @ 0x140230B78 (KiFastReadyThread.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiReadyOutSwappedThreads @ 0x14037D574 (KiReadyOutSwappedThreads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiEnterDeferredReadyState(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx

  result = *(unsigned __int8 *)(a1 + 388);
  if ( (_BYTE)result == 1 )
  {
    *(_DWORD *)(a1 + 116) |= 2u;
    *(_BYTE *)(a1 + 388) = 7;
  }
  else
  {
    if ( (_BYTE)result != 5 )
    {
LABEL_5:
      *(_BYTE *)(a1 + 388) = 7;
      return result;
    }
    result = 0xFFFFF78000000320uLL;
    v2 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436));
    if ( *(_BYTE *)(a1 + 391) )
    {
      *(_QWORD *)(a1 + 1000) += v2;
      goto LABEL_5;
    }
    *(_QWORD *)(a1 + 992) += v2;
    *(_BYTE *)(a1 + 388) = 7;
  }
  return result;
}
