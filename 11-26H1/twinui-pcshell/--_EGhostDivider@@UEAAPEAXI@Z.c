/*
 * XREFs of ??_EGhostDivider@@UEAAPEAXI@Z @ 0x18016D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1GhostDivider@@UEAA@XZ @ 0x18016D91C (--1GhostDivider@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

GhostDivider *__fastcall GhostDivider::`vector deleting destructor'(GhostDivider *this, char a2)
{
  GhostDivider::~GhostDivider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
