/*
 * XREFs of ??_GCIconLoaderInternal@@UEAAPEAXI@Z @ 0x18048DF00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CIconLoaderInternal@@UEAA@XZ @ 0x18048DD78 (--1CIconLoaderInternal@@UEAA@XZ.c)
 */

CIconLoaderInternal *__fastcall CIconLoaderInternal::`scalar deleting destructor'(CIconLoaderInternal *this, char a2)
{
  CIconLoaderInternal::~CIconLoaderInternal(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
