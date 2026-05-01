/*
 * XREFs of ??_Efilesystem_error@filesystem@std@@UEAAPEAXI@Z @ 0x180310C00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1filesystem_error@filesystem@std@@UEAA@XZ @ 0x18031079C (--1filesystem_error@filesystem@std@@UEAA@XZ.c)
 */

std::filesystem::filesystem_error *__fastcall std::filesystem::filesystem_error::`vector deleting destructor'(
        std::filesystem::filesystem_error *this,
        char a2)
{
  std::filesystem::filesystem_error::~filesystem_error(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
