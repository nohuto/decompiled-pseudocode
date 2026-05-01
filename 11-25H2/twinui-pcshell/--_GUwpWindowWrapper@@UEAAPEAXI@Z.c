/*
 * XREFs of ??_GUwpWindowWrapper@@UEAAPEAXI@Z @ 0x1801D2DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UwpWindowWrapper@@UEAA@XZ @ 0x1801D2E0C (--1UwpWindowWrapper@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

UwpWindowWrapper *__fastcall UwpWindowWrapper::`scalar deleting destructor'(UwpWindowWrapper *this, char a2)
{
  UwpWindowWrapper::~UwpWindowWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2E0);
  return this;
}
