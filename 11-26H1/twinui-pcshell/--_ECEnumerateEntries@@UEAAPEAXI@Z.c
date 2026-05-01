/*
 * XREFs of ??_ECEnumerateEntries@@UEAAPEAXI@Z @ 0x1802029A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CEnumerateEntries *__fastcall CEnumerateEntries::`vector deleting destructor'(CEnumerateEntries *this, char a2)
{
  *(_QWORD *)this = &CEnumerateEntries::`vftable';
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
