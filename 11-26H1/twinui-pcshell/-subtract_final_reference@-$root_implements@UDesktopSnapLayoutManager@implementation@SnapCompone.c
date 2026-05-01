/*
 * XREFs of ?subtract_final_reference@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAIXZ @ 0x1801CA2EC
 * Callers:
 *     ??1?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@MEAA@XZ @ 0x1801CA270 (--1-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windo.c)
 *     ?NonDelegatingRelease@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAIXZ @ 0x1801CA29C (-NonDelegatingRelease@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@S.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800E712C (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::subtract_final_reference(
        __int64 a1)
{
  signed __int64 v1; // rax
  volatile signed __int64 *v2; // rcx
  unsigned int v4; // edx
  signed __int64 v5; // rtt

  v1 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 32);
  do
  {
    if ( v1 < 0 )
      return winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v1));
    v4 = v1 - 1;
    v5 = v1;
    v1 = _InterlockedCompareExchange64(v2, v1 - 1, v1);
  }
  while ( v5 != v1 );
  return v4;
}
