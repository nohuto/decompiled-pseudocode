/*
 * XREFs of ??$_Copy_memmove_n@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@PEAU12@_K0@Z @ 0x18011A3A8
 * Callers:
 *     ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@_K@Z @ 0x18005030C (--$_Assign_counted_range@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCMasterVolumeNotifi.c)
 * Callees:
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove_n<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry *,CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry *>(
        void *Src,
        __int64 a2,
        void *a3)
{
  __int64 v4; // rbx

  v4 = 8 * a2;
  memmove_0(a3, Src, 8 * a2);
  return (__int64)a3 + v4;
}
