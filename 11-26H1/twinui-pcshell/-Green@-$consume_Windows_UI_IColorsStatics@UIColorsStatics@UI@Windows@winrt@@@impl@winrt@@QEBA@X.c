/*
 * XREFs of ?Green@?$consume_Windows_UI_IColorsStatics@UIColorsStatics@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18060AEC0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_d7b00691c3c9723fe1824ae9cb58901d_@@CA@AEBUIColorsStatics@UI@Windows@winrt@@@Z @ 0x180608430 (-_lambda_invoker_cdecl_@_lambda_d7b00691c3c9723fe1824ae9cb58901d_@@CA@AEBUIColorsStatics@UI@Wind.c)
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x18060A450 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall winrt::impl::consume_Windows_UI_IColorsStatics<winrt::Windows::UI::IColorsStatics>::Green(
        __int64 *a1,
        _DWORD *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0;
  v3 = *a1;
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 456LL))(v3);
  winrt::check_hresult(&v8, v4, (__int64)&v6);
  return a2;
}
