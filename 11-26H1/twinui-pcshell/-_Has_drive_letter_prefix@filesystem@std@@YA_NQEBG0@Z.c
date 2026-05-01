/*
 * XREFs of ?_Has_drive_letter_prefix@filesystem@std@@YA_NQEBG0@Z @ 0x1800325F4
 * Callers:
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x1800C58A8 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 * Callees:
 *     ?_Is_drive_prefix@filesystem@std@@YA_NQEBG@Z @ 0x180032624 (-_Is_drive_prefix@filesystem@std@@YA_NQEBG@Z.c)
 */

char __fastcall std::filesystem::_Has_drive_letter_prefix(
        std::filesystem *this,
        char *a2,
        const unsigned __int16 *const a3)
{
  char v3; // r8
  signed __int64 v4; // rdx

  v3 = 0;
  v4 = (a2 - (char *)this) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v4 >= 4 )
    return std::filesystem::_Is_drive_prefix(this, (const unsigned __int16 *const)v4);
  return v3;
}
