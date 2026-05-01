/*
 * XREFs of ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x18003D520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CQueryKnownGameList@@UEAA@XZ @ 0x18003D3FC (--1CQueryKnownGameList@@UEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CQueryKnownGameList::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CQueryKnownGameList::~CQueryKnownGameList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x328);
  return this;
}
