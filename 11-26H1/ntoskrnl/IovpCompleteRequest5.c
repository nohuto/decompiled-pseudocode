/*
 * XREFs of IovpCompleteRequest5 @ 0x140C45908
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140C45570 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140C39D70 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpSessionDataDereference @ 0x140C3A558 (IovpSessionDataDereference.c)
 */

void __fastcall IovpCompleteRequest5(__int64 a1)
{
  struct _SLIST_ENTRY *v1; // rdi
  __int64 v2; // rbx

  v1 = *(struct _SLIST_ENTRY **)a1;
  if ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(v2 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 8));
    IovpSessionDataDereference(v1);
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 20));
    VfIrpDatabaseEntryReleaseLock(v2);
  }
}
