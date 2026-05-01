/*
 * XREFs of ??_GCIconLoaderInternal@@UEAAPEAXI@Z @ 0x18049EB60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CIconLoaderInternal@@UEAA@XZ @ 0x18049E9E0 (--1CIconLoaderInternal@@UEAA@XZ.c)
 */

CIconLoaderInternal *__fastcall CIconLoaderInternal::`scalar deleting destructor'(CIconLoaderInternal *this, char a2)
{
  CIconLoaderInternal::~CIconLoaderInternal(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
