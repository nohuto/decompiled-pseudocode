/*
 * XREFs of MiFreeTransitionPageHeatList @ 0x14050CEC0
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiCachedPagesMakeHot @ 0x1406FA5F0 (MiCachedPagesMakeHot.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeTransitionPageHeatList(PSLIST_ENTRY ListEntry)
{
  if ( LOWORD(stru_140E34A70.Alignment) >= 0x40u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(&stru_140E34A70, ListEntry);
}
