/*
 * XREFs of ?NonDelegatingAddRef@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAIXZ @ 0x1801E2C78
 * Callers:
 *     ?AddRef@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@QEAAIXZ @ 0x1801E2C54 (-AddRef@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@.c)
 *     ?AddRef@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UINonDelegatingInspectable@impl@7@@impl@winrt@@UEAAIXZ @ 0x1805B9DE0 (-AddRef@-$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@.c)
 *     ?NonDelegatingQueryInterface@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805BAE48 (-NonDelegatingQueryInterface@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComp.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800E712C (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::NonDelegatingAddRef(
        __int64 a1)
{
  signed __int64 v1; // rcx
  volatile signed __int64 *v2; // r8
  unsigned int v4; // edx
  bool v5; // zf
  signed __int64 v6; // rax

  v1 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 32);
  do
  {
    if ( v1 < 0 )
      return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 24));
    v4 = v1 + 1;
    v6 = _InterlockedCompareExchange64(v2, v1 + 1, v1);
    v5 = v1 == v6;
    v1 = v6;
  }
  while ( !v5 );
  return v4;
}
