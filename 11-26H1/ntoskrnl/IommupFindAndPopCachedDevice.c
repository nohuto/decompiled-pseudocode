/*
 * XREFs of IommupFindAndPopCachedDevice @ 0x14059FE34
 * Callers:
 *     IommuDomainAttachDevice @ 0x14059EB00 (IommuDomainAttachDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x14059ED10 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDeviceEx @ 0x14059F030 (IommuDomainDetachDeviceEx.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
