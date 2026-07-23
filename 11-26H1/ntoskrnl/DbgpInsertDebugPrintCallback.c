/*
 * XREFs of DbgpInsertDebugPrintCallback @ 0x14061B108
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x140532200 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall DbgpInsertDebugPrintCallback(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  _SINGLE_LIST_ENTRY *IptSaveArea; // rax
  _SINGLE_LIST_ENTRY **v7; // rdi

  Pool2 = ExAllocatePool2(0x40uLL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)(Pool2 + 16) = a1;
  *(_DWORD *)Pool2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.StackBase + 1);
  IptSaveArea = (_SINGLE_LIST_ENTRY *)SshpBlockerCollections.IptSaveArea;
  v7 = (_SINGLE_LIST_ENTRY **)(v3 + 24);
  if ( *(struct _KTHREAD **)SshpBlockerCollections.IptSaveArea != (struct _KTHREAD *)&SshpBlockerCollections.SystemAffinityTokenListHead )
    __fastfail(3u);
  *v7 = &SshpBlockerCollections.SystemAffinityTokenListHead;
  v7[1] = IptSaveArea;
  IptSaveArea->Next = (struct _SINGLE_LIST_ENTRY *)v7;
  SshpBlockerCollections.IptSaveArea = v7;
  LOBYTE(RtlpBootStatHandleLock.StackBase) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.StackBase + 1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return 0LL;
}
