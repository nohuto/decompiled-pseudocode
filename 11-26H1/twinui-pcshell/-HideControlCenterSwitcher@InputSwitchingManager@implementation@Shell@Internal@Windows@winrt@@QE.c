/*
 * XREFs of ?HideControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180639698
 * Callers:
 *     ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ @ 0x180639208 (--R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?front@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAUInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@XZ @ 0x1800CC188 (-front@-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$allocat.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InputSwitchTrace@AEAY0BD@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BD@$$CBG@Z @ 0x1806383CC (--$InputSwitchTrace@AEAY0BD@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BD@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0BK@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BK@$$CBG@Z @ 0x180638454 (--$InputSwitchTrace@AEAY0BK@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BK@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0M@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0M@$$CBG@Z @ 0x18063849C (--$InputSwitchTrace@AEAY0M@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0M@$$CBG@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063907C (--1-$test_data_control@V-$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@@1@XZ @ 0x180639190 (--C-$tip_test@V-$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::HideControlCenterSwitcher(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  const WCHAR *v4; // rcx
  _DWORD *v5; // rax
  __int64 v6; // rdi
  bool v7; // bl
  int v8; // eax
  _DWORD *v10; // rax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v13; // [rsp+30h] [rbp+8h] BYREF
  void *v14; // [rsp+38h] [rbp+10h] BYREF

  InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[12]>(L"Trying Hide");
  v2 = *((_QWORD *)this + 23);
  if ( !v2 || !*((_QWORD *)this + 22) )
  {
    if ( *((_QWORD *)this + 21) )
    {
      v10 = (_DWORD *)std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::front((_QWORD *)this + 17);
      if ( *v10 == 1 )
      {
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>::operator->(
                      (__int64)(v10 + 6),
                      (__int64 *)&v13)
                 + 274) = 0;
        tip2::test_data_control<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>::~test_data_control<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>(&v13);
      }
    }
    InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[19]>(L"ControlCenter null");
    return 0;
  }
  LOBYTE(v13) = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v2 + 48LL))(v2, &v13);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x235,
      (int)"pcshell\\twinui\\inputswitchingmanager\\lib\\inputswitchingmanager.cpp",
      (const char *)(unsigned int)v3,
      v11);
  if ( *((_QWORD *)this + 21) )
  {
    v5 = (_DWORD *)std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::front((_QWORD *)this + 17);
    if ( *v5 == 1 )
    {
      v6 = (__int64)(v5 + 6);
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>::operator->(
                    (__int64)(v5 + 6),
                    (__int64 *)&v14)
               + 274) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>::~test_data_control<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>(&v14);
      v7 = (_BYTE)v13 != 0;
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>::operator->(
                    v6,
                    (__int64 *)&v14)
               + 273) = v7;
      tip2::test_data_control<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>::~test_data_control<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>(&v14);
    }
  }
  if ( !(_BYTE)v13 )
  {
    InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[26]>(v4);
    return 0;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 22) + 64LL))(
         *((_QWORD *)this + 22),
         *((_QWORD *)this + 34),
         0LL);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x245,
      (int)"pcshell\\twinui\\inputswitchingmanager\\lib\\inputswitchingmanager.cpp",
      (const char *)(unsigned int)v8);
  InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[12]>(L"Called Hide");
  return 1;
}
