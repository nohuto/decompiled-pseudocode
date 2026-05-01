/*
 * XREFs of ??_GCVisibilityOverride@@UEAAPEAXI@Z @ 0x1802029E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisibilityOverride@@UEAA@XZ @ 0x180202A1C (--1CVisibilityOverride@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVisibilityOverride *__fastcall CVisibilityOverride::`scalar deleting destructor'(CVisibilityOverride *this, char a2)
{
  CVisibilityOverride::~CVisibilityOverride(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
