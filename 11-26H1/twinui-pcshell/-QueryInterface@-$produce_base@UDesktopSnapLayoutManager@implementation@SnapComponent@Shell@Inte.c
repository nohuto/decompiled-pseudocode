/*
 * XREFs of ?QueryInterface@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManager@34567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801C0280
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801C02F0 (-query_interface@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManager,void>::QueryInterface(
        unsigned __int64 a1)
{
  __int64 v1; // rbx
  __int64 (__fastcall ***v2)(_QWORD); // rcx
  __int64 result; // rax

  v1 = (a1 - 40) & ((unsigned __int128)-(__int128)a1 >> 64);
  v2 = *(__int64 (__fastcall ****)(_QWORD))(v1 + 0x18);
  if ( v2 )
    return (**v2)(v2);
  result = winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::query_interface(v1);
  if ( (_DWORD)result == -2147467262 )
  {
    v2 = *(__int64 (__fastcall ****)(_QWORD))(v1 + 8);
    if ( v2 )
      return (**v2)(v2);
  }
  return result;
}
