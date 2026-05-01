/*
 * XREFs of ?NonDelegatingAddRef@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAIXZ @ 0x1801F6968
 * Callers:
 *     ?AddRef@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@QEAAIXZ @ 0x1801F6944 (-AddRef@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@.c)
 *     ?AddRef@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UINonDelegatingInspectable@impl@7@@impl@winrt@@UEAAIXZ @ 0x180595B30 (-AddRef@-$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@.c)
 *     ?NonDelegatingQueryInterface@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHAEBUguid@3@PEAPEAX@Z @ 0x180596BFC (-NonDelegatingQueryInterface@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::NonDelegatingAddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v3; // r8d
  bool v4; // zf
  signed __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 32);
  do
  {
    if ( v1 < 0 )
      return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 24));
    v3 = v1 + 1;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v1 + 1, v1);
    v4 = v1 == v5;
    v1 = v5;
  }
  while ( !v4 );
  return v3;
}
