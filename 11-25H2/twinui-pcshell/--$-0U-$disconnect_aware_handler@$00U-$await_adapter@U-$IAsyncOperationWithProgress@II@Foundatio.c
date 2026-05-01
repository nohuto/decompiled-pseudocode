/*
 * XREFs of ??$?0U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@@?$AsyncOperationWithProgressCompletedHandler@II@Foundation@Windows@winrt@@QEAA@U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@3@@Z @ 0x18061E0FC
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@@?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@@experimental@std@@@Z @ 0x18061FD58 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAccessStream@Stream.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??1?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@QEAA@XZ @ 0x18032BB18 (--1-$disconnect_aware_handler@$00U-$await_adapter@U-$IAsyncOperation@UTileCollection@StartScreen.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int>::AsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rax
  _DWORD *v8; // [rsp+30h] [rbp+8h]

  v8 = operator new(0x30uLL);
  v8[2] = 1;
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)v8 + 2) = v4;
  v5 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = -1;
  v8[6] = v5;
  v6 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *((_QWORD *)v8 + 4) = v6;
  *((_QWORD *)v8 + 5) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v8 = &winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int>,winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,1>>>::`vftable';
  *a1 = v8;
  winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>>::~disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>>((__int64 *)a2);
  return a1;
}
