/*
 * XREFs of ??1?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAA@XZ @ 0x1800809B8
 * Callers:
 *     ??1CAudioSessionManager@@QEAA@XZ @ 0x1800D1C44 (--1CAudioSessionManager@@QEAA@XZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@0@@Z @ 0x180042708 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNot.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::~CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)(a1 + 40);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>(
      v2,
      *(__int64 **)(a1 + 48));
    std::_Deallocate<16>(
      *(void **)(a1 + 40),
      (struct std::nothrow_t *)((*(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 40)) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)a1);
}
