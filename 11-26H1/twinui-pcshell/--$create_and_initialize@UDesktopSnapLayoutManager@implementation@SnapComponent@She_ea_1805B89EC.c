/*
 * XREFs of ??$create_and_initialize@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEBUDisplayRegion@WindowManagement@UI@67@@impl@winrt@@YAPEAUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@1@AEBUDisplayRegion@WindowManagement@UI@71@@Z @ 0x1805B89EC
 * Callers:
 *     ??$make@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEBUDisplayRegion@WindowManagement@UI@67@@winrt@@YA?A_PAEBUDisplayRegion@WindowManagement@UI@Windows@0@@Z @ 0x1805B8E1C (--$make@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEB.c)
 *     ?CreateInstance@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerFactory@34567@@impl@winrt@@UEAAHPEAX0PEAPEAX1@Z @ 0x1805B9E60 (-CreateInstance@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@I.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBUDisplayRegion@WindowManagement@UI@56@@Z @ 0x1805B94A8 (--0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBU.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *__fastcall winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::UI::WindowManagement::DisplayRegion const &>(
        struct winrt::Windows::UI::WindowManagement::DisplayRegion *a1)
{
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *v3; // [rsp+38h] [rbp+10h]

  v3 = (winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *)operator new(0x80uLL);
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::DesktopSnapLayoutManager(
    v3,
    a1);
  *(_QWORD *)v3 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager>::`vftable';
  return v3;
}
