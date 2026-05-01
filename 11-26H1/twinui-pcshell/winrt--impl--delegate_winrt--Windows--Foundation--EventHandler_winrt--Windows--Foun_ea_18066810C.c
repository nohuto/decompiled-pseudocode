/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___ @ 0x18066810C
 * Callers:
 *     winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable_::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___ @ 0x180667CC4 (winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--IInspectable_-_ea_180667CC4.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v4; // rcx

  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = *a2;
  *(_QWORD *)(a1 + 24) = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = (__int64 *)(a1 + 32);
  *v4 = a2[2];
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v4);
  *(_QWORD *)(a1 + 40) = a2[3];
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 40));
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)a1 = off_18075E4D8;
  return a1;
}
