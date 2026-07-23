/*
 * XREFs of KiGlobalDeduplicateTriageDumpData @ 0x1405EAE90
 * Callers:
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405EAF24 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 * Callees:
 *     KiDeduplicateTriageDumpDataArrays @ 0x1405EA7F8 (KiDeduplicateTriageDumpDataArrays.c)
 */

void __fastcall KiGlobalDeduplicateTriageDumpData(_DWORD *a1)
{
  struct _KTHREAD *StackLimit; // rbx

  StackLimit = (struct _KTHREAD *)KiSupervisorXStateFeaturesLock.StackLimit;
  if ( KiSupervisorXStateFeaturesLock.StackLimit && KiSupervisorXStateFeaturesLock.StackBase )
  {
    while ( StackLimit != (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.StackLimit )
    {
      KiDeduplicateTriageDumpDataArrays(a1, (__int64)StackLimit);
      StackLimit = *(struct _KTHREAD **)&StackLimit->Header.Lock;
    }
  }
}
