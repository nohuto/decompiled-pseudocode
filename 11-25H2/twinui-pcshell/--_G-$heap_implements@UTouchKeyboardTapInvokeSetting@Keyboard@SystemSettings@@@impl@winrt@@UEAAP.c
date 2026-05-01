/*
 * XREFs of ??_G?$heap_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@impl@winrt@@UEAAPEAXI@Z @ 0x18045F820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UEAA@XZ @ 0x18045CEC8 (--1TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UEAA@XZ.c)
 */

SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *__fastcall winrt::impl::heap_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>::`scalar deleting destructor'(
        SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *a1,
        char a2)
{
  SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::~TouchKeyboardTapInvokeSetting(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x70);
  return a1;
}
