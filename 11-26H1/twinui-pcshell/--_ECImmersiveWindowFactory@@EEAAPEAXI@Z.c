/*
 * XREFs of ??_ECImmersiveWindowFactory@@EEAAPEAXI@Z @ 0x180091B70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveWindowFactory@@EEAA@XZ @ 0x180091BD0 (--1CImmersiveWindowFactory@@EEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 */

CImmersiveWindowFactory *__fastcall CImmersiveWindowFactory::`vector deleting destructor'(
        CImmersiveWindowFactory *this,
        char a2)
{
  CImmersiveWindowFactory::~CImmersiveWindowFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
