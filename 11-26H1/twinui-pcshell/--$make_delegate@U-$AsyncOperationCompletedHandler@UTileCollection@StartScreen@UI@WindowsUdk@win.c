/*
 * XREFs of ??$make_delegate@U?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@4@@impl@winrt@@YA?AU?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@1@$$QEAU?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@01@@Z @ 0x1805372FC
 * Callers:
 *     ?register_completed_callback@?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@AEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x18053B3EC (-register_completed_callback@-$await_adapter@U-$IAsyncOperation@UTileCollection@StartScreen@UI@W.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>>>(
        _QWORD *a1,
        __int64 *a2)
{
  _DWORD *v4; // r9
  __int64 v5; // r8
  int v6; // ecx
  __int64 v7; // rcx
  _QWORD *result; // rax

  v4 = operator new(0x30uLL);
  v4[2] = 1;
  v5 = *a2;
  *a2 = 0LL;
  *((_QWORD *)v4 + 2) = v5;
  v6 = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = -1;
  v4[6] = v6;
  v7 = a2[2];
  a2[2] = 0LL;
  *((_QWORD *)v4 + 4) = v7;
  *((_QWORD *)v4 + 5) = a2[3];
  a2[3] = 0LL;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v4 = &winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>>>::`vftable';
  result = a1;
  *a1 = v4;
  return result;
}
