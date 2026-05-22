/*
 * XREFs of ??_EGestureServices@@UEAAPEAXI@Z @ 0x180144D20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GestureServices@@UEAA@XZ @ 0x180144B20 (--1GestureServices@@UEAA@XZ.c)
 */

GestureServices *__fastcall GestureServices::`vector deleting destructor'(GestureServices *this, char a2)
{
  GestureServices::~GestureServices(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x148);
  return this;
}
