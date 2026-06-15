/*
 * XREFs of ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x1800423E4
 * Callers:
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x180042210 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 * Callees:
 *     ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@_K@Z @ 0x180042560 (--$_Assign_counted_range@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotifi.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@0@@Z @ 0x180042708 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNot.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, LPCRITICAL_SECTION *))
{
  __int64 v4; // rbx
  const char *v5; // r9
  __int64 v6; // rdi
  struct _RTL_CRITICAL_SECTION **i; // rsi
  void (__fastcall *v8)(_QWORD, LPCRITICAL_SECTION *); // r15
  struct _RTL_CRITICAL_SECTION *v9; // rcx
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  LPCRITICAL_SECTION v14; // [rsp+60h] [rbp+8h] BYREF

  v11 = 0LL;
  v4 = 0LL;
  v12 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    v14 = lpCriticalSection;
    if ( &v11 != (__int128 *)&lpCriticalSection[1] )
    {
      std::vector<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>::_Assign_counted_range<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry *>(
        &v11,
        lpCriticalSection[1].DebugInfo,
        (__int64)(*(_QWORD *)&lpCriticalSection[1].LockCount - (unsigned __int64)lpCriticalSection[1].DebugInfo) >> 4);
      v4 = v12;
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    v6 = v11;
    for ( i = (struct _RTL_CRITICAL_SECTION **)v11; i != *((struct _RTL_CRITICAL_SECTION ***)&v11 + 1); i += 2 )
    {
      v8 = **a2;
      v9 = *i;
      v14 = v9;
      if ( v9 )
        ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v9->DebugInfo->CriticalSection)(v9);
      v8(a2, &v14);
    }
    if ( v6 )
    {
      std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>(
        v6,
        *((_QWORD *)&v11 + 1));
      std::_Deallocate<16>(v6, (v4 - v6) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v14) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xC7,
                     (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
                     v5);
    return (unsigned int)v14;
  }
  return result;
}
