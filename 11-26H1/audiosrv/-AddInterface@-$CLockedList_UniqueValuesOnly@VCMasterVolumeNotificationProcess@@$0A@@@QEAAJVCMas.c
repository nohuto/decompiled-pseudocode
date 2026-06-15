/*
 * XREFs of ?AddInterface@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x18006920C
 * Callers:
 *     ?AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x1800691A0 (-AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 * Callees:
 *     ??$emplace_back@AEAVCMasterVolumeNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@std@@@std@@QEAAAEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@AEAVCMasterVolumeNotificationProcess@@$$QEAH@Z @ 0x18011A69C (--$emplace_back@AEAVCMasterVolumeNotificationProcess@@H@-$vector@ULockedListEntry@-$CLockedList_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        int a2)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF
  LPCRITICAL_SECTION v9; // [rsp+40h] [rbp+18h]

  v8 = a2;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    v9 = lpCriticalSection;
    DebugInfo = lpCriticalSection[1].DebugInfo;
    if ( DebugInfo == *(PRTL_CRITICAL_SECTION_DEBUG *)&lpCriticalSection[1].LockCount )
    {
LABEL_5:
      v7 = 1;
      std::vector<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry>>::emplace_back<CMasterVolumeNotificationProcess &,int>(
        &lpCriticalSection[1],
        &v8,
        &v7);
    }
    else
    {
      while ( *(_DWORD *)&DebugInfo->Type != v8 )
      {
        DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)((char *)DebugInfo + 8);
        if ( DebugInfo == *(PRTL_CRITICAL_SECTION_DEBUG *)&lpCriticalSection[1].LockCount )
          goto LABEL_5;
      }
      ++*(_DWORD *)(&DebugInfo->CreatorBackTraceIndex + 1);
    }
    LeaveCriticalSection(lpCriticalSection);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x85,
                           (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
                           v4);
  }
  return result;
}
