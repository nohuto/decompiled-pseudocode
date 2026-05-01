/*
 * XREFs of ?HideControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180613868
 * Callers:
 *     ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ @ 0x1806133DC (--R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029743C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InputSwitchTrace@AEAY0P@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0P@$$CBG@Z @ 0x180612704 (--$InputSwitchTrace@AEAY0P@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0P@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0BK@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BK@$$CBG@Z @ 0x180612748 (--$InputSwitchTrace@AEAY0BK@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BK@$$CBG@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180613250 (--1-$test_data_control@V-$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@@1@XZ @ 0x180613364 (--C-$tip_test@V-$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::HideControlCenterSwitcher(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  bool v6; // bl
  int v7; // eax
  _DWORD *v9; // rcx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF
  void *v13; // [rsp+38h] [rbp+10h] BYREF

  InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[15]>(L"Trying Hide");
  v2 = *((_QWORD *)this + 23);
  if ( !v2 || !*((_QWORD *)this + 22) )
  {
    if ( *((_QWORD *)this + 21) )
    {
      v9 = *(_DWORD **)(*((_QWORD *)this + 18) + 8 * (*((_QWORD *)this + 20) & (*((_QWORD *)this + 19) - 1LL)));
      if ( *v9 == 1 )
      {
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>::operator->(
                      (__int64)(v9 + 6),
                      (__int64 *)&v12)
                 + 266) = 0;
        tip2::test_data_control<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>::~test_data_control<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>(&v12);
      }
    }
    InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[15]>(L"ControlCenter null");
    return 0;
  }
  LOBYTE(v12) = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v2 + 48LL))(v2, &v12);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x235,
      (int)"pcshell\\twinui\\inputswitchingmanager\\lib\\inputswitchingmanager.cpp",
      (const char *)(unsigned int)v3,
      v10);
  if ( *((_QWORD *)this + 21) )
  {
    v4 = *((_QWORD *)this + 20) & (*((_QWORD *)this + 19) - 1LL);
    v5 = *(_DWORD **)(*((_QWORD *)this + 18) + 8 * v4);
    if ( *v5 == 1 )
    {
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>::operator->(
                    (__int64)(v5 + 6),
                    (__int64 *)&v13)
               + 266) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>::~test_data_control<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>(&v13);
      v6 = (_BYTE)v12 != 0;
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>::operator->(
                    (__int64)(v5 + 6),
                    (__int64 *)&v13)
               + 265) = v6;
      tip2::test_data_control<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>::~test_data_control<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>(&v13);
    }
  }
  if ( !(_BYTE)v12 )
  {
    InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[26]>((const WCHAR *)v4);
    return 0;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 22) + 64LL))(
         *((_QWORD *)this + 22),
         *((_QWORD *)this + 34),
         0LL);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x245,
      (int)"pcshell\\twinui\\inputswitchingmanager\\lib\\inputswitchingmanager.cpp",
      (const char *)(unsigned int)v7);
  InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[15]>(L"Called Hide");
  return 1;
}
