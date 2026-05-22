/*
 * XREFs of ??_ESystemButtonEventController@@UEAAPEAXI@Z @ 0x18015F6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SystemButtonEventController@@UEAA@XZ @ 0x18007C414 (--1SystemButtonEventController@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SystemButtonEventController *__fastcall SystemButtonEventController::`vector deleting destructor'(
        SystemButtonEventController *this,
        char a2)
{
  SystemButtonEventController::~SystemButtonEventController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
