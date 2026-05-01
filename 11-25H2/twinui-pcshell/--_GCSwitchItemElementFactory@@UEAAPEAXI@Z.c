/*
 * XREFs of ??_GCSwitchItemElementFactory@@UEAAPEAXI@Z @ 0x1804A42A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSwitchItemElementFactory@@UEAA@XZ @ 0x1804A4138 (--1CSwitchItemElementFactory@@UEAA@XZ.c)
 */

CSwitchItemElementFactory *__fastcall CSwitchItemElementFactory::`scalar deleting destructor'(
        CSwitchItemElementFactory *this,
        char a2)
{
  CSwitchItemElementFactory::~CSwitchItemElementFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x160);
  return this;
}
