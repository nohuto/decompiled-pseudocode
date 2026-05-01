/*
 * XREFs of ?CornerRadius@?$consume_Windows_UI_Xaml_Controls_IBorder@UIBorder@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU0Xaml@UI@Windows@3@@Z @ 0x180598CE0
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x180599038 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_UI_Xaml_Controls_IBorder<winrt::Windows::UI::Xaml::Controls::IBorder>::CornerRadius(
        __int64 *a1,
        __int128 *a2)
{
  __int128 v2; // xmm1
  __int64 v3; // rcx
  __int128 v4; // xmm0
  int v5; // eax
  int v7; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+28h] [rbp-40h]
  _OWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+70h] [rbp+8h] BYREF

  v2 = a2[1];
  v3 = *a1;
  v7 = 0;
  v8 = 0LL;
  v4 = *a2;
  v9[1] = v2;
  v9[0] = v4;
  v5 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v3 + 104LL))(v3, v9);
  return winrt::check_hresult(&v10, v5, (__int64)&v7);
}
