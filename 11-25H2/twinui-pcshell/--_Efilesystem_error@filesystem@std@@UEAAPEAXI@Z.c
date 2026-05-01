/*
 * XREFs of ??_Efilesystem_error@filesystem@std@@UEAAPEAXI@Z @ 0x180314A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1filesystem_error@filesystem@std@@UEAA@XZ @ 0x180314610 (--1filesystem_error@filesystem@std@@UEAA@XZ.c)
 */

void **__fastcall std::filesystem::filesystem_error::`vector deleting destructor'(void **this, char a2)
{
  std::filesystem::filesystem_error::~filesystem_error(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
