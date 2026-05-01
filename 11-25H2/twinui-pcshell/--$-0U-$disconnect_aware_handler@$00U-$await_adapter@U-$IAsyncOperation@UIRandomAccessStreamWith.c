/*
 * XREFs of ??$?0U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@@?$AsyncOperationCompletedHandler@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@3@@Z @ 0x18055CD80
 * Callers:
 *     ?register_completed_callback@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@AEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x18055F774 (-register_completed_callback@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentT.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??1?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@QEAA@XZ @ 0x18032BB18 (--1-$disconnect_aware_handler@$00U-$await_adapter@U-$IAsyncOperation@UTileCollection@StartScreen.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>(
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
  *(_QWORD *)v8 = &winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>>>::`vftable';
  *a1 = v8;
  winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>>::~disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>>((__int64 *)a2);
  return a1;
}
