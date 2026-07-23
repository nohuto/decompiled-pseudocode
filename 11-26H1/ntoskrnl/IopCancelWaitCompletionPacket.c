/*
 * XREFs of IopCancelWaitCompletionPacket @ 0x1403B45E4
 * Callers:
 *     IopCloseWaitCompletionPacket @ 0x1403B44F0 (IopCloseWaitCompletionPacket.c)
 *     NtCancelWaitCompletionPacket @ 0x140516120 (NtCancelWaitCompletionPacket.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     ?KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z @ 0x1403B46B8 (-KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z.c)
 *     ObGetAssociatedWaitObject @ 0x1403B4780 (ObGetAssociatedWaitObject.c)
 *     KeRemoveQueueEntry @ 0x1403B4810 (KeRemoveQueueEntry.c)
 */

char __fastcall IopCancelWaitCompletionPacket(PVOID Object, char a2, unsigned __int8 a3)
{
  void *v3; // r14
  unsigned __int64 v5; // rdi
  void *AssociatedWaitObject; // rax
  unsigned __int8 v8; // al
  void *v9; // rsi

  v3 = (void *)*((_QWORD *)Object + 10);
  v5 = a3;
  AssociatedWaitObject = (void *)ObGetAssociatedWaitObject(v3);
  v8 = KiDeregisterObjectWaitBlock(AssociatedWaitObject, (struct _KWAIT_BLOCK *)Object);
  v9 = (void *)*((_QWORD *)Object + 11);
  if ( !v8 && (!a2 || !(unsigned __int8)KeRemoveQueueEntry(*((_QWORD *)Object + 11), Object)) )
    return 0;
  *((_BYTE *)Object + 104) = 0;
  *((_QWORD *)Object + 11) = 0LL;
  KxReleaseSpinLock((PKSPIN_LOCK)Object + 12);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  __writecr8(v5);
  ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return 1;
}
