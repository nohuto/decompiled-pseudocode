/*
 * XREFs of ?ShowGestureFeedback@?$consume_Windows_UI_Input_IGestureRecognizer@UIGestureRecognizer@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180592D88
 * Callers:
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x180267D60 (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_UI_Input_IGestureRecognizer<winrt::Windows::UI::Input::IGestureRecognizer>::ShowGestureFeedback(
        __int64 *a1,
        char a2)
{
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(v7) = a2;
  v2 = *a1;
  v5 = 0;
  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 88LL))(v2, 0LL);
  return winrt::check_hresult(&v7, v3, (__int64)&v5);
}
