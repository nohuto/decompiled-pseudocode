/*
 * XREFs of ??_GGamepadInterceptionHelper@@UEAAPEAXI@Z @ 0x180109AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GamepadInterceptionHelper@@UEAA@XZ @ 0x180109944 (--1GamepadInterceptionHelper@@UEAA@XZ.c)
 */

GamepadInterceptionHelper *__fastcall GamepadInterceptionHelper::`scalar deleting destructor'(
        GamepadInterceptionHelper *this,
        char a2)
{
  GamepadInterceptionHelper::~GamepadInterceptionHelper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
