/*
 * XREFs of ??$emplace_back@AEAVCMasterVolumeNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@std@@@std@@QEAAAEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@AEAVCMasterVolumeNotificationProcess@@$$QEAH@Z @ 0x18011A69C
 * Callers:
 *     ?AddInterface@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x18006920C (-AddInterface@-$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJVCMas.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAVCMasterVolumeNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAU23@AEAVCMasterVolumeNotificationProcess@@$$QEAH@Z @ 0x18011A50C (--$_Emplace_reallocate@AEAVCMasterVolumeNotificationProcess@@H@-$vector@ULockedListEntry@-$CLock.c)
 */

_DWORD *__fastcall std::vector<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry>>::emplace_back<CMasterVolumeNotificationProcess &,int>(
        __int64 a1,
        int *a2,
        int *a3)
{
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rdx

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 == *(_QWORD *)(a1 + 16) )
    return std::vector<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry>>::_Emplace_reallocate<CMasterVolumeNotificationProcess &,int>(
             (__int64 **)a1,
             (__int64 *)v4,
             a2,
             a3);
  v5 = *a3;
  *(_DWORD *)v4 = *a2;
  *(_DWORD *)(v4 + 4) = v5;
  v6 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v6 + 8;
  return (_DWORD *)v6;
}
