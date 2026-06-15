/*
 * XREFs of ??$emplace_back@AEAVCAudioSessionNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@QEAAAEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@AEAVCAudioSessionNotificationProcess@@$$QEAH@Z @ 0x1800D18A0
 * Callers:
 *     ?AddInterface@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x18006AA60 (-AddInterface@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAAJVCAud.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAVCAudioSessionNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAU23@AEAVCAudioSessionNotificationProcess@@$$QEAH@Z @ 0x1800D1600 (--$_Emplace_reallocate@AEAVCAudioSessionNotificationProcess@@H@-$vector@ULockedListEntry@-$CLock.c)
 *     ??$construct@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@AEAVCAudioSessionNotificationProcess@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@1@QEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@AEAVCAudioSessionNotificationProcess@@$$QEAH@Z @ 0x1800D1850 (--$construct@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@.c)
 */

char *__fastcall std::vector<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>::emplace_back<CAudioSessionNotificationProcess &,int>(
        __int64 *a1,
        __int64 *a2,
        int *a3)
{
  __int64 v4; // rdx
  __int64 v6; // rdx

  v4 = a1[1];
  if ( v4 == a1[2] )
    return std::vector<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>::_Emplace_reallocate<CAudioSessionNotificationProcess &,int>(
             a1,
             v4,
             (__int64)a2,
             (__int64)a3);
  std::_Default_allocator_traits<std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>::construct<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry,CAudioSessionNotificationProcess &,int>(
    (__int64)a1,
    v4,
    a2,
    a3);
  v6 = a1[1];
  a1[1] = v6 + 16;
  return (char *)v6;
}
