/*
 * XREFs of ??_EResizeControllerHost@@UEAAPEAXI@Z @ 0x180152310
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ResizeControllerHost@@UEAA@XZ @ 0x1801522E4 (--1ResizeControllerHost@@UEAA@XZ.c)
 */

ResizeControllerHost *__fastcall ResizeControllerHost::`vector deleting destructor'(
        ResizeControllerHost *this,
        char a2)
{
  ResizeControllerHost::~ResizeControllerHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
