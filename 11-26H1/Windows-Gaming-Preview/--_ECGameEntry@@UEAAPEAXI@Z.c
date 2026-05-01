/*
 * XREFs of ??_ECGameEntry@@UEAAPEAXI@Z @ 0x18003D4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CGameEntry@@UEAA@XZ @ 0x18003D3A8 (--1CGameEntry@@UEAA@XZ.c)
 */

CGameEntry *__fastcall CGameEntry::`vector deleting destructor'(CGameEntry *this, const struct std::nothrow_t *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CGameEntry::~CGameEntry(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
