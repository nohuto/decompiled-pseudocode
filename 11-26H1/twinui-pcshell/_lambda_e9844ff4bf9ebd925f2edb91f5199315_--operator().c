/*
 * XREFs of _lambda_e9844ff4bf9ebd925f2edb91f5199315_::operator() @ 0x1805CDB7C
 * Callers:
 *     wistd::__function::__func__lambda_e9844ff4bf9ebd925f2edb91f5199315__long___cdecl(void)_::operator() @ 0x1805CDED0 (wistd--__function--__func__lambda_e9844ff4bf9ebd925f2edb91f5199315__long___cdecl(void)_--operato.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180068EA8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC2CC (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_e9844ff4bf9ebd925f2edb91f5199315_::operator()(_QWORD *a1)
{
  int *v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rbx
  const char *v6; // r9
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = (int *)a1[1];
  v3 = *(_QWORD *)(*a1 + 152LL);
  v8 = 0;
  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v3 + 80LL))(
         v3,
         _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*v2), (__m128)COERCE_UNSIGNED_INT((float)v2[1])).m128_u64[0]);
  try
  {
    winrt::check_hresult((int *)&v11, v4, (__int64)&v8);
    v5 = *(_QWORD *)(a1[2] + 48LL);
    v11 = (void *)v5;
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 320));
    tip2::details::shared_data<1,0,0>::begin_update(v5 + 8);
    *(_BYTE *)(v5 + 281) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(&v11);
    if ( *(_DWORD *)(a1[2] + 32LL) )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1[2] + 8LL));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x513,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           v6);
  }
  return result;
}
