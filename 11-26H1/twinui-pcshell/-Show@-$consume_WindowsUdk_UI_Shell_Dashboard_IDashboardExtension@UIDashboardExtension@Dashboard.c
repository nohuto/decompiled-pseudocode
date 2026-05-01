/*
 * XREFs of ?Show@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUguid@3@AEBW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@3@AEBURect@Foundation@Windows@3@@Z @ 0x180278BD0
 * Callers:
 *     _lambda_a44a1a72576a729f64e0a6d83c71a024_::operator() @ 0x1805CD6E8 (_lambda_a44a1a72576a729f64e0a6d83c71a024_--operator().c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension>::Show(
        __int64 *a1,
        __int128 *a2,
        unsigned int *a3,
        __int128 *a4)
{
  __int128 v4; // xmm1
  __int64 v5; // rcx
  __int64 v6; // r8
  __int128 v7; // xmm0
  unsigned int v8; // eax
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+40h] [rbp-38h] BYREF
  int v12; // [rsp+50h] [rbp-28h] BYREF
  __int128 v13; // [rsp+58h] [rbp-20h]
  char v14; // [rsp+80h] [rbp+8h] BYREF

  v4 = *a2;
  v5 = *a1;
  v6 = *a3;
  v13 = 0LL;
  v12 = 0;
  v7 = *a4;
  v11 = v4;
  v10 = v7;
  v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int128 *))(*(_QWORD *)v5 + 56LL))(v5, &v11, v6, &v10);
  return winrt::check_hresult(&v14, v8, &v12);
}
