/*
 * XREFs of ??_EDesktopOperation@@UEAAPEAXI@Z @ 0x1804F1CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DesktopOperation@@UEAA@XZ @ 0x1804F1C2C (--1DesktopOperation@@UEAA@XZ.c)
 */

DesktopOperation *__fastcall DesktopOperation::`vector deleting destructor'(DesktopOperation *this, char a2)
{
  DesktopOperation::~DesktopOperation(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
