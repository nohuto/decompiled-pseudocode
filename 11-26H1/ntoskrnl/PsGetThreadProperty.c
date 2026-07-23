/*
 * XREFs of PsGetThreadProperty @ 0x140332950
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

PVOID __stdcall PsGetThreadProperty(PETHREAD Thread, ULONG_PTR Key, ULONG Flags)
{
  void *v3; // r12
  char v4; // r15
  volatile signed __int32 *v7; // r14
  unsigned __int8 CurrentIrql; // bp
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rdi
  struct _LIST_ENTRY *Blink; // rdi
  struct _LIST_ENTRY **p_Blink; // rsi
  unsigned __int8 v13; // bp
  struct _LIST_ENTRY *v14; // rax
  struct _LIST_ENTRY *v15; // rbx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0LL;
  v4 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0
    || Thread == KeGetCurrentPrcb()->IdleThread
    || KeGetCurrentIrql() < 2u
    && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(Thread[-1].Padding[2]) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Thread - 48) >> 8)] != PsThreadType
    || Thread == KeGetCurrentThread() && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
  {
    return 0LL;
  }
  v7 = (volatile signed __int32 *)&Thread[1].WaitBlockFill11[88];
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64(v7 + 4, 0LL) )
      KxWaitForSpinLockAndAcquire(v7 + 4);
  }
  else
  {
    KiAcquireSpinLockInstrumented(v7 + 4);
  }
  v9 = *(volatile signed __int32 **)v7;
  v10 = 0LL;
  while ( v9 != v7 )
  {
    if ( *((_QWORD *)v9 + 2) == Key )
    {
      v10 = v9;
      if ( v9 )
        ObfReferenceObjectWithTag(*((PVOID *)v9 + 3), 0x72507350u);
      break;
    }
    v9 = *(volatile signed __int32 **)v9;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v7 + 2, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v7 + 2, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v10 )
    return (PVOID)*((_QWORD *)v10 + 3);
  if ( (v4 & 1) == 0 )
  {
    Blink = Thread[1].WaitBlock[3].WaitListEntry.Blink;
    if ( Blink == (struct _LIST_ENTRY *)-3LL )
      Blink = (struct _LIST_ENTRY *)Thread->Process[1].Padding[3];
    if ( Blink
      && (KeGetCurrentIrql() >= 2u
       || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(Blink[-2].Blink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Blink - 48) >> 8)] == PsJobType) )
    {
      while ( 1 )
      {
        p_Blink = &Blink[94].Blink;
        v13 = KeGetCurrentIrql();
        if ( v13 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v13, 2LL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[95].Blink, 0LL) )
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&Blink[95].Blink);
        }
        else
        {
          KiAcquireSpinLockInstrumented((volatile signed __int32 *)&Blink[95].Blink);
        }
        v14 = *p_Blink;
        v15 = 0LL;
        while ( v14 != (struct _LIST_ENTRY *)p_Blink )
        {
          if ( v14[1].Flink == (struct _LIST_ENTRY *)Key )
          {
            v15 = v14;
            if ( v14 )
              ObfReferenceObjectWithTag(v14[1].Blink, 0x72507350u);
            break;
          }
          v14 = v14->Flink;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          _InterlockedAnd64((volatile signed __int64 *)&Blink[95].Blink, 0LL);
        else
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)&Blink[95].Blink, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
        __writecr8(v13);
        if ( v15 )
          return v15[1].Blink;
        Blink = Blink[81].Blink;
        if ( !Blink )
          return v3;
      }
    }
  }
  return v3;
}
