/*
 * XREFs of ?RevokeProcessesForAnimation@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBI@3@@Z @ 0x1802470EC
 * Callers:
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18035FC50 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180382AC0 (-OnViewDestroyed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _lambda_f17086a35f2f14e82d9d84ab1f41fcfa_::operator() @ 0x1805A9A44 (_lambda_f17086a35f2f14e82d9d84ab1f41fcfa_--operator().c)
 * Callees:
 *     ??$get_abi@$$CBI@winrt@@YA?A_PU?$array_view@$$CBI@0@@Z @ 0x180234DE4 (--$get_abi@$$CBI@winrt@@YA-A_PU-$array_view@$$CBI@0@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::RevokeProcessesForAnimation(
        __int64 a1,
        __int128 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(__int64, _QWORD, __int64); // r9
  __int64 v5; // r10
  unsigned int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+38h] [rbp-20h]
  char v11; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0;
  v10 = 0LL;
  v8 = *a2;
  v2 = winrt::get_abi<unsigned int const>(&v8);
  v6 = v4(v5, *(unsigned int *)(v3 + 8), v2);
  return winrt::check_hresult(&v11, v6, &v9);
}
