/*
 * XREFs of _lambda_ff3af0abcf4100822182f80ac5bd56ae_::operator() @ 0x18045ED54
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae___::Run @ 0x180464530 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x180097CA8 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x180097E34 (-WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA-AVActivityThreadWatcher@wil@@PEBD.c)
 *     ??$emplace@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800987DC (--$emplace@AEBI@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x1800AF974 (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x1800AF9D0 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B90F0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180154950 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 *     ?InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1801989B0 (-InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z @ 0x1801B3830 (-SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1801C5F3C (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?stoul@std@@YAKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x180211738 (-stoul@std@@YAKAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 *     ?stoi@std@@YAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x1802236C0 (-stoi@std@@YAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 *     _anonymous_namespace_::GetViewTypeFromInputKind @ 0x180255E08 (_anonymous_namespace_--GetViewTypeFromInputKind.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180294234 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802CE754 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18045FB90 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_ff3af0abcf4100822182f80ac5bd56ae_::operator()(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // eax
  _QWORD *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  char *v7; // rcx
  wchar_t *v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  int v11; // ebx
  wchar_t *v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // eax
  int v15; // r15d
  RTL_SRWLOCK *v16; // rbx
  int ViewInfo; // esi
  __int64 v18; // rdx
  std::_Ref_count_base *v19; // rcx
  wchar_t *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rbx
  char v23; // bl
  __int64 v24; // rsi
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // r8
  int v29; // ebx
  int v30; // ecx
  int v31; // eax
  __int64 v32; // rbx
  std::_Ref_count_base *v33; // rsi
  int v34; // eax
  int v36; // [rsp+20h] [rbp-E0h]
  int ViewTypeFromInputKind; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+38h] [rbp-C8h] BYREF
  RTL_SRWLOCK *v39; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v40[2]; // [rsp+48h] [rbp-B8h] BYREF
  std::_Ref_count_base *v41[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT v42; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v43[80]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t String[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v45; // [rsp+E0h] [rbp-20h]
  __int128 v46; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v2 = 0;
  TouchKeyboardExperienceTelemetryLogger::WatchCurrentThread(
    (__int64)v43,
    (__int64)"OnInputAppPropertyChangedQueuedTask");
  v38 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)a1, &v38);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16F1,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( !v38 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    goto LABEL_47;
  }
  v4 = (_QWORD *)(a1 + 16);
  v5 = std::wstring::find((char *)(a1 + 16), L"ViewIdForInputKind:", 0LL);
  v6 = -1LL;
  v7 = (char *)(a1 + 16);
  if ( v5 != -1 )
  {
    *(_OWORD *)String = 0LL;
    v45 = 0LL;
    std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset((__int64)v7, 0x13uLL);
    if ( *(_QWORD *)(a1 + 32) != 18LL )
      v6 = *(_QWORD *)(a1 + 32) - 19LL;
    if ( *(_QWORD *)(a1 + 40) > 7uLL )
      v4 = (_QWORD *)*v4;
    std::wstring::_Construct<1,unsigned short const *>((char **)String, (char *)v4 + 38, v6);
    std::stoul(String, v8, v9);
    v11 = v10;
    std::wstring::_Tidy_deallocate((void **)String);
    ViewTypeFromInputKind = anonymous_namespace_::GetViewTypeFromInputKind(v11);
    std::stoul((wchar_t *)(a1 + 48), v12, v13);
    v15 = v14;
    if ( !v11 )
      TouchKeyboardExperienceManager::SetPrimaryViewId(*(TouchKeyboardExperienceManager **)(a1 + 8), v14);
    *(_OWORD *)v40 = 0LL;
    v16 = *(RTL_SRWLOCK **)(a1 + 8);
    if ( (int)TouchKeyboardExperienceManager::FindViewInfo(v16, v15, v40) < 0 )
    {
      ViewInfo = TouchKeyboardExperienceManager::InitializeViewInfosIfNeeded(v16 + 25);
      if ( ViewInfo < 0 )
      {
        v18 = 5904LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)ViewInfo);
        if ( v40[1] )
          std::_Ref_count_base::_Decref(v40[1]);
        v2 = ViewInfo;
        goto LABEL_47;
      }
      ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(v16, v15, v40);
      if ( ViewInfo < 0 )
      {
        v18 = 5905LL;
        goto LABEL_15;
      }
    }
    wil::AcquireSRWLockExclusive(&v39, v16 + 53);
    std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::emplace<unsigned int const &>(
      (_QWORD *)v40[0] + 5,
      (__int64)String,
      &ViewTypeFromInputKind);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v39);
    v19 = v40[1];
    goto LABEL_45;
  }
  if ( (unsigned int)std::wstring::compare(v7, (char *)L"KeyboardLayoutChangePending") )
    goto LABEL_47;
  v22 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v22 + 616) != 1 )
    goto LABEL_47;
  v23 = *(_BYTE *)(v22 + 944);
  std::stoi((wchar_t *)(a1 + 48), v20, v21);
  v24 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v24 + 944) = v25 == 1;
  if ( !v23 || *(_BYTE *)(v24 + 944) || *(_DWORD *)(v24 + 940) != 2 )
    goto LABEL_47;
  v26 = *(_QWORD *)(v24 + 816);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 96LL))(v26);
  *(_OWORD *)v41 = 0LL;
  v27 = TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)v24, *(_DWORD *)(v24 + 612), v41);
  v29 = v27;
  if ( v27 >= 0 )
  {
    v30 = 1;
    while ( _InterlockedExchange((volatile __int32 *)(v24 + 840), 1) )
    {
      while ( *(_DWORD *)(v24 + 840) )
      {
        v31 = v30;
        if ( !v30 )
          goto LABEL_37;
        do
        {
          _mm_pause();
          --v31;
        }
        while ( v31 );
        if ( v30 >= 64 )
          v30 = 64;
        else
LABEL_37:
          v30 *= 2;
      }
    }
    v46 = *(_OWORD *)(v24 + 844);
    _InterlockedExchange((volatile __int32 *)(v24 + 840), 0);
    v32 = v24;
    v36 = *(_DWORD *)(v24 + 948);
    LOBYTE(v28) = 1;
    v33 = v41[0];
    if ( (int)TouchKeyboardExperienceManager::AnimateInputViewForSizeOrModeChange(
                v32,
                v41[0],
                v28,
                &v46,
                v36,
                L"LayoutReadyAppProperty") < 0 )
    {
      v42 = *(struct tagRECT *)((char *)v33 + 120);
      v34 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
              (KeyboardHosting::TabTipAdapter **)v32,
              (const struct tagRECT *)*(unsigned int *)(v32 + 612),
              &v42,
              (struct tagRECT *)((char *)v33 + 136));
      if ( v34 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1727,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v34);
      _InterlockedExchange((volatile __int32 *)(v32 + 940), 0);
    }
    v19 = v41[1];
LABEL_45:
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    goto LABEL_47;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1723,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v27);
  if ( v41[1] )
    std::_Ref_count_base::_Decref(v41[1]);
  v2 = v29;
LABEL_47:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v43);
  return v2;
}
