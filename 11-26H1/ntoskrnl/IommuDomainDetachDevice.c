/*
 * XREFs of IommuDomainDetachDevice @ 0x1405A16E0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpIommuDeleteDevice @ 0x140589F30 (HalpIommuDeleteDevice.c)
 *     HalpIommuLeaveDmaDomain @ 0x1405905CC (HalpIommuLeaveDmaDomain.c)
 */

__int64 __fastcall IommuDomainDetachDevice(ULONG_PTR a1, struct _LIST_ENTRY *a2, int a3)
{
  char v3; // r14
  __int32 v4; // ebp
  __int64 v5; // rdi
  __int64 QuantumTarget; // rsi
  unsigned __int8 CurrentIrql; // bl
  struct _KTHREAD *i; // rax
  struct _LIST_ENTRY *v12; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  __int64 v19; // rcx

  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  QuantumTarget = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  KxAcquireSpinLock((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.InitialStack);
  for ( i = (struct _KTHREAD *)IommuInterfaceStateChangeCallbackPushLock.SListFaultAddress;
        i != (struct _KTHREAD *)&IommuInterfaceStateChangeCallbackPushLock.SListFaultAddress;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    v5 = (__int64)i;
    if ( i->InitialStack == (void *)a1 && i->Header.WaitListHead.Blink == a2 && LODWORD(i->SListFaultAddress) == a3 )
    {
      QuantumTarget = i->QuantumTarget;
      v3 = 1;
      v4 = _InterlockedExchange((volatile __int32 *)(QuantumTarget + 16), 1);
      v12 = *(struct _LIST_ENTRY **)&i->Header.Lock;
      if ( *(struct _KTHREAD **)(*(_QWORD *)&i->Header.Lock + 8LL) != i
        || (Flink = i->Header.WaitListHead.Flink, (struct _KTHREAD *)Flink->Flink != i) )
      {
        __fastfail(3u);
      }
      Flink->Flink = v12;
      v12->Blink = Flink;
      break;
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.InitialStack);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v3 )
  {
    v14 = HalpIommuLeaveDmaDomain(QuantumTarget, a1);
    if ( v14 >= 0 )
    {
      if ( v4 != 2 )
        v14 = HalpIommuDeleteDevice((__int64 *)QuantumTarget, v15, v17, v18);
      HalpMmAllocCtxFree(v16, *(_QWORD *)(v5 + 48));
      HalpMmAllocCtxFree(v19, v5);
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return (unsigned int)v14;
}
