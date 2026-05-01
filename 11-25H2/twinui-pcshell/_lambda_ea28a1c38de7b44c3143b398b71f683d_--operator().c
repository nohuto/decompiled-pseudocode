/*
 * XREFs of _lambda_ea28a1c38de7b44c3143b398b71f683d_::operator() @ 0x1805A9790
 * Callers:
 *     wistd::__function::__func__lambda_ea28a1c38de7b44c3143b398b71f683d__long___cdecl(void)_::operator() @ 0x1805A9CA0 (wistd--__function--__func__lambda_ea28a1c38de7b44c3143b398b71f683d__long___cdecl(void)_--operato.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180031054 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A8134 (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_ea28a1c38de7b44c3143b398b71f683d_::operator()(_QWORD *a1)
{
  __m128 v2; // xmm2
  __m128 v3; // xmm1
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  const char *v7; // r9
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v12; // [rsp+50h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = (__m128)COERCE_UNSIGNED_INT((float)*(int *)(a1[1] + 4LL));
  v3 = (__m128)COERCE_UNSIGNED_INT((float)*(int *)a1[1]);
  v4 = *(_QWORD *)(*a1 + 152LL);
  v9 = 0;
  v10 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v4 + 80LL))(
         v4,
         _mm_unpacklo_ps(v3, v2).m128_u64[0]);
  try
  {
    winrt::check_hresult(&v12, v5, (__int64)&v9);
    v6 = *(_QWORD *)(a1[2] + 48LL);
    v13 = (void *)v6;
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 312));
    tip2::details::shared_data<1,0,0>::begin_update(v6 + 8);
    *(_BYTE *)(v6 + 273) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(&v13);
    if ( *(_DWORD *)(a1[2] + 32LL) )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1[2] + 8LL));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4F6,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           v7);
  }
  return result;
}
