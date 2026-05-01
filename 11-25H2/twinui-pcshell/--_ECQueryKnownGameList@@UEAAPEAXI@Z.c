/*
 * XREFs of ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x180197890
 * Callers:
 *     <none>
 * Callees:
 *     ??1CQueryKnownGameList@@UEAA@XZ @ 0x1801978CC (--1CQueryKnownGameList@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CQueryKnownGameList *__fastcall CQueryKnownGameList::`vector deleting destructor'(CQueryKnownGameList *this, char a2)
{
  CQueryKnownGameList::~CQueryKnownGameList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x328);
  return this;
}
