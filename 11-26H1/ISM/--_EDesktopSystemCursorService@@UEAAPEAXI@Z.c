/*
 * XREFs of ??_EDesktopSystemCursorService@@UEAAPEAXI@Z @ 0x1800FD6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DesktopSystemCursorService@@UEAA@XZ @ 0x1800FD678 (--1DesktopSystemCursorService@@UEAA@XZ.c)
 */

DesktopSystemCursorService *__fastcall DesktopSystemCursorService::`vector deleting destructor'(
        DesktopSystemCursorService *this,
        char a2)
{
  DesktopSystemCursorService::~DesktopSystemCursorService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
