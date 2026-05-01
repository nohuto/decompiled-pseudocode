/*
 * XREFs of ??_ECoverWindowAcc@@UEAAPEAXI@Z @ 0x180512D60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CoverWindowAcc@@UEAA@XZ @ 0x180512D0C (--1CoverWindowAcc@@UEAA@XZ.c)
 */

CoverWindowAcc *__fastcall CoverWindowAcc::`vector deleting destructor'(CoverWindowAcc *this, char a2)
{
  CoverWindowAcc::~CoverWindowAcc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
