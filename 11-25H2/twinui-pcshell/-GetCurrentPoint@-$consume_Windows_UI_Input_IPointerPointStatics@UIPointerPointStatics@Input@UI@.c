/*
 * XREFs of ?GetCurrentPoint@?$consume_Windows_UI_Input_IPointerPointStatics@UIPointerPointStatics@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x18055A934
 * Callers:
 *     ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800F3DF0 (-FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ??R_lambda_e0c989301fb7eeb47b8a27ef133367da_@@QEBA@AEBUIPointerPointStatics@Input@UI@Windows@winrt@@@Z @ 0x18056CC04 (--R_lambda_e0c989301fb7eeb47b8a27ef133367da_@@QEBA@AEBUIPointerPointStatics@Input@UI@Windows@win.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Input_IPointerPointStatics<winrt::Windows::UI::Input::IPointerPointStatics>::GetCurrentPoint(
        __int64 **a1,
        _QWORD *a2,
        unsigned int a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v8; // [rsp+28h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v3 = *a1;
  v10 = 0LL;
  v8 = 0;
  v5 = *v3;
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v5 + 48))(v3, a3, &v10);
  winrt::check_hresult((int *)&v11, v6, (__int64)&v8);
  *a2 = v10;
  return a2;
}
