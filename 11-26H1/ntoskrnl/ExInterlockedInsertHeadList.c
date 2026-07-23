/*
 * XREFs of ExInterlockedInsertHeadList @ 0x1403E15C0
 * Callers:
 *     CcCanIWrite @ 0x1403854B0 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x1403E3400 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x140C2BF88 (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x140C2D4FC (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x140C2DC70 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140C2DD00 (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1403E16F0 (ExpAcquireSpinLockDisabled.c)
 *     ExpReleaseSpinLockDisabled @ 0x1403E2CF8 (ExpReleaseSpinLockDisabled.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertHeadList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // al
  __int64 v7; // rdx
  struct _LIST_ENTRY *Flink; // rbx

  v6 = ExpAcquireSpinLockDisabled(Lock);
  Flink = ListHead->Flink;
  if ( ListHead->Flink->Blink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = Flink;
  LOBYTE(v7) = v6;
  ListEntry->Blink = ListHead;
  Flink->Blink = ListEntry;
  ListHead->Flink = ListEntry;
  ExpReleaseSpinLockDisabled(Lock, v7);
  if ( Flink == ListHead )
    return 0LL;
  return Flink;
}
