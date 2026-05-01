/*
 * XREFs of ?NonDelegatingQueryInterface@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHAEBUguid@3@PEAPEAX@Z @ 0x180596BFC
 * Callers:
 *     ?QueryInterface@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UINonDelegatingInspectable@impl@7@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180596D10 (-QueryInterface@-$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@.c)
 * Callees:
 *     ?query_interface@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801CA4A0 (-query_interface@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@.c)
 *     ?NonDelegatingAddRef@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAIXZ @ 0x1801F6968 (-NonDelegatingAddRef@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Sh.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::NonDelegatingQueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v4; // rax
  __int64 v7; // rax
  __int64 result; // rax
  __int64 (__fastcall ***v9)(_QWORD, _QWORD *, __int64 *); // rcx
  __int64 v10; // rcx

  v4 = *a2 - winrt::impl::guid_v<IInspectable>;
  if ( *a2 == winrt::impl::guid_v<IInspectable> )
    v4 = a2[1] + 0x6FE1EF9A5528A564LL;
  if ( !v4 )
    goto LABEL_10;
  v7 = *a2 - winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>;
  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown> )
    v7 = a2[1] - 0x46000000000000C0LL;
  if ( v7 )
  {
    result = winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::query_interface(
               a1,
               (__int64)a2,
               a3);
    if ( (_DWORD)result == -2147467262 )
    {
      v9 = *(__int64 (__fastcall ****)(_QWORD, _QWORD *, __int64 *))(a1 + 8);
      if ( v9 )
        return (**v9)(v9, a2, a3);
    }
  }
  else
  {
LABEL_10:
    winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::NonDelegatingAddRef(a1);
    *a3 = (v10 + 16) & -(__int64)(a1 != 0);
    return 0LL;
  }
  return result;
}
