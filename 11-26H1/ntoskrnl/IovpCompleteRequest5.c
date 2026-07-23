/*
 * XREFs of IovpCompleteRequest5 @ 0x140C4B918
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140C4B580 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140C3FD80 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpSessionDataDereference @ 0x140C40568 (IovpSessionDataDereference.c)
 */

void __fastcall IovpCompleteRequest5(__int64 a1)
{
  _SLIST_ENTRY *v1; // rdi
  __int64 v2; // rbx

  v1 = *(_SLIST_ENTRY **)a1;
  if ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(v2 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 8));
    IovpSessionDataDereference(v1);
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 20));
    VfIrpDatabaseEntryReleaseLock(v2);
  }
}
