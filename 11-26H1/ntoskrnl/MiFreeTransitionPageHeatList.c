/*
 * XREFs of MiFreeTransitionPageHeatList @ 0x140513450
 * Callers:
 *     MmCopyToCachedPage @ 0x1402D05F0 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
 *     MiCachedPagesMakeHot @ 0x1406F5980 (MiCachedPagesMakeHot.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeTransitionPageHeatList(PSLIST_ENTRY ListEntry)
{
  if ( LOWORD(stru_140E348F0.Alignment) >= 0x40u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(&stru_140E348F0, ListEntry);
}
