/*
 * XREFs of ?ApproveProcessesForAnimation@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBI@3@@Z @ 0x180237CC0
 * Callers:
 *     ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801FCD20 (-OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036D670 (-OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180389C60 (-OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _lambda_a44a1a72576a729f64e0a6d83c71a024_::operator() @ 0x1805CD6E8 (_lambda_a44a1a72576a729f64e0a6d83c71a024_--operator().c)
 * Callees:
 *     ??$get_abi@$$CBI@winrt@@YA?A_PU?$array_view@$$CBI@0@@Z @ 0x180226BD8 (--$get_abi@$$CBI@winrt@@YA-A_PU-$array_view@$$CBI@0@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::ApproveProcessesForAnimation(
        __int64 a1,
        __int128 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned int v5; // eax
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h]
  char v10; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0LL;
  v8 = 0;
  v7 = *a2;
  v2 = winrt::get_abi<unsigned int const>(&v7);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 112LL))(v4, *(unsigned int *)(v3 + 8), v2);
  return winrt::check_hresult(&v10, v5, &v8);
}
