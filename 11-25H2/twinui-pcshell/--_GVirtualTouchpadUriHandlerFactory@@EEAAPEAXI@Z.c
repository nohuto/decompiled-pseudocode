/*
 * XREFs of ??_GVirtualTouchpadUriHandlerFactory@@EEAAPEAXI@Z @ 0x180448650
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualTouchpadUriHandlerFactory@@EEAA@XZ @ 0x180448550 (--1VirtualTouchpadUriHandlerFactory@@EEAA@XZ.c)
 */

VirtualTouchpadUriHandlerFactory *__fastcall VirtualTouchpadUriHandlerFactory::`scalar deleting destructor'(
        VirtualTouchpadUriHandlerFactory *this,
        char a2)
{
  VirtualTouchpadUriHandlerFactory::~VirtualTouchpadUriHandlerFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
