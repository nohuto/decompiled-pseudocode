/*
 * XREFs of ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x18018E770
 * Callers:
 *     <none>
 * Callees:
 *     ??1CQueryKnownGameList@@UEAA@XZ @ 0x18018E7AC (--1CQueryKnownGameList@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CQueryKnownGameList *__fastcall CQueryKnownGameList::`vector deleting destructor'(CQueryKnownGameList *this, char a2)
{
  CQueryKnownGameList::~CQueryKnownGameList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x328);
  return this;
}
