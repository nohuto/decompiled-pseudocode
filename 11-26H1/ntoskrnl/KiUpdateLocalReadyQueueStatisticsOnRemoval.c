/*
 * XREFs of KiUpdateLocalReadyQueueStatisticsOnRemoval @ 0x1403075C0
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiRemoveThreadFromReadyQueue @ 0x140232008 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140338300 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiUpdateLocalReadyQueueStatisticsOnRemoval(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned int v6; // esi
  __int64 v7; // rcx

  v2 = (*(_DWORD *)(a1 + 34420))-- == 1;
  if ( v2 && !*(_QWORD *)(a1 + 33840) )
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 192) + 384LL), ~*(_QWORD *)(a1 + 200));
  *(_QWORD *)(a1 + 34424) -= *(unsigned int *)(a2 + 1784);
  v4 = *(_QWORD *)(a1 + 36488);
  result = *(_QWORD *)(v4 + 776);
  if ( *(_QWORD *)(a2 + 1792) == result )
  {
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 768), 0LL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v4 + 768) );
    }
    result = *(_QWORD *)(v4 + 776);
    if ( *(_QWORD *)(a2 + 1792) == result )
    {
      --*(_DWORD *)(v4 + 784);
      *(_QWORD *)(v4 + 792) -= *(unsigned int *)(a2 + 1788);
      if ( !*(_DWORD *)(v4 + 784) )
        *(_QWORD *)(v4 + 1760) = 0LL;
      v7 = *(unsigned __int8 *)(a2 + 1829)
         + 8 * (*(unsigned __int8 *)(a2 + 1830) + 2LL * *(unsigned __int8 *)(a2 + 1828));
      result = *(unsigned int *)(a2 + 1788);
      *(_QWORD *)(v4 + 8 * v7 + 864) -= result;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 768), 0LL);
  }
  return result;
}
