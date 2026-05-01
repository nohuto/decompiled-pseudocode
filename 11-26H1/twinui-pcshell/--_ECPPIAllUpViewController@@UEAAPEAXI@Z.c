/*
 * XREFs of ??_ECPPIAllUpViewController@@UEAAPEAXI@Z @ 0x1804BCD50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPPIAllUpViewController@@UEAA@XZ @ 0x1804BCD24 (--1CPPIAllUpViewController@@UEAA@XZ.c)
 */

CPPIAllUpViewController *__fastcall CPPIAllUpViewController::`vector deleting destructor'(
        CPPIAllUpViewController *this,
        char a2)
{
  CPPIAllUpViewController::~CPPIAllUpViewController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
