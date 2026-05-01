/*
 * XREFs of ?ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180639D98
 * Callers:
 *     ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ @ 0x180639208 (--R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?front@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAUInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@XZ @ 0x1800CC188 (-front@-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$allocat.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18028BF74 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??$InputSwitchTrace@AEAY0BB@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BB@$$CBG@Z @ 0x180638388 (--$InputSwitchTrace@AEAY0BB@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BB@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0BD@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BD@$$CBG@Z @ 0x1806383CC (--$InputSwitchTrace@AEAY0BD@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BD@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0M@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0M@$$CBG@Z @ 0x18063849C (--$InputSwitchTrace@AEAY0M@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0M@$$CBG@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806390B4 (--1-$test_data_control@V-$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@1@XZ @ 0x1806391CC (--C-$tip_test@V-$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test.c)
 *     ?CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1806394AC (-CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::ShowControlCenterSwitcher(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this)
{
  _DWORD *v2; // rax
  __int64 *v3; // rbx
  int v4; // esi
  _DWORD *v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  bool v9; // [rsp+20h] [rbp-38h]
  char v10; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v12; // [rsp+60h] [rbp+8h] BYREF

  InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[12]>(L"Trying Show");
  if ( !*((_QWORD *)this + 22) )
  {
    InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[19]>(L"ControlCenter null");
    return 0;
  }
  if ( !winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::CanShowControlCenterSwitcher(this) )
  {
    InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[17]>(L"No ControlCenter");
    if ( *((_QWORD *)this + 21) )
    {
      v2 = (_DWORD *)std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::front((_QWORD *)this + 17);
      if ( !*v2 )
      {
        v3 = (__int64 *)(v2 + 4);
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>::operator->(
                      (__int64)(v2 + 4),
                      (__int64 *)&v12)
                 + 274) = 0;
        tip2::test_data_control<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>::~test_data_control<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>(&v12);
        tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(v3);
      }
    }
    return 0;
  }
  v4 = *((_DWORD *)this + 63);
  if ( *((_QWORD *)this + 21) )
  {
    v5 = (_DWORD *)std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::front((_QWORD *)this + 17);
    v4 = v5[8];
    if ( !*v5 )
    {
      v6 = (__int64)(v5 + 4);
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>::operator->(
                    (__int64)(v5 + 4),
                    (__int64 *)&v12)
               + 273) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>::~test_data_control<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>(&v12);
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>::operator->(
                    v6,
                    (__int64 *)&v12)
               + 274) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>::~test_data_control<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>(&v12);
    }
  }
  v10 = 0;
  v9 = v4 == 4;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, bool, char, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 22) + 56LL))(
         *((_QWORD *)this + 22),
         *((_QWORD *)this + 34),
         0LL,
         0LL,
         v9,
         v10,
         0LL,
         0LL,
         0LL);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x222,
      (int)"pcshell\\twinui\\inputswitchingmanager\\lib\\inputswitchingmanager.cpp",
      (const char *)(unsigned int)v7);
  InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[12]>(L"Called Show");
  return 1;
}
