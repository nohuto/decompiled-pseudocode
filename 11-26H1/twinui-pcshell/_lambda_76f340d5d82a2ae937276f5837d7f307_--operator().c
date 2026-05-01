/*
 * XREFs of _lambda_76f340d5d82a2ae937276f5837d7f307_::operator() @ 0x18046A598
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___::Run @ 0x1804701A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x1800304D8 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x180033BDC (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z @ 0x1800BEFA8 (-SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C34B4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x180140BA4 (-WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA-AVActivityThreadWatcher@wil@@PEBD.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1801451A4 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ??$emplace@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEBI@Z @ 0x180145B94 (--$emplace@AEBI@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ?InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180191A30 (-InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x180201B54 (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 *     ?stoul@std@@YAKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x180203DD8 (-stoul@std@@YAKAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 *     ?stoi@std@@YAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x180214ABC (-stoi@std@@YAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 *     _anonymous_namespace_::GetViewTypeFromInputKind @ 0x18024A8C4 (_anonymous_namespace_--GetViewTypeFromInputKind.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x18028B4FC (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802C5D9C (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18046BEF0 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_76f340d5d82a2ae937276f5837d7f307_::operator()(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // eax
  _QWORD *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  __int64 v7; // rcx
  wchar_t *v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  int v11; // ebx
  wchar_t *v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // eax
  int v15; // r14d
  int v16; // eax
  RTL_SRWLOCK *v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  int v20; // eax
  wchar_t *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rbx
  char v24; // bl
  int v25; // eax
  __int64 v26; // rcx
  int ViewInfo; // eax
  __int64 v28; // r8
  __int64 v29; // rcx
  int v30; // edx
  int v31; // eax
  std::_Ref_count_base *v32; // rbx
  __int64 v33; // rcx
  int v34; // eax
  unsigned __int8 v36[8]; // [rsp+38h] [rbp-69h] BYREF
  std::_Ref_count_base *v37[2]; // [rsp+40h] [rbp-61h] BYREF
  __int64 v38; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v39[80]; // [rsp+58h] [rbp-49h] BYREF
  __int128 v40; // [rsp+A8h] [rbp+7h] BYREF
  wchar_t String[8]; // [rsp+B8h] [rbp+17h] BYREF
  __int128 v42; // [rsp+C8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v2 = 0;
  TouchKeyboardExperienceTelemetryLogger::WatchCurrentThread(
    (__int64)v39,
    (__int64)"OnInputAppPropertyChangedQueuedTask");
  v38 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)a1, &v38);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16AE,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( !v38 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    goto LABEL_47;
  }
  v4 = (_QWORD *)(a1 + 16);
  v5 = std::wstring::find(a1 + 16, (__int64)L"ViewIdForInputKind:");
  v6 = -1LL;
  v7 = a1 + 16;
  if ( v5 == -1 )
  {
    LOBYTE(v20) = std::wstring::compare(v7, (__int64)L"KeyboardLayoutChangePending");
    if ( v20 )
      goto LABEL_47;
    v23 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(v23 + 616) != 1 )
      goto LABEL_47;
    v24 = *(_BYTE *)(v23 + 944);
    std::stoi((wchar_t *)(a1 + 48), v21, v22);
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 944LL) = v25 == 1;
    if ( !v24 || *(_BYTE *)(*(_QWORD *)(a1 + 8) + 944LL) || *(_DWORD *)(*(_QWORD *)(a1 + 8) + 940LL) != 2 )
      goto LABEL_47;
    v26 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 816LL);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 96LL))(v26);
    *(_OWORD *)v37 = 0LL;
    ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(
                 *(RTL_SRWLOCK **)(a1 + 8),
                 *(_DWORD *)(*(_QWORD *)(a1 + 8) + 612LL),
                 v37);
    v18 = ViewInfo;
    if ( ViewInfo >= 0 )
    {
      v29 = *(_QWORD *)(a1 + 8) + 840LL;
      v30 = 1;
      while ( _InterlockedExchange((volatile __int32 *)v29, 1) )
      {
        while ( *(_DWORD *)v29 )
        {
          v31 = v30;
          if ( !v30 )
            goto LABEL_38;
          do
          {
            _mm_pause();
            --v31;
          }
          while ( v31 );
          if ( v30 >= 64 )
            v30 = 64;
          else
LABEL_38:
            v30 *= 2;
        }
      }
      v40 = *(_OWORD *)(v29 + 4);
      *(_DWORD *)v29 = 0;
      LOBYTE(v28) = 1;
      v32 = v37[0];
      if ( (int)TouchKeyboardExperienceManager::AnimateInputViewForSizeOrModeChange(
                  *(_QWORD *)(a1 + 8),
                  v37[0],
                  v28,
                  &v40,
                  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 948LL),
                  L"LayoutReadyAppProperty") < 0 )
      {
        v33 = *(_QWORD *)(a1 + 8);
        *(_OWORD *)String = *(_OWORD *)((char *)v32 + 120);
        v34 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
                (KeyboardHosting::TabTipAdapter **)v33,
                (const struct tagRECT *)*(unsigned int *)(v33 + 612),
                (struct tagRECT *)String,
                (struct tagRECT *)((char *)v32 + 136));
        if ( v34 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x16E4,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v34);
        _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8) + 940LL), 0);
      }
      goto LABEL_45;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16E0,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
  }
  else
  {
    *(_OWORD *)String = 0LL;
    v42 = 0LL;
    std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset(v7, 0x13uLL);
    if ( *(_QWORD *)(a1 + 32) != 18LL )
      v6 = *(_QWORD *)(a1 + 32) - 19LL;
    if ( *(_QWORD *)(a1 + 40) > 7uLL )
      v4 = (_QWORD *)*v4;
    std::wstring::_Construct<1,unsigned short const *>((char **)String, (char *)v4 + 38, v6);
    std::stoul(String, v8, v9);
    v11 = v10;
    std::wstring::_Tidy_deallocate(String);
    *(_DWORD *)v36 = anonymous_namespace_::GetViewTypeFromInputKind(v11);
    std::stoul((wchar_t *)(a1 + 48), v12, v13);
    v15 = v14;
    if ( !v11 )
      TouchKeyboardExperienceManager::SetPrimaryViewId(*(TouchKeyboardExperienceManager **)(a1 + 8), v14);
    *(_OWORD *)v37 = 0LL;
    v16 = TouchKeyboardExperienceManager::FindViewInfo(*(RTL_SRWLOCK **)(a1 + 8), v15, v37);
    v17 = *(RTL_SRWLOCK **)(a1 + 8);
    if ( v16 >= 0 )
    {
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v40, v17 + 53);
      std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::emplace<unsigned int const &>(
        (_QWORD *)v37[0] + 5,
        (__int64)String,
        v36);
LABEL_23:
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((RTL_SRWLOCK **)&v40);
LABEL_45:
      if ( v37[1] )
        std::_Ref_count_base::_Decref(v37[1]);
      goto LABEL_47;
    }
    v18 = TouchKeyboardExperienceManager::InitializeViewInfosIfNeeded(v17 + 25);
    if ( v18 >= 0 )
    {
      v18 = TouchKeyboardExperienceManager::FindViewInfo(*(RTL_SRWLOCK **)(a1 + 8), v15, v37);
      if ( v18 >= 0 )
      {
        wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v40, (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 424LL));
        std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::emplace<unsigned int const &>(
          (_QWORD *)v37[0] + 5,
          (__int64)String,
          v36);
        goto LABEL_23;
      }
      v19 = 5838LL;
    }
    else
    {
      v19 = 5837LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v18);
  }
  if ( v37[1] )
    std::_Ref_count_base::_Decref(v37[1]);
  v2 = v18;
LABEL_47:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v39);
  return v2;
}
