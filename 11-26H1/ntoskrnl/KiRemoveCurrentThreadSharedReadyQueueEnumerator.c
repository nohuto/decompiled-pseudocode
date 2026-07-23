/*
 * XREFs of KiRemoveCurrentThreadSharedReadyQueueEnumerator @ 0x140231088
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiRemoveCurrentThreadSharedReadyQueueEnumerator(__int64 *a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rbx
  unsigned __int64 *v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 *v7; // rax
  __int64 result; // rax
  unsigned int v10; // esi
  __int64 v11; // rcx

  a1[2] = *(_QWORD *)(a1[2] + 8);
  v3 = *((unsigned __int8 *)a1 + 12);
  v4 = *a1;
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
  v5 = (unsigned __int64 *)(a2 + 216);
  v6 = *v5;
  if ( *(unsigned __int64 **)(*v5 + 8) != v5 || (v7 = (unsigned __int64 *)v5[1], (unsigned __int64 *)*v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  if ( v7 == (unsigned __int64 *)v6 )
    *(_DWORD *)(v4 + 8) &= ~(1 << v3);
  if ( (*(_DWORD *)(v4 + 12))-- == 1 )
  {
    v6 = ~*(_QWORD *)(v4 + 712);
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v4 + 720) + 392LL), v6);
  }
  *(_QWORD *)(v4 + 16) -= *(unsigned int *)(a2 + 1784);
  result = *(_QWORD *)(v4 + 776);
  if ( *(_QWORD *)(a2 + 1792) == result )
  {
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 768), 0LL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v6, v5, v3) )
        {
          HvlNotifyLongSpinWait(v10);
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
      v11 = *(unsigned __int8 *)(a2 + 1829)
          + 8 * (*(unsigned __int8 *)(a2 + 1830) + 2LL * *(unsigned __int8 *)(a2 + 1828));
      result = *(unsigned int *)(a2 + 1788);
      *(_QWORD *)(v4 + 8 * v11 + 864) -= result;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 768), 0LL);
  }
  return result;
}
