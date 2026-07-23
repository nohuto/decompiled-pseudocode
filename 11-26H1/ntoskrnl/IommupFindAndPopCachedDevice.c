/*
 * XREFs of IommupFindAndPopCachedDevice @ 0x1405A2624
 * Callers:
 *     IommuDomainAttachDevice @ 0x1405A12E0 (IommuDomainAttachDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x1405A14F0 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDeviceEx @ 0x1405A1820 (IommuDomainDetachDeviceEx.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall IommupFindAndPopCachedDevice(__int64 a1, struct _KTHREAD **a2)
{
  struct _KTHREAD *v2; // rbp
  char v4; // di
  unsigned __int8 CurrentIrql; // bl
  struct _KTHREAD *i; // rcx
  struct _LIST_ENTRY *v8; // rdx
  struct _LIST_ENTRY *Flink; // rax

  v2 = 0LL;
  v4 = 0;
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
    v2 = i;
    if ( i->QuantumTarget == a1 && i->InitialStack == *(void **)(a1 + 24) && !LODWORD(i->SListFaultAddress) )
    {
      v8 = *(struct _LIST_ENTRY **)&i->Header.Lock;
      v4 = 1;
      if ( *(struct _KTHREAD **)(*(_QWORD *)&i->Header.Lock + 8LL) != i
        || (Flink = i->Header.WaitListHead.Flink, (struct _KTHREAD *)Flink->Flink != i) )
      {
        __fastfail(3u);
      }
      Flink->Flink = v8;
      v8->Blink = Flink;
      break;
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.InitialStack);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v4 )
    *a2 = v2;
  return v4;
}
