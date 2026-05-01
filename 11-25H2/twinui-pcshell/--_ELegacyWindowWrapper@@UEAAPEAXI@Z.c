/*
 * XREFs of ??_ELegacyWindowWrapper@@UEAAPEAXI@Z @ 0x180421250
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1LegacyWindowWrapper@@UEAA@XZ @ 0x1804210EC (--1LegacyWindowWrapper@@UEAA@XZ.c)
 */

LegacyWindowWrapper *__fastcall LegacyWindowWrapper::`vector deleting destructor'(LegacyWindowWrapper *this, char a2)
{
  LegacyWindowWrapper::~LegacyWindowWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x298);
  return this;
}
