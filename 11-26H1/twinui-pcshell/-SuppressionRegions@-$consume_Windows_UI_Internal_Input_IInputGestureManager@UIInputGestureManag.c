/*
 * XREFs of ?SuppressionRegions@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@3@@Z @ 0x180595000
 * Callers:
 *     ?UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ @ 0x18058BD50 (-UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ.c)
 * Callees:
 *     ??$get_abi@$$CBI@winrt@@YA?A_PU?$array_view@$$CBI@0@@Z @ 0x180226BD8 (--$get_abi@$$CBI@winrt@@YA-A_PU-$array_view@$$CBI@0@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::SuppressionRegions(
        __int64 a1,
        __int128 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  int v5; // eax
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0LL;
  v8 = 0;
  v7 = *a2;
  v2 = winrt::get_abi<unsigned int const>(&v7);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 136LL))(v4, *(unsigned int *)(v3 + 8), v2);
  return winrt::check_hresult(&v10, v5, (__int64)&v8);
}
