/*
 * XREFs of ?AddInterface@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x18006AA60
 * Callers:
 *     ?AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x18006A9A0 (-AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$emplace_back@AEAVCAudioSessionNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@QEAAAEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@AEAVCAudioSessionNotificationProcess@@$$QEAH@Z @ 0x1800D18A0 (--$emplace_back@AEAVCAudioSessionNotificationProcess@@H@-$vector@ULockedListEntry@-$CLockedList_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 *a2)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rsi
  struct _RTL_CRITICAL_SECTION_DEBUG *v5; // r15
  __int64 v6; // r13
  int v7; // r12d
  const char *v8; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+68h] [rbp+10h]
  LPCRITICAL_SECTION v13; // [rsp+70h] [rbp+18h]

  v12 = a2;
  EnterCriticalSection(lpCriticalSection);
  v13 = lpCriticalSection;
  DebugInfo = lpCriticalSection[1].DebugInfo;
  v5 = *(struct _RTL_CRITICAL_SECTION_DEBUG **)&lpCriticalSection[1].LockCount;
  try
  {
    while ( DebugInfo != v5 )
    {
      v6 = *(_QWORD *)&DebugInfo->Type;
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 40LL))(*a2);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6) == v7 )
        break;
      DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)((char *)DebugInfo + 16);
    }
    if ( DebugInfo == *(PRTL_CRITICAL_SECTION_DEBUG *)&lpCriticalSection[1].LockCount )
    {
      v11 = 1;
      std::vector<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>::emplace_back<CAudioSessionNotificationProcess &,int>(
        &lpCriticalSection[1],
        a2,
        &v11);
    }
    else
    {
      ++LODWORD(DebugInfo->CriticalSection);
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a2);
    result = 0LL;
  }
  catch ( ... )
  {
    v11 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x85,
            (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
            v8);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v12);
    return v11;
  }
  return result;
}
