/*
 * XREFs of ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180012520
 * Callers:
 *     ?OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18024A260 (-OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInt.c)
 * Callees:
 *     ?RegisterForPresentationEvents@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180012220 (-RegisterForPresentationEvents@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?CancelDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800123D4 (-CancelDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?SetViewImportance@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180012404 (-SetViewImportance@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?UndockedSearchAppExperienceManager_OnViewCreated@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1800124C0 (-UndockedSearchAppExperienceManager_OnViewCreated@SearchAppExperienceManagerTelemetry@@SAXXZ.c)
 *     ?CancelLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800124EC (-CancelLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?SetZBand@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800126F8 (-SetZBand@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?DisableActivationTimeoutPolicy@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800128C0 (-DisableActivationTimeoutPolicy@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180014364 (-BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?EnableNeverDehydratePolicy@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18001482C (-EnableNeverDehydratePolicy@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028AAA4 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_.c)
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028B08C (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18028C2FC (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returnc.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028CECC (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180295DEC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall UndockedSearchAppExperienceManager::OnViewCreated(
        UndockedSearchAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  char *v4; // r14
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rsi
  const char *v11; // r9
  __int64 result; // rax
  int v13[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v14[40]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v15[5]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v18; // [rsp+88h] [rbp+10h]

  v4 = (char *)this + 832;
  v5 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::ensure_data((char *)this + 832);
  *(_QWORD *)v13 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v14,
    (struct wil::details::IFailureCallback *)v13,
    0LL,
    1);
  v6 = *v5;
  v15[0] = v6;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 336));
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnViewCreated();
  try
  {
    v18 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
    if ( *((struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)this + 7) != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
      v7 = *((_QWORD *)this + 7);
      *((_QWORD *)this + 7) = a2;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = UndockedSearchAppExperienceManager::RegisterForPresentationEvents(this);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x78C,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v8,
        v13[0]);
    v9 = UndockedSearchAppExperienceManager::SetZBand(this);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x78F,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v9,
        v13[0]);
    UndockedSearchAppExperienceManager::EnableNeverDehydratePolicy(this);
    UndockedSearchAppExperienceManager::SetViewImportance(this);
    UndockedSearchAppExperienceManager::CancelDeferredSuspensionTimer(this);
    UndockedSearchAppExperienceManager::CancelLastResortSuspensionTimer(this);
    UndockedSearchAppExperienceManager::BoostPriority(this);
    UndockedSearchAppExperienceManager::DisableActivationTimeoutPolicy(this);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(v4) )
    {
      v10 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::ensure_data(v4);
      v17 = v10;
      if ( v10 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 336));
      tip2::details::shared_data<1,0,0>::begin_update(v10 + 8);
      *(_BYTE *)(v10 + 273) = 1;
      tip2::details::shared_data<1,0,0>::end_update(v10 + 8);
      wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::reset(&v17);
      wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>(&v17);
    }
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 16LL))(a2);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>(v15);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v14);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v17) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x7A3,
                     (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
                     v11);
    return (unsigned int)v17;
  }
  return result;
}
