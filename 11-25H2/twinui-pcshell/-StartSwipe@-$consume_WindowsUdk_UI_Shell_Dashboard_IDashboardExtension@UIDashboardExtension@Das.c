/*
 * XREFs of ?StartSwipe@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUguid@3@AEBUPoint@Foundation@Windows@3@@Z @ 0x1805B35EC
 * Callers:
 *     _lambda_96ecd2df1703701600c983d4c680e5f8_::operator() @ 0x1805A8D4C (_lambda_96ecd2df1703701600c983d4c680e5f8_--operator().c)
 *     _lambda_9b092398f928f40caadc1063cb84386c_::operator() @ 0x1805A9020 (_lambda_9b092398f928f40caadc1063cb84386c_--operator().c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension>::StartSwipe(
        __int64 *a1,
        __int128 *a2,
        __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 (__fastcall *v5)(__int64, __int128 *, __int64); // rax
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = *a3;
  v9 = 0;
  v10 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v3 + 72LL);
  v8 = *a2;
  v6 = v5(v3, &v8, v4);
  return winrt::check_hresult(&v11, v6, (__int64)&v9);
}
