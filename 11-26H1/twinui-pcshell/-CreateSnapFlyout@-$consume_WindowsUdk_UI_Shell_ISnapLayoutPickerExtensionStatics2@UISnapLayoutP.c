/*
 * XREFs of ?CreateSnapFlyout@?$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtensionStatics2@UISnapLayoutPickerExtensionStatics2@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUSnapLayoutManager@Shell@UI@WindowsUdk@3@_KAEBW4InputDeviceKind@5673@@Z @ 0x18026C190
 * Callers:
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@W4SnapControlType@34567@W4InputDeviceKind@49WindowsUdk@7@@Z @ 0x1800A1240 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtensionStatics2<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtensionStatics2>::CreateSnapFlyout(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        unsigned int *a5)
{
  __int64 v5; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, __int64 *); // rax
  unsigned int v11; // eax
  int v13; // [rsp+38h] [rbp-20h] BYREF
  __int128 v14; // [rsp+40h] [rbp-18h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = a2;
  v5 = *a1;
  v15 = 0LL;
  v13 = 0;
  v8 = *a5;
  v9 = *a3;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)v5 + 48LL);
  v14 = 0LL;
  v11 = v10(v5, v9, a4, v8, &v15);
  winrt::check_hresult(&v16, v11, &v13);
  *a2 = v15;
  return a2;
}
