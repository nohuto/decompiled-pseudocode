/*
 * XREFs of ?Focus@?$consume_Windows_UI_Xaml_Controls_IControl@UIControl@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4FocusState@Xaml@UI@Windows@3@@Z @ 0x1806BDA84
 * Callers:
 *     ?MoveFocus@TaskViewFrame@@UEAAJI@Z @ 0x1806BDC50 (-MoveFocus@TaskViewFrame@@UEAAJI@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::consume_Windows_UI_Xaml_Controls_IControl<winrt::Windows::UI::Xaml::Controls::IControl>::Focus(
        __int64 **a1,
        unsigned int *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // eax
  int v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]
  char v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = *a1;
  v3 = *a2;
  v9 = 0;
  v7 = 0;
  v4 = *v2;
  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v4 + 368))(v2, v3, &v9);
  winrt::check_hresult(&v10, v5, (__int64)&v7);
  return v9;
}
