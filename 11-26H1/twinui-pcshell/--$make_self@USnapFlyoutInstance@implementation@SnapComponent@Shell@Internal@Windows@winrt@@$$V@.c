/*
 * XREFs of ??$make_self@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?AU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802194B0
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1805B2A60 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??0SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18029120C (--0SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

_QWORD *__fastcall winrt::make_self<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,>(
        _QWORD *a1)
{
  _QWORD *v2; // rbx

  v2 = operator new(0x178uLL);
  memset_0(v2, 0, 0x178uLL);
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::SnapFlyoutInstance((winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *)v2);
  *a1 = v2;
  *v2 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::`vftable';
  return a1;
}
