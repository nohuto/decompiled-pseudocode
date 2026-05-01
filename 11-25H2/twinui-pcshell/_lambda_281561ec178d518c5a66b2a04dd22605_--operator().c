/*
 * XREFs of _lambda_281561ec178d518c5a66b2a04dd22605_::operator() @ 0x1805A87E0
 * Callers:
 *     wistd::__function::__func__lambda_281561ec178d518c5a66b2a04dd22605__long___cdecl(void)_::operator() @ 0x1805A9C60 (wistd--__function--__func__lambda_281561ec178d518c5a66b2a04dd22605__long___cdecl(void)_--operato.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180031054 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A8134 (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_281561ec178d518c5a66b2a04dd22605_::operator()(_QWORD *a1)
{
  __m128 v2; // xmm2
  __m128 v3; // xmm1
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rbx
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  void *v15; // [rsp+70h] [rbp+18h] BYREF
  void *v16; // [rsp+78h] [rbp+20h] BYREF

  v2 = (__m128)COERCE_UNSIGNED_INT((float)*(int *)(a1[1] + 4LL));
  v3 = (__m128)COERCE_UNSIGNED_INT((float)*(int *)a1[1]);
  v4 = *(_QWORD *)(*a1 + 152LL);
  v10 = 0;
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v4 + 88LL))(
         v4,
         _mm_unpacklo_ps(v3, v2).m128_u64[0]);
  try
  {
    winrt::check_hresult(&v13, v5, (__int64)&v10);
    v6 = *(_QWORD *)(a1[2] + 48LL);
    v15 = (void *)v6;
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 312));
    tip2::details::shared_data<1,0,0>::begin_update(v6 + 8);
    *(_BYTE *)(v6 + 272) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(&v15);
    v14 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(*a1 + 152LL), &v14);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    v7 = *(_QWORD *)(a1[2] + 48LL);
    v16 = (void *)v7;
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 312));
    tip2::details::shared_data<1,0,0>::begin_update(v7 + 8);
    *(_BYTE *)(v7 + 267) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(&v16);
    if ( *(_DWORD *)(a1[2] + 32LL) )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1[2] + 8LL));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x51F,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           v8);
  }
  return result;
}
