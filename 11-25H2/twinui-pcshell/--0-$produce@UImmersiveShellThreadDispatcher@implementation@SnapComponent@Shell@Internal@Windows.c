/*
 * XREFs of ??0?$produce@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcher@34567@@impl@winrt@@QEAA@XZ @ 0x1805797F8
 * Callers:
 *     ??0?$producer@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcher@34567@X@impl@winrt@@QEAA@XZ @ 0x18057981C (--0-$producer@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Window.c)
 * Callees:
 *     ??0?$produce_base@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@X@impl@winrt@@QEAA@XZ @ 0x1802D0228 (--0-$produce_base@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Sh_ea_1802D0228.c)
 */

_QWORD *__fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcher>::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcher>(
        _QWORD *a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Foundation::IActivationFactory,void>::produce_base<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Foundation::IActivationFactory,void>(a1);
  result = v1;
  *v1 = &winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcher>::`vftable';
  return result;
}
