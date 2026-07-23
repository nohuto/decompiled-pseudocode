/*
 * XREFs of KeQueryBasePriorityThread @ 0x14029B4E0
 * Callers:
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQueryBasePriorityThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned __int8 CurrentIrql; // bp
  signed __int32 v6; // eax
  __int64 v7; // rcx
  signed __int32 v8; // ett
  unsigned int v9; // esi
  unsigned int v10; // esi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 544);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw((const void *)(v3 + 64));
    v6 = *(_DWORD *)(v3 + 64) & 0x7FFFFFFF;
    while ( 1 )
    {
      v7 = (unsigned int)(v6 + 1);
      v8 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 64), v7, v6);
      if ( v8 == v6 )
        break;
      if ( v6 < 0 )
      {
        LOBYTE(a2) = -1;
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)(v3 + 64), a2, a3);
        break;
      }
    }
  }
  else
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v3 + 64, a2);
  }
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v7, a2, a3) )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  v10 = *(char *)(a1 + 563) - *(char *)(v3 + 144);
  if ( *(_BYTE *)(a1 + 645) )
    v10 = 16 * *(char *)(a1 + 645);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd((volatile signed __int32 *)(v3 + 64), 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 64));
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v3 + 64, retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v10;
}
