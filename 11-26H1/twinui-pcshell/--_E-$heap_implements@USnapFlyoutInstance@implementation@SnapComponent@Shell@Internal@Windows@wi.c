/*
 * XREFs of ??_E?$heap_implements@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1802254C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800DC27C (--1SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::~SnapFlyoutInstance(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x178);
  return a1;
}
