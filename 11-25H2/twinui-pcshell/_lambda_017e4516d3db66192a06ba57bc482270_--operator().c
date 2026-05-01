/*
 * XREFs of _lambda_017e4516d3db66192a06ba57bc482270_::operator() @ 0x180231BF8
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___::RunTask @ 0x180598AB0 (CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___--RunTask.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005D894 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180287BF8 (--1-$com_ptr_t@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ?open_and_watch_errors@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@2@XZ @ 0x180288B38 (-open_and_watch_errors@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18028CDA8 (--0-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@IEAA@.c)
 *     ??$query@UISnapAssistCallback@@@?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UISnapAssistCallback@@Uerr_exception_policy@wil@@@1@XZ @ 0x1802C1360 (--$query@UISnapAssistCallback@@@-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@Q.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C9254 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$convert_from_abi@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA?AUIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x1805821B4 (--$convert_from_abi@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA.c)
 *     ?SetRegions@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@3@@Z @ 0x180583B30 (-SetRegions@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall lambda_017e4516d3db66192a06ba57bc482270_::operator()(unsigned int *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 *v8; // rdi
  __int64 v9; // rcx
  __m128 v10; // xmm3
  float v11; // xmm2_4
  const char *v12; // r9
  int v13[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v14; // [rsp+38h] [rbp-90h] BYREF
  __int64 v15; // [rsp+40h] [rbp-88h] BYREF
  struct IUnknown *v16; // [rsp+48h] [rbp-80h] BYREF
  __int64 v17; // [rsp+50h] [rbp-78h] BYREF
  int v18; // [rsp+58h] [rbp-70h]
  unsigned int *v19; // [rsp+60h] [rbp-68h]
  _BYTE v20[8]; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v21[40]; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v22[8]; // [rsp+98h] [rbp-30h] BYREF
  __int128 v23; // [rsp+A0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v19 = a1;
  tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::open_and_watch_errors(
    a1 + 10,
    v20);
  wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::query<ISnapAssistCallback>(a1 + 4, &v16);
  try
  {
    v4 = *a2;
    v14 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v4 + 40))(
           a2,
           4LL,
           &GUID_b63cb15a_d1aa_4a39_bc06_78e9843bf5c4,
           &v14) >= 0 )
    {
      tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(
        &v17,
        v22);
      *(_BYTE *)(v17 + 281) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v17);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 40LL))(v14);
    }
    v5 = *a2;
    *(_QWORD *)v13 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, GUID *))(v5 + 32))(
           a2,
           4LL,
           *((_QWORD *)a1 + 1),
           &GUID_b63cb15a_d1aa_4a39_bc06_78e9843bf5c4);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x59,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
        (const char *)(unsigned int)v6,
        (int)v13);
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)v13 + 56LL))(*(_QWORD *)v13, v16);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
        (const char *)(unsigned int)v7,
        (int)v13);
    wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>(&v15, *(_QWORD *)v13);
    v8 = (__int64 *)*((_QWORD *)a1 + 3);
    v9 = (v8[1] - *v8) >> 5;
    v17 = *v8;
    v18 = v9;
    winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>::SetRegions(
      &v15,
      &v17);
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel(&v15);
    v10 = (__m128)_mm_loadu_si128((const __m128i *)(v8 + 3));
    v11 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
    LODWORD(v23) = (int)v10.m128_f32[0];
    DWORD1(v23) = (int)v11;
    DWORD2(v23) = (int)(float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 170).m128_f32[0]);
    HIDWORD(v23) = (int)(float)(v11 + _mm_shuffle_ps(v10, v10, 255).m128_f32[0]);
    (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD))(**(_QWORD **)v13 + 48LL))(*(_QWORD *)v13, &v23, *a1);
    if ( v15 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v15);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x68,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
      v12);
    tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(v19 + 10);
    wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>((winrt *)&v14, v16);
    if ( v14 )
    {
      v23 = 0LL;
      *(_QWORD *)&v23 = 0LL;
      DWORD2(v23) = 0;
      v13[0] = 0;
      winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>::SnapAssistCompleted(
        &v14,
        v13,
        &v23);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  }
  if ( v16 )
    ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
  wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>(v22);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v21);
}
