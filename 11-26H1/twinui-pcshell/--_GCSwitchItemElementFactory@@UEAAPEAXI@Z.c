/*
 * XREFs of ??_GCSwitchItemElementFactory@@UEAAPEAXI@Z @ 0x1804B5660
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSwitchItemElementFactory@@UEAA@XZ @ 0x1804B54F8 (--1CSwitchItemElementFactory@@UEAA@XZ.c)
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
