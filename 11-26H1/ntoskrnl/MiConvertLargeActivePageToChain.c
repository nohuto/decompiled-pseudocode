/*
 * XREFs of MiConvertLargeActivePageToChain @ 0x1404035D0
 * Callers:
 *     MiGetLargePagesForChain @ 0x140283FC4 (MiGetLargePagesForChain.c)
 *     MiGetClusterPage @ 0x140508040 (MiGetClusterPage.c)
 *     MiPrefetchPreallocatePages @ 0x1406FBE0C (MiPrefetchPreallocatePages.c)
 *     MiProcessVaContiguityInformation @ 0x1407104C0 (MiProcessVaContiguityInformation.c)
 *     MiSoftFaultClusterTradeGetPage @ 0x140717154 (MiSoftFaultClusterTradeGetPage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiArePageContentsZero @ 0x140522A28 (MiArePageContentsZero.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiConvertLargeActivePageToChain(__int64 a1)
{
  int v2; // edx
  __int64 v3; // r8
  __int64 v4; // rbx
  ULONG_PTR v5; // rbp
  __int64 v6; // r12
  unsigned __int8 CurrentIrql; // r13
  _QWORD *v8; // r15
  _DWORD *v9; // r14
  unsigned int v10; // edi
  int v11; // r10d
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int8 v14; // di

  v2 = 3;
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 )
  {
    v2 = 3 - ((*(_DWORD *)(a1 + 36) >> 27) & 3);
    if ( v2 == 3 )
      v2 = 3;
  }
  v3 = MiPageSizes[v2];
  v4 = a1 + 48 * v3;
  v5 = v3 + (a1 + 0x220000000000LL) / 48;
  v6 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v8 = (_QWORD *)(v4 + 40);
  v9 = (_DWORD *)(v4 + 32);
  do
  {
    v4 -= 48LL;
    v9 -= 12;
    --v5;
    v8 -= 6;
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
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
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
    if ( (*v8 & 0x20000000000000LL) == 0 )
      *(_DWORD *)(v4 + 32) = *v9 & 0xF8FFFFFF;
    v11 = *(_DWORD *)(v4 + 32);
    if ( (v11 & 0x80000) != 0
      && MiCanPfnOriginalPteBeLost(v4)
      && (*(_QWORD *)(v4 + 16) & 8LL) != 0
      && (v11 & 0x100000) == 0 )
    {
      *(_QWORD *)(v4 + 16) &= ~8uLL;
    }
    *(_DWORD *)(v4 + 32) = v11 & 0xFFEFFFFF;
    if ( v4 == a1 )
    {
      if ( (*(_QWORD *)(v4 + 40) & 0x20000000000LL) != 0 )
        *(_QWORD *)(v4 + 40) &= ~0x20000000000uLL;
    }
    else
    {
      *(_DWORD *)(v4 + 32) = (*(unsigned __int8 *)(a1 + 34) << 16) ^ (*(_DWORD *)(v4 + 32) ^ (*(unsigned __int8 *)(a1 + 34) << 16)) & 0xFFF8FFFF;
      *(_QWORD *)(v4 + 16) = *(_QWORD *)(a1 + 16);
    }
    if ( (*(_QWORD *)(v4 + 40) & 0x20000000000LL) != 0 )
      *(_QWORD *)(v4 + 40) &= ~0x20000000000uLL;
    *(_QWORD *)(v4 + 40) &= ~0x10000000000uLL;
    *(_DWORD *)(v4 + 36) &= 0xE7FFFFFF;
    *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
    *(_DWORD *)(v4 + 32) = (*(_DWORD *)(v4 + 32) - 2) ^ ((*(_DWORD *)(v4 + 32) - 2) ^ *(_DWORD *)(v4 + 32)) & 0xFFFF0000;
    *(_QWORD *)v4 = 0LL;
    if ( (*(_QWORD *)(v4 + 16) & 0x3E0LL) == 0
      && (MiFlags & 0x80u) != 0LL
      && (++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40] & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(v5);
    }
    *(_QWORD *)v4 = v6;
    v6 = v4;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v5 & 0x3F) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v14 = KeGetCurrentIrql();
      if ( v14 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v13) = 2;
        KiRaiseIrqlProcessIrqlFlags(v14, v13);
      }
      CurrentIrql = v14;
    }
  }
  while ( v4 != a1 );
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
