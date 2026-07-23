/*
 * XREFs of KiRemoveThreadFromSharedReadyQueue @ 0x140338180
 * Callers:
 *     ?KiAddThreadToSchedulingGroup@@YAXPEAU_KTHREAD@@PEAU_KSCHEDULING_GROUP@@EPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140239DC0 (-KiAddThreadToSchedulingGroup@@YAXPEAU_KTHREAD@@PEAU_KSCHEDULING_GROUP@@EPEAU_SINGLE_LIST_ENTRY@.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140338054 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiScanSharedReadyThreads @ 0x1403C93BC (KiScanSharedReadyThreads.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiRemoveThreadFromSharedReadyQueue(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 result; // rax
  unsigned int v10; // esi
  __int64 v11; // rcx

  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
  v5 = (_QWORD *)(a2 + 216);
  v6 = (_QWORD *)*v5;
  if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = v7;
  if ( v7 == v6 )
    *(_DWORD *)(a1 + 8) &= ~(1 << a3);
  if ( (*(_DWORD *)(a1 + 12))-- == 1 )
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 720) + 392LL), ~*(_QWORD *)(a1 + 712));
  *(_QWORD *)(a1 + 16) -= *(unsigned int *)(a2 + 1784);
  result = *(_QWORD *)(a1 + 776);
  if ( *(_QWORD *)(a2 + 1792) == result )
  {
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 768), 0LL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 768) );
    }
    result = *(_QWORD *)(a1 + 776);
    if ( *(_QWORD *)(a2 + 1792) == result )
    {
      --*(_DWORD *)(a1 + 784);
      *(_QWORD *)(a1 + 792) -= *(unsigned int *)(a2 + 1788);
      if ( !*(_DWORD *)(a1 + 784) )
        *(_QWORD *)(a1 + 1760) = 0LL;
      v11 = *(unsigned __int8 *)(a2 + 1829)
          + 8 * (*(unsigned __int8 *)(a2 + 1830) + 2LL * *(unsigned __int8 *)(a2 + 1828));
      result = *(unsigned int *)(a2 + 1788);
      *(_QWORD *)(a1 + 8 * v11 + 864) -= result;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 768), 0LL);
  }
  return result;
}
