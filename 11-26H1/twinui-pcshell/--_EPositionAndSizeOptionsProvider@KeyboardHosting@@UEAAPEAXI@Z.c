/*
 * XREFs of ??_EPositionAndSizeOptionsProvider@KeyboardHosting@@UEAAPEAXI@Z @ 0x1802022B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1PositionAndSizeOptionsProvider@KeyboardHosting@@UEAA@XZ @ 0x1802022EC (--1PositionAndSizeOptionsProvider@KeyboardHosting@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

KeyboardHosting::PositionAndSizeOptionsProvider *__fastcall KeyboardHosting::PositionAndSizeOptionsProvider::`vector deleting destructor'(
        KeyboardHosting::PositionAndSizeOptionsProvider *this,
        char a2)
{
  KeyboardHosting::PositionAndSizeOptionsProvider::~PositionAndSizeOptionsProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x248);
  return this;
}
