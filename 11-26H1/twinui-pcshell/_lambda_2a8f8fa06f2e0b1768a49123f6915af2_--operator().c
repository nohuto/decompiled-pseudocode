/*
 * XREFs of _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator() @ 0x1800CA22C
 * Callers:
 *     std::thread::_Invoke_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____0_ @ 0x1802C6460 (std--thread--_Invoke_std--tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____0_.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1800C8E88 (-IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UwpWindowLifecycleManager@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CA614 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UwpWindowLifecycleManager@@@details@wil@@.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800CA6B4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$GetActivationFactory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800CA6EC (--$GetActivationFactory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@@@wil.c)
 *     ??$GetActivationFactory@UIUniversalAppModelStatics@WindowManagement@ApplicationModel@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUniversalAppModelStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800CA790 (--$GetActivationFactory@UIUniversalAppModelStatics@WindowManagement@ApplicationModel@Internal@Wi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CShellOnWindowManagerIDK@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180123C30 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CShellOnWindowManagerIDK@@@details@wil@@Q.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1802AB224 (--$GetActivationFactory@UIUwpWindowLifecycleManagerStatics@UwpWindowLifecycleManagement@Shell@In.c)
 *     ?ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ @ 0x1802B797C (-ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ.c)
 *     ?CoInitializeEx@wil@@YA?AV?$unique_call@P6AXXZ$1?CoUninitialize@@YAXXZ$00@1@K@Z @ 0x1802BAB00 (-CoInitializeEx@wil@@YA-AV-$unique_call@P6AXXZ$1-CoUninitialize@@YAXXZ$00@1@K@Z.c)
 *     ??$query_to@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1802BC53C (--$query_to@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@@-$co.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator()(__int64 a1)
{
  HANDLE CurrentThread; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64); // rdi
  __int64 v12; // rbx
  int v13; // eax
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rcx
  bool v20; // bl
  __int64 v21; // rdx
  Windows::Internal::ApplicationModel::WindowManagement *v22; // rcx
  __int64 v23; // rdx
  Windows::Internal::Shell::UwpWindowLifecycleManagement *v24; // rcx
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, __int64); // rsi
  __int64 v27; // rdi
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 (__fastcall *v32)(__int64, __int64); // rdi
  __int64 v33; // rbx
  int v34; // eax
  void *v35; // rdx
  char v36; // al
  wil::details *v37; // rcx
  int v38; // eax
  int v39; // eax
  const void *v40; // rax
  void *v41; // rdx
  wil::details *v42; // rcx
  int v43[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v46; // [rsp+68h] [rbp+10h] BYREF
  __int64 v47; // [rsp+70h] [rbp+18h] BYREF
  __int64 v48; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = GetCurrentThread();
  SetThreadDescription(CurrentThread, L"WindowManager BAMO Thread Desktop");
  try
  {
    wil::CoInitializeEx(&v46);
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(v3 + 272);
    *(_QWORD *)(v3 + 272) = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = CoreUICreate(v3 + 272);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x49,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v5,
        v43[0]);
    v6 = *(_QWORD *)wil::GetActivationFactory<Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>(&v47);
    v7 = *(_QWORD *)(a1 + 16);
    v8 = *(_QWORD *)(v7 + 168);
    *(_QWORD *)(v7 + 168) = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v47 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    v9 = *(_QWORD *)(a1 + 16);
    v10 = *(_QWORD *)(v9 + 168);
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL);
    v12 = v9 + 176;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(v9 + 176));
    v13 = v11(v10, v12);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v13,
        v43[0]);
    v14 = (__int64 *)wil::GetActivationFactory<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelStatics>(&v47);
    v15 = *(_QWORD *)(a1 + 16);
    v16 = *v14;
    *v14 = 0LL;
    v17 = *(_QWORD *)(v15 + 48);
    *(_QWORD *)(v15 + 48) = v16;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v47 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    v18 = *(_QWORD *)(a1 + 16);
    v19 = *(_QWORD *)(v18 + 184);
    *(_QWORD *)(v18 + 184) = 0LL;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher,wil::err_exception_policy>::query_to<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher>(
      v18 + 176,
      v18 + 184);
    wil::GetActivationFactory<Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleManagerStatics>(&v48);
    LODWORD(v47) = 17;
    RtlGetDeviceFamilyInfoEnum(0LL, &v47, 0LL);
    v20 = (_DWORD)v47 == 16;
    LOBYTE(v21) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_UwpWindowLifecycleManager>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_UwpWindowLifecycleManager>::GetImpl'::`2'::impl,
      v21);
    if ( Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagerIDKEnabledForSKU(v22) )
    {
      if ( v20 )
      {
        LOBYTE(v23) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_CShellOnWindowManagerIDK>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_CShellOnWindowManagerIDK>::GetImpl'::`2'::impl,
          v23);
      }
      if ( Windows::Internal::Shell::UwpWindowLifecycleManagement::ShouldMoveUWLMIntoShellProcess(v24) )
      {
        v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 56LL))(v48);
        if ( v39 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x58,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v39,
            v43[0]);
      }
    }
    v25 = v48;
    v26 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v48 + 48LL);
    v27 = *(_QWORD *)(a1 + 16);
    v28 = *(_QWORD *)(v27 + 232);
    *(_QWORD *)(v27 + 232) = 0LL;
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    v29 = v26(v25, v27 + 232);
    if ( v29 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v29,
        v43[0]);
    v30 = *(_QWORD *)(a1 + 16);
    v31 = *(_QWORD *)(v30 + 232);
    v32 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 120LL);
    v33 = v30 + 240;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(v30 + 240));
    v34 = v32(v31, v33);
    if ( v34 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v34,
        v43[0]);
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    v36 = v46;
    v46 = 0;
    if ( v36 )
      CoUninitialize();
    if ( *(_QWORD *)a1 )
      v37 = **(wil::details ***)a1;
    else
      v37 = 0LL;
    wil::details::SetEvent(v37, v35);
  }
  catch ( ... )
  {
    v40 = (const void *)std::current_exception(v43);
    __ExceptionPtrAssign(*(void **)(a1 + 32), v40);
    __ExceptionPtrDestroy(v43);
    if ( *(_QWORD *)a1 )
      v42 = **(wil::details ***)a1;
    else
      v42 = 0LL;
    wil::details::SetEvent(v42, v41);
    return;
  }
  v38 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 272LL) + 232LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 272LL));
  if ( v38 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v38,
      v43[0]);
}
