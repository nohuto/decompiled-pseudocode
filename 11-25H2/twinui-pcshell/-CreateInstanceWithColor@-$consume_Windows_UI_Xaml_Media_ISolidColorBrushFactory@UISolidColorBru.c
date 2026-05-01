/*
 * XREFs of ?CreateInstanceWithColor@?$consume_Windows_UI_Xaml_Media_ISolidColorBrushFactory@UISolidColorBrushFactory@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUColor@UI@Windows@3@@Z @ 0x180575808
 * Callers:
 *     ??R_lambda_f6412da80843da22cf270b1b12cf80a7_@@QEBA@AEBUISolidColorBrushFactory@Media@Xaml@UI@Windows@winrt@@@Z @ 0x1805752A8 (--R_lambda_f6412da80843da22cf270b1b12cf80a7_@@QEBA@AEBUISolidColorBrushFactory@Media@Xaml@UI@Win.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_Media_ISolidColorBrushFactory<winrt::Windows::UI::Xaml::Media::ISolidColorBrushFactory>::CreateInstanceWithColor(
        __int64 **a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  int v9; // [rsp+28h] [rbp-20h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *a1;
  v11 = 0LL;
  v9 = 0;
  v5 = *v3;
  v6 = *a3;
  v10 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 48))(v3, v6, &v11);
  winrt::check_hresult((int *)&v12, v7, (__int64)&v9);
  *a2 = v11;
  return a2;
}
