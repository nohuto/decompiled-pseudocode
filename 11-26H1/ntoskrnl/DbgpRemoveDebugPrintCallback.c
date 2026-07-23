/*
 * XREFs of DbgpRemoveDebugPrintCallback @ 0x14061B1EC
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x140532200 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgpRemoveDebugPrintCallback(struct _SINGLE_LIST_ENTRY *a1)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v3; // ebx
  struct _SINGLE_LIST_ENTRY *i; // rsi
  struct _EX_RUNDOWN_REF *v5; // r14
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  struct _SINGLE_LIST_ENTRY *v7; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  v3 = 0;
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.StackBase + 1);
  for ( i = SshpBlockerCollections.SystemAffinityTokenListHead.Next;
        i != &SshpBlockerCollections.SystemAffinityTokenListHead;
        i = i->Next )
  {
    v5 = (struct _EX_RUNDOWN_REF *)&i[-3];
    if ( i[-1].Next == a1 )
    {
      _m_prefetchw(v5);
      if ( (_InterlockedOr((volatile signed __int32 *)v5, 1u) & 1) == 0 )
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.StackBase + 1);
        ExWaitForRundownProtectionRelease(v5 + 1);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.StackBase + 1);
        Next = i->Next;
        if ( i->Next[1].Next != i || (v7 = i[1].Next, v7->Next != i) )
          __fastfail(3u);
        v7->Next = Next;
        Next[1].Next = v7;
        if ( v7 == Next )
          LOBYTE(RtlpBootStatHandleLock.StackBase) = 0;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.StackBase + 1);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        ExFreePoolWithTag(&i[-3], 0);
        return v3;
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.StackBase + 1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return (unsigned int)-1073741275;
}
