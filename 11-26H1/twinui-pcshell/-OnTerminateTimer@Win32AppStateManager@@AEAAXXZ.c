/*
 * XREFs of ?OnTerminateTimer@Win32AppStateManager@@AEAAXXZ @ 0x180575250
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::System::Threading::ITimerElapsedHandler::_)(Windows::System::Threading::IThreadPoolTimer__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::Threading::ITimerElapsedHandler_Microsoft::WRL::FtmBase___lambda_47c0868eeef6d2db2a8f89db045b20e4___1_Windows::System::Threading::IThreadPoolTimer___::Invoke @ 0x180575130 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--System--Threading_ea_180575130.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E204C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ??$DebugInfo@AEAY0BO@$$CBG@AppUsageTelemetry@@SAXAEAY0BO@$$CBG@Z @ 0x180573850 (--$DebugInfo@AEAY0BO@$$CBG@AppUsageTelemetry@@SAXAEAY0BO@$$CBG@Z.c)
 *     ??$DebugInfo@AEAY0DD@$$CBG@AppUsageTelemetry@@SAXAEAY0DD@$$CBG@Z @ 0x1805739FC (--$DebugInfo@AEAY0DD@$$CBG@AppUsageTelemetry@@SAXAEAY0DD@$$CBG@Z.c)
 *     ??$EnforcedAppCloseFailed@PEBGAEBI@AppUsageTelemetry@@SAX$$QEAPEBGAEBI@Z @ 0x180573A8C (--$EnforcedAppCloseFailed@PEBGAEBI@AppUsageTelemetry@@SAX$$QEAPEBGAEBI@Z.c)
 *     ??$erase@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@std@@$0A@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@1@V21@@Z @ 0x180574400 (--$erase@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$ch.c)
 *     ?TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180575934 (-TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32AppStateManager::OnTerminateTimer(Win32AppStateManager *this)
{
  const WCHAR *v2; // rcx
  __int64 v3; // r8
  char v4; // di
  __int64 v5; // rbx
  _QWORD *v6; // rcx
  unsigned int v7; // edx
  _QWORD *v8; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  AppUsageTelemetry::DebugInfo<unsigned short const (&)[30]>((const WCHAR *)this);
  wil::AcquireSRWLockExclusive(&v9, (RTL_SRWLOCK *)this + 7);
  v4 = 0;
  v5 = **((_QWORD **)this + 10);
LABEL_2:
  v8 = (_QWORD *)v5;
  while ( v5 != *((_QWORD *)this + 10) )
  {
    v6 = (_QWORD *)(v5 + 32);
    v7 = *(_DWORD *)(v5 + 64);
    *(_DWORD *)(v5 + 64) = v7 + 1;
    if ( v7 > *((_DWORD *)this + 41) )
    {
      v4 = 0;
      if ( *(_QWORD *)(v5 + 56) > 7uLL )
        v6 = (_QWORD *)*v6;
      v8 = v6;
      AppUsageTelemetry::EnforcedAppCloseFailed<unsigned short const *,unsigned int const &>(&v8);
LABEL_14:
      v5 = *std::_Tree<std::_Tmap_traits<std::wstring,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>,0>>::erase<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>>>,0>(
              (__int64)this + 80,
              &v10,
              v5);
      goto LABEL_2;
    }
    LOBYTE(v3) = v7 == *((_DWORD *)this + 41) || *(_DWORD *)(v5 + 68) == 1;
    v4 = Win32AppStateManager::TerminateAppOnce(this, v5 + 32, v3);
    if ( !v4 )
      goto LABEL_14;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v8);
    v5 = (__int64)v8;
  }
  if ( !v4 && *((_QWORD *)this + 19) )
  {
    AppUsageTelemetry::DebugInfo<unsigned short const (&)[51]>(v2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 64LL))(*((_QWORD *)this + 19));
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 19);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v9);
}
