/*
 * XREFs of ??_GAppViewIconFactory@@UEAAPEAXI@Z @ 0x180563BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AppViewIconFactory@@UEAA@XZ @ 0x1805639E8 (--1AppViewIconFactory@@UEAA@XZ.c)
 */

AppViewIconFactory *__fastcall AppViewIconFactory::`scalar deleting destructor'(AppViewIconFactory *this, char a2)
{
  AppViewIconFactory::~AppViewIconFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
