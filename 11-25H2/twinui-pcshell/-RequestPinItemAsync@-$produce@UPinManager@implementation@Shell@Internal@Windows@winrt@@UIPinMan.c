/*
 * XREFs of ?RequestPinItemAsync@?$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@@impl@winrt@@UEAAHPEAX00PEAPEAX@Z @ 0x1805C4B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@@Z @ 0x1805C4C08 (-RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$IAsyncOper.c)
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
  winrt::hstring *v6; // rsi
  winrt::hstring *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v12[8]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v13[8]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v14[8]; // [rsp+48h] [rbp-50h] BYREF
  __int64 *v15; // [rsp+50h] [rbp-48h]
  _BYTE *v16; // [rsp+58h] [rbp-40h]
  __int64 v17; // [rsp+60h] [rbp-38h] BYREF
  __int64 v18; // [rsp+68h] [rbp-30h] BYREF

  v18 = a2;
  v17 = a3;
  *a5 = 0LL;
  v5 = (a1 - 8) & -(__int64)(a1 != 0);
  v15 = &v11;
  v11 = a4;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v11);
  try
  {
    v16 = v12;
    v6 = winrt::hstring::hstring((winrt::hstring *)v12, (const struct winrt::hstring *)&v17);
    v7 = winrt::hstring::hstring((winrt::hstring *)v13, (const struct winrt::hstring *)&v18);
    v8 = (__int64 *)winrt::Windows::Internal::Shell::implementation::PinManager::RequestPinItemAsync(
                      v5,
                      v14,
                      v7,
                      v6,
                      &v11);
    v9 = *v8;
    *v8 = 0LL;
    *a5 = v9;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v11);
  }
  return result;
}
