/*
 * XREFs of ExInterlockedPopEntryList @ 0x1406D49D0
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1403E16F0 (ExpAcquireSpinLockDisabled.c)
 *     ExpReleaseSpinLockDisabled @ 0x1403E2CF8 (ExpReleaseSpinLockDisabled.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPopEntryList(PSINGLE_LIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  char v4; // al
  struct _SINGLE_LIST_ENTRY *v5; // r8
  __int64 v6; // r9
  _SINGLE_LIST_ENTRY *Next; // rbx

  v4 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock);
  Next = ListHead->Next;
  if ( ListHead->Next )
  {
    v5 = Next->Next;
    ListHead->Next = Next->Next;
  }
  ExpReleaseSpinLockDisabled((volatile signed __int64 *)Lock, v4, (__int64)v5, v6);
  return Next;
}
