/*
 * XREFs of ??_GCIAMSpecialWindow@@UEAAPEAXI@Z @ 0x18021A3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CIAMSpecialWindowBase@@UEAA@XZ @ 0x18021A3E4 (--1CIAMSpecialWindowBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CIAMSpecialWindow *__fastcall CIAMSpecialWindow::`scalar deleting destructor'(CIAMSpecialWindow *this, char a2)
{
  *((_DWORD *)this + 13) = -1073741823;
  CIAMSpecialWindowBase::~CIAMSpecialWindowBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
