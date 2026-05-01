/*
 * XREFs of ?GetThumbnailAsync@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUBitmapSize@Imaging@Graphics@Windows@3@_N@Z @ 0x18026DE20
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18026EF70 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x18055E3A0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::GetThumbnailAsync(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3,
        char a4)
{
  __int64 *v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v10; // [rsp+38h] [rbp-20h] BYREF
  __int128 v11; // [rsp+40h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = a2;
  v4 = *a1;
  v12 = 0LL;
  v10 = 0;
  v6 = *v4;
  v7 = *a3;
  LOBYTE(a3) = a4;
  v11 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *, __int64 *))(v6 + 136))(v4, v7, a3, &v12);
  winrt::check_hresult(&v13, v8, &v10);
  *a2 = v12;
  return a2;
}
