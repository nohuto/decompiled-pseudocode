/*
 * XREFs of ??_GHotkeyRegistrationForwarder@@UEAAPEAXI@Z @ 0x1801080E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HotkeyRegistrationForwarder@@UEAA@XZ @ 0x180108030 (--1HotkeyRegistrationForwarder@@UEAA@XZ.c)
 */

HotkeyRegistrationForwarder *__fastcall HotkeyRegistrationForwarder::`scalar deleting destructor'(
        HotkeyRegistrationForwarder *this,
        char a2)
{
  HotkeyRegistrationForwarder::~HotkeyRegistrationForwarder(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
