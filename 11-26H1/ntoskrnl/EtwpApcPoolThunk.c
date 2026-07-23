/*
 * XREFs of EtwpApcPoolThunk @ 0x14043FEF0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall EtwpApcPoolThunk(_SLIST_ENTRY *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r12
  _SLIST_ENTRY *Next; // rsi
  __int64 Next_low; // rdx
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // r9
  signed __int64 *v11; // r8
  signed __int64 v12; // rdx
  signed __int64 v13; // rax
  unsigned __int64 v14; // rdx
  signed __int32 v16[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+20h] [rbp-38h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  Next = a1[8].Next;
  *a2 = 0LL;
  _InterlockedOr(v16, 0);
  Next_low = LODWORD(Next->Next[20].Next);
  if ( !(_DWORD)Next_low )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(Next_low) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, Next_low);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&Next->Next + 2, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&Next->Next + 2);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&Next->Next + 2);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)&Next->Next + 1, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&Next->Next + 1, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  v17 = a5;
  guard_dispatch_icall_no_overrides(Next, CurrentThread);
  _InterlockedDecrement((volatile signed __int32 *)&Next[11]);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)&Next[2], a1 + 7);
  v10 = *((_QWORD *)&Next->Next[85].Next[44].Next->Next + (__int64)Next->Next->Next);
  v11 = (signed __int64 *)(*(_QWORD *)v10 + *(_DWORD *)(v10 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v10 + 20)));
  _m_prefetchw(v11);
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *v11;
      if ( (*v11 & 1) != 0 )
        break;
      v13 = _InterlockedCompareExchange64(v11, v12 - 2, v12);
      if ( v12 == v13 )
        return v13;
    }
    if ( v12 != 1 )
      break;
    v11 = *(signed __int64 **)v10;
  }
  v14 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v13 == 1 )
    LODWORD(v13) = KeSetEvent((PRKEVENT)(v14 + 8), 0, 0);
  return v13;
}
