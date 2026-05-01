/*
 * XREFs of winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Devices::Enumeration::DeviceInformationCollection_::AsyncOperationCompletedHandler_winrt::Windows::Devices::Enumeration::DeviceInformationCollection___lambda_3e036b3644723c146ee880a5a6e63477___ @ 0x1805F3C7C
 * Callers:
 *     ?InitializeDeviceLoading@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805F7654 (-InitializeDeviceLoading@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Devices::Enumeration::DeviceInformationCollection_::AsyncOperationCompletedHandler_winrt::Windows::Devices::Enumeration::DeviceInformationCollection___lambda_3e036b3644723c146ee880a5a6e63477___(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0x18uLL);
  v5[2] = 1;
  *((_QWORD *)v5 + 2) = a2;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v5 = off_180731C08;
  *a1 = v5;
  return a1;
}
