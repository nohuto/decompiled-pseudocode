/*
 * XREFs of ??_GInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1800A84F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800A8570 (--1InputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions *__fastcall winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions *this,
        char a2)
{
  winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions::~InputViewOptions(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
