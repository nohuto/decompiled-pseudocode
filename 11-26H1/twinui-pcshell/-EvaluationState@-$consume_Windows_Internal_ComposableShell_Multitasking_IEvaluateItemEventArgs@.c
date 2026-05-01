/*
 * XREFs of ?EvaluationState@?$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SwitchItemInclusion@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x18027CCE0
 * Callers:
 *     _lambda_d61b288df26b99e0330e99e4b6525b65_::operator() @ 0x1802876BC (_lambda_d61b288df26b99e0330e99e4b6525b65_--operator().c)
 *     _lambda_76d1f2626ede3eea74247fb28465c209_::operator() @ 0x1806A5DF4 (_lambda_76d1f2626ede3eea74247fb28465c209_--operator().c)
 *     _lambda_c455d037a1b864dd5cc5867b63d5951d_::operator() @ 0x1806BC870 (_lambda_c455d037a1b864dd5cc5867b63d5951d_--operator().c)
 *     _lambda_4bd855e1dd94d2f8892f0782f15ffa49_::operator() @ 0x1806BFEE8 (_lambda_4bd855e1dd94d2f8892f0782f15ffa49_--operator().c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::EvaluationState(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = *a2;
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 64LL))(v2, v3);
  return winrt::check_hresult(&v8, v4, &v6);
}
