/*
 * XREFs of ??_GCAce@CAcl@ATL@@UEAAPEAXI@Z @ 0x18004A490
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x180022AC8 (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall ATL::CAcl::CAce::`scalar deleting destructor'(void **this, char a2)
{
  ATL::CAcl::CAce::~CAce(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x90);
  return this;
}
