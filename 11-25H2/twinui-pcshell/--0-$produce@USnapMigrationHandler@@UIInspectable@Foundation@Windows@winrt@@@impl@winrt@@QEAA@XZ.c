/*
 * XREFs of ??0?$produce@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x180208638
 * Callers:
 *     ??0?$producer@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180208620 (--0-$producer@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@.c)
 * Callees:
 *     ??0?$produce_base@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@UIInputViewOptions@34567@X@impl@winrt@@QEAA@XZ @ 0x1802B026C (--0-$produce_base@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@W_ea_1802B026C.c)
 */

_QWORD *winrt::impl::produce<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable>::produce<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,winrt::Windows::Internal::Shell::KeyboardHosting::IInputViewOptions,void>::produce_base<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,winrt::Windows::Internal::Shell::KeyboardHosting::IInputViewOptions,void>();
  result = v0;
  *v0 = &winrt::impl::produce_base<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable,void>::`vftable';
  return result;
}
