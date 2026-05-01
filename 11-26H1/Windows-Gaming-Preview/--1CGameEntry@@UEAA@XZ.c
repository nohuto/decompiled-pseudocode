/*
 * XREFs of ??1CGameEntry@@UEAA@XZ @ 0x18003D3A8
 * Callers:
 *     ??_ECGameEntry@@UEAAPEAXI@Z @ 0x18003D4E0 (--_ECGameEntry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CGameEntry::~CGameEntry(CGameEntry *this, const struct std::nothrow_t *a2)
{
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  *(_QWORD *)this = &CGameEntry::`vftable';
  v3 = (void *)*((_QWORD *)this + 9);
  if ( v3 )
    operator delete(v3, a2);
  v4 = (void *)*((_QWORD *)this + 8);
  if ( v4 )
    operator delete(v4, a2);
  v5 = (void *)*((_QWORD *)this + 7);
  if ( v5 )
    operator delete(v5, a2);
  *((_DWORD *)this + 3) = -1073741823;
}
