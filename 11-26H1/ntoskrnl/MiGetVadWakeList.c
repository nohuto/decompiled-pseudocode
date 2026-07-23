/*
 * XREFs of MiGetVadWakeList @ 0x14043B9B0
 * Callers:
 *     MiFinishVadDeletion @ 0x14043B7B8 (MiFinishVadDeletion.c)
 *     MiReleaseVadEventBlocks @ 0x140A01D8C (MiReleaseVadEventBlocks.c)
 *     MiDeleteVadHotPatchState @ 0x140B57CFC (MiDeleteVadHotPatchState.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiGetVadWakeList(__int64 a1, __int64 a2)
{
  int *v2; // rbx
  unsigned __int64 v3; // rbp
  unsigned __int16 v4; // r12
  _QWORD *v6; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v8; // esi
  int i; // ecx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = (int *)(a1 + 64);
  v3 = 0LL;
  v4 = a2;
  v6 = 0LL;
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
    v8 = 0;
    if ( _interlockedbittestandset(v2, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire(v2, CurrentIrql);
    for ( i = *v2; (*v2 & 0xBFFFFFFF) != 0x80000000; i = *v2 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(v2, 0x40000000u);
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2, CurrentIrql);
  }
  v10 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v10 )
  {
    do
    {
      v11 = *(_QWORD *)v10;
      if ( (*(_WORD *)(v10 + 8) & v4) != 0 )
      {
        *(_QWORD *)v10 = v3;
        v3 = v10;
        if ( v6 )
          *v6 = v11;
        else
          *(_QWORD *)(a1 + 56) = v11 | *(_QWORD *)(a1 + 56) & 0xFLL;
      }
      else
      {
        v6 = (_QWORD *)v10;
      }
      v10 = v11;
    }
    while ( v11 );
  }
  if ( CurrentIrql == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      *v2 = 0;
      return v3;
    }
    else
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
      return v3;
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v2 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return v3;
  }
}
