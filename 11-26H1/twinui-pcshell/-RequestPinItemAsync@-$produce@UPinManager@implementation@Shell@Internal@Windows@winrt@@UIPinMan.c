/*
 * XREFs of ?RequestPinItemAsync@?$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@@impl@winrt@@UEAAHPEAX00PEAPEAX@Z @ 0x1805E8A40
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@@Z @ 0x1805E8B20 (-RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$IAsyncOper.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::IPinManager>::RequestPinItemAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // rdi
  unsigned int v6; // r8d
  winrt::hstring *v7; // rsi
  unsigned int v8; // r8d
  winrt::hstring *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v14[8]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v15[8]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v16[8]; // [rsp+48h] [rbp-50h] BYREF
  __int64 *v17; // [rsp+50h] [rbp-48h]
  _BYTE *v18; // [rsp+58h] [rbp-40h]
  __int64 v19; // [rsp+60h] [rbp-38h] BYREF
  __int64 v20; // [rsp+68h] [rbp-30h] BYREF

  v20 = a2;
  v19 = a3;
  *a5 = 0LL;
  v5 = (a1 - 8) & -(__int64)(a1 != 0);
  v17 = &v13;
  v13 = a4;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v13);
  try
  {
    v18 = v14;
    v7 = winrt::hstring::hstring((winrt::hstring *)v14, (const struct winrt::hstring *)&v19, v6);
    v9 = winrt::hstring::hstring((winrt::hstring *)v15, (const struct winrt::hstring *)&v20, v8);
    v10 = (__int64 *)winrt::Windows::Internal::Shell::implementation::PinManager::RequestPinItemAsync(
                       v5,
                       v16,
                       v9,
                       v7,
                       &v13);
    v11 = *v10;
    *v10 = 0LL;
    *a5 = v11;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v16);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v13);
  }
  return result;
}
