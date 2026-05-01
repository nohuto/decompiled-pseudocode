/*
 * XREFs of ?TerminateApp@Win32AppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180575620
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _lambda_37bafbeb3dd0776f24b59a9d11710915_::_lambda_37bafbeb3dd0776f24b59a9d11710915_ @ 0x1803F5670 (_lambda_37bafbeb3dd0776f24b59a9d11710915_--_lambda_37bafbeb3dd0776f24b59a9d11710915_.c)
 *     ??$DebugInfo@AEAY0BK@$$CBG@AppUsageTelemetry@@SAXAEAY0BK@$$CBG@Z @ 0x180573808 (--$DebugInfo@AEAY0BK@$$CBG@AppUsageTelemetry@@SAXAEAY0BK@$$CBG@Z.c)
 *     ??$DebugInfo@AEAY0CM@$$CBG@AppUsageTelemetry@@SAXAEAY0CM@$$CBG@Z @ 0x18057396C (--$DebugInfo@AEAY0CM@$$CBG@AppUsageTelemetry@@SAXAEAY0CM@$$CBG@Z.c)
 *     ??$GetActivationFactory@UIThreadPoolTimerStatics@Threading@System@Windows@@@wil@@YA?AV?$com_ptr_t@UIThreadPoolTimerStatics@Threading@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180573B88 (--$GetActivationFactory@UIThreadPoolTimerStatics@Threading@System@Windows@@@wil@@YA-AV-$com_ptr_.c)
 *     wil::MakeAgileCallback_Windows::System::Threading::ITimerElapsedHandler__lambda_47c0868eeef6d2db2a8f89db045b20e4___ @ 0x180573CC8 (wil--MakeAgileCallback_Windows--System--Threading--ITimerElapsedHandler__lambda_47c0868eeef6d2db.c)
 *     ??$_Emplace@AEAPEBGU?$pair@HW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@PEAX@std@@_N@1@AEAPEBG$$QEAU?$pair@HW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@1@@Z @ 0x180573FA0 (--$_Emplace@AEAPEBGU-$pair@HW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@std@@@-$.c)
 *     ?TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180575934 (-TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall Win32AppStateManager::TerminateApp(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r8
  char v7; // bl
  const WCHAR *v8; // rcx
  __int64 *v9; // r14
  __int64 *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // rbx
  const WCHAR *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(__int64, __int64, __int64, __int64 *); // rdi
  int v20; // eax
  __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-60h]
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+38h] [rbp-48h] BYREF
  __int64 v25; // [rsp+40h] [rbp-40h] BYREF
  RTL_SRWLOCK *v26; // [rsp+48h] [rbp-38h] BYREF
  __int64 v27; // [rsp+50h] [rbp-30h] BYREF
  __int64 v28[3]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v24 = a2;
  wil::AcquireSRWLockExclusive(&v26, (RTL_SRWLOCK *)(a1 + 56));
  std::wstring::wstring((__int64)&v27, a2);
  LOBYTE(v6) = a3 == 1;
  v7 = Win32AppStateManager::TerminateAppOnce(a1, &v27, v6);
  std::wstring::_Tidy_deallocate(&v27);
  if ( v7 )
  {
    LODWORD(v23) = 1;
    HIDWORD(v23) = a3;
    std::_Tree<std::_Tmap_traits<std::wstring,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>,0>>::_Emplace<unsigned short const * &,std::pair<int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>(
      (__int64 *)(a1 + 80),
      (__int64)&v27,
      &v24,
      &v23);
    v9 = (__int64 *)(a1 + 152);
    if ( !*(_QWORD *)(a1 + 152) )
    {
      v10 = wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
              &v24,
              a1);
      v11 = lambda_37bafbeb3dd0776f24b59a9d11710915_::_lambda_37bafbeb3dd0776f24b59a9d11710915_(&v27, a1, v10);
      wil::MakeAgileCallback_Windows::System::Threading::ITimerElapsedHandler__lambda_47c0868eeef6d2db2a8f89db045b20e4___(
        &v23,
        (__int64)v11);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v28);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
      v14 = 10000000LL * *(unsigned int *)(a1 + 160);
      if ( !*(_QWORD *)(a1 + 144) )
      {
        v15 = wil::GetActivationFactory<Windows::System::Threading::IThreadPoolTimerStatics>(
                (const WCHAR *)&v25,
                v12,
                v13);
        v16 = *(_QWORD *)v15;
        *(_QWORD *)v15 = 0LL;
        v17 = *(_QWORD *)(a1 + 144);
        *(_QWORD *)(a1 + 144) = v16;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
      }
      v18 = *(_QWORD *)(a1 + 144);
      v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v18 + 48LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v9);
      v20 = v19(v18, v23, v14, v9);
      if ( v20 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2C2,
          (int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
          (const char *)(unsigned int)v20,
          v22);
      AppUsageTelemetry::DebugInfo<unsigned short const (&)[26]>((const WCHAR *)retaddr);
      v21 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
  }
  else
  {
    AppUsageTelemetry::DebugInfo<unsigned short const (&)[44]>(v8);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v26);
}
