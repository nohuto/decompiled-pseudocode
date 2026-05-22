/*
 * XREFs of ??_EVirtualTouchpadControllerProxy@@UEAAPEAXI@Z @ 0x1801379D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualTouchpadControllerProxy@@UEAA@XZ @ 0x180137870 (--1VirtualTouchpadControllerProxy@@UEAA@XZ.c)
 */

VirtualTouchpadControllerProxy *__fastcall VirtualTouchpadControllerProxy::`vector deleting destructor'(
        VirtualTouchpadControllerProxy *this,
        char a2)
{
  VirtualTouchpadControllerProxy::~VirtualTouchpadControllerProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1A0);
  return this;
}
