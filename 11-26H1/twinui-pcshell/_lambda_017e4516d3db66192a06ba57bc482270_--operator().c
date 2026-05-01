/*
 * XREFs of _lambda_017e4516d3db66192a06ba57bc482270_::operator() @ 0x180222078
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___::RunTask @ 0x1805BCD40 (CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___--RunTask.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18007A6A8 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18027F904 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18027FB60 (--1-$com_ptr_t@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18027FBAC (-open_helper@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@AEAA.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@2@XZ @ 0x18027FC1C (-watch_errors@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802800AC (--0-$test_data_control@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHost.c)
 *     ??$query@UISnapAssistCallback@@@?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UISnapAssistCallback@@Uerr_exception_policy@wil@@@1@XZ @ 0x1802B8764 (--$query@UISnapAssistCallback@@@-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@Q.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$convert_from_abi@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA?AUIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x1805A5E90 (--$convert_from_abi@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA.c)
 *     ?SetRegions@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@3@@Z @ 0x1805A7970 (-SetRegions@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall lambda_017e4516d3db66192a06ba57bc482270_::operator()(unsigned int *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 *v8; // rax
  __m128 v9; // xmm3
  float v10; // xmm2_4
  const char *v11; // r9
  int v12[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v13; // [rsp+38h] [rbp-90h] BYREF
  __int64 v14; // [rsp+40h] [rbp-88h] BYREF
  struct IUnknown *v15; // [rsp+48h] [rbp-80h] BYREF
  __int64 v16; // [rsp+50h] [rbp-78h] BYREF
  int v17; // [rsp+58h] [rbp-70h]
  unsigned int *v18; // [rsp+60h] [rbp-68h]
  _BYTE v19[8]; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v20[40]; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v21[8]; // [rsp+98h] [rbp-30h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v18 = a1;
  tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::open_helper(a1 + 10);
  tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::watch_errors(
    a1 + 10,
    v19);
  wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::query<ISnapAssistCallback>(a1 + 4, &v15);
  try
  {
    v4 = *a2;
    v13 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v4 + 40))(
           a2,
           4LL,
           &GUID_b63cb15a_d1aa_4a39_bc06_78e9843bf5c4,
           &v13) >= 0 )
    {
      tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>(
        &v16,
        v21);
      *(_BYTE *)(v16 + 289) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v16);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
    }
    v5 = *a2;
    *(_QWORD *)v12 = 0LL;
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
        (int)v12);
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)v12 + 56LL))(*(_QWORD *)v12, v15);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
        (const char *)(unsigned int)v7,
        (int)v12);
    wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>(&v14, *(_QWORD *)v12);
    v8 = (__int64 *)*((_QWORD *)a1 + 3);
    v16 = *v8;
    v17 = (v8[1] - v16) >> 5;
    winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>::SetRegions(
      &v14,
      &v16);
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel(&v14);
    v9 = (__m128)_mm_loadu_si128((const __m128i *)(*((_QWORD *)a1 + 3) + 24LL));
    LODWORD(v22) = (int)v9.m128_f32[0];
    v10 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
    DWORD1(v22) = (int)v10;
    DWORD2(v22) = (int)(float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 170).m128_f32[0]);
    HIDWORD(v22) = (int)(float)(v10 + _mm_shuffle_ps(v9, v9, 255).m128_f32[0]);
    (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD))(**(_QWORD **)v12 + 48LL))(*(_QWORD *)v12, &v22, *a1);
    if ( v14 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x68,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
      v11);
    tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(v18 + 10);
    wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>((winrt *)&v13, v15);
    if ( v13 )
    {
      v22 = 0LL;
      *(_QWORD *)&v22 = 0LL;
      DWORD2(v22) = 0;
      v12[0] = 0;
      winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>::SnapAssistCompleted(
        &v13,
        v12,
        &v22);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  }
  if ( v15 )
    ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
  wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>(v21);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v20);
}
